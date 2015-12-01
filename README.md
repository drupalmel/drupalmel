# DrupalMelbourne

[![Build Status](https://travis-ci.org/drupalmel/drupalmel.svg?branch=master)](https://travis-ci.org/drupalmel/drupalmel)

This is the Drupal install profile / makefile source for the [DrupalMelbourne](http://melbourne.drupal.org.au/)
community website.



## Building

Choose one of the follow methods to build your site:

### Drush

[Drush (DRUpal SHell)](https://github.com/drush-ops/drush) is required to build
a usable codebase from this repository with the following command:

`drush make https://raw.githubusercontent.com/drupalmel/drupalmel/master/stub.make drupalmel-7.x`


### Vagrant

  1. Install the latest stable version of [VirtualBox](https://www.virtualbox.org/wiki/Downloads) & [Vagrant](https://www.vagrantup.com/downloads.html)

  2. Open terminal (or [git bash](https://msysgit.github.io/) for windows users) in project directory and run the following commands:

  ```
  git clone git@github.com:drupalmel/drupalmel.git drupalmel
  cd drupalmel
  vagrant up
  ```

  3. Go to http://drupalmel.ddns.net/

  ```
  username: vagrant
  password: vagrant
  ```
