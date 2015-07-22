core = 7.x
api = 2



; Defaults

defaults[projects][subdir] = contrib
defaults[projects][type] = module



; Modules

projects[addressfield][version] = 1.1

projects[blockify][version] = 1.2

projects[breakpoints][version] = 1.3

projects[coffee][version] = 2.2

projects[context][version] = 3.6

projects[context_condition_theme][version] = 1.0

projects[context_module][download][revision] = c575ac3
; Prevent rederict loop - https://drupal.org/node/2076565#comment-7804715
projects[context_module][patch][] = https://drupal.org/files/redirect_loop-2076565-1.patch

projects[context_server_vars][download][revision] = 1d61d97

projects[context_variable][download][revision] = b6e3219

projects[ctools][version] = 1.7

projects[date][version] = 2.8

projects[devel][version] = 1.5

projects[diff][version] = 3.2

projects[dindent][version] = 1.2

projects[ds][version] = 2.10

projects[email][version] = 1.3

projects[entity][version] = 1.6

projects[entityform][version] = 2.0-rc1

projects[entityform_block][version] = 1.3

projects[environment_indicator][version] = 2.5

projects[escape_admin][version] = 1.2

projects[features][version] = 2.6
; Cleaner info format - https://drupal.org/comment/8270327#comment-8270327
projects[features][patch][] = https://drupal.org/files/issues/cleaner_info-2155793-1.patch

projects[flag][version] = 3.6

projects[google_analytics][download][revision] = b012464
; Allow empty Web Property ID variable - https://www.drupal.org/node/1964052#comment-10099170
projects[google_analytics][patch][] = https://www.drupal.org/files/issues/variable_empty_id-1964052-18.patch

projects[jquery_update][version] = 2.6

projects[libraries][version] = 2.2

projects[mailchimp][version] = 3.4
; Errors when adding a Mailchimp Subscribe field - https://www.drupal.org/node/2262321#comment-9067843
projects[mailchimp][patch][] = https://www.drupal.org/files/issues/intgroups_check-2262321-16.patch

projects[meetup][download][type] = git
projects[meetup][download][url] = http://git.drupal.org/sandbox/realityloop/1967232.git
projects[meetup][download][revision] = dab9e2c

projects[module_filter][version] = 2.0

projects[navbar][version] = 1.6
; Add Navbar suppress Context reaction - https://www.drupal.org/node/2537410#comment-10140556
projects[navbar][patch][] = https://www.drupal.org/files/issues/navbar_suppress_context_reaction-2537410-1.patch

projects[navbar_region][download][revision] = 9e260b9

projects[panels][version] = 3.5

projects[panels_bootstrap_layout_builder][download][revision] = af430d4

projects[panels_bootstrap_styles][download][revision] = e570c4c

projects[pathauto][version] = 1.2

projects[persistent_update][version] = 1.0

projects[picture][version] = 2.11

projects[prepro][version] = 1.4

projects[reroute_email][version] = 1.2

projects[sassy][version] = 2.13
; Fix squish-text mixin - http://drupal.org/node/1539310#comment-7284702
projects[sassy][patch][] = http://drupal.org/files/squish_text-1539310-5.patch

projects[semantic_panels][version] = 1.2

projects[site_verify][version] = 1.1

projects[speedy][version] = 1.12

projects[strongarm][version] = 2.0

projects[token][version] = 1.6

projects[url][version] = 1.0

projects[variable][version] = 2.5

projects[views][version] = 3.11

projects[xmlsitemap][version] = 2.2
; Variable module integration - http://drupal.org/node/1989862#comment-7389678
projects[xmlsitemap][patch][] = http://drupal.org/files/variable_integration-1989862-1.patch



; Themes

projects[bootstrap][type] = theme
projects[bootstrap][version] = 3.1-beta2



; Libraries

libraries[backbone][download][type] = get
libraries[backbone][download][url] = https://github.com/jashkenas/backbone/archive/1.1.2.zip

libraries[bootstrap][download][type] = get
libraries[bootstrap][download][url] = https://github.com/twbs/bootstrap/archive/v3.2.0.zip
libraries[bootstrap][directory_name] = bootstrap
libraries[bootstrap][destination] = themes/contrib/bootstrap
libraries[bootstrap][overwrite] = TRUE

libraries[dindent][download][type] = get
libraries[dindent][download][url] = https://raw.githubusercontent.com/Decipher/dindent/master/src/Parser.php

libraries[mailchimp][download][type] = get
libraries[mailchimp][download][url] = https://bitbucket.org/mailchimp/mailchimp-api-php/get/2.0.5.zip

libraries[modernizr][download][type] = get
libraries[modernizr][download][url] = https://github.com/Modernizr/Modernizr/archive/v2.7.1.zip

libraries[phpsass][download][type] = git
libraries[phpsass][download][url] = https://github.com/Decipher/phpsass.git
libraries[phpsass][download][revision] = eee7cdb

libraries[profiler][download][type] = git
libraries[profiler][download][url] = http://git.drupal.org/project/profiler.git
libraries[profiler][download][revision] = 6655a1b
; Added support for Devel generate - https://drupal.org/node/1420344#comment-5890366
libraries[profiler][patch][] = https://drupal.org/files/devel_generate-1420344-8.patch

libraries[underscore][download][type] = get
libraries[underscore][download][url] = https://github.com/jashkenas/underscore/archive/1.6.0.zip
