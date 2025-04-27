#!/bin/bash
echo "Upgrading System and Packages"
apt update && apt upgrade -y

echo "Installing Nginx Web Server"
apt install nginx -y

echo "Starting Nginx Web Server Service"
systemctl start nginx

echo "Place the website files in the /var/www/html directory and use the command "systemctl restart nginx"

