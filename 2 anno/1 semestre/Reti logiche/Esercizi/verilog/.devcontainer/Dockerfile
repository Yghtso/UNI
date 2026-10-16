FROM ubuntu:24.04 

# Install packages
RUN apt update && apt upgrade -qq -y
RUN apt install -y wget file iverilog gtkwave 

RUN ARCH=$(dpkg --print-architecture) && \
    wget https://github.com/PowerShell/PowerShell/releases/download/v7.6.6/powershell_7.6.6-1.deb_${ARCH}.deb && \
    dpkg -i powershell_7.6.6-1.deb_${ARCH}.deb && \
    apt install -f

# Set the default user as non-root
USER ubuntu
