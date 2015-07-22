<?php
/**
 * @file
 * drupalmel_core.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function drupalmel_core_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage__panel_context_5ce26e54-81b5-4a15-a0fc-8c66bb622d8d';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'container',
        'contains' => 'row',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
        'wrapper' => 'div',
        'element_id_default' => 0,
        'element_id' => '',
        'class' => '',
        'class_default_add' => 0,
        'container_class_add' => 0,
        'container_full_class_add' => 0,
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'container_class' => '',
      ),
      'main' => array(
        'type' => 'row',
        'children' => array(
          0 => 'main-column',
        ),
        'parent' => 'canvas',
      ),
      'main-column' => array(
        'type' => 'column',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-12',
          'md' => 'col-md-12',
          'lg' => 'col-lg-12',
        ),
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Header',
        'parent' => 'main-column',
        'wrapper' => 'div',
        'element_id_default' => 0,
        'element_id' => '',
        'class' => '',
        'class_default_add' => 0,
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'canvas',
        'wrapper' => 'div',
        'element_id_default' => 0,
        'element_id' => '',
        'class' => '',
        'class_default_add' => 0,
      ),
      2 => array(
        'type' => 'column',
        'parent' => '1',
        'children' => array(
          0 => 'content',
        ),
        'wrapper' => 'div',
        'element_id_default' => 0,
        'element_id' => '',
        'class' => '',
        'class_default_add' => 0,
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-12',
          'md' => 'col-md-6',
          'lg' => 'col-lg-6',
        ),
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'Events',
        'parent' => '2',
        'wrapper' => 'div',
        'element_id_default' => 0,
        'element_id' => '',
        'class' => '',
        'class_default_add' => 0,
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
      3 => array(
        'type' => 'column',
        'parent' => '1',
        'children' => array(
          0 => 'blog',
        ),
        'wrapper' => 'div',
        'element_id_default' => 0,
        'element_id' => '',
        'class' => '',
        'class_default_add' => 0,
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-12',
          'md' => 'col-md-6',
          'lg' => 'col-lg-6',
        ),
      ),
      'blog' => array(
        'type' => 'region',
        'title' => 'Blog',
        'parent' => '3',
        'wrapper' => 'div',
        'element_id_default' => 0,
        'element_id' => '',
        'class' => '',
        'class_default_add' => 0,
        'container_class_add' => 0,
        'container_full_class_add' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'blog' => NULL,
    ),
    'style' => 'naked',
    'content' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '15',
      'granularity' => 'none',
    ),
  );
  $display->title = '';
  $display->uuid = '952f533f-f3bc-445f-9b22-75219e99cd1f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0a2ed1bb-18ed-4512-a3ff-bd3f05958629';
    $pane->panel = 'blog';
    $pane->type = 'block';
    $pane->subtype = 'views-blog-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0a2ed1bb-18ed-4512-a3ff-bd3f05958629';
    $display->content['new-0a2ed1bb-18ed-4512-a3ff-bd3f05958629'] = $pane;
    $display->panels['blog'][0] = 'new-0a2ed1bb-18ed-4512-a3ff-bd3f05958629';
    $pane = new stdClass();
    $pane->pid = 'new-e936ce19-0cc5-42ce-9f7a-c13b73e7c0c9';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'blockify-blockify-logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '604800',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e936ce19-0cc5-42ce-9f7a-c13b73e7c0c9';
    $display->content['new-e936ce19-0cc5-42ce-9f7a-c13b73e7c0c9'] = $pane;
    $display->panels['center'][0] = 'new-e936ce19-0cc5-42ce-9f7a-c13b73e7c0c9';
    $pane = new stdClass();
    $pane->pid = 'new-5f95bf3c-9e27-470c-8ae8-11d18192f249';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'blockify-blockify-site-name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'element_title' => array(
          'type' => '0',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_content' => array(
          'type' => 'h1',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'link_enabled' => 0,
          'link' => array(
            'path' => '',
            'class_enable' => 0,
            'class' => '',
            'attributes' => array(),
            'attributes_array' => array(),
          ),
          'attributes_array' => array(),
        ),
        'element_wrapper' => array(
          'type' => '',
          'class_enable' => 0,
          'class' => '',
          'attributes' => array(),
          'attributes_array' => array(),
        ),
        'add_default_classes' => 1,
      ),
      'style' => 'semantic_panels',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5f95bf3c-9e27-470c-8ae8-11d18192f249';
    $display->content['new-5f95bf3c-9e27-470c-8ae8-11d18192f249'] = $pane;
    $display->panels['center'][1] = 'new-5f95bf3c-9e27-470c-8ae8-11d18192f249';
    $pane = new stdClass();
    $pane->pid = 'new-4a7fc074-4022-43b8-b556-92cb1dce7af6';
    $pane->panel = 'content';
    $pane->type = 'block';
    $pane->subtype = 'views-events-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '3600',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => array(
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4a7fc074-4022-43b8-b556-92cb1dce7af6';
    $display->content['new-4a7fc074-4022-43b8-b556-92cb1dce7af6'] = $pane;
    $display->panels['content'][0] = 'new-4a7fc074-4022-43b8-b556-92cb1dce7af6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
