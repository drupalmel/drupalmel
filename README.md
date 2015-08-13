# DrupalMelbourne
-----------------

This is the Drupal install profile / makefile source for the DrupalMelbourne
community website.



## Building
-----------

[Drush (DRUpal SHell)](https://github.com/drush-ops/drush) is required to build
a usable codebase from this repository with the following command:

`drush make https://raw.githubusercontent.com/drupalmel/drupalmel/master/stub.make drupalmel-7.x`


## Vagrant
-----------

  1. Install the latest stable version of [VirtualBox](https://www.virtualbox.org/wiki/Downloads) & [Vagrant](https://www.vagrantup.com/downloads.html)

  2. Clone this repository.

  3. Open terminal (or [git bash](https://msysgit.github.io/) for windows users) in project directory and run the following command --

  ```
  vagrant up
  ```

  4. Go to http://drupalmel.ddns.net/

  ```
  username: vagrant
  password: vagrant
  ```