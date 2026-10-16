FROM --platform=linux/amd64 ubuntu:24.04 

# Install packages
RUN apt update && apt upgrade -qq -y
RUN apt install -y wget file build-essential gcc-multilib musl-dev gdb

RUN wget https://github.com/PowerShell/PowerShell/releases/download/v7.6.6/powershell_7.6.6-1.deb_amd64.deb && \
    dpkg -i powershell_7.6.6-1.deb_amd64.deb && \
    apt install -f

# Set the default user as non-root
USER ubuntu
