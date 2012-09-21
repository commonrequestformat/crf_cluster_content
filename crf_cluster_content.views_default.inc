<?php
/**
 * @file
 * crf_cluster_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crf_cluster_content_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'cluster_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cluster content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cluster content';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '150';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_cluster',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Cluster */
  $handler->display->display_options['fields']['field_cluster']['id'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['fields']['field_cluster']['field'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['label'] = '';
  $handler->display->display_options['fields']['field_cluster']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cluster']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cluster']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cluster']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cluster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cluster']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cluster']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cluster']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Request */
  $handler->display->display_options['fields']['field_crf_request']['id'] = 'field_crf_request';
  $handler->display->display_options['fields']['field_crf_request']['table'] = 'field_data_field_crf_request';
  $handler->display->display_options['fields']['field_crf_request']['field'] = 'field_crf_request';
  $handler->display->display_options['fields']['field_crf_request']['label'] = '';
  $handler->display->display_options['fields']['field_crf_request']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_crf_request']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_crf_request']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_crf_request']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_crf_request']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_crf_request']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_crf_request']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_crf_request']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_crf_request']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_crf_request']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_crf_request']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_crf_request']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_crf_request']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_crf_request']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_crf_request']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_crf_request']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_crf_request']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_crf_request']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_crf_request']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_crf_request']['field_api_classes'] = 0;
  /* Field: Content: Coverage and Gaps in Response */
  $handler->display->display_options['fields']['field_sa_cg_response']['id'] = 'field_sa_cg_response';
  $handler->display->display_options['fields']['field_sa_cg_response']['table'] = 'field_data_field_sa_cg_response';
  $handler->display->display_options['fields']['field_sa_cg_response']['field'] = 'field_sa_cg_response';
  $handler->display->display_options['fields']['field_sa_cg_response']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_response']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_response']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_response']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_response']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_response']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_response']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_response']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sa_cg_response']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sa_cg_response']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_response']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_response']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_response']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_response']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sa_cg_response']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sa_cg_response']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_cg_response']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_response']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_cg_response']['field_api_classes'] = 0;
  /* Field: Content: Coverage and Gaps: Information Gaps */
  $handler->display->display_options['fields']['field_sa_cg_gaps']['id'] = 'field_sa_cg_gaps';
  $handler->display->display_options['fields']['field_sa_cg_gaps']['table'] = 'field_data_field_sa_cg_gaps';
  $handler->display->display_options['fields']['field_sa_cg_gaps']['field'] = 'field_sa_cg_gaps';
  $handler->display->display_options['fields']['field_sa_cg_gaps']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_cg_gaps']['field_api_classes'] = 0;
  /* Field: Content: Drivers and Causes of Needs */
  $handler->display->display_options['fields']['field_sa_dc_needs']['id'] = 'field_sa_dc_needs';
  $handler->display->display_options['fields']['field_sa_dc_needs']['table'] = 'field_data_field_sa_dc_needs';
  $handler->display->display_options['fields']['field_sa_dc_needs']['field'] = 'field_sa_dc_needs';
  $handler->display->display_options['fields']['field_sa_dc_needs']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_needs']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_needs']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_needs']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_needs']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_needs']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_needs']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_needs']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sa_dc_needs']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sa_dc_needs']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_needs']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_needs']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_needs']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_needs']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sa_dc_needs']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sa_dc_needs']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_dc_needs']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_needs']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_dc_needs']['field_api_classes'] = 0;
  /* Field: Content: Drivers and Causes: Information Gaps */
  $handler->display->display_options['fields']['field_sa_dc_gaps']['id'] = 'field_sa_dc_gaps';
  $handler->display->display_options['fields']['field_sa_dc_gaps']['table'] = 'field_data_field_sa_dc_gaps';
  $handler->display->display_options['fields']['field_sa_dc_gaps']['field'] = 'field_sa_dc_gaps';
  $handler->display->display_options['fields']['field_sa_dc_gaps']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_dc_gaps']['field_api_classes'] = 0;
  /* Field: Content: Gaps */
  $handler->display->display_options['fields']['field_crf_gaps']['id'] = 'field_crf_gaps';
  $handler->display->display_options['fields']['field_crf_gaps']['table'] = 'field_data_field_crf_gaps';
  $handler->display->display_options['fields']['field_crf_gaps']['field'] = 'field_crf_gaps';
  $handler->display->display_options['fields']['field_crf_gaps']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_crf_gaps']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_crf_gaps']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_crf_gaps']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_crf_gaps']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_crf_gaps']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_crf_gaps']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_crf_gaps']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_crf_gaps']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_crf_gaps']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_crf_gaps']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_crf_gaps']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_crf_gaps']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_crf_gaps']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_crf_gaps']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_crf_gaps']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_crf_gaps']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_crf_gaps']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_crf_gaps']['field_api_classes'] = 0;
  /* Field: Content: Humanitarian Needs */
  $handler->display->display_options['fields']['field_crf_hum_needs']['id'] = 'field_crf_hum_needs';
  $handler->display->display_options['fields']['field_crf_hum_needs']['table'] = 'field_data_field_crf_hum_needs';
  $handler->display->display_options['fields']['field_crf_hum_needs']['field'] = 'field_crf_hum_needs';
  $handler->display->display_options['fields']['field_crf_hum_needs']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_needs']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_needs']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_needs']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_needs']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_needs']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_needs']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_needs']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_crf_hum_needs']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_crf_hum_needs']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_needs']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_needs']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_needs']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_needs']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_crf_hum_needs']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_crf_hum_needs']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_crf_hum_needs']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_needs']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_crf_hum_needs']['field_api_classes'] = 0;
  /* Field: Content: Humanitarian Response */
  $handler->display->display_options['fields']['field_crf_hum_response']['id'] = 'field_crf_hum_response';
  $handler->display->display_options['fields']['field_crf_hum_response']['table'] = 'field_data_field_crf_hum_response';
  $handler->display->display_options['fields']['field_crf_hum_response']['field'] = 'field_crf_hum_response';
  $handler->display->display_options['fields']['field_crf_hum_response']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_response']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_response']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_response']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_response']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_response']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_response']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_response']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_crf_hum_response']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_crf_hum_response']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_response']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_response']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_response']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_response']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_crf_hum_response']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_crf_hum_response']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_crf_hum_response']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_crf_hum_response']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_crf_hum_response']['field_api_classes'] = 0;
  /* Field: Content: Most Likely Scenario */
  $handler->display->display_options['fields']['field_sa_scenario']['id'] = 'field_sa_scenario';
  $handler->display->display_options['fields']['field_sa_scenario']['table'] = 'field_data_field_sa_scenario';
  $handler->display->display_options['fields']['field_sa_scenario']['field'] = 'field_sa_scenario';
  $handler->display->display_options['fields']['field_sa_scenario']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sa_scenario']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sa_scenario']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sa_scenario']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sa_scenario']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sa_scenario']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sa_scenario']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sa_scenario']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sa_scenario']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sa_scenario']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_sa_scenario']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sa_scenario']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sa_scenario']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sa_scenario']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sa_scenario']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sa_scenario']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_scenario']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sa_scenario']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_scenario']['field_api_classes'] = 0;
  /* Field: Content: Priority Needs */
  $handler->display->display_options['fields']['field_sa_pri_needs']['id'] = 'field_sa_pri_needs';
  $handler->display->display_options['fields']['field_sa_pri_needs']['table'] = 'field_data_field_sa_pri_needs';
  $handler->display->display_options['fields']['field_sa_pri_needs']['field'] = 'field_sa_pri_needs';
  $handler->display->display_options['fields']['field_sa_pri_needs']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sa_pri_needs']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sa_pri_needs']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sa_pri_needs']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sa_pri_needs']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sa_pri_needs']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sa_pri_needs']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sa_pri_needs']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sa_pri_needs']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sa_pri_needs']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_sa_pri_needs']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sa_pri_needs']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sa_pri_needs']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sa_pri_needs']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sa_pri_needs']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sa_pri_needs']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_pri_needs']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sa_pri_needs']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_pri_needs']['field_api_classes'] = 0;
  /* Field: Content: Scope and Impact of the Crisis */
  $handler->display->display_options['fields']['field_sa_si_crisis']['id'] = 'field_sa_si_crisis';
  $handler->display->display_options['fields']['field_sa_si_crisis']['table'] = 'field_data_field_sa_si_crisis';
  $handler->display->display_options['fields']['field_sa_si_crisis']['field'] = 'field_sa_si_crisis';
  $handler->display->display_options['fields']['field_sa_si_crisis']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sa_si_crisis']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sa_si_crisis']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sa_si_crisis']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sa_si_crisis']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sa_si_crisis']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sa_si_crisis']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sa_si_crisis']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sa_si_crisis']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sa_si_crisis']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_sa_si_crisis']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sa_si_crisis']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sa_si_crisis']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sa_si_crisis']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sa_si_crisis']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sa_si_crisis']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_si_crisis']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sa_si_crisis']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_si_crisis']['field_api_classes'] = 0;
  /* Field: Content: Scope and Impact: Information Gaps */
  $handler->display->display_options['fields']['field_sa_si_gaps']['id'] = 'field_sa_si_gaps';
  $handler->display->display_options['fields']['field_sa_si_gaps']['table'] = 'field_data_field_sa_si_gaps';
  $handler->display->display_options['fields']['field_sa_si_gaps']['field'] = 'field_sa_si_gaps';
  $handler->display->display_options['fields']['field_sa_si_gaps']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sa_si_gaps']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sa_si_gaps']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sa_si_gaps']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sa_si_gaps']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sa_si_gaps']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sa_si_gaps']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sa_si_gaps']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sa_si_gaps']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sa_si_gaps']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_sa_si_gaps']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sa_si_gaps']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sa_si_gaps']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sa_si_gaps']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_sa_si_gaps']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sa_si_gaps']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_si_gaps']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sa_si_gaps']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sa_si_gaps']['field_api_classes'] = 0;
  /* Field: Workflow: Current state */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['fields']['sid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['sid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['sid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['sid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['sid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['sid']['hide_empty'] = 1;
  $handler->display->display_options['fields']['sid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['sid']['hide_alter_empty'] = 1;
  /* Sort criterion: Content: Cluster (field_cluster) */
  $handler->display->display_options['sorts']['field_cluster_tid']['id'] = 'field_cluster_tid';
  $handler->display->display_options['sorts']['field_cluster_tid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['sorts']['field_cluster_tid']['field'] = 'field_cluster_tid';
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['type']['title_enable'] = 1;
  $handler->display->display_options['arguments']['type']['title'] = '%1';
  $handler->display->display_options['arguments']['type']['breadcrumb_enable'] = 1;
  $handler->display->display_options['arguments']['type']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Request (field_crf_request) */
  $handler->display->display_options['filters']['field_crf_request_target_id']['id'] = 'field_crf_request_target_id';
  $handler->display->display_options['filters']['field_crf_request_target_id']['table'] = 'field_data_field_crf_request';
  $handler->display->display_options['filters']['field_crf_request_target_id']['field'] = 'field_crf_request_target_id';
  $handler->display->display_options['filters']['field_crf_request_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['operator_id'] = 'field_crf_request_target_id_op';
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['label'] = 'Request';
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['operator'] = 'field_crf_request_target_id_op';
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['identifier'] = 'field_crf_request_target_id';
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Cluster (field_cluster) */
  $handler->display->display_options['filters']['field_cluster_tid']['id'] = 'field_cluster_tid';
  $handler->display->display_options['filters']['field_cluster_tid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['filters']['field_cluster_tid']['field'] = 'field_cluster_tid';
  $handler->display->display_options['filters']['field_cluster_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['operator_id'] = 'field_cluster_tid_op';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['operator'] = 'field_cluster_tid_op';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['identifier'] = 'field_cluster_tid';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_cluster_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_cluster_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cluster_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_cluster_tid']['error_message'] = 1;
  /* Filter criterion: Workflow: Current state */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crf/cluster-content/%/%';
  $translatables['cluster_content'] = array(
    t('Master'),
    t('Cluster content'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Coverage and Gaps in Response'),
    t('Coverage and Gaps: Information Gaps'),
    t('Drivers and Causes of Needs'),
    t('Drivers and Causes: Information Gaps'),
    t('Gaps'),
    t('Humanitarian Needs'),
    t('Humanitarian Response'),
    t('Most Likely Scenario'),
    t('Priority Needs'),
    t('Scope and Impact of the Crisis'),
    t('Scope and Impact: Information Gaps'),
    t('Status'),
    t('All'),
    t('%1'),
    t('Request'),
    t('Cluster'),
    t('Page'),
  );
  $export['cluster_content'] = $view;

  return $export;
}
