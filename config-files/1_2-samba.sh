#!/bin/bash
echo "Upgrading System and Packages"
apt update && apt upgrade -y

echo "Installing Samba File Server"
apt install samba -y

echo "Starting Samba File Server Service"
systemctl start smbd

