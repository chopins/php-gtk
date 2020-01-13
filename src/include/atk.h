extern
guint atk_get_major_version (void) ;
extern
guint atk_get_minor_version (void) ;
extern
guint atk_get_micro_version (void) ;
extern
guint atk_get_binary_age (void) ;
extern
guint atk_get_interface_age (void) ;
extern
AtkStateType atk_state_type_register (const gchar *name);
extern
const gchar* atk_state_type_get_name (AtkStateType type);
extern
AtkStateType atk_state_type_for_name (const gchar *name);
extern
GType atk_object_get_type (void);
extern
GType atk_implementor_get_type (void);
extern
AtkObject* atk_implementor_ref_accessible (AtkImplementor *implementor);
extern
const gchar* atk_object_get_name (AtkObject *accessible);
extern
const gchar* atk_object_get_description (AtkObject *accessible);
extern
AtkObject* atk_object_get_parent (AtkObject *accessible);
extern
AtkObject* atk_object_peek_parent (AtkObject *accessible);
extern
gint atk_object_get_n_accessible_children (AtkObject *accessible);
extern
AtkObject* atk_object_ref_accessible_child (AtkObject *accessible,gint i);
extern
AtkRelationSet* atk_object_ref_relation_set (AtkObject *accessible);
extern
AtkRole atk_object_get_role (AtkObject *accessible);
extern
AtkLayer atk_object_get_layer (AtkObject *accessible);
extern
gint atk_object_get_mdi_zorder (AtkObject *accessible);
extern
AtkAttributeSet* atk_object_get_attributes (AtkObject *accessible);
extern
AtkStateSet* atk_object_ref_state_set (AtkObject *accessible);
extern
gint atk_object_get_index_in_parent (AtkObject *accessible);
extern
void atk_object_set_name (AtkObject *accessible,const gchar *name);
extern
void atk_object_set_description (AtkObject *accessible,const gchar *description);
extern
void atk_object_set_parent (AtkObject *accessible,AtkObject *parent);
extern
void atk_object_set_role (AtkObject *accessible,AtkRole role);
extern
guint atk_object_connect_property_change_handler (AtkObject *accessible,AtkPropertyChangeHandler *handler);
extern
void atk_object_remove_property_change_handler (AtkObject *accessible,guint handler_id);
extern
void atk_object_notify_state_change (AtkObject *accessible,AtkState state,gboolean value);
extern
void atk_object_initialize (AtkObject *accessible,gpointer data);
extern
const gchar* atk_role_get_name (AtkRole role);
extern
AtkRole atk_role_for_name (const gchar *name);
extern
gboolean atk_object_add_relationship (AtkObject *object,AtkRelationType relationship,AtkObject *target);
extern
gboolean atk_object_remove_relationship (AtkObject *object,AtkRelationType relationship,AtkObject *target);
extern
const gchar* atk_role_get_localized_name (AtkRole role);
extern
AtkRole atk_role_register (const gchar *name);
extern
const gchar* atk_object_get_object_locale (AtkObject *accessible);
extern
const gchar* atk_object_get_accessible_id (AtkObject *accessible);
extern
void atk_object_set_accessible_id (AtkObject *accessible,const gchar *name);extern
GType atk_action_get_type (void);
extern
gboolean atk_action_do_action (AtkAction *action,gint i);
extern
gint atk_action_get_n_actions (AtkAction *action);
extern
const gchar* atk_action_get_description (AtkAction *action,gint i);
extern
const gchar* atk_action_get_name (AtkAction *action,gint i);
extern
const gchar* atk_action_get_keybinding (AtkAction *action,gint i);
extern
gboolean atk_action_set_description (AtkAction *action,gint i,const gchar *desc);
extern
const gchar* atk_action_get_localized_name (AtkAction *action,gint i);extern
GType atk_util_get_type (void);
extern
guint atk_add_focus_tracker (AtkEventListener focus_tracker);
extern
void atk_remove_focus_tracker (guint tracker_id);
extern
void atk_focus_tracker_init (AtkEventListenerInit init);
extern
void atk_focus_tracker_notify (AtkObject *object);
extern
guint atk_add_global_event_listener (GSignalEmissionHook listener,const gchar *event_type);
extern
void atk_remove_global_event_listener (guint listener_id);
extern
guint atk_add_key_event_listener (AtkKeySnoopFunc listener, gpointer data);
extern
void atk_remove_key_event_listener (guint listener_id);
extern
AtkObject* atk_get_root(void);
extern
AtkObject* atk_get_focus_object (void);
extern
const gchar *atk_get_toolkit_name (void);
extern
const gchar *atk_get_toolkit_version (void);
extern
const gchar *atk_get_version (void);
extern
GType atk_rectangle_get_type (void);
extern
GType atk_component_get_type (void);
extern
guint atk_component_add_focus_handler (AtkComponent *component,AtkFocusHandler handler);
extern
gboolean atk_component_contains (AtkComponent *component,gint x,gint y,AtkCoordType coord_type);
extern
AtkObject* atk_component_ref_accessible_at_point(AtkComponent *component,gint x,gint y,AtkCoordType coord_type);
extern
void atk_component_get_extents (AtkComponent *component,gint *x,gint *y,gint *width,gint *height,AtkCoordType coord_type);
extern
void atk_component_get_position (AtkComponent *component,gint *x,gint *y,AtkCoordType coord_type);
extern
void atk_component_get_size (AtkComponent *component,gint *width,gint *height);
extern
AtkLayer atk_component_get_layer (AtkComponent *component);
extern
gint atk_component_get_mdi_zorder (AtkComponent *component);
extern
gboolean atk_component_grab_focus (AtkComponent *component);
extern
void atk_component_remove_focus_handler (AtkComponent *component,guint handler_id);
extern
gboolean atk_component_set_extents (AtkComponent *component,gint x,gint y,gint width,gint height,AtkCoordType coord_type);
extern
gboolean atk_component_set_position (AtkComponent *component,gint x,gint y,AtkCoordType coord_type);
extern
gboolean atk_component_set_size (AtkComponent *component,gint width,gint height);
extern
gdouble atk_component_get_alpha (AtkComponent *component);
extern
gboolean atk_component_scroll_to (AtkComponent *component,AtkScrollType type);
extern
gboolean atk_component_scroll_to_point (AtkComponent *component,AtkCoordType coords,gint x,gint y);
extern
GType atk_document_get_type (void);
extern
const gchar* atk_document_get_document_type (AtkDocument *document);
extern
gpointer atk_document_get_document (AtkDocument *document);
extern
const gchar* atk_document_get_locale (AtkDocument *document);
extern
AtkAttributeSet* atk_document_get_attributes (AtkDocument *document);
extern
const gchar* atk_document_get_attribute_value (AtkDocument *document,const gchar *attribute_name);
extern
gboolean atk_document_set_attribute_value (AtkDocument *document,const gchar *attribute_name,const gchar *attribute_value);
extern
gint atk_document_get_current_page_number (AtkDocument *document);
extern
gint atk_document_get_page_count (AtkDocument *document);
extern
AtkTextAttribute atk_text_attribute_register (const gchar *name);
extern
GType atk_text_range_get_type (void);
extern
GType atk_text_get_type (void);
extern
gchar* atk_text_get_text (AtkText *text,gint start_offset,gint end_offset);
extern
gunichar atk_text_get_character_at_offset (AtkText *text,gint offset);
extern
gchar* atk_text_get_text_after_offset (AtkText *text,gint offset,AtkTextBoundary boundary_type,gint *start_offset,gint *end_offset);
extern
gchar* atk_text_get_text_at_offset (AtkText *text,gint offset,AtkTextBoundary boundary_type,gint *start_offset,gint *end_offset);
extern
gchar* atk_text_get_text_before_offset (AtkText *text,gint offset,AtkTextBoundary boundary_type,gint *start_offset,gint *end_offset);
extern
gchar* atk_text_get_string_at_offset (AtkText *text,gint offset,AtkTextGranularity granularity,gint *start_offset,gint *end_offset);
extern
gint atk_text_get_caret_offset (AtkText *text);
extern
void atk_text_get_character_extents (AtkText *text,gint offset,gint *x,gint *y,gint *width,gint *height,AtkCoordType coords);
extern
AtkAttributeSet* atk_text_get_run_attributes (AtkText *text,gint offset,gint *start_offset,gint *end_offset);
extern
AtkAttributeSet* atk_text_get_default_attributes (AtkText *text);
extern
gint atk_text_get_character_count (AtkText *text);
extern
gint atk_text_get_offset_at_point (AtkText *text,gint x,gint y,AtkCoordType coords);
extern
gint atk_text_get_n_selections (AtkText *text);
extern
gchar* atk_text_get_selection (AtkText *text,gint selection_num,gint *start_offset,gint *end_offset);
extern
gboolean atk_text_add_selection (AtkText *text,gint start_offset,gint end_offset);
extern
gboolean atk_text_remove_selection (AtkText *text,gint selection_num);
extern
gboolean atk_text_set_selection (AtkText *text,gint selection_num,gint start_offset,gint end_offset);
extern
gboolean atk_text_set_caret_offset (AtkText *text,gint offset);
extern
void atk_text_get_range_extents (AtkText *text,gint start_offset,gint end_offset,AtkCoordType coord_type,AtkTextRectangle *rect);
extern
AtkTextRange** atk_text_get_bounded_ranges (AtkText *text,AtkTextRectangle *rect,AtkCoordType coord_type,AtkTextClipType x_clip_type,AtkTextClipType y_clip_type);
extern
void atk_text_free_ranges (AtkTextRange **ranges);
extern
void atk_attribute_set_free (AtkAttributeSet *attrib_set);
extern
const gchar* atk_text_attribute_get_name (AtkTextAttribute attr);
extern
AtkTextAttribute atk_text_attribute_for_name (const gchar *name);
extern
const gchar* atk_text_attribute_get_value (AtkTextAttribute attr,gint index_);
extern
gboolean atk_text_scroll_substring_to (AtkText *text,gint start_offset,gint end_offset,AtkScrollType type);
extern
gboolean atk_text_scroll_substring_to_point (AtkText *text,gint start_offset,gint end_offset,AtkCoordType coords,gint x,gint y);extern
GType atk_editable_text_get_type (void);
extern
gboolean atk_editable_text_set_run_attributes (AtkEditableText *text,AtkAttributeSet *attrib_set,gint start_offset,gint end_offset);
extern
void atk_editable_text_set_text_contents (AtkEditableText *text,const gchar *string);
extern
void atk_editable_text_insert_text (AtkEditableText *text,const gchar *string,gint length,gint *position);
extern
void atk_editable_text_copy_text (AtkEditableText *text,gint start_pos,gint end_pos);
extern
void atk_editable_text_cut_text (AtkEditableText *text,gint start_pos,gint end_pos);
extern
void atk_editable_text_delete_text (AtkEditableText *text,gint start_pos,gint end_pos);
extern
void atk_editable_text_paste_text (AtkEditableText *text,gint position);
extern
GType atk_scroll_type_get_type (void);
extern
GType atk_hyperlink_state_flags_get_type (void);
extern
GType atk_role_get_type (void);
extern
GType atk_layer_get_type (void);
extern
GType atk_relation_type_get_type (void);
extern
GType atk_state_type_get_type (void);
extern
GType atk_text_attribute_get_type (void);
extern
GType atk_text_boundary_get_type (void);
extern
GType atk_text_granularity_get_type (void);
extern
GType atk_text_clip_type_get_type (void);
extern
GType atk_key_event_type_get_type (void);
extern
GType atk_coord_type_get_type (void);
extern
GType atk_value_type_get_type (void);
extern
GType atk_gobject_accessible_get_type (void);
extern
AtkObject *atk_gobject_accessible_for_object (GObject *obj);
extern
GObject *atk_gobject_accessible_get_object (AtkGObjectAccessible *obj);
GType atk_hyperlink_get_type (void);
extern
gchar* atk_hyperlink_get_uri (AtkHyperlink *link_,gint i);
extern
AtkObject* atk_hyperlink_get_object (AtkHyperlink *link_,gint i);
extern
gint atk_hyperlink_get_end_index (AtkHyperlink *link_);
extern
gint atk_hyperlink_get_start_index (AtkHyperlink *link_);
extern
gboolean atk_hyperlink_is_valid (AtkHyperlink *link_);
extern
gboolean atk_hyperlink_is_inline (AtkHyperlink *link_);
extern
gint atk_hyperlink_get_n_anchors (AtkHyperlink *link_);
extern
gboolean atk_hyperlink_is_selected_link (AtkHyperlink *link_);
extern
GType atk_hyperlink_impl_get_type (void);
extern
AtkHyperlink *atk_hyperlink_impl_get_hyperlink (AtkHyperlinkImpl *impl);
extern
GType atk_hypertext_get_type (void);
extern
AtkHyperlink* atk_hypertext_get_link (AtkHypertext *hypertext,gint link_index);
extern
gint atk_hypertext_get_n_links (AtkHypertext *hypertext);
extern
gint atk_hypertext_get_link_index (AtkHypertext *hypertext,gint char_index);
extern
GType atk_image_get_type (void);
extern
const gchar* atk_image_get_image_description (AtkImage *image);
extern
void atk_image_get_image_size (AtkImage *image,gint *width,gint *height);
extern
gboolean atk_image_set_image_description (AtkImage *image,const gchar *description);
extern
void atk_image_get_image_position (AtkImage *image,gint *x,gint *y,AtkCoordType coord_type);
extern
const gchar* atk_image_get_image_locale (AtkImage *image);
extern
GType atk_no_op_object_get_type (void);
extern
AtkObject *atk_no_op_object_new (GObject *obj);
extern
GType atk_object_factory_get_type(void);
extern
AtkObject* atk_object_factory_create_accessible (AtkObjectFactory *factory, GObject *obj);
extern
void atk_object_factory_invalidate (AtkObjectFactory *factory);
extern
GType atk_object_factory_get_accessible_type (AtkObjectFactory *factory);
extern
GType atk_no_op_object_factory_get_type(void);
extern
AtkObjectFactory *atk_no_op_object_factory_new(void);
extern
GType atk_plug_get_type (void);
extern
AtkObject* atk_plug_new (void);
extern
gchar* atk_plug_get_id (AtkPlug* plug);
extern
GType atk_range_get_type (void);
extern
AtkRange* atk_range_copy (AtkRange *src);
extern
void atk_range_free (AtkRange *range);
extern
gdouble atk_range_get_lower_limit (AtkRange *range);
extern
gdouble atk_range_get_upper_limit (AtkRange *range);
extern
const gchar* atk_range_get_description (AtkRange *range);
extern
AtkRange* atk_range_new (gdouble lower_limit,gdouble upper_limit,const gchar *description);
extern
GType atk_registry_get_type (void);
extern
void atk_registry_set_factory_type (AtkRegistry *registry,GType type,GType factory_type);
extern
GType atk_registry_get_factory_type (AtkRegistry *registry,GType type);
extern
AtkObjectFactory* atk_registry_get_factory (AtkRegistry *registry,GType type);
extern
AtkRegistry* atk_get_default_registry (void);
extern
GType atk_relation_get_type (void);
extern
AtkRelationType atk_relation_type_register (const gchar *name);
extern
const gchar* atk_relation_type_get_name (AtkRelationType type);
extern
AtkRelationType atk_relation_type_for_name (const gchar *name);
extern
AtkRelation* atk_relation_new (AtkObject **targets,gint n_targets,AtkRelationType relationship);
extern
AtkRelationType atk_relation_get_relation_type (AtkRelation *relation);
extern
GPtrArray* atk_relation_get_target (AtkRelation *relation);
extern
void atk_relation_add_target (AtkRelation *relation,AtkObject *target);
extern
gboolean atk_relation_remove_target (AtkRelation *relation,AtkObject *target);
extern
GType atk_relation_set_get_type (void);
extern
AtkRelationSet* atk_relation_set_new (void);
extern
gboolean atk_relation_set_contains (AtkRelationSet *set,AtkRelationType relationship);
extern
gboolean atk_relation_set_contains_target (AtkRelationSet *set,AtkRelationType relationship,AtkObject *target);
extern
void atk_relation_set_remove (AtkRelationSet *set,AtkRelation *relation);
extern
void atk_relation_set_add (AtkRelationSet *set,AtkRelation *relation);
extern
gint atk_relation_set_get_n_relations (AtkRelationSet *set);
extern
AtkRelation* atk_relation_set_get_relation (AtkRelationSet *set,gint i);
extern
AtkRelation* atk_relation_set_get_relation_by_type (AtkRelationSet *set,AtkRelationType relationship);
extern
void atk_relation_set_add_relation_by_type (AtkRelationSet *set,AtkRelationType relationship,AtkObject *target);
extern
GType atk_selection_get_type (void);
extern
gboolean atk_selection_add_selection (AtkSelection *selection,gint i);
extern
gboolean atk_selection_clear_selection (AtkSelection *selection);
extern
AtkObject* atk_selection_ref_selection (AtkSelection *selection,gint i);
extern
gint atk_selection_get_selection_count (AtkSelection *selection);
extern
gboolean atk_selection_is_child_selected (AtkSelection *selection,gint i);
extern
gboolean atk_selection_remove_selection (AtkSelection *selection,gint i);
extern
gboolean atk_selection_select_all_selection (AtkSelection *selection);
extern
GType atk_socket_get_type (void);
extern
AtkObject* atk_socket_new (void);
extern
void atk_socket_embed (AtkSocket* obj, gchar* plug_id);
extern
gboolean atk_socket_is_occupied (AtkSocket* obj);
extern
GType atk_state_set_get_type (void);
extern
AtkStateSet* atk_state_set_new (void);
extern
gboolean atk_state_set_is_empty (AtkStateSet *set);
extern
gboolean atk_state_set_add_state (AtkStateSet *set,AtkStateType type);
extern
void atk_state_set_add_states (AtkStateSet *set,AtkStateType *types,gint n_types);
extern
void atk_state_set_clear_states (AtkStateSet *set);
extern
gboolean atk_state_set_contains_state (AtkStateSet *set,AtkStateType type);
extern
gboolean atk_state_set_contains_states (AtkStateSet *set,AtkStateType *types,gint n_types);
extern
gboolean atk_state_set_remove_state (AtkStateSet *set,AtkStateType type);
extern
AtkStateSet* atk_state_set_and_sets (AtkStateSet *set,AtkStateSet *compare_set);
extern
AtkStateSet* atk_state_set_or_sets (AtkStateSet *set,AtkStateSet *compare_set);
extern
AtkStateSet* atk_state_set_xor_sets (AtkStateSet *set,AtkStateSet *compare_set);
extern
GType atk_streamable_content_get_type (void);
extern
gint atk_streamable_content_get_n_mime_types (AtkStreamableContent *streamable);
extern
const gchar* atk_streamable_content_get_mime_type (AtkStreamableContent *streamable,gint i);
extern
GIOChannel* atk_streamable_content_get_stream (AtkStreamableContent *streamable,const gchar *mime_type);
extern
const gchar* atk_streamable_content_get_uri (AtkStreamableContent *streamable,const gchar *mime_type);
extern
GType atk_table_get_type (void);
extern
AtkObject* atk_table_ref_at (AtkTable *table,gint row,gint column);
extern
gint atk_table_get_index_at (AtkTable *table,gint row,gint column);
extern
gint atk_table_get_column_at_index (AtkTable *table,gint index_);
extern
gint atk_table_get_row_at_index (AtkTable *table,gint index_);
extern
gint atk_table_get_n_columns (AtkTable *table);
extern
gint atk_table_get_n_rows (AtkTable *table);
extern
gint atk_table_get_column_extent_at (AtkTable *table,gint row,gint column);
extern
gint atk_table_get_row_extent_at (AtkTable *table,gint row,gint column);
extern
AtkObject*atk_table_get_caption (AtkTable *table);
extern
const gchar* atk_table_get_column_description(AtkTable *table,gint column);
extern
AtkObject* atk_table_get_column_header (AtkTable *table,gint column);
extern
const gchar* atk_table_get_row_description (AtkTable *table,gint row);
extern
AtkObject* atk_table_get_row_header (AtkTable *table,gint row);
extern
AtkObject* atk_table_get_summary (AtkTable *table);
extern
void atk_table_set_caption (AtkTable *table,AtkObject *caption);
extern
void atk_table_set_column_description(AtkTable *table,gint column,const gchar *description);
extern
void atk_table_set_column_header (AtkTable *table,gint column,AtkObject *header);
extern
void atk_table_set_row_description (AtkTable *table,gint row,const gchar *description);
extern
void atk_table_set_row_header (AtkTable *table,gint row,AtkObject *header);
extern
void atk_table_set_summary (AtkTable *table,AtkObject *accessible);
extern
gint atk_table_get_selected_columns (AtkTable *table,gint **selected);
extern
gint atk_table_get_selected_rows (AtkTable *table,gint **selected);
extern
gboolean atk_table_is_column_selected (AtkTable *table,gint column);
extern
gboolean atk_table_is_row_selected (AtkTable *table,gint row);
extern
gboolean atk_table_is_selected (AtkTable *table,gint row,gint column);
extern
gboolean atk_table_add_row_selection (AtkTable *table,gint row);
extern
gboolean atk_table_remove_row_selection (AtkTable *table,gint row);
extern
gboolean atk_table_add_column_selection (AtkTable *table,gint column);
extern
gboolean atk_table_remove_column_selection(AtkTable *table,gint column);
extern
GType atk_table_cell_get_type (void);
extern
gint atk_table_cell_get_column_span (AtkTableCell *cell);
extern
GPtrArray * atk_table_cell_get_column_header_cells (AtkTableCell *cell);
extern
gboolean atk_table_cell_get_position (AtkTableCell *cell,gint *row,gint *column);
extern
gint atk_table_cell_get_row_span (AtkTableCell *cell);
extern
GPtrArray * atk_table_cell_get_row_header_cells (AtkTableCell *cell);
extern
gboolean atk_table_cell_get_row_column_span (AtkTableCell *cell,gint *row,gint *column,gint *row_span,gint *column_span);
extern
AtkObject * atk_table_cell_get_table (AtkTableCell *cell);
extern
GType atk_misc_get_type (void);
extern
void atk_misc_threads_enter (AtkMisc *misc);
extern
void atk_misc_threads_leave (AtkMisc *misc);
extern
const AtkMisc *atk_misc_get_instance (void);
extern
GType atk_value_get_type (void);
extern
void atk_value_get_current_value (AtkValue *obj,GValue *value);
extern
void atk_value_get_maximum_value (AtkValue *obj,GValue *value);
extern
void atk_value_get_minimum_value (AtkValue *obj,GValue *value);
extern
gboolean atk_value_set_current_value (AtkValue *obj,const GValue *value);
extern
void atk_value_get_minimum_increment (AtkValue *obj,GValue *value);
extern
void atk_value_get_value_and_text (AtkValue *obj,gdouble *value,gchar **text);
extern
AtkRange* atk_value_get_range (AtkValue *obj);
extern
gdouble atk_value_get_increment (AtkValue *obj);
extern
GSList* atk_value_get_sub_ranges (AtkValue *obj);
extern
void atk_value_set_value (AtkValue *obj,const gdouble new_value);
extern
const gchar* atk_value_type_get_name (AtkValueType value_type);
extern
const gchar* atk_value_type_get_localized_name (AtkValueType value_type);
extern
GType atk_window_get_type (void);
extern AtkMisc *atk_misc_instance;