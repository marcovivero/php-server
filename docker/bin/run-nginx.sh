#!/usr/bin/env sh

### Helper function for running nginx with security layered.

apk add openssl

if [[ ! -d /etc/nginx/certs/ ]]; then
    mkdir /etc/nginx/certs/
    cd /etc/nginx/certs/
    openssl req -x509 -nodes -days 1024 -newkey rsa:2048 -keyout localhost.key -out localhost.crt \
        -subj "/C=US/ST=California/L=Burlingame/O=Web Server/OU=Web Server/CN=localhost"
fi

cat /etc/nginx/conf.d/nginx_custom.conf > /etc/nginx/conf.d/default.conf && \
    nginx -g 'daemon off;'
