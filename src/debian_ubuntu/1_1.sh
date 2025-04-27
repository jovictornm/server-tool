#!/bin/bash
echo Initializing Web Server instalattion on Debian/Ubuntu distro!
# Detecta a distribuição Linux
#DISTRO=$(lsb_release -i | awk '{print $3}')

read -p "root password: " root_password
echo root_password

