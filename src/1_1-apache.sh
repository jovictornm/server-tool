#!/bin/bash
echo "Upgrading System and Packages"
apt update && apt upgrade -y

echo "Installing Apache Web Server"
apt install apache2 -y

echo "Starting Apache Web Server Service"
systemctl restart apache2

echo "Place the website files in the /var/www/html directory and use the command "systemctl restart apache2"