<?php
/**
 * @file
 * ding_frontend.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ding_frontend_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ding_node_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ding node search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ding node search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-item';
  $handler->display->display_options['style_options']['class'] = 'list floated';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'heading';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_type'] = 'span';
  $handler->display->display_options['fields']['type']['element_class'] = 'label label-info';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['type']['hide_empty'] = TRUE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_ding_event_category']['id'] = 'field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['table'] = 'field_data_field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['field'] = 'field_ding_event_category';
  $handler->display->display_options['fields']['field_ding_event_category']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_category']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_category']['hide_empty'] = TRUE;
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_ding_news_category']['id'] = 'field_ding_news_category';
  $handler->display->display_options['fields']['field_ding_news_category']['table'] = 'field_data_field_ding_news_category';
  $handler->display->display_options['fields']['field_ding_news_category']['field'] = 'field_ding_news_category';
  $handler->display->display_options['fields']['field_ding_news_category']['label'] = '';
  $handler->display->display_options['fields']['field_ding_news_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_news_category']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ding_news_category']['hide_empty'] = TRUE;
  /* Field: Content: Library */
  $handler->display->display_options['fields']['field_ding_news_library']['id'] = 'field_ding_news_library';
  $handler->display->display_options['fields']['field_ding_news_library']['table'] = 'field_data_field_ding_news_library';
  $handler->display->display_options['fields']['field_ding_news_library']['field'] = 'field_ding_news_library';
  $handler->display->display_options['fields']['field_ding_news_library']['label'] = '';
  $handler->display->display_options['fields']['field_ding_news_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_news_library']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_news_library']['click_sort_column'] = 'gid';
  /* Field: Content: Library */
  $handler->display->display_options['fields']['field_ding_event_library']['id'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['table'] = 'field_data_field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['field'] = 'field_ding_event_library';
  $handler->display->display_options['fields']['field_ding_event_library']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_library']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_library']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_library']['click_sort_column'] = 'gid';
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_ding_event_price']['id'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['table'] = 'field_data_field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['field'] = 'field_ding_event_price';
  $handler->display->display_options['fields']['field_ding_event_price']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_price']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Campaign image */
  $handler->display->display_options['fields']['field_camp_image']['id'] = 'field_camp_image';
  $handler->display->display_options['fields']['field_camp_image']['table'] = 'field_data_field_camp_image';
  $handler->display->display_options['fields']['field_camp_image']['field'] = 'field_camp_image';
  $handler->display->display_options['fields']['field_camp_image']['label'] = '';
  $handler->display->display_options['fields']['field_camp_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_camp_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_camp_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_camp_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_ding_page_list_image']['id'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['table'] = 'field_data_field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['field'] = 'field_ding_page_list_image';
  $handler->display->display_options['fields']['field_ding_page_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_wrapper_class'] = 'image-container';
  $handler->display->display_options['fields']['field_ding_page_list_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_page_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_ding_event_list_image']['id'] = 'field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['table'] = 'field_data_field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['field'] = 'field_ding_event_list_image';
  $handler->display->display_options['fields']['field_ding_event_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_wrapper_class'] = 'image-container';
  $handler->display->display_options['fields']['field_ding_event_list_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_event_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_ding_library_list_image']['id'] = 'field_ding_library_list_image';
  $handler->display->display_options['fields']['field_ding_library_list_image']['table'] = 'field_data_field_ding_library_list_image';
  $handler->display->display_options['fields']['field_ding_library_list_image']['field'] = 'field_ding_library_list_image';
  $handler->display->display_options['fields']['field_ding_library_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_library_list_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_library_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_list_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_library_list_image']['element_wrapper_class'] = 'image-container';
  $handler->display->display_options['fields']['field_ding_library_list_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_library_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: List image */
  $handler->display->display_options['fields']['field_ding_news_list_image']['id'] = 'field_ding_news_list_image';
  $handler->display->display_options['fields']['field_ding_news_list_image']['table'] = 'field_data_field_ding_news_list_image';
  $handler->display->display_options['fields']['field_ding_news_list_image']['field'] = 'field_ding_news_list_image';
  $handler->display->display_options['fields']['field_ding_news_list_image']['label'] = '';
  $handler->display->display_options['fields']['field_ding_news_list_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_news_list_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_news_list_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_news_list_image']['element_wrapper_class'] = 'image-container';
  $handler->display->display_options['fields']['field_ding_news_list_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_news_list_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ding_news_list_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ding_library_lead']['id'] = 'field_ding_library_lead';
  $handler->display->display_options['fields']['field_ding_library_lead']['table'] = 'field_data_field_ding_library_lead';
  $handler->display->display_options['fields']['field_ding_library_lead']['field'] = 'field_ding_library_lead';
  $handler->display->display_options['fields']['field_ding_library_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_library_lead']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_library_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_lead']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_library_lead']['element_wrapper_class'] = 'content';
  $handler->display->display_options['fields']['field_ding_library_lead']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_library_lead']['hide_empty'] = TRUE;
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ding_news_lead']['id'] = 'field_ding_news_lead';
  $handler->display->display_options['fields']['field_ding_news_lead']['table'] = 'field_data_field_ding_news_lead';
  $handler->display->display_options['fields']['field_ding_news_lead']['field'] = 'field_ding_news_lead';
  $handler->display->display_options['fields']['field_ding_news_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_news_lead']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_news_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_news_lead']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_news_lead']['element_wrapper_class'] = 'content';
  $handler->display->display_options['fields']['field_ding_news_lead']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_news_lead']['hide_empty'] = TRUE;
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ding_page_lead']['id'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['table'] = 'field_data_field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['field'] = 'field_ding_page_lead';
  $handler->display->display_options['fields']['field_ding_page_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_lead']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_wrapper_class'] = 'content';
  $handler->display->display_options['fields']['field_ding_page_lead']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_page_lead']['hide_empty'] = TRUE;
  /* Field: Content: Lead */
  $handler->display->display_options['fields']['field_ding_event_lead']['id'] = 'field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['table'] = 'field_data_field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['field'] = 'field_ding_event_lead';
  $handler->display->display_options['fields']['field_ding_event_lead']['label'] = '';
  $handler->display->display_options['fields']['field_ding_event_lead']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ding_event_lead']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_lead']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_ding_event_lead']['element_wrapper_class'] = 'content';
  $handler->display->display_options['fields']['field_ding_event_lead']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ding_event_lead']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ding_event_lead']['hide_alter_empty'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Search: Score */
  $handler->display->display_options['sorts']['score']['id'] = 'score';
  $handler->display->display_options['sorts']['score']['table'] = 'search_index';
  $handler->display->display_options['sorts']['score']['field'] = 'score';
  /* Contextual filter: Search: Search Terms */
  $handler->display->display_options['arguments']['keys']['id'] = 'keys';
  $handler->display->display_options['arguments']['keys']['table'] = 'search_index';
  $handler->display->display_options['arguments']['keys']['field'] = 'keys';
  $handler->display->display_options['arguments']['keys']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['keys']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['keys']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['keys']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['keys']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['link_to_view'] = '1';
  $translatables['ding_node_search'] = array(
    t('Master'),
    t('Ding node search'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Content pane'),
    t('View panes'),
  );
  $export['ding_node_search'] = $view;

  return $export;
}
