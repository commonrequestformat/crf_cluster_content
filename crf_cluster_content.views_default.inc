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

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'status' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_crf_request_target_id' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '',
        'bef_slider_max' => '',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_cluster_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '150';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_cluster',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Cluster */
  $handler->display->display_options['fields']['field_cluster']['id'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['fields']['field_cluster']['field'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['label'] = '';
  $handler->display->display_options['fields']['field_cluster']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cluster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cluster']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Request */
  $handler->display->display_options['fields']['field_crf_request']['id'] = 'field_crf_request';
  $handler->display->display_options['fields']['field_crf_request']['table'] = 'field_data_field_crf_request';
  $handler->display->display_options['fields']['field_crf_request']['field'] = 'field_crf_request';
  $handler->display->display_options['fields']['field_crf_request']['label'] = '';
  $handler->display->display_options['fields']['field_crf_request']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_crf_request']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_crf_request']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Gaps */
  $handler->display->display_options['fields']['field_crf_gaps']['id'] = 'field_crf_gaps';
  $handler->display->display_options['fields']['field_crf_gaps']['table'] = 'field_data_field_crf_gaps';
  $handler->display->display_options['fields']['field_crf_gaps']['field'] = 'field_crf_gaps';
  $handler->display->display_options['fields']['field_crf_gaps']['hide_empty'] = TRUE;
  /* Field: Content: Humanitarian Needs */
  $handler->display->display_options['fields']['field_crf_hum_needs']['id'] = 'field_crf_hum_needs';
  $handler->display->display_options['fields']['field_crf_hum_needs']['table'] = 'field_data_field_crf_hum_needs';
  $handler->display->display_options['fields']['field_crf_hum_needs']['field'] = 'field_crf_hum_needs';
  $handler->display->display_options['fields']['field_crf_hum_needs']['hide_empty'] = TRUE;
  /* Field: Content: Humanitarian Response */
  $handler->display->display_options['fields']['field_crf_hum_response']['id'] = 'field_crf_hum_response';
  $handler->display->display_options['fields']['field_crf_hum_response']['table'] = 'field_data_field_crf_hum_response';
  $handler->display->display_options['fields']['field_crf_hum_response']['field'] = 'field_crf_hum_response';
  $handler->display->display_options['fields']['field_crf_hum_response']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Cluster (field_cluster) */
  $handler->display->display_options['sorts']['field_cluster_tid']['id'] = 'field_cluster_tid';
  $handler->display->display_options['sorts']['field_cluster_tid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['sorts']['field_cluster_tid']['field'] = 'field_cluster_tid';
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['type']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['type']['title'] = '%1';
  $handler->display->display_options['arguments']['type']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['type']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Content: Request (field_crf_request) */
  $handler->display->display_options['filters']['field_crf_request_target_id']['id'] = 'field_crf_request_target_id';
  $handler->display->display_options['filters']['field_crf_request_target_id']['table'] = 'field_data_field_crf_request';
  $handler->display->display_options['filters']['field_crf_request_target_id']['field'] = 'field_crf_request_target_id';
  $handler->display->display_options['filters']['field_crf_request_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['operator_id'] = 'field_crf_request_target_id_op';
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['label'] = 'Request';
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['operator'] = 'field_crf_request_target_id_op';
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['identifier'] = 'field_crf_request_target_id';
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['remember'] = TRUE;
  /* Filter criterion: Content: Cluster (field_cluster) */
  $handler->display->display_options['filters']['field_cluster_tid']['id'] = 'field_cluster_tid';
  $handler->display->display_options['filters']['field_cluster_tid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['filters']['field_cluster_tid']['field'] = 'field_cluster_tid';
  $handler->display->display_options['filters']['field_cluster_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['operator_id'] = 'field_cluster_tid_op';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['operator'] = 'field_cluster_tid_op';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['identifier'] = 'field_cluster_tid';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_cluster_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cluster_tid']['vocabulary'] = 'clusters';
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Gaps'),
    t('Humanitarian Needs'),
    t('Humanitarian Response'),
    t('All'),
    t('%1'),
    t('Published'),
    t('Request'),
    t('Cluster'),
    t('State'),
    t('Page'),
  );
  $export['cluster_content'] = $view;

  return $export;
}
