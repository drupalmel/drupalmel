# load beetbox Vagrantfile.
require 'open-uri'

r_vagrantfile = "https://raw.githubusercontent.com/beetboxvm/beetbox/master/Vagrantfile"
l_vagrantfile = "#{File.dirname(File.expand_path(__FILE__))}/Vagrantfile.bb"

if File.exist?(l_vagrantfile)

  # load local Vagrantfile
  load l_vagrantfile

else

  # create local Vagrantfile
  open(l_vagrantfile, 'wb') << open(r_vagrantfile).read

  # load remote Vagrantfile
  eval(open(r_vagrantfile) {|f| f.read })

end
