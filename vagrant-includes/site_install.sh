#!/bin/bash

dbName="$1"
siteName="$2"
drupalUser="$3"
drupalPass="$4"

if [ ! -f /home/vagrant/siteinstalled ] ; then

  # Install dependencies
  sudo apt-get install unzip

  # Tidy up
  drush --root=/drupal sql-drop -y -q >/dev/null
  sudo chmod -R +w /drupal/ >/dev/null
  sudo rm -rf /drupal/* /drupal/.??* >/dev/null

  echo "Building site."

  # Build site
  cd /drupal && drush make /vagrant/stub.make .

  # Recreate .gitkeep
  sudo touch /drupal/.gitkeep

  echo "Build complete."

  echo "Starting Drupal installation. This takes a few mins."

  # Install Drupal
  drush --root=/drupal site-install drupalmel -y -q \
  --db-url="mysql://root:root@localhost:3306/$dbName" \
  --account-name="$drupalUser" \
  --account-pass="$drupalPass" \
  --site-name="$siteName" \
  install_configure_form.update_status_module='array(FALSE,FALSE)' >/dev/null

  echo "Install complete."

  # Create dbimported file.
  touch /home/vagrant/siteinstalled

fi