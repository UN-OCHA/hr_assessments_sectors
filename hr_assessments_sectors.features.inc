<?php
/**
 * @file
 * hr_assessments_sectors.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function hr_assessments_sectors_field_default_fields_alter(&$data) {
  if (isset($data['node-assessment-field_clusters'])) {
    $data['node-assessment-field_clusters']['field_instance']['label'] = 'Sectors'; /* WAS: 'Cluster(s)' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function hr_assessments_sectors_views_default_views_alter(&$data) {
  if (isset($data['assessment_registry'])) {
    $data['assessment_registry']->display['default']->display_options['fields']['field_clusters']['label'] = 'Sectors'; /* WAS: '' */
    $data['assessment_registry']->display['default']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sectors'; /* WAS: 'Clusters' */
  }
}
