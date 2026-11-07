# Apache 2.4.58 + PHP 8.2.12 as an Apache module (mod_php), like XAMPP 8.2.12.
# Official Apache image, PHP compiled from the official php.net source tarball.
FROM httpd:2.4.58

ARG PHP_VERSION=8.2.12
ARG PHP_SHA256=e1526e400bce9f9f9f774603cfac6b72b5e8f89fa66971ebc3cc4e5964083132
# Apache runs as your user, so PHP can write files in htdocs.
ARG UID=1000
ARG GID=1000

RUN set -eux; \
    apt-get update; \
    apt-get install -y --no-install-recommends \
        ca-certificates curl xz-utils gcc g++ make pkg-config libc6-dev \
        libapr1-dev libaprutil1-dev \
        libxml2-dev libsqlite3-dev libssl-dev libcurl4-openssl-dev \
        libonig-dev libbz2-dev zlib1g-dev; \
    rm -rf /var/lib/apt/lists/*

RUN set -eux; \
    cd /usr/src; \
    curl -fsSL "https://www.php.net/distributions/php-${PHP_VERSION}.tar.xz" -o php.tar.xz; \
    echo "${PHP_SHA256}  php.tar.xz" | sha256sum -c -; \
    tar -xf php.tar.xz; \
    cd "php-${PHP_VERSION}"; \
    # mod_php needs the non-threaded prefork MPM
    sed -i -e 's|^LoadModule mpm_event_module|#LoadModule mpm_event_module|' \
           -e 's|^#LoadModule mpm_prefork_module|LoadModule mpm_prefork_module|' \
           /usr/local/apache2/conf/httpd.conf; \
    ./configure \
        --with-apxs2=/usr/local/apache2/bin/apxs \
        --with-config-file-path=/usr/local/etc/php \
        --with-config-file-scan-dir=/usr/local/etc/php/conf.d \
        --disable-cgi \
        --enable-mbstring --enable-exif --enable-ftp --enable-bcmath --enable-calendar \
        --with-curl --with-openssl --with-zlib --with-bz2 --with-gettext \
        --with-mysqli=mysqlnd --with-pdo-mysql=mysqlnd --with-pdo-sqlite; \
    make -j"$(nproc)"; \
    make install; \
    cd /; rm -rf /usr/src/php*; \
    mkdir -p /usr/local/etc/php/conf.d

RUN set -eux; \
    groupadd -g "${GID}" pweb; \
    useradd -u "${UID}" -g "${GID}" -M -s /usr/sbin/nologin pweb; \
    conf=/usr/local/apache2/conf/httpd.conf; \
    sed -i -e 's|^#LoadModule rewrite_module|LoadModule rewrite_module|' \
           -e 's|^#LoadModule include_module|LoadModule include_module|' \
           -e 's|^User .*|User pweb|' -e 's|^Group .*|Group pweb|' \
           -e 's|^#ServerName .*|ServerName localhost|' "$conf"; \
    echo 'Include conf/extra/pweb.conf' >> "$conf"; \
    grep -q '^LoadModule php_module' "$conf"

COPY php.ini /usr/local/etc/php/php.ini
COPY pweb.conf /usr/local/apache2/conf/extra/pweb.conf
