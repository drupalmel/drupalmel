# -*- mode: ruby -*-
# vi: set ft=ruby :

require 'yaml'

Vagrant.require_version '>= 1.7.4'

dir = File.dirname(File.expand_path(__FILE__))
vagrant_config = "#{dir}/vagrant.config.yml"

if !File.exist?(vagrant_config)
  raise 'Vagrant configuration file vagrant.config.yml not found!'
end

vconfig = YAML::load_file(vagrant_config)

Vagrant.configure("2") do |config|

  hostname = vconfig['drupal_domain']
  config.vm.box = "DrupalMel/box"
  config.vm.hostname = hostname
  config.vm.network :private_network, ip: vconfig['vagrant_ip']
  config.ssh.insert_key = false
  config.ssh.forward_agent = true

  # Synced folders.
  config.vm.synced_folder ".", "/drupal",
    type: "nfs",
    id: "drupal"

  # Upload vagrant.config.yml
  config.vm.provision "vagrant_config", type: "file" do |s|
   s.source = vagrant_config
   s.destination = "/ansible/vagrant.config.yml"
  end

  # Provision box
  config.vm.provision "ansible", type: "shell" do |s|
    s.privileged = true
    s.inline = "ANSIBLE_FORCE_COLOR=1 PYTHONUNBUFFERED=1 ansible-playbook /ansible/playbook.yml --sudo -c local -i 'localhost,'"
  end

  # VirtualBox.
  config.vm.provider :virtualbox do |v|
    v.name = hostname
    v.memory = vconfig['vagrant_memory']
    v.cpus = vconfig['vagrant_cpus']
    v.customize ["modifyvm", :id, "--natdnshostresolver1", "on"]
    v.customize ["modifyvm", :id, "--ioapic", "on"]
  end

end