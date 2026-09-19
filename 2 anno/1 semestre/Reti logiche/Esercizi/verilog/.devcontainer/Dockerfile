FROM ubuntu:24.04 

# Install packages
RUN apt update && apt upgrade -qq -y
RUN apt install -y wget file iverilog gtkwave 

RUN wget https://github.com/PowerShell/PowerShell/releases/download/v7.5.3/powershell_7.5.3-1.deb_amd64.deb && \
    dpkg -i powershell_7.5.3-1.deb_amd64.deb && \
    apt install -f

# Set the default user as non-root
USER ubuntu
