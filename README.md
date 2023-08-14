# Swim Activity Tool
Originated by Stéphane Dubois in this [Repo](https://bitbucket.org/swimmingwatchtools/phpeditor/src/master/)

## Purpose
Correction of Swim Event Created by Garmin Watches

## Procedures

### Instructions is for Ubuntu 20.04

```
sudo apt update
sudo apt upgrade
```
sudo timedatectl set-timezone Canada/Eastern

```
sudo apt install php-fpm
sudo apt install php php-sqlite3 php-zip php-dev sqlite3 nginx 
```

```
git clone https://swimmingwatchtools@bitbucket.org/swimmingwatchtools/phpeditor.git swt
cd swt
mkdir www/data
cat sql/swtdb.sql | sqlite3 www/data/swt.sqlite3
sudo chown -R -v  www-data:www-data www/data 
```
```
sudo cp www /var/www/swt
sudo cp  swimmingwatchtools.com /etc/nginx/sites-available
sudo ln -s /etc/nginx/sites-available/swimmingwatchtools.com /etc/nginx/sites-enabled/
```
``` 
cd ext
phpize
./configure
make
```
sudo cp modules/swt.so /usr/lib/php/20190902/
```
sudo vim /etc/php/7.4/fpm/php.ini
```
add line: 
```
extension=swt.so
```
```
sudo service nginx restart
sudo service php7.4-fpm restart
```
Installer Postfix (serveur mail)

https://www.digitalocean.com/community/tutorials/how-to-install-and-configure-postfix-on-ubuntu-20-04
