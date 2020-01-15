extern
GType gtk_accel_group_get_type (void) ;
extern
GtkAccelGroup* gtk_accel_group_new (void);
extern
gboolean gtk_accel_group_get_is_locked (GtkAccelGroup *accel_group);
extern
GdkModifierType gtk_accel_group_get_modifier_mask (GtkAccelGroup *accel_group);
extern
void gtk_accel_group_lock (GtkAccelGroup *accel_group);
extern
void gtk_accel_group_unlock (GtkAccelGroup *accel_group);
extern
void gtk_accel_group_connect (GtkAccelGroup *accel_group,guint accel_key,GdkModifierType accel_mods,GtkAccelFlags accel_flags,GClosure *closure);
extern
void gtk_accel_group_connect_by_path (GtkAccelGroup *accel_group,const gchar *accel_path,GClosure *closure);
extern
gboolean gtk_accel_group_disconnect (GtkAccelGroup *accel_group,GClosure *closure);
extern
gboolean gtk_accel_group_disconnect_key (GtkAccelGroup *accel_group,guint accel_key,GdkModifierType accel_mods);
extern
gboolean gtk_accel_group_activate (GtkAccelGroup *accel_group,GQuark accel_quark,GObject *acceleratable,guint accel_key,GdkModifierType accel_mods);
extern
gboolean gtk_accel_groups_activate (GObject *object,guint accel_key,GdkModifierType accel_mods);
extern
GSList* gtk_accel_groups_from_object (GObject *object);
extern
GtkAccelKey* gtk_accel_group_find (GtkAccelGroup *accel_group,GtkAccelGroupFindFunc find_func,gpointer data);
extern
GtkAccelGroup* gtk_accel_group_from_accel_closure (GClosure *closure);
extern
gboolean gtk_accelerator_valid (guint keyval,GdkModifierType modifiers) ;
extern
void gtk_accelerator_parse (const gchar *accelerator,guint *accelerator_key,GdkModifierType *accelerator_mods);
extern
void gtk_accelerator_parse_with_keycode (const gchar *accelerator,guint *accelerator_key,guint **accelerator_codes,GdkModifierType *accelerator_mods);
extern
gchar* gtk_accelerator_name (guint accelerator_key,GdkModifierType accelerator_mods);
extern
gchar* gtk_accelerator_name_with_keycode (GdkDisplay *display,guint accelerator_key,guint keycode,GdkModifierType accelerator_mods);
extern
gchar* gtk_accelerator_get_label (guint accelerator_key,GdkModifierType accelerator_mods);
extern
gchar* gtk_accelerator_get_label_with_keycode (GdkDisplay *display,guint accelerator_key,guint keycode,GdkModifierType accelerator_mods);
extern
void gtk_accelerator_set_default_mod_mask (GdkModifierType default_mod_mask);
extern
GdkModifierType gtk_accelerator_get_default_mod_mask (void);
extern
GtkAccelGroupEntry* gtk_accel_group_query (GtkAccelGroup *accel_group,guint accel_key,GdkModifierType accel_mods,guint *n_entries);
extern
GType gtk_border_get_type (void) ;
extern
GtkBorder *gtk_border_new (void) ;
extern
GtkBorder *gtk_border_copy (const GtkBorder *border_);
extern
void gtk_border_free (GtkBorder *border_);
GType gtk_widget_get_type (void) ;
extern
GtkWidget* gtk_widget_new (GType type,const gchar *first_property_name,...);
extern
void gtk_widget_destroy (GtkWidget *widget);
extern
void gtk_widget_destroyed (GtkWidget *widget,GtkWidget **widget_pointer);
extern
void gtk_widget_unparent (GtkWidget *widget);
extern
void gtk_widget_show (GtkWidget *widget);
extern
void gtk_widget_hide (GtkWidget *widget);
extern
void gtk_widget_show_now (GtkWidget *widget);
extern
void gtk_widget_show_all (GtkWidget *widget);
extern
void gtk_widget_set_no_show_all (GtkWidget *widget,gboolean no_show_all);
extern
gboolean gtk_widget_get_no_show_all (GtkWidget *widget);
extern
void gtk_widget_map (GtkWidget *widget);
extern
void gtk_widget_unmap (GtkWidget *widget);
extern
void gtk_widget_realize (GtkWidget *widget);
extern
void gtk_widget_unrealize (GtkWidget *widget);
extern
void gtk_widget_draw (GtkWidget *widget,cairo_t *cr);
extern
void gtk_widget_queue_draw (GtkWidget *widget);
extern
void gtk_widget_queue_draw_area (GtkWidget *widget,gint x,gint y,gint width,gint height);
extern
void gtk_widget_queue_draw_region (GtkWidget *widget,const cairo_region_t*region);
extern
void gtk_widget_queue_resize (GtkWidget *widget);
extern
void gtk_widget_queue_resize_no_redraw (GtkWidget *widget);
extern
void gtk_widget_queue_allocate (GtkWidget *widget);
extern
GdkFrameClock* gtk_widget_get_frame_clock (GtkWidget *widget);extern
void gtk_widget_size_request (GtkWidget *widget,GtkRequisition *requisition);
extern
void gtk_widget_size_allocate (GtkWidget *widget,GtkAllocation *allocation);
extern
void gtk_widget_size_allocate_with_baseline (GtkWidget *widget,GtkAllocation *allocation,gint baseline);
extern
GtkSizeRequestMode gtk_widget_get_request_mode (GtkWidget *widget);
extern
void gtk_widget_get_preferred_width (GtkWidget *widget,gint *minimum_width,gint *natural_width);
extern
void gtk_widget_get_preferred_height_for_width (GtkWidget *widget,gint width,gint *minimum_height,gint *natural_height);
extern
void gtk_widget_get_preferred_height (GtkWidget *widget,gint *minimum_height,gint *natural_height);
extern
void gtk_widget_get_preferred_width_for_height (GtkWidget *widget,gint height,gint *minimum_width,gint *natural_width);
extern
void gtk_widget_get_preferred_height_and_baseline_for_width (GtkWidget *widget,gint width,gint *minimum_height,gint *natural_height,gint *minimum_baseline,gint *natural_baseline);
extern
void gtk_widget_get_preferred_size (GtkWidget *widget,GtkRequisition *minimum_size,GtkRequisition *natural_size);extern
void gtk_widget_get_child_requisition (GtkWidget *widget,GtkRequisition *requisition);
extern
void gtk_widget_add_accelerator (GtkWidget *widget,const gchar *accel_signal,GtkAccelGroup *accel_group,guint accel_key,GdkModifierType accel_mods,GtkAccelFlags accel_flags);
extern
gboolean gtk_widget_remove_accelerator (GtkWidget *widget,GtkAccelGroup *accel_group,guint accel_key,GdkModifierType accel_mods);
extern
void gtk_widget_set_accel_path (GtkWidget *widget,const gchar *accel_path,GtkAccelGroup *accel_group);
extern
GList* gtk_widget_list_accel_closures (GtkWidget *widget);
extern
gboolean gtk_widget_can_activate_accel (GtkWidget *widget,guint signal_id);
extern
gboolean gtk_widget_mnemonic_activate (GtkWidget *widget,gboolean group_cycling);
extern
gboolean gtk_widget_event (GtkWidget *widget,GdkEvent *event);extern
gint gtk_widget_send_expose (GtkWidget *widget,GdkEvent *event);
extern
gboolean gtk_widget_send_focus_change (GtkWidget *widget,GdkEvent *event);
extern
gboolean gtk_widget_activate (GtkWidget *widget);extern
void gtk_widget_reparent (GtkWidget *widget,GtkWidget *new_parent);
extern
gboolean gtk_widget_intersect (GtkWidget *widget,const GdkRectangle *area,GdkRectangle *intersection);extern
cairo_region_t *gtk_widget_region_intersect (GtkWidget *widget,const cairo_region_t *region);
extern
void gtk_widget_freeze_child_notify (GtkWidget *widget);
extern
void gtk_widget_child_notify (GtkWidget *widget,const gchar *child_property);
extern
void gtk_widget_thaw_child_notify (GtkWidget *widget);
extern
void gtk_widget_set_can_focus (GtkWidget *widget,gboolean can_focus);
extern
gboolean gtk_widget_get_can_focus (GtkWidget *widget);
extern
gboolean gtk_widget_has_focus (GtkWidget *widget);
extern
gboolean gtk_widget_is_focus (GtkWidget *widget);
extern
gboolean gtk_widget_has_visible_focus (GtkWidget *widget);
extern
void gtk_widget_grab_focus (GtkWidget *widget);
extern
void gtk_widget_set_focus_on_click (GtkWidget *widget,gboolean focus_on_click);
extern
gboolean gtk_widget_get_focus_on_click (GtkWidget *widget);
extern
void gtk_widget_set_can_default (GtkWidget *widget,gboolean can_default);
extern
gboolean gtk_widget_get_can_default (GtkWidget *widget);
extern
gboolean gtk_widget_has_default (GtkWidget *widget);
extern
void gtk_widget_grab_default (GtkWidget *widget);
extern
void gtk_widget_set_receives_default (GtkWidget *widget,gboolean receives_default);
extern
gboolean gtk_widget_get_receives_default (GtkWidget *widget);
extern
gboolean gtk_widget_has_grab (GtkWidget *widget);
extern
gboolean gtk_widget_device_is_shadowed (GtkWidget *widget,GdkDevice *device);
extern
void gtk_widget_set_name (GtkWidget *widget,const gchar *name);
extern
const gchar * gtk_widget_get_name (GtkWidget *widget);extern
void gtk_widget_set_state (GtkWidget *widget,GtkStateType state);extern
GtkStateType gtk_widget_get_state (GtkWidget *widget);
extern
void gtk_widget_set_state_flags (GtkWidget *widget,GtkStateFlags flags,gboolean clear);
extern
void gtk_widget_unset_state_flags (GtkWidget *widget,GtkStateFlags flags);
extern
GtkStateFlags gtk_widget_get_state_flags (GtkWidget *widget);
extern
void gtk_widget_set_sensitive (GtkWidget *widget,gboolean sensitive);
extern
gboolean gtk_widget_get_sensitive (GtkWidget *widget);
extern
gboolean gtk_widget_is_sensitive (GtkWidget *widget);
extern
void gtk_widget_set_visible (GtkWidget *widget,gboolean visible);
extern
gboolean gtk_widget_get_visible (GtkWidget *widget);
extern
gboolean gtk_widget_is_visible (GtkWidget *widget);
extern
void gtk_widget_set_has_window (GtkWidget *widget,gboolean has_window);
extern
gboolean gtk_widget_get_has_window (GtkWidget *widget);
extern
gboolean gtk_widget_is_toplevel (GtkWidget *widget);
extern
gboolean gtk_widget_is_drawable (GtkWidget *widget);
extern
void gtk_widget_set_realized (GtkWidget *widget,gboolean realized);
extern
gboolean gtk_widget_get_realized (GtkWidget *widget);
extern
void gtk_widget_set_mapped (GtkWidget *widget,gboolean mapped);
extern
gboolean gtk_widget_get_mapped (GtkWidget *widget);
extern
void gtk_widget_set_app_paintable (GtkWidget *widget,gboolean app_paintable);
extern
gboolean gtk_widget_get_app_paintable (GtkWidget *widget);extern
void gtk_widget_set_double_buffered (GtkWidget *widget,gboolean double_buffered);extern
gboolean gtk_widget_get_double_buffered (GtkWidget *widget);
extern
void gtk_widget_set_redraw_on_allocate (GtkWidget *widget,gboolean redraw_on_allocate);
extern
void gtk_widget_set_parent (GtkWidget *widget,GtkWidget *parent);
extern
GtkWidget * gtk_widget_get_parent (GtkWidget *widget);
extern
void gtk_widget_set_parent_window (GtkWidget *widget,GdkWindow *parent_window);
extern
GdkWindow * gtk_widget_get_parent_window (GtkWidget *widget);
extern
void gtk_widget_set_child_visible (GtkWidget *widget,gboolean is_visible);
extern
gboolean gtk_widget_get_child_visible (GtkWidget *widget);
extern
void gtk_widget_set_window (GtkWidget *widget,GdkWindow *window);
extern
GdkWindow * gtk_widget_get_window (GtkWidget *widget);
extern
void gtk_widget_register_window (GtkWidget *widget,GdkWindow *window);
extern
void gtk_widget_unregister_window (GtkWidget *widget,GdkWindow *window);
extern
int gtk_widget_get_allocated_width (GtkWidget *widget);
extern
int gtk_widget_get_allocated_height (GtkWidget *widget);
extern
int gtk_widget_get_allocated_baseline (GtkWidget *widget);
extern
void gtk_widget_get_allocated_size (GtkWidget *widget,GtkAllocation *allocation,int *baseline);
extern
void gtk_widget_get_allocation (GtkWidget *widget,GtkAllocation *allocation);
extern
void gtk_widget_set_allocation (GtkWidget *widget,const GtkAllocation *allocation);
extern
void gtk_widget_set_clip (GtkWidget *widget,const GtkAllocation *clip);
extern
void gtk_widget_get_clip (GtkWidget *widget,GtkAllocation *clip);extern
void gtk_widget_get_requisition (GtkWidget *widget,GtkRequisition *requisition);
extern
gboolean gtk_widget_child_focus (GtkWidget *widget,GtkDirectionType direction);
extern
gboolean gtk_widget_keynav_failed (GtkWidget *widget,GtkDirectionType direction);
extern
void gtk_widget_error_bell (GtkWidget *widget);
extern
void gtk_widget_set_size_request (GtkWidget *widget,gint width,gint height);
extern
void gtk_widget_get_size_request (GtkWidget *widget,gint *width,gint *height);
extern
void gtk_widget_set_events (GtkWidget *widget,gint events);
extern
void gtk_widget_add_events (GtkWidget *widget,gint events);
extern
void gtk_widget_set_device_events (GtkWidget *widget,GdkDevice *device,GdkEventMask events);
extern
void gtk_widget_add_device_events (GtkWidget *widget,GdkDevice *device,GdkEventMask events);
extern
void gtk_widget_set_opacity (GtkWidget *widget,double opacity);
extern
double gtk_widget_get_opacity (GtkWidget *widget);
extern
void gtk_widget_set_device_enabled (GtkWidget *widget,GdkDevice *device,gboolean enabled);
extern
gboolean gtk_widget_get_device_enabled (GtkWidget *widget,GdkDevice *device);
extern
GtkWidget* gtk_widget_get_toplevel (GtkWidget *widget);
extern
GtkWidget* gtk_widget_get_ancestor (GtkWidget *widget,GType widget_type);
extern
GdkVisual* gtk_widget_get_visual (GtkWidget *widget);
extern
void gtk_widget_set_visual (GtkWidget *widget,GdkVisual *visual);
extern
GdkScreen * gtk_widget_get_screen (GtkWidget *widget);
extern
gboolean gtk_widget_has_screen (GtkWidget *widget);
extern
gint gtk_widget_get_scale_factor (GtkWidget *widget);
extern
GdkDisplay * gtk_widget_get_display (GtkWidget *widget);extern
GdkWindow * gtk_widget_get_root_window (GtkWidget *widget);
extern
GtkSettings* gtk_widget_get_settings (GtkWidget *widget);
extern
GtkClipboard *gtk_widget_get_clipboard (GtkWidget *widget,GdkAtom selection);
extern
gboolean gtk_widget_get_hexpand (GtkWidget *widget);
extern
void gtk_widget_set_hexpand (GtkWidget *widget,gboolean expand);
extern
gboolean gtk_widget_get_hexpand_set (GtkWidget *widget);
extern
void gtk_widget_set_hexpand_set (GtkWidget *widget,gboolean set);
extern
gboolean gtk_widget_get_vexpand (GtkWidget *widget);
extern
void gtk_widget_set_vexpand (GtkWidget *widget,gboolean expand);
extern
gboolean gtk_widget_get_vexpand_set (GtkWidget *widget);
extern
void gtk_widget_set_vexpand_set (GtkWidget *widget,gboolean set);
extern
void gtk_widget_queue_compute_expand (GtkWidget *widget);
extern
gboolean gtk_widget_compute_expand (GtkWidget *widget,GtkOrientation orientation);
extern
gboolean gtk_widget_get_support_multidevice (GtkWidget *widget);
extern
void gtk_widget_set_support_multidevice (GtkWidget *widget,gboolean support_multidevice);
extern
void gtk_widget_class_set_accessible_type (GtkWidgetClass *widget_class,GType type);
extern
void gtk_widget_class_set_accessible_role (GtkWidgetClass *widget_class,AtkRole role);
extern
AtkObject* gtk_widget_get_accessible (GtkWidget *widget);
extern
GtkAlign gtk_widget_get_halign (GtkWidget *widget);
extern
void gtk_widget_set_halign (GtkWidget *widget,GtkAlign align);
extern
GtkAlign gtk_widget_get_valign (GtkWidget *widget);
extern
GtkAlign gtk_widget_get_valign_with_baseline (GtkWidget *widget);
extern
void gtk_widget_set_valign (GtkWidget *widget,GtkAlign align);extern
gint gtk_widget_get_margin_left (GtkWidget *widget);extern
void gtk_widget_set_margin_left (GtkWidget *widget,gint margin);extern
gint gtk_widget_get_margin_right (GtkWidget *widget);extern
void gtk_widget_set_margin_right (GtkWidget *widget,gint margin);
extern
gint gtk_widget_get_margin_start (GtkWidget *widget);
extern
void gtk_widget_set_margin_start (GtkWidget *widget,gint margin);
extern
gint gtk_widget_get_margin_end (GtkWidget *widget);
extern
void gtk_widget_set_margin_end (GtkWidget *widget,gint margin);
extern
gint gtk_widget_get_margin_top (GtkWidget *widget);
extern
void gtk_widget_set_margin_top (GtkWidget *widget,gint margin);
extern
gint gtk_widget_get_margin_bottom (GtkWidget *widget);
extern
void gtk_widget_set_margin_bottom (GtkWidget *widget,gint margin);
extern
gint gtk_widget_get_events (GtkWidget *widget);
extern
GdkEventMask gtk_widget_get_device_events (GtkWidget *widget,GdkDevice *device);extern
void gtk_widget_get_pointer (GtkWidget *widget,gint *x,gint *y);
extern
gboolean gtk_widget_is_ancestor (GtkWidget *widget,GtkWidget *ancestor);
extern
gboolean gtk_widget_translate_coordinates (GtkWidget *src_widget,GtkWidget *dest_widget,gint src_x,gint src_y,gint *dest_x,gint *dest_y);
extern
gboolean gtk_widget_hide_on_delete (GtkWidget *widget);extern
void gtk_widget_override_color (GtkWidget *widget,GtkStateFlags state,const GdkRGBA *color);extern
void gtk_widget_override_background_color (GtkWidget *widget,GtkStateFlags state,const GdkRGBA *color);extern
void gtk_widget_override_font (GtkWidget *widget,const PangoFontDescription *font_desc);extern
void gtk_widget_override_symbolic_color (GtkWidget *widget,const gchar *name,const GdkRGBA *color);extern
void gtk_widget_override_cursor (GtkWidget *widget,const GdkRGBA *cursor,const GdkRGBA *secondary_cursor);
extern
void gtk_widget_reset_style (GtkWidget *widget);
extern
PangoContext *gtk_widget_create_pango_context (GtkWidget *widget);
extern
PangoContext *gtk_widget_get_pango_context (GtkWidget *widget);
extern
void gtk_widget_set_font_options (GtkWidget *widget,const cairo_font_options_t *options);
extern
const cairo_font_options_t *gtk_widget_get_font_options (GtkWidget *widget);
extern
PangoLayout *gtk_widget_create_pango_layout (GtkWidget *widget,const gchar *text);extern
GdkPixbuf *gtk_widget_render_icon_pixbuf (GtkWidget *widget,const gchar *stock_id,GtkIconSize size);extern
void gtk_widget_set_composite_name (GtkWidget *widget,const gchar *name);extern
gchar* gtk_widget_get_composite_name (GtkWidget *widget);extern
void gtk_widget_push_composite_child (void);extern
void gtk_widget_pop_composite_child (void);
extern
void gtk_widget_class_install_style_property (GtkWidgetClass *klass,GParamSpec *pspec);
extern
void gtk_widget_class_install_style_property_parser (GtkWidgetClass *klass,GParamSpec *pspec,GtkRcPropertyParser parser);
extern
GParamSpec* gtk_widget_class_find_style_property (GtkWidgetClass *klass,const gchar *property_name);
extern
GParamSpec** gtk_widget_class_list_style_properties (GtkWidgetClass *klass,guint *n_properties);
extern
void gtk_widget_style_get_property (GtkWidget *widget,const gchar *property_name,GValue *value);
extern
void gtk_widget_style_get_valist (GtkWidget *widget,const gchar *first_property_name,va_list var_args);
extern
void gtk_widget_style_get (GtkWidget *widget,const gchar *first_property_name,...) ;
extern
void gtk_widget_set_direction (GtkWidget *widget,GtkTextDirection dir);
extern
GtkTextDirection gtk_widget_get_direction (GtkWidget *widget);
extern
void gtk_widget_set_default_direction (GtkTextDirection dir);
extern
GtkTextDirection gtk_widget_get_default_direction (void);extern
gboolean gtk_widget_is_composited (GtkWidget *widget);
extern
void gtk_widget_shape_combine_region (GtkWidget *widget,cairo_region_t *region);
extern
void gtk_widget_input_shape_combine_region (GtkWidget *widget,cairo_region_t *region);
extern
GList* gtk_widget_list_mnemonic_labels (GtkWidget *widget);
extern
void gtk_widget_add_mnemonic_label (GtkWidget *widget,GtkWidget *label);
extern
void gtk_widget_remove_mnemonic_label (GtkWidget *widget,GtkWidget *label);
extern
void gtk_widget_set_tooltip_window (GtkWidget *widget,GtkWindow *custom_window);
extern
GtkWindow *gtk_widget_get_tooltip_window (GtkWidget *widget);
extern
void gtk_widget_trigger_tooltip_query (GtkWidget *widget);
extern
void gtk_widget_set_tooltip_text (GtkWidget *widget,const gchar *text);
extern
gchar * gtk_widget_get_tooltip_text (GtkWidget *widget);
extern
void gtk_widget_set_tooltip_markup (GtkWidget *widget,const gchar *markup);
extern
gchar * gtk_widget_get_tooltip_markup (GtkWidget *widget);
extern
void gtk_widget_set_has_tooltip (GtkWidget *widget,gboolean has_tooltip);
extern
gboolean gtk_widget_get_has_tooltip (GtkWidget *widget);
extern
gboolean gtk_cairo_should_draw_window (cairo_t *cr,GdkWindow *window);
extern
void gtk_cairo_transform_to_window (cairo_t *cr,GtkWidget *widget,GdkWindow *window);
extern
GType gtk_requisition_get_type (void) ;
extern
GtkRequisition *gtk_requisition_new (void) ;
extern
GtkRequisition *gtk_requisition_copy (const GtkRequisition *requisition);
extern
void gtk_requisition_free (GtkRequisition *requisition);
extern
gboolean gtk_widget_in_destruction (GtkWidget *widget);
extern
GtkStyleContext * gtk_widget_get_style_context (GtkWidget *widget);
extern
GtkWidgetPath * gtk_widget_get_path (GtkWidget *widget);
extern
void gtk_widget_class_set_css_name (GtkWidgetClass *widget_class,const char *name);
extern
const char * gtk_widget_class_get_css_name (GtkWidgetClass *widget_class);
extern
GdkModifierType gtk_widget_get_modifier_mask (GtkWidget *widget,GdkModifierIntent intent);
extern
void gtk_widget_insert_action_group (GtkWidget *widget,const gchar *name,GActionGroup *group);
extern
guint gtk_widget_add_tick_callback (GtkWidget *widget,GtkTickCallback callback,gpointer user_data,GDestroyNotify notify);
extern
void gtk_widget_remove_tick_callback (GtkWidget *widget,guint id);
extern
void gtk_widget_init_template (GtkWidget *widget);
extern
GObject *gtk_widget_get_template_child (GtkWidget *widget,GType widget_type,const gchar *name);
extern
void gtk_widget_class_set_template (GtkWidgetClass *widget_class,GBytes *template_bytes);
extern
void gtk_widget_class_set_template_from_resource (GtkWidgetClass *widget_class,const gchar *resource_name);
extern
void gtk_widget_class_bind_template_callback_full (GtkWidgetClass *widget_class,const gchar *callback_name,GCallback callback_symbol);
extern
void gtk_widget_class_set_connect_func (GtkWidgetClass *widget_class,GtkBuilderConnectFunc connect_func,gpointer connect_data,GDestroyNotify connect_data_destroy);
extern
void gtk_widget_class_bind_template_child_full (GtkWidgetClass *widget_class,const gchar *name,gboolean internal_child,gssize struct_offset);
extern
GActionGroup *gtk_widget_get_action_group (GtkWidget *widget,const gchar *prefix);
extern
const gchar ** gtk_widget_list_action_prefixes (GtkWidget *widget);
extern
void gtk_widget_set_font_map (GtkWidget *widget,PangoFontMap *font_map);
extern
PangoFontMap * gtk_widget_get_font_map (GtkWidget *widget);
extern
GType gtk_application_get_type (void) ;
extern
GtkApplication * gtk_application_new (const gchar *application_id,GApplicationFlags flags);
extern
void gtk_application_add_window (GtkApplication *application,GtkWindow *window);
extern
void gtk_application_remove_window (GtkApplication *application,GtkWindow *window);
extern
GList * gtk_application_get_windows (GtkApplication *application);
extern
GMenuModel * gtk_application_get_app_menu (GtkApplication *application);
extern
void gtk_application_set_app_menu (GtkApplication *application,GMenuModel *app_menu);
extern
GMenuModel * gtk_application_get_menubar (GtkApplication *application);
extern
void gtk_application_set_menubar (GtkApplication *application,GMenuModel *menubar);extern
void gtk_application_add_accelerator (GtkApplication *application,const gchar *accelerator,const gchar *action_name,GVariant *parameter);extern
void gtk_application_remove_accelerator (GtkApplication *application,const gchar *action_name,GVariant *parameter);
extern
guint gtk_application_inhibit (GtkApplication *application,GtkWindow *window,GtkApplicationInhibitFlags flags,const gchar *reason);
extern
void gtk_application_uninhibit (GtkApplication *application,guint cookie);
extern
gboolean gtk_application_is_inhibited (GtkApplication *application,GtkApplicationInhibitFlags flags);
extern
GtkWindow * gtk_application_get_window_by_id (GtkApplication *application,guint id);
extern
GtkWindow * gtk_application_get_active_window (GtkApplication *application);
extern
gchar ** gtk_application_list_action_descriptions (GtkApplication *application);
extern
gchar ** gtk_application_get_accels_for_action (GtkApplication *application,const gchar *detailed_action_name);
extern
gchar ** gtk_application_get_actions_for_accel (GtkApplication *application,const gchar *accel);
extern
void gtk_application_set_accels_for_action (GtkApplication *application,const gchar *detailed_action_name,const gchar * const *accels);
extern
gboolean gtk_application_prefers_app_menu (GtkApplication *application);
extern
GMenu * gtk_application_get_menu_by_id (GtkApplication *application,const gchar *id);extern
GType gtk_container_get_type (void) ;
extern
void gtk_container_set_border_width (GtkContainer *container,guint border_width);
extern
guint gtk_container_get_border_width (GtkContainer *container);
extern
void gtk_container_add (GtkContainer *container,GtkWidget *widget);
extern
void gtk_container_remove (GtkContainer *container,GtkWidget *widget);extern
void gtk_container_set_resize_mode (GtkContainer *container,GtkResizeMode resize_mode);extern
GtkResizeMode gtk_container_get_resize_mode (GtkContainer *container);
extern
void gtk_container_check_resize (GtkContainer *container);
extern
void gtk_container_foreach (GtkContainer *container,GtkCallback callback,gpointer callback_data);
extern
GList* gtk_container_get_children (GtkContainer *container);
extern
void gtk_container_propagate_draw (GtkContainer *container,GtkWidget *child,cairo_t *cr);extern
void gtk_container_set_focus_chain (GtkContainer *container,GList *focusable_widgets);extern
gboolean gtk_container_get_focus_chain (GtkContainer *container,GList **focusable_widgets);extern
void gtk_container_unset_focus_chain (GtkContainer *container);extern
void gtk_container_set_reallocate_redraws (GtkContainer *container,gboolean needs_redraws);
extern
void gtk_container_set_focus_child (GtkContainer *container,GtkWidget *child);
extern
GtkWidget *gtk_container_get_focus_child (GtkContainer *container);
extern
void gtk_container_set_focus_vadjustment (GtkContainer *container,GtkAdjustment *adjustment);
extern
GtkAdjustment *gtk_container_get_focus_vadjustment (GtkContainer *container);
extern
void gtk_container_set_focus_hadjustment (GtkContainer *container,GtkAdjustment *adjustment);
extern
GtkAdjustment *gtk_container_get_focus_hadjustment (GtkContainer *container);extern
void gtk_container_resize_children (GtkContainer *container);
extern
GType gtk_container_child_type (GtkContainer *container);
extern
void gtk_container_class_install_child_property (GtkContainerClass *cclass,guint property_id,GParamSpec *pspec);
extern
void gtk_container_class_install_child_properties (GtkContainerClass *cclass,guint n_pspecs,GParamSpec **pspecs);
extern
GParamSpec* gtk_container_class_find_child_property (GObjectClass *cclass,const gchar *property_name);
extern
GParamSpec** gtk_container_class_list_child_properties (GObjectClass *cclass,guint *n_properties);
extern
void gtk_container_add_with_properties (GtkContainer *container,GtkWidget *widget,const gchar *first_prop_name,...) ;
extern
void gtk_container_child_set (GtkContainer *container,GtkWidget *child,const gchar *first_prop_name,...) ;
extern
void gtk_container_child_get (GtkContainer *container,GtkWidget *child,const gchar *first_prop_name,...) ;
extern
void gtk_container_child_set_valist (GtkContainer *container,GtkWidget *child,const gchar *first_property_name,va_list var_args);
extern
void gtk_container_child_get_valist (GtkContainer *container,GtkWidget *child,const gchar *first_property_name,va_list var_args);
extern
void gtk_container_child_set_property (GtkContainer *container,GtkWidget *child,const gchar *property_name,const GValue *value);
extern
void gtk_container_child_get_property (GtkContainer *container,GtkWidget *child,const gchar *property_name,GValue *value);
extern
void gtk_container_child_notify (GtkContainer *container,GtkWidget *child,const gchar *child_property);
extern
void gtk_container_child_notify_by_pspec (GtkContainer *container,GtkWidget *child,GParamSpec *pspec);
extern
void gtk_container_forall (GtkContainer *container,GtkCallback callback,gpointer callback_data);
extern
void gtk_container_class_handle_border_width (GtkContainerClass *klass);
extern
GtkWidgetPath * gtk_container_get_path_for_child (GtkContainer *container,GtkWidget *child);extern
GType gtk_bin_get_type (void) ;
extern
GtkWidget *gtk_bin_get_child (GtkBin *bin);extern
GType gtk_window_get_type (void) ;
extern
GtkWidget* gtk_window_new (GtkWindowType type);
extern
void gtk_window_set_title (GtkWindow *window,const gchar *title);
extern
const gchar * gtk_window_get_title (GtkWindow *window);extern
void gtk_window_set_wmclass (GtkWindow *window,const gchar *wmclass_name,const gchar *wmclass_class);
extern
void gtk_window_set_role (GtkWindow *window,const gchar *role);
extern
void gtk_window_set_startup_id (GtkWindow *window,const gchar *startup_id);
extern
const gchar * gtk_window_get_role (GtkWindow *window);
extern
void gtk_window_add_accel_group (GtkWindow *window,GtkAccelGroup *accel_group);
extern
void gtk_window_remove_accel_group (GtkWindow *window,GtkAccelGroup *accel_group);
extern
void gtk_window_set_position (GtkWindow *window,GtkWindowPosition position);
extern
gboolean gtk_window_activate_focus (GtkWindow *window);
extern
void gtk_window_set_focus (GtkWindow *window,GtkWidget *focus);
extern
GtkWidget *gtk_window_get_focus (GtkWindow *window);
extern
void gtk_window_set_default (GtkWindow *window,GtkWidget *default_widget);
extern
GtkWidget *gtk_window_get_default_widget (GtkWindow *window);
extern
gboolean gtk_window_activate_default (GtkWindow *window);
extern
void gtk_window_set_transient_for (GtkWindow *window,GtkWindow *parent);
extern
GtkWindow *gtk_window_get_transient_for (GtkWindow *window);
extern
void gtk_window_set_attached_to (GtkWindow *window,GtkWidget *attach_widget);
extern
GtkWidget *gtk_window_get_attached_to (GtkWindow *window);extern
void gtk_window_set_opacity (GtkWindow *window,gdouble opacity);extern
gdouble gtk_window_get_opacity (GtkWindow *window);
extern
void gtk_window_set_type_hint (GtkWindow *window,GdkWindowTypeHint hint);
extern
GdkWindowTypeHint gtk_window_get_type_hint (GtkWindow *window);
extern
void gtk_window_set_skip_taskbar_hint (GtkWindow *window,gboolean setting);
extern
gboolean gtk_window_get_skip_taskbar_hint (GtkWindow *window);
extern
void gtk_window_set_skip_pager_hint (GtkWindow *window,gboolean setting);
extern
gboolean gtk_window_get_skip_pager_hint (GtkWindow *window);
extern
void gtk_window_set_urgency_hint (GtkWindow *window,gboolean setting);
extern
gboolean gtk_window_get_urgency_hint (GtkWindow *window);
extern
void gtk_window_set_accept_focus (GtkWindow *window,gboolean setting);
extern
gboolean gtk_window_get_accept_focus (GtkWindow *window);
extern
void gtk_window_set_focus_on_map (GtkWindow *window,gboolean setting);
extern
gboolean gtk_window_get_focus_on_map (GtkWindow *window);
extern
void gtk_window_set_destroy_with_parent (GtkWindow *window,gboolean setting);
extern
gboolean gtk_window_get_destroy_with_parent (GtkWindow *window);
extern
void gtk_window_set_hide_titlebar_when_maximized (GtkWindow *window,gboolean setting);
extern
gboolean gtk_window_get_hide_titlebar_when_maximized (GtkWindow *window);
extern
void gtk_window_set_mnemonics_visible (GtkWindow *window,gboolean setting);
extern
gboolean gtk_window_get_mnemonics_visible (GtkWindow *window);
extern
void gtk_window_set_focus_visible (GtkWindow *window,gboolean setting);
extern
gboolean gtk_window_get_focus_visible (GtkWindow *window);
extern
void gtk_window_set_resizable (GtkWindow *window,gboolean resizable);
extern
gboolean gtk_window_get_resizable (GtkWindow *window);
extern
void gtk_window_set_gravity (GtkWindow *window,GdkGravity gravity);
extern
GdkGravity gtk_window_get_gravity (GtkWindow *window);
extern
void gtk_window_set_geometry_hints (GtkWindow *window,GtkWidget *geometry_widget,GdkGeometry *geometry,GdkWindowHints geom_mask);
extern
void gtk_window_set_screen (GtkWindow *window,GdkScreen *screen);
extern
GdkScreen* gtk_window_get_screen (GtkWindow *window);
extern
gboolean gtk_window_is_active (GtkWindow *window);
extern
gboolean gtk_window_has_toplevel_focus (GtkWindow *window);
extern
void gtk_window_set_decorated (GtkWindow *window,gboolean setting);
extern
gboolean gtk_window_get_decorated (GtkWindow *window);
extern
void gtk_window_set_deletable (GtkWindow *window,gboolean setting);
extern
gboolean gtk_window_get_deletable (GtkWindow *window);
extern
void gtk_window_set_icon_list (GtkWindow *window,GList *list);
extern
GList* gtk_window_get_icon_list (GtkWindow *window);
extern
void gtk_window_set_icon (GtkWindow *window,GdkPixbuf *icon);
extern
void gtk_window_set_icon_name (GtkWindow *window,const gchar *name);
extern
gboolean gtk_window_set_icon_from_file (GtkWindow *window,const gchar *filename,GError **err);
extern
GdkPixbuf* gtk_window_get_icon (GtkWindow *window);
extern
const gchar * gtk_window_get_icon_name (GtkWindow *window);
extern
void gtk_window_set_default_icon_list (GList *list);
extern
GList* gtk_window_get_default_icon_list (void);
extern
void gtk_window_set_default_icon (GdkPixbuf *icon);
extern
void gtk_window_set_default_icon_name (const gchar *name);
extern
const gchar * gtk_window_get_default_icon_name (void);
extern
gboolean gtk_window_set_default_icon_from_file (const gchar *filename,GError **err);
extern
void gtk_window_set_auto_startup_notification (gboolean setting);
extern
void gtk_window_set_modal (GtkWindow *window,gboolean modal);
extern
gboolean gtk_window_get_modal (GtkWindow *window);
extern
GList* gtk_window_list_toplevels (void);
extern
void gtk_window_set_has_user_ref_count (GtkWindow *window,gboolean setting);
extern
void gtk_window_add_mnemonic (GtkWindow *window,guint keyval,GtkWidget *target);
extern
void gtk_window_remove_mnemonic (GtkWindow *window,guint keyval,GtkWidget *target);
extern
gboolean gtk_window_mnemonic_activate (GtkWindow *window,guint keyval,GdkModifierType modifier);
extern
void gtk_window_set_mnemonic_modifier (GtkWindow *window,GdkModifierType modifier);
extern
GdkModifierType gtk_window_get_mnemonic_modifier (GtkWindow *window);
extern
gboolean gtk_window_activate_key (GtkWindow *window,GdkEventKey *event);
extern
gboolean gtk_window_propagate_key_event (GtkWindow *window,GdkEventKey *event);
extern
void gtk_window_present (GtkWindow *window);
extern
void gtk_window_present_with_time (GtkWindow *window,guint32 timestamp);
extern
void gtk_window_iconify (GtkWindow *window);
extern
void gtk_window_deiconify (GtkWindow *window);
extern
void gtk_window_stick (GtkWindow *window);
extern
void gtk_window_unstick (GtkWindow *window);
extern
void gtk_window_maximize (GtkWindow *window);
extern
void gtk_window_unmaximize (GtkWindow *window);
extern
void gtk_window_fullscreen (GtkWindow *window);
extern
void gtk_window_unfullscreen (GtkWindow *window);
extern
void gtk_window_fullscreen_on_monitor(GtkWindow *window,GdkScreen *screen,gint monitor);
extern
void gtk_window_close (GtkWindow *window);
extern
void gtk_window_set_keep_above (GtkWindow *window, gboolean setting);
extern
void gtk_window_set_keep_below (GtkWindow *window, gboolean setting);
extern
void gtk_window_begin_resize_drag (GtkWindow *window,GdkWindowEdge edge,gint button,gint root_x,gint root_y,guint32 timestamp);
extern
void gtk_window_begin_move_drag (GtkWindow *window,gint button,gint root_x,gint root_y,guint32 timestamp);
extern
void gtk_window_set_default_size (GtkWindow *window,gint width,gint height);
extern
void gtk_window_get_default_size (GtkWindow *window,gint *width,gint *height);
extern
void gtk_window_resize (GtkWindow *window,gint width,gint height);
extern
void gtk_window_get_size (GtkWindow *window,gint *width,gint *height);
extern
void gtk_window_move (GtkWindow *window,gint x,gint y);
extern
void gtk_window_get_position (GtkWindow *window,gint *root_x,gint *root_y);extern
gboolean gtk_window_parse_geometry (GtkWindow *window,const gchar *geometry);extern
void gtk_window_set_default_geometry (GtkWindow *window,gint width,gint height);extern
void gtk_window_resize_to_geometry (GtkWindow *window,gint width,gint height);
extern
GtkWindowGroup *gtk_window_get_group (GtkWindow *window);
extern
gboolean gtk_window_has_group (GtkWindow *window);extern
void gtk_window_reshow_with_initial_size (GtkWindow *window);
extern
GtkWindowType gtk_window_get_window_type (GtkWindow *window);
extern
GtkApplication *gtk_window_get_application (GtkWindow *window);
extern
void gtk_window_set_application (GtkWindow *window,GtkApplication *application);extern
void gtk_window_set_has_resize_grip (GtkWindow *window,gboolean value);extern
gboolean gtk_window_get_has_resize_grip (GtkWindow *window);extern
gboolean gtk_window_resize_grip_is_visible (GtkWindow *window);extern
gboolean gtk_window_get_resize_grip_area (GtkWindow *window,GdkRectangle *rect);
extern
void gtk_window_set_titlebar (GtkWindow *window,GtkWidget *titlebar);
extern
GtkWidget *gtk_window_get_titlebar (GtkWindow *window);
extern
gboolean gtk_window_is_maximized (GtkWindow *window);
extern
void gtk_window_set_interactive_debugging (gboolean enable);extern
GType gtk_dialog_get_type (void) ;
extern
GtkWidget* gtk_dialog_new (void);
extern
GtkWidget* gtk_dialog_new_with_buttons (const gchar *title,GtkWindow *parent,GtkDialogFlags flags,const gchar *first_button_text,...) ;
extern
void gtk_dialog_add_action_widget (GtkDialog *dialog,GtkWidget *child,gint response_id);
extern
GtkWidget* gtk_dialog_add_button (GtkDialog *dialog,const gchar *button_text,gint response_id);
extern
void gtk_dialog_add_buttons (GtkDialog *dialog,const gchar *first_button_text,...) ;
extern
void gtk_dialog_set_response_sensitive (GtkDialog *dialog,gint response_id,gboolean setting);
extern
void gtk_dialog_set_default_response (GtkDialog *dialog,gint response_id);
extern
GtkWidget* gtk_dialog_get_widget_for_response (GtkDialog *dialog,gint response_id);
extern
gint gtk_dialog_get_response_for_widget (GtkDialog *dialog,GtkWidget *widget);extern
gboolean gtk_alternative_dialog_button_order (GdkScreen *screen);extern
void gtk_dialog_set_alternative_button_order (GtkDialog *dialog,gint first_response_id,...);extern
void gtk_dialog_set_alternative_button_order_from_array (GtkDialog *dialog,gint n_params,gint *new_order);
extern
void gtk_dialog_response (GtkDialog *dialog,gint response_id);
extern
gint gtk_dialog_run (GtkDialog *dialog);extern
GtkWidget * gtk_dialog_get_action_area (GtkDialog *dialog);
extern
GtkWidget * gtk_dialog_get_content_area (GtkDialog *dialog);
extern
GtkWidget * gtk_dialog_get_header_bar (GtkDialog *dialog);extern
GType gtk_about_dialog_get_type (void) ;
extern
GtkWidget *gtk_about_dialog_new (void);
extern
void gtk_show_about_dialog (GtkWindow *parent,const gchar *first_property_name,...) ;
extern
const gchar * gtk_about_dialog_get_program_name (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_program_name (GtkAboutDialog *about,const gchar *name);
extern
const gchar * gtk_about_dialog_get_version (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_version (GtkAboutDialog *about,const gchar *version);
extern
const gchar * gtk_about_dialog_get_copyright (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_copyright (GtkAboutDialog *about,const gchar *copyright);
extern
const gchar * gtk_about_dialog_get_comments (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_comments (GtkAboutDialog *about,const gchar *comments);
extern
const gchar * gtk_about_dialog_get_license (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_license (GtkAboutDialog *about,const gchar *license);
extern
void gtk_about_dialog_set_license_type (GtkAboutDialog *about,GtkLicense license_type);
extern
GtkLicense gtk_about_dialog_get_license_type (GtkAboutDialog *about);
extern
gboolean gtk_about_dialog_get_wrap_license (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_wrap_license (GtkAboutDialog *about,gboolean wrap_license);
extern
const gchar * gtk_about_dialog_get_website (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_website (GtkAboutDialog *about,const gchar *website);
extern
const gchar * gtk_about_dialog_get_website_label (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_website_label (GtkAboutDialog *about,const gchar *website_label);
extern
const gchar* const * gtk_about_dialog_get_authors (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_authors (GtkAboutDialog *about,const gchar **authors);
extern
const gchar* const * gtk_about_dialog_get_documenters (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_documenters (GtkAboutDialog *about,const gchar **documenters);
extern
const gchar* const * gtk_about_dialog_get_artists (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_artists (GtkAboutDialog *about,const gchar **artists);
extern
const gchar * gtk_about_dialog_get_translator_credits (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_translator_credits (GtkAboutDialog *about,const gchar *translator_credits);
extern
GdkPixbuf *gtk_about_dialog_get_logo (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_logo (GtkAboutDialog *about,GdkPixbuf *logo);
extern
const gchar * gtk_about_dialog_get_logo_icon_name (GtkAboutDialog *about);
extern
void gtk_about_dialog_set_logo_icon_name (GtkAboutDialog *about,const gchar *icon_name);
extern
void gtk_about_dialog_add_credit_section (GtkAboutDialog *about,const gchar *section_name,const gchar **people);extern
GType gtk_misc_get_type (void) ;extern
void gtk_misc_set_alignment (GtkMisc *misc,gfloat xalign,gfloat yalign);extern
void gtk_misc_get_alignment (GtkMisc *misc,gfloat *xalign,gfloat *yalign);extern
void gtk_misc_set_padding (GtkMisc *misc,gint xpad,gint ypad);extern
void gtk_misc_get_padding (GtkMisc *misc,gint *xpad,gint *ypad);extern
GType gtk_menu_shell_get_type (void) ;
extern
void gtk_menu_shell_append (GtkMenuShell *menu_shell,GtkWidget *child);
extern
void gtk_menu_shell_prepend (GtkMenuShell *menu_shell,GtkWidget *child);
extern
void gtk_menu_shell_insert (GtkMenuShell *menu_shell,GtkWidget *child,gint position);
extern
void gtk_menu_shell_deactivate (GtkMenuShell *menu_shell);
extern
void gtk_menu_shell_select_item (GtkMenuShell *menu_shell,GtkWidget *menu_item);
extern
void gtk_menu_shell_deselect (GtkMenuShell *menu_shell);
extern
void gtk_menu_shell_activate_item (GtkMenuShell *menu_shell,GtkWidget *menu_item,gboolean force_deactivate);
extern
void gtk_menu_shell_select_first (GtkMenuShell *menu_shell,gboolean search_sensitive);
extern
void gtk_menu_shell_cancel (GtkMenuShell *menu_shell);
extern
gboolean gtk_menu_shell_get_take_focus (GtkMenuShell *menu_shell);
extern
void gtk_menu_shell_set_take_focus (GtkMenuShell *menu_shell,gboolean take_focus);
extern
GtkWidget *gtk_menu_shell_get_selected_item (GtkMenuShell *menu_shell);
extern
GtkWidget *gtk_menu_shell_get_parent_shell (GtkMenuShell *menu_shell);
extern
void gtk_menu_shell_bind_model (GtkMenuShell *menu_shell,GMenuModel *model,const gchar *action_namespace,gboolean with_separators);extern
GType gtk_menu_get_type (void) ;
extern
GtkWidget* gtk_menu_new (void);
extern
GtkWidget* gtk_menu_new_from_model (GMenuModel *model);extern
void gtk_menu_popup (GtkMenu *menu,GtkWidget *parent_menu_shell,GtkWidget *parent_menu_item,GtkMenuPositionFunc func,gpointer data,guint button,guint32 activate_time);extern
void gtk_menu_popup_for_device (GtkMenu *menu,GdkDevice *device,GtkWidget *parent_menu_shell,GtkWidget *parent_menu_item,GtkMenuPositionFunc func,gpointer data,GDestroyNotify destroy,guint button,guint32 activate_time);
extern
void gtk_menu_popup_at_rect (GtkMenu *menu,GdkWindow *rect_window,const GdkRectangle *rect,GdkGravity rect_anchor,GdkGravity menu_anchor,const GdkEvent *trigger_event);
extern
void gtk_menu_popup_at_widget (GtkMenu *menu,GtkWidget *widget,GdkGravity widget_anchor,GdkGravity menu_anchor,const GdkEvent *trigger_event);
extern
void gtk_menu_popup_at_pointer (GtkMenu *menu,const GdkEvent *trigger_event);
extern
void gtk_menu_reposition (GtkMenu *menu);
extern
void gtk_menu_popdown (GtkMenu *menu);
extern
GtkWidget* gtk_menu_get_active (GtkMenu *menu);
extern
void gtk_menu_set_active (GtkMenu *menu,guint index);
extern
void gtk_menu_set_accel_group (GtkMenu *menu,GtkAccelGroup *accel_group);
extern
GtkAccelGroup* gtk_menu_get_accel_group (GtkMenu *menu);
extern
void gtk_menu_set_accel_path (GtkMenu *menu,const gchar *accel_path);
extern
const gchar* gtk_menu_get_accel_path (GtkMenu *menu);
extern
void gtk_menu_attach_to_widget (GtkMenu *menu,GtkWidget *attach_widget,GtkMenuDetachFunc detacher);
extern
void gtk_menu_detach (GtkMenu *menu);
extern
GtkWidget* gtk_menu_get_attach_widget (GtkMenu *menu);extern
void gtk_menu_set_tearoff_state (GtkMenu *menu,gboolean torn_off);extern
gboolean gtk_menu_get_tearoff_state (GtkMenu *menu);extern
void gtk_menu_set_title (GtkMenu *menu,const gchar *title);extern
const gchar * gtk_menu_get_title (GtkMenu *menu);
extern
void gtk_menu_reorder_child (GtkMenu *menu,GtkWidget *child,gint position);
extern
void gtk_menu_set_screen (GtkMenu *menu,GdkScreen *screen);
extern
void gtk_menu_attach (GtkMenu *menu,GtkWidget *child,guint left_attach,guint right_attach,guint top_attach,guint bottom_attach);
extern
void gtk_menu_set_monitor (GtkMenu *menu,gint monitor_num);
extern
gint gtk_menu_get_monitor (GtkMenu *menu);
extern
void gtk_menu_place_on_monitor (GtkMenu *menu,GdkMonitor *monitor);
extern
GList* gtk_menu_get_for_attach_widget (GtkWidget *widget);
extern
void gtk_menu_set_reserve_toggle_size (GtkMenu *menu,gboolean reserve_toggle_size);
extern
gboolean gtk_menu_get_reserve_toggle_size (GtkMenu *menu);extern
GType gtk_label_get_type (void) ;
extern
GtkWidget* gtk_label_new (const gchar *str);
extern
GtkWidget* gtk_label_new_with_mnemonic (const gchar *str);
extern
void gtk_label_set_text (GtkLabel *label,const gchar *str);
extern
const gchar* gtk_label_get_text (GtkLabel *label);
extern
void gtk_label_set_attributes (GtkLabel *label,PangoAttrList *attrs);
extern
PangoAttrList *gtk_label_get_attributes (GtkLabel *label);
extern
void gtk_label_set_label (GtkLabel *label,const gchar *str);
extern
const gchar * gtk_label_get_label (GtkLabel *label);
extern
void gtk_label_set_markup (GtkLabel *label,const gchar *str);
extern
void gtk_label_set_use_markup (GtkLabel *label,gboolean setting);
extern
gboolean gtk_label_get_use_markup (GtkLabel *label);
extern
void gtk_label_set_use_underline (GtkLabel *label,gboolean setting);
extern
gboolean gtk_label_get_use_underline (GtkLabel *label);
extern
void gtk_label_set_markup_with_mnemonic (GtkLabel *label,const gchar *str);
extern
guint gtk_label_get_mnemonic_keyval (GtkLabel *label);
extern
void gtk_label_set_mnemonic_widget (GtkLabel *label,GtkWidget *widget);
extern
GtkWidget *gtk_label_get_mnemonic_widget (GtkLabel *label);
extern
void gtk_label_set_text_with_mnemonic (GtkLabel *label,const gchar *str);
extern
void gtk_label_set_justify (GtkLabel *label,GtkJustification jtype);
extern
GtkJustification gtk_label_get_justify (GtkLabel *label);
extern
void gtk_label_set_ellipsize (GtkLabel *label,PangoEllipsizeMode mode);
extern
PangoEllipsizeMode gtk_label_get_ellipsize (GtkLabel *label);
extern
void gtk_label_set_width_chars (GtkLabel *label,gint n_chars);
extern
gint gtk_label_get_width_chars (GtkLabel *label);
extern
void gtk_label_set_max_width_chars (GtkLabel *label,gint n_chars);
extern
gint gtk_label_get_max_width_chars (GtkLabel *label);
extern
void gtk_label_set_lines (GtkLabel *label,gint lines);
extern
gint gtk_label_get_lines (GtkLabel *label);
extern
void gtk_label_set_pattern (GtkLabel *label,const gchar *pattern);
extern
void gtk_label_set_line_wrap (GtkLabel *label,gboolean wrap);
extern
gboolean gtk_label_get_line_wrap (GtkLabel *label);
extern
void gtk_label_set_line_wrap_mode (GtkLabel *label,PangoWrapMode wrap_mode);
extern
PangoWrapMode gtk_label_get_line_wrap_mode (GtkLabel *label);
extern
void gtk_label_set_selectable (GtkLabel *label,gboolean setting);
extern
gboolean gtk_label_get_selectable (GtkLabel *label);
extern
void gtk_label_set_angle (GtkLabel *label,gdouble angle);
extern
gdouble gtk_label_get_angle (GtkLabel *label);
extern
void gtk_label_select_region (GtkLabel *label,gint start_offset,gint end_offset);
extern
gboolean gtk_label_get_selection_bounds (GtkLabel *label,gint *start,gint *end);
extern
PangoLayout *gtk_label_get_layout (GtkLabel *label);
extern
void gtk_label_get_layout_offsets (GtkLabel *label,gint *x,gint *y);
extern
void gtk_label_set_single_line_mode (GtkLabel *label,gboolean single_line_mode);
extern
gboolean gtk_label_get_single_line_mode (GtkLabel *label);
extern
const gchar *gtk_label_get_current_uri (GtkLabel *label);
extern
void gtk_label_set_track_visited_links (GtkLabel *label,gboolean track_links);
extern
gboolean gtk_label_get_track_visited_links (GtkLabel *label);
extern
void gtk_label_set_xalign (GtkLabel *label,gfloat xalign);
extern
gfloat gtk_label_get_xalign (GtkLabel *label);
extern
void gtk_label_set_yalign (GtkLabel *label,gfloat yalign);
extern
gfloat gtk_label_get_yalign (GtkLabel *label);extern
GType gtk_accel_label_get_type (void) ;
extern
GtkWidget* gtk_accel_label_new (const gchar *string);
extern
GtkWidget* gtk_accel_label_get_accel_widget (GtkAccelLabel *accel_label);
extern
guint gtk_accel_label_get_accel_width (GtkAccelLabel *accel_label);
extern
void gtk_accel_label_set_accel_widget (GtkAccelLabel *accel_label,GtkWidget *accel_widget);
extern
void gtk_accel_label_set_accel_closure (GtkAccelLabel *accel_label,GClosure *accel_closure);
extern
gboolean gtk_accel_label_refetch (GtkAccelLabel *accel_label);
extern
void gtk_accel_label_set_accel (GtkAccelLabel *accel_label,guint accelerator_key,GdkModifierType accelerator_mods);
extern
void gtk_accel_label_get_accel (GtkAccelLabel *accel_label,guint *accelerator_key,GdkModifierType *accelerator_mods);extern
void gtk_accel_map_add_entry (const gchar *accel_path,guint accel_key,GdkModifierType accel_mods);
extern
gboolean gtk_accel_map_lookup_entry (const gchar *accel_path,GtkAccelKey *key);
extern
gboolean gtk_accel_map_change_entry (const gchar *accel_path,guint accel_key,GdkModifierType accel_mods,gboolean replace);
extern
void gtk_accel_map_load (const gchar *file_name);
extern
void gtk_accel_map_save (const gchar *file_name);
extern
void gtk_accel_map_foreach (gpointer data,GtkAccelMapForeach foreach_func);
extern
void gtk_accel_map_load_fd (gint fd);
extern
void gtk_accel_map_load_scanner (GScanner *scanner);
extern
void gtk_accel_map_save_fd (gint fd);
extern
void gtk_accel_map_lock_path (const gchar *accel_path);
extern
void gtk_accel_map_unlock_path (const gchar *accel_path);
extern
void gtk_accel_map_add_filter (const gchar *filter_pattern);
extern
void gtk_accel_map_foreach_unfiltered (gpointer data,GtkAccelMapForeach foreach_func);
extern
GType gtk_accel_map_get_type (void) ;
extern
GtkAccelMap *gtk_accel_map_get (void);extern
GType gtk_accessible_get_type (void) ;
extern
void gtk_accessible_set_widget (GtkAccessible *accessible,GtkWidget *widget);
extern
GtkWidget *gtk_accessible_get_widget (GtkAccessible *accessible);extern
void gtk_accessible_connect_widget_destroyed (GtkAccessible *accessible);extern
GType gtk_actionable_get_type (void) ;
extern
const gchar * gtk_actionable_get_action_name (GtkActionable *actionable);
extern
void gtk_actionable_set_action_name (GtkActionable *actionable,const gchar *action_name);
extern
GVariant * gtk_actionable_get_action_target_value (GtkActionable *actionable);
extern
void gtk_actionable_set_action_target_value (GtkActionable *actionable,GVariant *target_value);
extern
void gtk_actionable_set_action_target (GtkActionable *actionable,const gchar *format_string,...);
extern
void gtk_actionable_set_detailed_action_name (GtkActionable *actionable,const gchar *detailed_action_name);extern
GType gtk_action_bar_get_type (void) ;
extern
GtkWidget *gtk_action_bar_new (void);
extern
GtkWidget *gtk_action_bar_get_center_widget (GtkActionBar *action_bar);
extern
void gtk_action_bar_set_center_widget (GtkActionBar *action_bar,GtkWidget *center_widget);
extern
void gtk_action_bar_pack_start (GtkActionBar *action_bar,GtkWidget *child);
extern
void gtk_action_bar_pack_end (GtkActionBar *action_bar,GtkWidget *child);extern
GType gtk_adjustment_get_type (void) ;
extern
GtkAdjustment* gtk_adjustment_new (gdouble value,gdouble lower,gdouble upper,gdouble step_increment,gdouble page_increment,gdouble page_size);extern
void gtk_adjustment_changed (GtkAdjustment *adjustment);extern
void gtk_adjustment_value_changed (GtkAdjustment *adjustment);
extern
void gtk_adjustment_clamp_page (GtkAdjustment *adjustment,gdouble lower,gdouble upper);
extern
gdouble gtk_adjustment_get_value (GtkAdjustment *adjustment);
extern
void gtk_adjustment_set_value (GtkAdjustment *adjustment,gdouble value);
extern
gdouble gtk_adjustment_get_lower (GtkAdjustment *adjustment);
extern
void gtk_adjustment_set_lower (GtkAdjustment *adjustment,gdouble lower);
extern
gdouble gtk_adjustment_get_upper (GtkAdjustment *adjustment);
extern
void gtk_adjustment_set_upper (GtkAdjustment *adjustment,gdouble upper);
extern
gdouble gtk_adjustment_get_step_increment (GtkAdjustment *adjustment);
extern
void gtk_adjustment_set_step_increment (GtkAdjustment *adjustment,gdouble step_increment);
extern
gdouble gtk_adjustment_get_page_increment (GtkAdjustment *adjustment);
extern
void gtk_adjustment_set_page_increment (GtkAdjustment *adjustment,gdouble page_increment);
extern
gdouble gtk_adjustment_get_page_size (GtkAdjustment *adjustment);
extern
void gtk_adjustment_set_page_size (GtkAdjustment *adjustment,gdouble page_size);
extern
void gtk_adjustment_configure (GtkAdjustment *adjustment,gdouble value,gdouble lower,gdouble upper,gdouble step_increment,gdouble page_increment,gdouble page_size);
extern
gdouble gtk_adjustment_get_minimum_increment (GtkAdjustment *adjustment);
extern
GType gtk_app_chooser_get_type (void) ;
extern
GAppInfo * gtk_app_chooser_get_app_info (GtkAppChooser *self);
extern
gchar * gtk_app_chooser_get_content_type (GtkAppChooser *self);
extern
void gtk_app_chooser_refresh (GtkAppChooser *self);extern
GType gtk_app_chooser_dialog_get_type (void) ;
extern
GtkWidget * gtk_app_chooser_dialog_new (GtkWindow *parent,GtkDialogFlags flags,GFile *file);
extern
GtkWidget * gtk_app_chooser_dialog_new_for_content_type (GtkWindow *parent,GtkDialogFlags flags,const gchar *content_type);
extern
GtkWidget * gtk_app_chooser_dialog_get_widget (GtkAppChooserDialog *self);
extern
void gtk_app_chooser_dialog_set_heading (GtkAppChooserDialog *self,const gchar *heading);
extern
const gchar * gtk_app_chooser_dialog_get_heading (GtkAppChooserDialog *self);extern
GType gtk_box_get_type (void) ;
extern
GtkWidget* gtk_box_new (GtkOrientation orientation,gint spacing);
extern
void gtk_box_pack_start (GtkBox *box,GtkWidget *child,gboolean expand,gboolean fill,guint padding);
extern
void gtk_box_pack_end (GtkBox *box,GtkWidget *child,gboolean expand,gboolean fill,guint padding);
extern
void gtk_box_set_homogeneous (GtkBox *box,gboolean homogeneous);
extern
gboolean gtk_box_get_homogeneous (GtkBox *box);
extern
void gtk_box_set_spacing (GtkBox *box,gint spacing);
extern
gint gtk_box_get_spacing (GtkBox *box);
extern
void gtk_box_set_baseline_position (GtkBox *box,GtkBaselinePosition position);
extern
GtkBaselinePosition gtk_box_get_baseline_position (GtkBox *box);
extern
void gtk_box_reorder_child (GtkBox *box,GtkWidget *child,gint position);
extern
void gtk_box_query_child_packing (GtkBox *box,GtkWidget *child,gboolean *expand,gboolean *fill,guint *padding,GtkPackType *pack_type);
extern
void gtk_box_set_child_packing (GtkBox *box,GtkWidget *child,gboolean expand,gboolean fill,guint padding,GtkPackType pack_type);
extern
void gtk_box_set_center_widget (GtkBox *box,GtkWidget *widget);
extern
GtkWidget *gtk_box_get_center_widget (GtkBox *box);extern
GType gtk_app_chooser_widget_get_type (void) ;
extern
GtkWidget * gtk_app_chooser_widget_new (const gchar *content_type);
extern
void gtk_app_chooser_widget_set_show_default (GtkAppChooserWidget *self,gboolean setting);
extern
gboolean gtk_app_chooser_widget_get_show_default (GtkAppChooserWidget *self);
extern
void gtk_app_chooser_widget_set_show_recommended (GtkAppChooserWidget *self,gboolean setting);
extern
gboolean gtk_app_chooser_widget_get_show_recommended (GtkAppChooserWidget *self);
extern
void gtk_app_chooser_widget_set_show_fallback (GtkAppChooserWidget *self,gboolean setting);
extern
gboolean gtk_app_chooser_widget_get_show_fallback (GtkAppChooserWidget *self);
extern
void gtk_app_chooser_widget_set_show_other (GtkAppChooserWidget *self,gboolean setting);
extern
gboolean gtk_app_chooser_widget_get_show_other (GtkAppChooserWidget *self);
extern
void gtk_app_chooser_widget_set_show_all (GtkAppChooserWidget *self,gboolean setting);
extern
gboolean gtk_app_chooser_widget_get_show_all (GtkAppChooserWidget *self);
extern
void gtk_app_chooser_widget_set_default_text (GtkAppChooserWidget *self,const gchar *text);
extern
const gchar * gtk_app_chooser_widget_get_default_text (GtkAppChooserWidget *self);extern
GtkTreePath *gtk_tree_path_new (void);
extern
GtkTreePath *gtk_tree_path_new_from_string (const gchar *path);
extern
GtkTreePath *gtk_tree_path_new_from_indices (gint first_index,...);
extern
GtkTreePath *gtk_tree_path_new_from_indicesv (gint *indices,gsize length);
extern
gchar *gtk_tree_path_to_string (GtkTreePath *path);
extern
GtkTreePath *gtk_tree_path_new_first (void);
extern
void gtk_tree_path_append_index (GtkTreePath *path,gint index_);
extern
void gtk_tree_path_prepend_index (GtkTreePath *path,gint index_);
extern
gint gtk_tree_path_get_depth (GtkTreePath *path);
extern
gint *gtk_tree_path_get_indices (GtkTreePath *path);
extern
gint *gtk_tree_path_get_indices_with_depth (GtkTreePath *path,gint *depth);
extern
void gtk_tree_path_free (GtkTreePath *path);
extern
GtkTreePath *gtk_tree_path_copy (const GtkTreePath *path);
extern
GType gtk_tree_path_get_type (void) ;
extern
gint gtk_tree_path_compare (const GtkTreePath *a,const GtkTreePath *b);
extern
void gtk_tree_path_next (GtkTreePath *path);
extern
gboolean gtk_tree_path_prev (GtkTreePath *path);
extern
gboolean gtk_tree_path_up (GtkTreePath *path);
extern
void gtk_tree_path_down (GtkTreePath *path);
extern
gboolean gtk_tree_path_is_ancestor (GtkTreePath *path,GtkTreePath *descendant);
extern
gboolean gtk_tree_path_is_descendant (GtkTreePath *path,GtkTreePath *ancestor);
extern
GType gtk_tree_row_reference_get_type (void) ;
extern
GtkTreeRowReference *gtk_tree_row_reference_new (GtkTreeModel *model,GtkTreePath *path);
extern
GtkTreeRowReference *gtk_tree_row_reference_new_proxy (GObject *proxy,GtkTreeModel *model,GtkTreePath *path);
extern
GtkTreePath *gtk_tree_row_reference_get_path (GtkTreeRowReference *reference);
extern
GtkTreeModel *gtk_tree_row_reference_get_model (GtkTreeRowReference *reference);
extern
gboolean gtk_tree_row_reference_valid (GtkTreeRowReference *reference);
extern
GtkTreeRowReference *gtk_tree_row_reference_copy (GtkTreeRowReference *reference);
extern
void gtk_tree_row_reference_free (GtkTreeRowReference *reference);
extern
void gtk_tree_row_reference_inserted (GObject *proxy,GtkTreePath *path);
extern
void gtk_tree_row_reference_deleted (GObject *proxy,GtkTreePath *path);
extern
void gtk_tree_row_reference_reordered (GObject *proxy,GtkTreePath *path,GtkTreeIter *iter,gint *new_order);
extern
GtkTreeIter * gtk_tree_iter_copy (GtkTreeIter *iter);
extern
void gtk_tree_iter_free (GtkTreeIter *iter);
extern
GType gtk_tree_iter_get_type (void) ;
extern
GType gtk_tree_model_get_type (void) ;
extern
GtkTreeModelFlags gtk_tree_model_get_flags (GtkTreeModel *tree_model);
extern
gint gtk_tree_model_get_n_columns (GtkTreeModel *tree_model);
extern
GType gtk_tree_model_get_column_type (GtkTreeModel *tree_model,gint index_);
extern
gboolean gtk_tree_model_get_iter (GtkTreeModel *tree_model,GtkTreeIter *iter,GtkTreePath *path);
extern
gboolean gtk_tree_model_get_iter_from_string (GtkTreeModel *tree_model,GtkTreeIter *iter,const gchar *path_string);
extern
gchar * gtk_tree_model_get_string_from_iter (GtkTreeModel *tree_model,GtkTreeIter *iter);
extern
gboolean gtk_tree_model_get_iter_first (GtkTreeModel *tree_model,GtkTreeIter *iter);
extern
GtkTreePath * gtk_tree_model_get_path (GtkTreeModel *tree_model,GtkTreeIter *iter);
extern
void gtk_tree_model_get_value (GtkTreeModel *tree_model,GtkTreeIter *iter,gint column,GValue *value);
extern
gboolean gtk_tree_model_iter_previous (GtkTreeModel *tree_model,GtkTreeIter *iter);
extern
gboolean gtk_tree_model_iter_next (GtkTreeModel *tree_model,GtkTreeIter *iter);
extern
gboolean gtk_tree_model_iter_children (GtkTreeModel *tree_model,GtkTreeIter *iter,GtkTreeIter *parent);
extern
gboolean gtk_tree_model_iter_has_child (GtkTreeModel *tree_model,GtkTreeIter *iter);
extern
gint gtk_tree_model_iter_n_children (GtkTreeModel *tree_model,GtkTreeIter *iter);
extern
gboolean gtk_tree_model_iter_nth_child (GtkTreeModel *tree_model,GtkTreeIter *iter,GtkTreeIter *parent,gint n);
extern
gboolean gtk_tree_model_iter_parent (GtkTreeModel *tree_model,GtkTreeIter *iter,GtkTreeIter *child);
extern
void gtk_tree_model_ref_node (GtkTreeModel *tree_model,GtkTreeIter *iter);
extern
void gtk_tree_model_unref_node (GtkTreeModel *tree_model,GtkTreeIter *iter);
extern
void gtk_tree_model_get (GtkTreeModel *tree_model,GtkTreeIter *iter,...);
extern
void gtk_tree_model_get_valist (GtkTreeModel *tree_model,GtkTreeIter *iter,va_list var_args);
extern
void gtk_tree_model_foreach (GtkTreeModel *model,GtkTreeModelForeachFunc func,gpointer user_data);
extern
void gtk_tree_model_row_changed (GtkTreeModel *tree_model,GtkTreePath *path,GtkTreeIter *iter);
extern
void gtk_tree_model_row_inserted (GtkTreeModel *tree_model,GtkTreePath *path,GtkTreeIter *iter);
extern
void gtk_tree_model_row_has_child_toggled (GtkTreeModel *tree_model,GtkTreePath *path,GtkTreeIter *iter);
extern
void gtk_tree_model_row_deleted (GtkTreeModel *tree_model,GtkTreePath *path);
extern
void gtk_tree_model_rows_reordered (GtkTreeModel *tree_model,GtkTreePath *path,GtkTreeIter *iter,gint *new_order);
extern
void gtk_tree_model_rows_reordered_with_length (GtkTreeModel *tree_model,GtkTreePath *path,GtkTreeIter *iter,gint *new_order,gint length);extern
GType gtk_cell_editable_get_type (void) ;
extern
void gtk_cell_editable_start_editing (GtkCellEditable *cell_editable,GdkEvent *event);
extern
void gtk_cell_editable_editing_done (GtkCellEditable *cell_editable);
extern
void gtk_cell_editable_remove_widget (GtkCellEditable *cell_editable);extern
GType gtk_cell_renderer_get_type (void) ;
extern
GtkSizeRequestMode gtk_cell_renderer_get_request_mode (GtkCellRenderer *cell);
extern
void gtk_cell_renderer_get_preferred_width (GtkCellRenderer *cell,GtkWidget *widget,gint *minimum_size,gint *natural_size);
extern
void gtk_cell_renderer_get_preferred_height_for_width (GtkCellRenderer *cell,GtkWidget *widget,gint width,gint *minimum_height,gint *natural_height);
extern
void gtk_cell_renderer_get_preferred_height (GtkCellRenderer *cell,GtkWidget *widget,gint *minimum_size,gint *natural_size);
extern
void gtk_cell_renderer_get_preferred_width_for_height (GtkCellRenderer *cell,GtkWidget *widget,gint height,gint *minimum_width,gint *natural_width);
extern
void gtk_cell_renderer_get_preferred_size (GtkCellRenderer *cell,GtkWidget *widget,GtkRequisition *minimum_size,GtkRequisition *natural_size);
extern
void gtk_cell_renderer_get_aligned_area (GtkCellRenderer *cell,GtkWidget *widget,GtkCellRendererState flags,const GdkRectangle *cell_area,GdkRectangle *aligned_area);extern
void gtk_cell_renderer_get_size (GtkCellRenderer *cell,GtkWidget *widget,const GdkRectangle *cell_area,gint *x_offset,gint *y_offset,gint *width,gint *height);
extern
void gtk_cell_renderer_render (GtkCellRenderer *cell,cairo_t *cr,GtkWidget *widget,const GdkRectangle *background_area,const GdkRectangle *cell_area,GtkCellRendererState flags);
extern
gboolean gtk_cell_renderer_activate (GtkCellRenderer *cell,GdkEvent *event,GtkWidget *widget,const gchar *path,const GdkRectangle *background_area,const GdkRectangle *cell_area,GtkCellRendererState flags);
extern
GtkCellEditable *gtk_cell_renderer_start_editing (GtkCellRenderer *cell,GdkEvent *event,GtkWidget *widget,const gchar *path,const GdkRectangle *background_area,const GdkRectangle *cell_area,GtkCellRendererState flags);
extern
void gtk_cell_renderer_set_fixed_size (GtkCellRenderer *cell,gint width,gint height);
extern
void gtk_cell_renderer_get_fixed_size (GtkCellRenderer *cell,gint *width,gint *height);
extern
void gtk_cell_renderer_set_alignment (GtkCellRenderer *cell,gfloat xalign,gfloat yalign);
extern
void gtk_cell_renderer_get_alignment (GtkCellRenderer *cell,gfloat *xalign,gfloat *yalign);
extern
void gtk_cell_renderer_set_padding (GtkCellRenderer *cell,gint xpad,gint ypad);
extern
void gtk_cell_renderer_get_padding (GtkCellRenderer *cell,gint *xpad,gint *ypad);
extern
void gtk_cell_renderer_set_visible (GtkCellRenderer *cell,gboolean visible);
extern
gboolean gtk_cell_renderer_get_visible (GtkCellRenderer *cell);
extern
void gtk_cell_renderer_set_sensitive (GtkCellRenderer *cell,gboolean sensitive);
extern
gboolean gtk_cell_renderer_get_sensitive (GtkCellRenderer *cell);
extern
gboolean gtk_cell_renderer_is_activatable (GtkCellRenderer *cell);
extern
void gtk_cell_renderer_stop_editing (GtkCellRenderer *cell,gboolean canceled);
extern
GtkStateFlags gtk_cell_renderer_get_state (GtkCellRenderer *cell,GtkWidget *widget,GtkCellRendererState cell_state);
extern
void gtk_cell_renderer_class_set_accessible_type(GtkCellRendererClass *renderer_class,GType type);extern
GType gtk_tree_sortable_get_type (void) ;
extern
void gtk_tree_sortable_sort_column_changed (GtkTreeSortable *sortable);
extern
gboolean gtk_tree_sortable_get_sort_column_id (GtkTreeSortable *sortable,gint *sort_column_id,GtkSortType *order);
extern
void gtk_tree_sortable_set_sort_column_id (GtkTreeSortable *sortable,gint sort_column_id,GtkSortType order);
extern
void gtk_tree_sortable_set_sort_func (GtkTreeSortable *sortable,gint sort_column_id,GtkTreeIterCompareFunc sort_func,gpointer user_data,GDestroyNotify destroy);
extern
void gtk_tree_sortable_set_default_sort_func (GtkTreeSortable *sortable,GtkTreeIterCompareFunc sort_func,gpointer user_data,GDestroyNotify destroy);
extern
gboolean gtk_tree_sortable_has_default_sort_func (GtkTreeSortable *sortable);extern
GType gtk_cell_area_get_type (void) ;
extern
void gtk_cell_area_add (GtkCellArea *area,GtkCellRenderer *renderer);
extern
void gtk_cell_area_remove (GtkCellArea *area,GtkCellRenderer *renderer);
extern
gboolean gtk_cell_area_has_renderer (GtkCellArea *area,GtkCellRenderer *renderer);
extern
void gtk_cell_area_foreach (GtkCellArea *area,GtkCellCallback callback,gpointer callback_data);
extern
void gtk_cell_area_foreach_alloc (GtkCellArea *area,GtkCellAreaContext *context,GtkWidget *widget,const GdkRectangle *cell_area,const GdkRectangle *background_area,GtkCellAllocCallback callback,gpointer callback_data);
extern
gint gtk_cell_area_event (GtkCellArea *area,GtkCellAreaContext *context,GtkWidget *widget,GdkEvent *event,const GdkRectangle *cell_area,GtkCellRendererState flags);
extern
void gtk_cell_area_render (GtkCellArea *area,GtkCellAreaContext *context,GtkWidget *widget,cairo_t *cr,const GdkRectangle *background_area,const GdkRectangle *cell_area,GtkCellRendererState flags,gboolean paint_focus);
extern
void gtk_cell_area_get_cell_allocation (GtkCellArea *area,GtkCellAreaContext *context,GtkWidget *widget,GtkCellRenderer *renderer,const GdkRectangle *cell_area,GdkRectangle *allocation);
extern
GtkCellRenderer *gtk_cell_area_get_cell_at_position (GtkCellArea *area,GtkCellAreaContext *context,GtkWidget *widget,const GdkRectangle *cell_area,gint x,gint y,GdkRectangle *alloc_area);
extern
GtkCellAreaContext *gtk_cell_area_create_context (GtkCellArea *area);
extern
GtkCellAreaContext *gtk_cell_area_copy_context (GtkCellArea *area,GtkCellAreaContext *context);
extern
GtkSizeRequestMode gtk_cell_area_get_request_mode (GtkCellArea *area);
extern
void gtk_cell_area_get_preferred_width (GtkCellArea *area,GtkCellAreaContext *context,GtkWidget *widget,gint *minimum_width,gint *natural_width);
extern
void gtk_cell_area_get_preferred_height_for_width (GtkCellArea *area,GtkCellAreaContext *context,GtkWidget *widget,gint width,gint *minimum_height,gint *natural_height);
extern
void gtk_cell_area_get_preferred_height (GtkCellArea *area,GtkCellAreaContext *context,GtkWidget *widget,gint *minimum_height,gint *natural_height);
extern
void gtk_cell_area_get_preferred_width_for_height (GtkCellArea *area,GtkCellAreaContext *context,GtkWidget *widget,gint height,gint *minimum_width,gint *natural_width);
extern
const gchar * gtk_cell_area_get_current_path_string (GtkCellArea *area);
extern
void gtk_cell_area_apply_attributes (GtkCellArea *area,GtkTreeModel *tree_model,GtkTreeIter *iter,gboolean is_expander,gboolean is_expanded);
extern
void gtk_cell_area_attribute_connect (GtkCellArea *area,GtkCellRenderer *renderer,const gchar *attribute,gint column);
extern
void gtk_cell_area_attribute_disconnect (GtkCellArea *area,GtkCellRenderer *renderer,const gchar *attribute);
extern
gint gtk_cell_area_attribute_get_column (GtkCellArea *area,GtkCellRenderer *renderer,const gchar *attribute);
extern
void gtk_cell_area_class_install_cell_property (GtkCellAreaClass *aclass,guint property_id,GParamSpec *pspec);
extern
GParamSpec* gtk_cell_area_class_find_cell_property (GtkCellAreaClass *aclass,const gchar *property_name);
extern
GParamSpec** gtk_cell_area_class_list_cell_properties (GtkCellAreaClass *aclass,guint *n_properties);
extern
void gtk_cell_area_add_with_properties (GtkCellArea *area,GtkCellRenderer *renderer,const gchar *first_prop_name,...) ;
extern
void gtk_cell_area_cell_set (GtkCellArea *area,GtkCellRenderer *renderer,const gchar *first_prop_name,...) ;
extern
void gtk_cell_area_cell_get (GtkCellArea *area,GtkCellRenderer *renderer,const gchar *first_prop_name,...) ;
extern
void gtk_cell_area_cell_set_valist (GtkCellArea *area,GtkCellRenderer *renderer,const gchar *first_property_name,va_list var_args);
extern
void gtk_cell_area_cell_get_valist (GtkCellArea *area,GtkCellRenderer *renderer,const gchar *first_property_name,va_list var_args);
extern
void gtk_cell_area_cell_set_property (GtkCellArea *area,GtkCellRenderer *renderer,const gchar *property_name,const GValue *value);
extern
void gtk_cell_area_cell_get_property (GtkCellArea *area,GtkCellRenderer *renderer,const gchar *property_name,GValue *value);
extern
gboolean gtk_cell_area_is_activatable (GtkCellArea *area);
extern
gboolean gtk_cell_area_activate (GtkCellArea *area,GtkCellAreaContext *context,GtkWidget *widget,const GdkRectangle *cell_area,GtkCellRendererState flags,gboolean edit_only);
extern
gboolean gtk_cell_area_focus (GtkCellArea *area,GtkDirectionType direction);
extern
void gtk_cell_area_set_focus_cell (GtkCellArea *area,GtkCellRenderer *renderer);
extern
GtkCellRenderer *gtk_cell_area_get_focus_cell (GtkCellArea *area);
extern
void gtk_cell_area_add_focus_sibling (GtkCellArea *area,GtkCellRenderer *renderer,GtkCellRenderer *sibling);
extern
void gtk_cell_area_remove_focus_sibling (GtkCellArea *area,GtkCellRenderer *renderer,GtkCellRenderer *sibling);
extern
gboolean gtk_cell_area_is_focus_sibling (GtkCellArea *area,GtkCellRenderer *renderer,GtkCellRenderer *sibling);
extern
const GList * gtk_cell_area_get_focus_siblings (GtkCellArea *area,GtkCellRenderer *renderer);
extern
GtkCellRenderer *gtk_cell_area_get_focus_from_sibling (GtkCellArea *area,GtkCellRenderer *renderer);
extern
GtkCellRenderer *gtk_cell_area_get_edited_cell (GtkCellArea *area);
extern
GtkCellEditable *gtk_cell_area_get_edit_widget (GtkCellArea *area);
extern
gboolean gtk_cell_area_activate_cell (GtkCellArea *area,GtkWidget *widget,GtkCellRenderer *renderer,GdkEvent *event,const GdkRectangle *cell_area,GtkCellRendererState flags);
extern
void gtk_cell_area_stop_editing (GtkCellArea *area,gboolean canceled);
extern
void gtk_cell_area_inner_cell_area (GtkCellArea *area,GtkWidget *widget,const GdkRectangle *cell_area,GdkRectangle *inner_area);
extern
void gtk_cell_area_request_renderer (GtkCellArea *area,GtkCellRenderer *renderer,GtkOrientation orientation,GtkWidget *widget,gint for_size,gint *minimum_size,gint *natural_size);extern
GType gtk_tree_view_column_get_type (void) ;
extern
GtkTreeViewColumn *gtk_tree_view_column_new (void);
extern
GtkTreeViewColumn *gtk_tree_view_column_new_with_area (GtkCellArea *area);
extern
GtkTreeViewColumn *gtk_tree_view_column_new_with_attributes (const gchar *title,GtkCellRenderer *cell,...) ;
extern
void gtk_tree_view_column_pack_start (GtkTreeViewColumn *tree_column,GtkCellRenderer *cell,gboolean expand);
extern
void gtk_tree_view_column_pack_end (GtkTreeViewColumn *tree_column,GtkCellRenderer *cell,gboolean expand);
extern
void gtk_tree_view_column_clear (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_add_attribute (GtkTreeViewColumn *tree_column,GtkCellRenderer *cell_renderer,const gchar *attribute,gint column);
extern
void gtk_tree_view_column_set_attributes (GtkTreeViewColumn *tree_column,GtkCellRenderer *cell_renderer,...) ;
extern
void gtk_tree_view_column_set_cell_data_func (GtkTreeViewColumn *tree_column,GtkCellRenderer *cell_renderer,GtkTreeCellDataFunc func,gpointer func_data,GDestroyNotify destroy);
extern
void gtk_tree_view_column_clear_attributes (GtkTreeViewColumn *tree_column,GtkCellRenderer *cell_renderer);
extern
void gtk_tree_view_column_set_spacing (GtkTreeViewColumn *tree_column,gint spacing);
extern
gint gtk_tree_view_column_get_spacing (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_visible (GtkTreeViewColumn *tree_column,gboolean visible);
extern
gboolean gtk_tree_view_column_get_visible (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_resizable (GtkTreeViewColumn *tree_column,gboolean resizable);
extern
gboolean gtk_tree_view_column_get_resizable (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_sizing (GtkTreeViewColumn *tree_column,GtkTreeViewColumnSizing type);
extern
GtkTreeViewColumnSizing gtk_tree_view_column_get_sizing (GtkTreeViewColumn *tree_column);
extern
gint gtk_tree_view_column_get_x_offset (GtkTreeViewColumn *tree_column);
extern
gint gtk_tree_view_column_get_width (GtkTreeViewColumn *tree_column);
extern
gint gtk_tree_view_column_get_fixed_width (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_fixed_width (GtkTreeViewColumn *tree_column,gint fixed_width);
extern
void gtk_tree_view_column_set_min_width (GtkTreeViewColumn *tree_column,gint min_width);
extern
gint gtk_tree_view_column_get_min_width (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_max_width (GtkTreeViewColumn *tree_column,gint max_width);
extern
gint gtk_tree_view_column_get_max_width (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_clicked (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_title (GtkTreeViewColumn *tree_column,const gchar *title);
extern
const gchar * gtk_tree_view_column_get_title (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_expand (GtkTreeViewColumn *tree_column,gboolean expand);
extern
gboolean gtk_tree_view_column_get_expand (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_clickable (GtkTreeViewColumn *tree_column,gboolean clickable);
extern
gboolean gtk_tree_view_column_get_clickable (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_widget (GtkTreeViewColumn *tree_column,GtkWidget *widget);
extern
GtkWidget *gtk_tree_view_column_get_widget (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_alignment (GtkTreeViewColumn *tree_column,gfloat xalign);
extern
gfloat gtk_tree_view_column_get_alignment (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_reorderable (GtkTreeViewColumn *tree_column,gboolean reorderable);
extern
gboolean gtk_tree_view_column_get_reorderable (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_sort_column_id (GtkTreeViewColumn *tree_column,gint sort_column_id);
extern
gint gtk_tree_view_column_get_sort_column_id (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_sort_indicator (GtkTreeViewColumn *tree_column,gboolean setting);
extern
gboolean gtk_tree_view_column_get_sort_indicator (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_set_sort_order (GtkTreeViewColumn *tree_column,GtkSortType order);
extern
GtkSortType gtk_tree_view_column_get_sort_order (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_cell_set_cell_data (GtkTreeViewColumn *tree_column,GtkTreeModel *tree_model,GtkTreeIter *iter,gboolean is_expander,gboolean is_expanded);
extern
void gtk_tree_view_column_cell_get_size (GtkTreeViewColumn *tree_column,const GdkRectangle *cell_area,gint *x_offset,gint *y_offset,gint *width,gint *height);
extern
gboolean gtk_tree_view_column_cell_is_visible (GtkTreeViewColumn *tree_column);
extern
void gtk_tree_view_column_focus_cell (GtkTreeViewColumn *tree_column,GtkCellRenderer *cell);
extern
gboolean gtk_tree_view_column_cell_get_position (GtkTreeViewColumn *tree_column,GtkCellRenderer *cell_renderer,gint *x_offset,gint *width);
extern
void gtk_tree_view_column_queue_resize (GtkTreeViewColumn *tree_column);
extern
GtkWidget *gtk_tree_view_column_get_tree_view (GtkTreeViewColumn *tree_column);
extern
GtkWidget *gtk_tree_view_column_get_button (GtkTreeViewColumn *tree_column);extern
GtkTextAttributes* gtk_text_attributes_new (void);
extern
GtkTextAttributes* gtk_text_attributes_copy (GtkTextAttributes *src);
extern
void gtk_text_attributes_copy_values (GtkTextAttributes *src,GtkTextAttributes *dest);
extern
void gtk_text_attributes_unref (GtkTextAttributes *values);
extern
GtkTextAttributes *gtk_text_attributes_ref (GtkTextAttributes *values);
extern
GType gtk_text_attributes_get_type (void) ;extern
GType gtk_text_child_anchor_get_type (void) ;
extern
GtkTextChildAnchor* gtk_text_child_anchor_new (void);
extern
GList* gtk_text_child_anchor_get_widgets (GtkTextChildAnchor *anchor);
extern
gboolean gtk_text_child_anchor_get_deleted (GtkTextChildAnchor *anchor);extern
GType gtk_text_tag_get_type (void) ;
extern
GtkTextTag *gtk_text_tag_new (const gchar *name);
extern
gint gtk_text_tag_get_priority (GtkTextTag *tag);
extern
void gtk_text_tag_set_priority (GtkTextTag *tag,gint priority);
extern
gboolean gtk_text_tag_event (GtkTextTag *tag,GObject *event_object,GdkEvent *event,const GtkTextIter *iter);
extern
void gtk_text_tag_changed (GtkTextTag *tag,gboolean size_changed);extern
GtkTextBuffer *gtk_text_iter_get_buffer (const GtkTextIter *iter);
extern
GtkTextIter *gtk_text_iter_copy (const GtkTextIter *iter);
extern
void gtk_text_iter_free (GtkTextIter *iter);
extern
void gtk_text_iter_assign (GtkTextIter *iter,const GtkTextIter *other);
extern
GType gtk_text_iter_get_type (void) ;
extern
gint gtk_text_iter_get_offset (const GtkTextIter *iter);
extern
gint gtk_text_iter_get_line (const GtkTextIter *iter);
extern
gint gtk_text_iter_get_line_offset (const GtkTextIter *iter);
extern
gint gtk_text_iter_get_line_index (const GtkTextIter *iter);
extern
gint gtk_text_iter_get_visible_line_offset (const GtkTextIter *iter);
extern
gint gtk_text_iter_get_visible_line_index (const GtkTextIter *iter);
extern
gunichar gtk_text_iter_get_char (const GtkTextIter *iter);
extern
gchar *gtk_text_iter_get_slice (const GtkTextIter *start,const GtkTextIter *end);
extern
gchar *gtk_text_iter_get_text (const GtkTextIter *start,const GtkTextIter *end);
extern
gchar *gtk_text_iter_get_visible_slice (const GtkTextIter *start,const GtkTextIter *end);
extern
gchar *gtk_text_iter_get_visible_text (const GtkTextIter *start,const GtkTextIter *end);
extern
GdkPixbuf* gtk_text_iter_get_pixbuf (const GtkTextIter *iter);
extern
GSList * gtk_text_iter_get_marks (const GtkTextIter *iter);
extern
GtkTextChildAnchor* gtk_text_iter_get_child_anchor (const GtkTextIter *iter);
extern
GSList *gtk_text_iter_get_toggled_tags (const GtkTextIter *iter,gboolean toggled_on);
extern
gboolean gtk_text_iter_starts_tag (const GtkTextIter *iter,GtkTextTag *tag);extern
gboolean gtk_text_iter_begins_tag (const GtkTextIter *iter,GtkTextTag *tag);
extern
gboolean gtk_text_iter_ends_tag (const GtkTextIter *iter,GtkTextTag *tag);
extern
gboolean gtk_text_iter_toggles_tag (const GtkTextIter *iter,GtkTextTag *tag);
extern
gboolean gtk_text_iter_has_tag (const GtkTextIter *iter,GtkTextTag *tag);
extern
GSList *gtk_text_iter_get_tags (const GtkTextIter *iter);
extern
gboolean gtk_text_iter_editable (const GtkTextIter *iter,gboolean default_setting);
extern
gboolean gtk_text_iter_can_insert (const GtkTextIter *iter,gboolean default_editability);
extern
gboolean gtk_text_iter_starts_word (const GtkTextIter *iter);
extern
gboolean gtk_text_iter_ends_word (const GtkTextIter *iter);
extern
gboolean gtk_text_iter_inside_word (const GtkTextIter *iter);
extern
gboolean gtk_text_iter_starts_sentence (const GtkTextIter *iter);
extern
gboolean gtk_text_iter_ends_sentence (const GtkTextIter *iter);
extern
gboolean gtk_text_iter_inside_sentence (const GtkTextIter *iter);
extern
gboolean gtk_text_iter_starts_line (const GtkTextIter *iter);
extern
gboolean gtk_text_iter_ends_line (const GtkTextIter *iter);
extern
gboolean gtk_text_iter_is_cursor_position (const GtkTextIter *iter);
extern
gint gtk_text_iter_get_chars_in_line (const GtkTextIter *iter);
extern
gint gtk_text_iter_get_bytes_in_line (const GtkTextIter *iter);
extern
gboolean gtk_text_iter_get_attributes (const GtkTextIter *iter,GtkTextAttributes *values);
extern
PangoLanguage* gtk_text_iter_get_language (const GtkTextIter *iter);
extern
gboolean gtk_text_iter_is_end (const GtkTextIter *iter);
extern
gboolean gtk_text_iter_is_start (const GtkTextIter *iter);
extern
gboolean gtk_text_iter_forward_char (GtkTextIter *iter);
extern
gboolean gtk_text_iter_backward_char (GtkTextIter *iter);
extern
gboolean gtk_text_iter_forward_chars (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_backward_chars (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_forward_line (GtkTextIter *iter);
extern
gboolean gtk_text_iter_backward_line (GtkTextIter *iter);
extern
gboolean gtk_text_iter_forward_lines (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_backward_lines (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_forward_word_end (GtkTextIter *iter);
extern
gboolean gtk_text_iter_backward_word_start (GtkTextIter *iter);
extern
gboolean gtk_text_iter_forward_word_ends (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_backward_word_starts (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_forward_visible_line (GtkTextIter *iter);
extern
gboolean gtk_text_iter_backward_visible_line (GtkTextIter *iter);
extern
gboolean gtk_text_iter_forward_visible_lines (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_backward_visible_lines (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_forward_visible_word_end (GtkTextIter *iter);
extern
gboolean gtk_text_iter_backward_visible_word_start (GtkTextIter *iter);
extern
gboolean gtk_text_iter_forward_visible_word_ends (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_backward_visible_word_starts (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_forward_sentence_end (GtkTextIter *iter);
extern
gboolean gtk_text_iter_backward_sentence_start (GtkTextIter *iter);
extern
gboolean gtk_text_iter_forward_sentence_ends (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_backward_sentence_starts (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_forward_cursor_position (GtkTextIter *iter);
extern
gboolean gtk_text_iter_backward_cursor_position (GtkTextIter *iter);
extern
gboolean gtk_text_iter_forward_cursor_positions (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_backward_cursor_positions (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_forward_visible_cursor_position (GtkTextIter *iter);
extern
gboolean gtk_text_iter_backward_visible_cursor_position (GtkTextIter *iter);
extern
gboolean gtk_text_iter_forward_visible_cursor_positions (GtkTextIter *iter,gint count);
extern
gboolean gtk_text_iter_backward_visible_cursor_positions (GtkTextIter *iter,gint count);
extern
void gtk_text_iter_set_offset (GtkTextIter *iter,gint char_offset);
extern
void gtk_text_iter_set_line (GtkTextIter *iter,gint line_number);
extern
void gtk_text_iter_set_line_offset (GtkTextIter *iter,gint char_on_line);
extern
void gtk_text_iter_set_line_index (GtkTextIter *iter,gint byte_on_line);
extern
void gtk_text_iter_forward_to_end (GtkTextIter *iter);
extern
gboolean gtk_text_iter_forward_to_line_end (GtkTextIter *iter);
extern
void gtk_text_iter_set_visible_line_offset (GtkTextIter *iter,gint char_on_line);
extern
void gtk_text_iter_set_visible_line_index (GtkTextIter *iter,gint byte_on_line);
extern
gboolean gtk_text_iter_forward_to_tag_toggle (GtkTextIter *iter,GtkTextTag *tag);
extern
gboolean gtk_text_iter_backward_to_tag_toggle (GtkTextIter *iter,GtkTextTag *tag);
extern
gboolean gtk_text_iter_forward_find_char (GtkTextIter *iter,GtkTextCharPredicate pred,gpointer user_data,const GtkTextIter *limit);
extern
gboolean gtk_text_iter_backward_find_char (GtkTextIter *iter,GtkTextCharPredicate pred,gpointer user_data,const GtkTextIter *limit);
extern
gboolean gtk_text_iter_forward_search (const GtkTextIter *iter,const gchar *str,GtkTextSearchFlags flags,GtkTextIter *match_start,GtkTextIter *match_end,const GtkTextIter *limit);
extern
gboolean gtk_text_iter_backward_search (const GtkTextIter *iter,const gchar *str,GtkTextSearchFlags flags,GtkTextIter *match_start,GtkTextIter *match_end,const GtkTextIter *limit);
extern
gboolean gtk_text_iter_equal (const GtkTextIter *lhs,const GtkTextIter *rhs);
extern
gint gtk_text_iter_compare (const GtkTextIter *lhs,const GtkTextIter *rhs);
extern
gboolean gtk_text_iter_in_range (const GtkTextIter *iter,const GtkTextIter *start,const GtkTextIter *end);
extern
void gtk_text_iter_order (GtkTextIter *first,GtkTextIter *second);extern
GType gtk_target_list_get_type (void) ;
extern
GtkTargetList *gtk_target_list_new (const GtkTargetEntry *targets,guint ntargets);
extern
GtkTargetList *gtk_target_list_ref (GtkTargetList *list);
extern
void gtk_target_list_unref (GtkTargetList *list);
extern
void gtk_target_list_add (GtkTargetList *list,GdkAtom target,guint flags,guint info);
extern
void gtk_target_list_add_text_targets (GtkTargetList *list,guint info);
extern
void gtk_target_list_add_rich_text_targets (GtkTargetList *list,guint info,gboolean deserializable,GtkTextBuffer *buffer);
extern
void gtk_target_list_add_image_targets (GtkTargetList *list,guint info,gboolean writable);
extern
void gtk_target_list_add_uri_targets (GtkTargetList *list,guint info);
extern
void gtk_target_list_add_table (GtkTargetList *list,const GtkTargetEntry *targets,guint ntargets);
extern
void gtk_target_list_remove (GtkTargetList *list,GdkAtom target);
extern
gboolean gtk_target_list_find (GtkTargetList *list,GdkAtom target,guint *info);
extern
GtkTargetEntry * gtk_target_table_new_from_list (GtkTargetList *list,gint *n_targets);
extern
void gtk_target_table_free (GtkTargetEntry *targets,gint n_targets);
extern
gboolean gtk_selection_owner_set (GtkWidget *widget,GdkAtom selection,guint32 time_);
extern
gboolean gtk_selection_owner_set_for_display (GdkDisplay *display,GtkWidget *widget,GdkAtom selection,guint32 time_);
extern
void gtk_selection_add_target (GtkWidget *widget,GdkAtom selection,GdkAtom target,guint info);
extern
void gtk_selection_add_targets (GtkWidget *widget,GdkAtom selection,const GtkTargetEntry *targets,guint ntargets);
extern
void gtk_selection_clear_targets (GtkWidget *widget,GdkAtom selection);
extern
gboolean gtk_selection_convert (GtkWidget *widget,GdkAtom selection,GdkAtom target,guint32 time_);
extern
void gtk_selection_remove_all (GtkWidget *widget);
extern
GdkAtom gtk_selection_data_get_selection (const GtkSelectionData *selection_data);
extern
GdkAtom gtk_selection_data_get_target (const GtkSelectionData *selection_data);
extern
GdkAtom gtk_selection_data_get_data_type (const GtkSelectionData *selection_data);
extern
gint gtk_selection_data_get_format (const GtkSelectionData *selection_data);
extern
const guchar *gtk_selection_data_get_data (const GtkSelectionData *selection_data);
extern
gint gtk_selection_data_get_length (const GtkSelectionData *selection_data);
extern
const guchar *gtk_selection_data_get_data_with_length(const GtkSelectionData *selection_data,gint *length);
extern
GdkDisplay *gtk_selection_data_get_display (const GtkSelectionData *selection_data);
extern
void gtk_selection_data_set (GtkSelectionData *selection_data,GdkAtom type,gint format,const guchar *data,gint length);
extern
gboolean gtk_selection_data_set_text (GtkSelectionData *selection_data,const gchar *str,gint len);
extern
guchar * gtk_selection_data_get_text (const GtkSelectionData *selection_data);
extern
gboolean gtk_selection_data_set_pixbuf (GtkSelectionData *selection_data,GdkPixbuf *pixbuf);
extern
GdkPixbuf *gtk_selection_data_get_pixbuf (const GtkSelectionData *selection_data);
extern
gboolean gtk_selection_data_set_uris (GtkSelectionData *selection_data,gchar **uris);
extern
gchar **gtk_selection_data_get_uris (const GtkSelectionData *selection_data);
extern
gboolean gtk_selection_data_get_targets (const GtkSelectionData *selection_data,GdkAtom **targets,gint *n_atoms);
extern
gboolean gtk_selection_data_targets_include_text (const GtkSelectionData *selection_data);
extern
gboolean gtk_selection_data_targets_include_rich_text (const GtkSelectionData *selection_data,GtkTextBuffer *buffer);
extern
gboolean gtk_selection_data_targets_include_image (const GtkSelectionData *selection_data,gboolean writable);
extern
gboolean gtk_selection_data_targets_include_uri (const GtkSelectionData *selection_data);
extern
gboolean gtk_targets_include_text (GdkAtom *targets,gint n_targets);
extern
gboolean gtk_targets_include_rich_text (GdkAtom *targets,gint n_targets,GtkTextBuffer *buffer);
extern
gboolean gtk_targets_include_image (GdkAtom *targets,gint n_targets,gboolean writable);
extern
gboolean gtk_targets_include_uri (GdkAtom *targets,gint n_targets);
extern
GType gtk_selection_data_get_type (void) ;
extern
GtkSelectionData *gtk_selection_data_copy (const GtkSelectionData *data);
extern
void gtk_selection_data_free (GtkSelectionData *data);
extern
GType gtk_target_entry_get_type (void) ;
extern
GtkTargetEntry *gtk_target_entry_new (const gchar *target,guint flags,guint info);
extern
GtkTargetEntry *gtk_target_entry_copy (GtkTargetEntry *data);
extern
void gtk_target_entry_free (GtkTargetEntry *data);
extern
void gtk_drag_get_data (GtkWidget *widget,GdkDragContext *context,GdkAtom target,guint32 time_);
extern
void gtk_drag_finish (GdkDragContext *context,gboolean success,gboolean del,guint32 time_);
extern
GtkWidget *gtk_drag_get_source_widget (GdkDragContext *context);
extern
void gtk_drag_highlight (GtkWidget *widget);
extern
void gtk_drag_unhighlight (GtkWidget *widget);
extern
GdkDragContext *gtk_drag_begin_with_coordinates (GtkWidget *widget,GtkTargetList *targets,GdkDragAction actions,gint button,GdkEvent *event,gint x,gint y);extern
GdkDragContext *gtk_drag_begin (GtkWidget *widget,GtkTargetList *targets,GdkDragAction actions,gint button,GdkEvent *event);
extern
void gtk_drag_cancel (GdkDragContext *context);
extern
void gtk_drag_set_icon_widget (GdkDragContext *context,GtkWidget *widget,gint hot_x,gint hot_y);
extern
void gtk_drag_set_icon_pixbuf (GdkDragContext *context,GdkPixbuf *pixbuf,gint hot_x,gint hot_y);extern
void gtk_drag_set_icon_stock (GdkDragContext *context,const gchar *stock_id,gint hot_x,gint hot_y);
extern
void gtk_drag_set_icon_surface(GdkDragContext *context,cairo_surface_t *surface);
extern
void gtk_drag_set_icon_name (GdkDragContext *context,const gchar *icon_name,gint hot_x,gint hot_y);
extern
void gtk_drag_set_icon_gicon (GdkDragContext *context,GIcon *icon,gint hot_x,gint hot_y);
extern
void gtk_drag_set_icon_default (GdkDragContext *context);
extern
gboolean gtk_drag_check_threshold (GtkWidget *widget,gint start_x,gint start_y,gint current_x,gint current_y);extern
GType gtk_editable_get_type (void) ;
extern
void gtk_editable_select_region (GtkEditable *editable,gint start_pos,gint end_pos);
extern
gboolean gtk_editable_get_selection_bounds (GtkEditable *editable,gint *start_pos,gint *end_pos);
extern
void gtk_editable_insert_text (GtkEditable *editable,const gchar *new_text,gint new_text_length,gint *position);
extern
void gtk_editable_delete_text (GtkEditable *editable,gint start_pos,gint end_pos);
extern
gchar* gtk_editable_get_chars (GtkEditable *editable,gint start_pos,gint end_pos);
extern
void gtk_editable_cut_clipboard (GtkEditable *editable);
extern
void gtk_editable_copy_clipboard (GtkEditable *editable);
extern
void gtk_editable_paste_clipboard (GtkEditable *editable);
extern
void gtk_editable_delete_selection (GtkEditable *editable);
extern
void gtk_editable_set_position (GtkEditable *editable,gint position);
extern
gint gtk_editable_get_position (GtkEditable *editable);
extern
void gtk_editable_set_editable (GtkEditable *editable,gboolean is_editable);
extern
gboolean gtk_editable_get_editable (GtkEditable *editable);extern
GType gtk_im_context_get_type (void) ;
extern
void gtk_im_context_set_client_window (GtkIMContext *context,GdkWindow *window);
extern
void gtk_im_context_get_preedit_string (GtkIMContext *context,gchar **str,PangoAttrList **attrs,gint *cursor_pos);
extern
gboolean gtk_im_context_filter_keypress (GtkIMContext *context,GdkEventKey *event);
extern
void gtk_im_context_focus_in (GtkIMContext *context);
extern
void gtk_im_context_focus_out (GtkIMContext *context);
extern
void gtk_im_context_reset (GtkIMContext *context);
extern
void gtk_im_context_set_cursor_location (GtkIMContext *context,const GdkRectangle *area);
extern
void gtk_im_context_set_use_preedit (GtkIMContext *context,gboolean use_preedit);
extern
void gtk_im_context_set_surrounding (GtkIMContext *context,const gchar *text,gint len,gint cursor_index);
extern
gboolean gtk_im_context_get_surrounding (GtkIMContext *context,gchar **text,gint *cursor_index);
extern
gboolean gtk_im_context_delete_surrounding (GtkIMContext *context,gint offset,gint n_chars);extern
GType gtk_entry_buffer_get_type (void) ;
extern
GtkEntryBuffer* gtk_entry_buffer_new (const gchar *initial_chars,gint n_initial_chars);
extern
gsize gtk_entry_buffer_get_bytes (GtkEntryBuffer *buffer);
extern
guint gtk_entry_buffer_get_length (GtkEntryBuffer *buffer);
extern
const gchar* gtk_entry_buffer_get_text (GtkEntryBuffer *buffer);
extern
void gtk_entry_buffer_set_text (GtkEntryBuffer *buffer,const gchar *chars,gint n_chars);
extern
void gtk_entry_buffer_set_max_length (GtkEntryBuffer *buffer,gint max_length);
extern
gint gtk_entry_buffer_get_max_length (GtkEntryBuffer *buffer);
extern
guint gtk_entry_buffer_insert_text (GtkEntryBuffer *buffer,guint position,const gchar *chars,gint n_chars);
extern
guint gtk_entry_buffer_delete_text (GtkEntryBuffer *buffer,guint position,gint n_chars);
extern
void gtk_entry_buffer_emit_inserted_text (GtkEntryBuffer *buffer,guint position,const gchar *chars,guint n_chars);
extern
void gtk_entry_buffer_emit_deleted_text (GtkEntryBuffer *buffer,guint position,guint n_chars);extern
GType gtk_list_store_get_type (void) ;
extern
GtkListStore *gtk_list_store_new (gint n_columns,...);
extern
GtkListStore *gtk_list_store_newv (gint n_columns,GType *types);
extern
void gtk_list_store_set_column_types (GtkListStore *list_store,gint n_columns,GType *types);
extern
void gtk_list_store_set_value (GtkListStore *list_store,GtkTreeIter *iter,gint column,GValue *value);
extern
void gtk_list_store_set (GtkListStore *list_store,GtkTreeIter *iter,...);
extern
void gtk_list_store_set_valuesv (GtkListStore *list_store,GtkTreeIter *iter,gint *columns,GValue *values,gint n_values);
extern
void gtk_list_store_set_valist (GtkListStore *list_store,GtkTreeIter *iter,va_list var_args);
extern
gboolean gtk_list_store_remove (GtkListStore *list_store,GtkTreeIter *iter);
extern
void gtk_list_store_insert (GtkListStore *list_store,GtkTreeIter *iter,gint position);
extern
void gtk_list_store_insert_before (GtkListStore *list_store,GtkTreeIter *iter,GtkTreeIter *sibling);
extern
void gtk_list_store_insert_after (GtkListStore *list_store,GtkTreeIter *iter,GtkTreeIter *sibling);
extern
void gtk_list_store_insert_with_values (GtkListStore *list_store,GtkTreeIter *iter,gint position,...);
extern
void gtk_list_store_insert_with_valuesv (GtkListStore *list_store,GtkTreeIter *iter,gint position,gint *columns,GValue *values,gint n_values);
extern
void gtk_list_store_prepend (GtkListStore *list_store,GtkTreeIter *iter);
extern
void gtk_list_store_append (GtkListStore *list_store,GtkTreeIter *iter);
extern
void gtk_list_store_clear (GtkListStore *list_store);
extern
gboolean gtk_list_store_iter_is_valid (GtkListStore *list_store,GtkTreeIter *iter);
extern
void gtk_list_store_reorder (GtkListStore *store,gint *new_order);
extern
void gtk_list_store_swap (GtkListStore *store,GtkTreeIter *a,GtkTreeIter *b);
extern
void gtk_list_store_move_after (GtkListStore *store,GtkTreeIter *iter,GtkTreeIter *position);
extern
void gtk_list_store_move_before (GtkListStore *store,GtkTreeIter *iter,GtkTreeIter *position);extern
GType gtk_tree_model_filter_get_type (void) ;
extern
GtkTreeModel *gtk_tree_model_filter_new (GtkTreeModel *child_model,GtkTreePath *root);
extern
void gtk_tree_model_filter_set_visible_func (GtkTreeModelFilter *filter,GtkTreeModelFilterVisibleFunc func,gpointer data,GDestroyNotify destroy);
extern
void gtk_tree_model_filter_set_modify_func (GtkTreeModelFilter *filter,gint n_columns,GType *types,GtkTreeModelFilterModifyFunc func,gpointer data,GDestroyNotify destroy);
extern
void gtk_tree_model_filter_set_visible_column (GtkTreeModelFilter *filter,gint column);
extern
GtkTreeModel *gtk_tree_model_filter_get_model (GtkTreeModelFilter *filter);
extern
gboolean gtk_tree_model_filter_convert_child_iter_to_iter (GtkTreeModelFilter *filter,GtkTreeIter *filter_iter,GtkTreeIter *child_iter);
extern
void gtk_tree_model_filter_convert_iter_to_child_iter (GtkTreeModelFilter *filter,GtkTreeIter *child_iter,GtkTreeIter *filter_iter);
extern
GtkTreePath *gtk_tree_model_filter_convert_child_path_to_path (GtkTreeModelFilter *filter,GtkTreePath *child_path);
extern
GtkTreePath *gtk_tree_model_filter_convert_path_to_child_path (GtkTreeModelFilter *filter,GtkTreePath *filter_path);
extern
void gtk_tree_model_filter_refilter (GtkTreeModelFilter *filter);
extern
void gtk_tree_model_filter_clear_cache (GtkTreeModelFilter *filter);extern
GType gtk_entry_completion_get_type (void) ;
extern
GtkEntryCompletion *gtk_entry_completion_new (void);
extern
GtkEntryCompletion *gtk_entry_completion_new_with_area (GtkCellArea *area);
extern
GtkWidget *gtk_entry_completion_get_entry (GtkEntryCompletion *completion);
extern
void gtk_entry_completion_set_model (GtkEntryCompletion *completion,GtkTreeModel *model);
extern
GtkTreeModel *gtk_entry_completion_get_model (GtkEntryCompletion *completion);
extern
void gtk_entry_completion_set_match_func (GtkEntryCompletion *completion,GtkEntryCompletionMatchFunc func,gpointer func_data,GDestroyNotify func_notify);
extern
void gtk_entry_completion_set_minimum_key_length (GtkEntryCompletion *completion,gint length);
extern
gint gtk_entry_completion_get_minimum_key_length (GtkEntryCompletion *completion);
extern
gchar * gtk_entry_completion_compute_prefix (GtkEntryCompletion *completion,const char *key);
extern
void gtk_entry_completion_complete (GtkEntryCompletion *completion);
extern
void gtk_entry_completion_insert_prefix (GtkEntryCompletion *completion);
extern
void gtk_entry_completion_insert_action_text (GtkEntryCompletion *completion,gint index_,const gchar *text);
extern
void gtk_entry_completion_insert_action_markup (GtkEntryCompletion *completion,gint index_,const gchar *markup);
extern
void gtk_entry_completion_delete_action (GtkEntryCompletion *completion,gint index_);
extern
void gtk_entry_completion_set_inline_completion (GtkEntryCompletion *completion,gboolean inline_completion);
extern
gboolean gtk_entry_completion_get_inline_completion (GtkEntryCompletion *completion);
extern
void gtk_entry_completion_set_inline_selection (GtkEntryCompletion *completion,gboolean inline_selection);
extern
gboolean gtk_entry_completion_get_inline_selection (GtkEntryCompletion *completion);
extern
void gtk_entry_completion_set_popup_completion (GtkEntryCompletion *completion,gboolean popup_completion);
extern
gboolean gtk_entry_completion_get_popup_completion (GtkEntryCompletion *completion);
extern
void gtk_entry_completion_set_popup_set_width (GtkEntryCompletion *completion,gboolean popup_set_width);
extern
gboolean gtk_entry_completion_get_popup_set_width (GtkEntryCompletion *completion);
extern
void gtk_entry_completion_set_popup_single_match (GtkEntryCompletion *completion,gboolean popup_single_match);
extern
gboolean gtk_entry_completion_get_popup_single_match (GtkEntryCompletion *completion);
extern
const gchar *gtk_entry_completion_get_completion_prefix (GtkEntryCompletion *completion);
extern
void gtk_entry_completion_set_text_column (GtkEntryCompletion *completion,gint column);
extern
gint gtk_entry_completion_get_text_column (GtkEntryCompletion *completion);extern
GType gtk_image_get_type (void) ;
extern
GtkWidget* gtk_image_new (void);
extern
GtkWidget* gtk_image_new_from_file (const gchar *filename);
extern
GtkWidget* gtk_image_new_from_resource (const gchar *resource_path);
extern
GtkWidget* gtk_image_new_from_pixbuf (GdkPixbuf *pixbuf);extern
GtkWidget* gtk_image_new_from_stock (const gchar *stock_id,GtkIconSize size);extern
GtkWidget* gtk_image_new_from_icon_set (GtkIconSet *icon_set,GtkIconSize size);
extern
GtkWidget* gtk_image_new_from_animation (GdkPixbufAnimation *animation);
extern
GtkWidget* gtk_image_new_from_icon_name (const gchar *icon_name,GtkIconSize size);
extern
GtkWidget* gtk_image_new_from_gicon (GIcon *icon,GtkIconSize size);
extern
GtkWidget* gtk_image_new_from_surface (cairo_surface_t *surface);
extern
void gtk_image_clear (GtkImage *image);
extern
void gtk_image_set_from_file (GtkImage *image,const gchar *filename);
extern
void gtk_image_set_from_resource (GtkImage *image,const gchar *resource_path);
extern
void gtk_image_set_from_pixbuf (GtkImage *image,GdkPixbuf *pixbuf);extern
void gtk_image_set_from_stock (GtkImage *image,const gchar *stock_id,GtkIconSize size);extern
void gtk_image_set_from_icon_set (GtkImage *image,GtkIconSet *icon_set,GtkIconSize size);
extern
void gtk_image_set_from_animation (GtkImage *image,GdkPixbufAnimation *animation);
extern
void gtk_image_set_from_icon_name (GtkImage *image,const gchar *icon_name,GtkIconSize size);
extern
void gtk_image_set_from_gicon (GtkImage *image,GIcon *icon,GtkIconSize size);
extern
void gtk_image_set_from_surface (GtkImage *image,cairo_surface_t *surface);
extern
void gtk_image_set_pixel_size (GtkImage *image,gint pixel_size);
extern
GtkImageType gtk_image_get_storage_type (GtkImage *image);
extern
GdkPixbuf* gtk_image_get_pixbuf (GtkImage *image);extern
void gtk_image_get_stock (GtkImage *image,gchar **stock_id,GtkIconSize *size);extern
void gtk_image_get_icon_set (GtkImage *image,GtkIconSet **icon_set,GtkIconSize *size);
extern
GdkPixbufAnimation* gtk_image_get_animation (GtkImage *image);
extern
void gtk_image_get_icon_name (GtkImage *image,const gchar **icon_name,GtkIconSize *size);
extern
void gtk_image_get_gicon (GtkImage *image,GIcon **gicon,GtkIconSize *size);
extern
gint gtk_image_get_pixel_size (GtkImage *image);extern
GType gtk_entry_get_type (void) ;
extern
GtkWidget* gtk_entry_new (void);
extern
GtkWidget* gtk_entry_new_with_buffer (GtkEntryBuffer *buffer);
extern
GtkEntryBuffer* gtk_entry_get_buffer (GtkEntry *entry);
extern
void gtk_entry_set_buffer (GtkEntry *entry,GtkEntryBuffer *buffer);
extern
void gtk_entry_get_text_area (GtkEntry *entry,GdkRectangle *text_area);
extern
void gtk_entry_set_visibility (GtkEntry *entry,gboolean visible);
extern
gboolean gtk_entry_get_visibility (GtkEntry *entry);
extern
void gtk_entry_set_invisible_char (GtkEntry *entry,gunichar ch);
extern
gunichar gtk_entry_get_invisible_char (GtkEntry *entry);
extern
void gtk_entry_unset_invisible_char (GtkEntry *entry);
extern
void gtk_entry_set_has_frame (GtkEntry *entry,gboolean setting);
extern
gboolean gtk_entry_get_has_frame (GtkEntry *entry);extern
void gtk_entry_set_inner_border (GtkEntry *entry,const GtkBorder *border);extern
const GtkBorder* gtk_entry_get_inner_border (GtkEntry *entry);
extern
void gtk_entry_set_overwrite_mode (GtkEntry *entry,gboolean overwrite);
extern
gboolean gtk_entry_get_overwrite_mode (GtkEntry *entry);
extern
void gtk_entry_set_max_length (GtkEntry *entry,gint max);
extern
gint gtk_entry_get_max_length (GtkEntry *entry);
extern
guint16 gtk_entry_get_text_length (GtkEntry *entry);
extern
void gtk_entry_set_activates_default (GtkEntry *entry,gboolean setting);
extern
gboolean gtk_entry_get_activates_default (GtkEntry *entry);
extern
void gtk_entry_set_width_chars (GtkEntry *entry,gint n_chars);
extern
gint gtk_entry_get_width_chars (GtkEntry *entry);
extern
void gtk_entry_set_max_width_chars (GtkEntry *entry,gint n_chars);
extern
gint gtk_entry_get_max_width_chars (GtkEntry *entry);
extern
void gtk_entry_set_text (GtkEntry *entry,const gchar *text);
extern
const gchar* gtk_entry_get_text (GtkEntry *entry);
extern
PangoLayout* gtk_entry_get_layout (GtkEntry *entry);
extern
void gtk_entry_get_layout_offsets (GtkEntry *entry,gint *x,gint *y);
extern
void gtk_entry_set_alignment (GtkEntry *entry,gfloat xalign);
extern
gfloat gtk_entry_get_alignment (GtkEntry *entry);
extern
void gtk_entry_set_completion (GtkEntry *entry,GtkEntryCompletion *completion);
extern
GtkEntryCompletion *gtk_entry_get_completion (GtkEntry *entry);
extern
gint gtk_entry_layout_index_to_text_index (GtkEntry *entry,gint layout_index);
extern
gint gtk_entry_text_index_to_layout_index (GtkEntry *entry,gint text_index);
extern
void gtk_entry_set_cursor_hadjustment (GtkEntry *entry,GtkAdjustment *adjustment);
extern
GtkAdjustment* gtk_entry_get_cursor_hadjustment (GtkEntry *entry);
extern
void gtk_entry_set_progress_fraction (GtkEntry *entry,gdouble fraction);
extern
gdouble gtk_entry_get_progress_fraction (GtkEntry *entry);
extern
void gtk_entry_set_progress_pulse_step (GtkEntry *entry,gdouble fraction);
extern
gdouble gtk_entry_get_progress_pulse_step (GtkEntry *entry);
extern
void gtk_entry_progress_pulse (GtkEntry *entry);
extern
const gchar* gtk_entry_get_placeholder_text (GtkEntry *entry);
extern
void gtk_entry_set_placeholder_text (GtkEntry *entry,const gchar *text);
extern
void gtk_entry_set_icon_from_pixbuf (GtkEntry *entry,GtkEntryIconPosition icon_pos,GdkPixbuf *pixbuf);extern
void gtk_entry_set_icon_from_stock (GtkEntry *entry,GtkEntryIconPosition icon_pos,const gchar *stock_id);
extern
void gtk_entry_set_icon_from_icon_name (GtkEntry *entry,GtkEntryIconPosition icon_pos,const gchar *icon_name);
extern
void gtk_entry_set_icon_from_gicon (GtkEntry *entry,GtkEntryIconPosition icon_pos,GIcon *icon);
extern
GtkImageType gtk_entry_get_icon_storage_type (GtkEntry *entry,GtkEntryIconPosition icon_pos);
extern
GdkPixbuf* gtk_entry_get_icon_pixbuf (GtkEntry *entry,GtkEntryIconPosition icon_pos);extern
const gchar* gtk_entry_get_icon_stock (GtkEntry *entry,GtkEntryIconPosition icon_pos);
extern
const gchar* gtk_entry_get_icon_name (GtkEntry *entry,GtkEntryIconPosition icon_pos);
extern
GIcon* gtk_entry_get_icon_gicon (GtkEntry *entry,GtkEntryIconPosition icon_pos);
extern
void gtk_entry_set_icon_activatable (GtkEntry *entry,GtkEntryIconPosition icon_pos,gboolean activatable);
extern
gboolean gtk_entry_get_icon_activatable (GtkEntry *entry,GtkEntryIconPosition icon_pos);
extern
void gtk_entry_set_icon_sensitive (GtkEntry *entry,GtkEntryIconPosition icon_pos,gboolean sensitive);
extern
gboolean gtk_entry_get_icon_sensitive (GtkEntry *entry,GtkEntryIconPosition icon_pos);
extern
gint gtk_entry_get_icon_at_pos (GtkEntry *entry,gint x,gint y);
extern
void gtk_entry_set_icon_tooltip_text (GtkEntry *entry,GtkEntryIconPosition icon_pos,const gchar *tooltip);
extern
gchar * gtk_entry_get_icon_tooltip_text (GtkEntry *entry,GtkEntryIconPosition icon_pos);
extern
void gtk_entry_set_icon_tooltip_markup (GtkEntry *entry,GtkEntryIconPosition icon_pos,const gchar *tooltip);
extern
gchar * gtk_entry_get_icon_tooltip_markup (GtkEntry *entry,GtkEntryIconPosition icon_pos);
extern
void gtk_entry_set_icon_drag_source (GtkEntry *entry,GtkEntryIconPosition icon_pos,GtkTargetList *target_list,GdkDragAction actions);
extern
gint gtk_entry_get_current_icon_drag_source (GtkEntry *entry);
extern
void gtk_entry_get_icon_area (GtkEntry *entry,GtkEntryIconPosition icon_pos,GdkRectangle *icon_area);
extern
gboolean gtk_entry_im_context_filter_keypress (GtkEntry *entry,GdkEventKey *event);
extern
void gtk_entry_reset_im_context (GtkEntry *entry);
extern
void gtk_entry_set_input_purpose (GtkEntry *entry,GtkInputPurpose purpose);
extern
GtkInputPurpose gtk_entry_get_input_purpose (GtkEntry *entry);
extern
void gtk_entry_set_input_hints (GtkEntry *entry,GtkInputHints hints);
extern
GtkInputHints gtk_entry_get_input_hints (GtkEntry *entry);
extern
void gtk_entry_set_attributes (GtkEntry *entry,PangoAttrList *attrs);
extern
PangoAttrList *gtk_entry_get_attributes (GtkEntry *entry);
extern
void gtk_entry_set_tabs (GtkEntry *entry,PangoTabArray *tabs);
extern
PangoTabArray *gtk_entry_get_tabs (GtkEntry *entry);
extern
void gtk_entry_grab_focus_without_selecting (GtkEntry *entry);extern
GType gtk_tree_view_get_type (void) ;
extern
GtkWidget *gtk_tree_view_new (void);
extern
GtkWidget *gtk_tree_view_new_with_model (GtkTreeModel *model);
extern
GtkTreeModel *gtk_tree_view_get_model (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_model (GtkTreeView *tree_view,GtkTreeModel *model);
extern
GtkTreeSelection *gtk_tree_view_get_selection (GtkTreeView *tree_view);extern
GtkAdjustment *gtk_tree_view_get_hadjustment (GtkTreeView *tree_view);extern
void gtk_tree_view_set_hadjustment (GtkTreeView *tree_view,GtkAdjustment *adjustment);extern
GtkAdjustment *gtk_tree_view_get_vadjustment (GtkTreeView *tree_view);extern
void gtk_tree_view_set_vadjustment (GtkTreeView *tree_view,GtkAdjustment *adjustment);
extern
gboolean gtk_tree_view_get_headers_visible (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_headers_visible (GtkTreeView *tree_view,gboolean headers_visible);
extern
void gtk_tree_view_columns_autosize (GtkTreeView *tree_view);
extern
gboolean gtk_tree_view_get_headers_clickable (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_headers_clickable (GtkTreeView *tree_view,gboolean setting);extern
void gtk_tree_view_set_rules_hint (GtkTreeView *tree_view,gboolean setting);extern
gboolean gtk_tree_view_get_rules_hint (GtkTreeView *tree_view);
extern
gboolean gtk_tree_view_get_activate_on_single_click (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_activate_on_single_click (GtkTreeView *tree_view,gboolean single);
extern
gint gtk_tree_view_append_column (GtkTreeView *tree_view,GtkTreeViewColumn *column);
extern
gint gtk_tree_view_remove_column (GtkTreeView *tree_view,GtkTreeViewColumn *column);
extern
gint gtk_tree_view_insert_column (GtkTreeView *tree_view,GtkTreeViewColumn *column,gint position);
extern
gint gtk_tree_view_insert_column_with_attributes (GtkTreeView *tree_view,gint position,const gchar *title,GtkCellRenderer *cell,...) ;
extern
gint gtk_tree_view_insert_column_with_data_func (GtkTreeView *tree_view,gint position,const gchar *title,GtkCellRenderer *cell,GtkTreeCellDataFunc func,gpointer data,GDestroyNotify dnotify);
extern
guint gtk_tree_view_get_n_columns (GtkTreeView *tree_view);
extern
GtkTreeViewColumn *gtk_tree_view_get_column (GtkTreeView *tree_view,gint n);
extern
GList *gtk_tree_view_get_columns (GtkTreeView *tree_view);
extern
void gtk_tree_view_move_column_after (GtkTreeView *tree_view,GtkTreeViewColumn *column,GtkTreeViewColumn *base_column);
extern
void gtk_tree_view_set_expander_column (GtkTreeView *tree_view,GtkTreeViewColumn *column);
extern
GtkTreeViewColumn *gtk_tree_view_get_expander_column (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_column_drag_function (GtkTreeView *tree_view,GtkTreeViewColumnDropFunc func,gpointer user_data,GDestroyNotify destroy);
extern
void gtk_tree_view_scroll_to_point (GtkTreeView *tree_view,gint tree_x,gint tree_y);
extern
void gtk_tree_view_scroll_to_cell (GtkTreeView *tree_view,GtkTreePath *path,GtkTreeViewColumn *column,gboolean use_align,gfloat row_align,gfloat col_align);
extern
void gtk_tree_view_row_activated (GtkTreeView *tree_view,GtkTreePath *path,GtkTreeViewColumn *column);
extern
void gtk_tree_view_expand_all (GtkTreeView *tree_view);
extern
void gtk_tree_view_collapse_all (GtkTreeView *tree_view);
extern
void gtk_tree_view_expand_to_path (GtkTreeView *tree_view,GtkTreePath *path);
extern
gboolean gtk_tree_view_expand_row (GtkTreeView *tree_view,GtkTreePath *path,gboolean open_all);
extern
gboolean gtk_tree_view_collapse_row (GtkTreeView *tree_view,GtkTreePath *path);
extern
void gtk_tree_view_map_expanded_rows (GtkTreeView *tree_view,GtkTreeViewMappingFunc func,gpointer data);
extern
gboolean gtk_tree_view_row_expanded (GtkTreeView *tree_view,GtkTreePath *path);
extern
void gtk_tree_view_set_reorderable (GtkTreeView *tree_view,gboolean reorderable);
extern
gboolean gtk_tree_view_get_reorderable (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_cursor (GtkTreeView *tree_view,GtkTreePath *path,GtkTreeViewColumn *focus_column,gboolean start_editing);
extern
void gtk_tree_view_set_cursor_on_cell (GtkTreeView *tree_view,GtkTreePath *path,GtkTreeViewColumn *focus_column,GtkCellRenderer *focus_cell,gboolean start_editing);
extern
void gtk_tree_view_get_cursor (GtkTreeView *tree_view,GtkTreePath **path,GtkTreeViewColumn **focus_column);
extern
GdkWindow *gtk_tree_view_get_bin_window (GtkTreeView *tree_view);
extern
gboolean gtk_tree_view_get_path_at_pos (GtkTreeView *tree_view,gint x,gint y,GtkTreePath **path,GtkTreeViewColumn **column,gint *cell_x,gint *cell_y);
extern
void gtk_tree_view_get_cell_area (GtkTreeView *tree_view,GtkTreePath *path,GtkTreeViewColumn *column,GdkRectangle *rect);
extern
void gtk_tree_view_get_background_area (GtkTreeView *tree_view,GtkTreePath *path,GtkTreeViewColumn *column,GdkRectangle *rect);
extern
void gtk_tree_view_get_visible_rect (GtkTreeView *tree_view,GdkRectangle *visible_rect);
extern
gboolean gtk_tree_view_get_visible_range (GtkTreeView *tree_view,GtkTreePath **start_path,GtkTreePath **end_path);
extern
gboolean gtk_tree_view_is_blank_at_pos (GtkTreeView *tree_view,gint x,gint y,GtkTreePath **path,GtkTreeViewColumn **column,gint *cell_x,gint *cell_y);
extern
void gtk_tree_view_enable_model_drag_source (GtkTreeView *tree_view,GdkModifierType start_button_mask,const GtkTargetEntry *targets,gint n_targets,GdkDragAction actions);
extern
void gtk_tree_view_enable_model_drag_dest (GtkTreeView *tree_view,const GtkTargetEntry *targets,gint n_targets,GdkDragAction actions);
extern
void gtk_tree_view_unset_rows_drag_source (GtkTreeView *tree_view);
extern
void gtk_tree_view_unset_rows_drag_dest (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_drag_dest_row (GtkTreeView *tree_view,GtkTreePath *path,GtkTreeViewDropPosition pos);
extern
void gtk_tree_view_get_drag_dest_row (GtkTreeView *tree_view,GtkTreePath **path,GtkTreeViewDropPosition *pos);
extern
gboolean gtk_tree_view_get_dest_row_at_pos (GtkTreeView *tree_view,gint drag_x,gint drag_y,GtkTreePath **path,GtkTreeViewDropPosition *pos);
extern
cairo_surface_t *gtk_tree_view_create_row_drag_icon (GtkTreeView *tree_view,GtkTreePath *path);
extern
void gtk_tree_view_set_enable_search (GtkTreeView *tree_view,gboolean enable_search);
extern
gboolean gtk_tree_view_get_enable_search (GtkTreeView *tree_view);
extern
gint gtk_tree_view_get_search_column (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_search_column (GtkTreeView *tree_view,gint column);
extern
GtkTreeViewSearchEqualFunc gtk_tree_view_get_search_equal_func (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_search_equal_func (GtkTreeView *tree_view,GtkTreeViewSearchEqualFunc search_equal_func,gpointer search_user_data,GDestroyNotify search_destroy);
extern
GtkEntry *gtk_tree_view_get_search_entry (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_search_entry (GtkTreeView *tree_view,GtkEntry *entry);
extern
GtkTreeViewSearchPositionFunc gtk_tree_view_get_search_position_func (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_search_position_func (GtkTreeView *tree_view,GtkTreeViewSearchPositionFunc func,gpointer data,GDestroyNotify destroy);
extern
void gtk_tree_view_convert_widget_to_tree_coords (GtkTreeView *tree_view,gint wx,gint wy,gint *tx,gint *ty);
extern
void gtk_tree_view_convert_tree_to_widget_coords (GtkTreeView *tree_view,gint tx,gint ty,gint *wx,gint *wy);
extern
void gtk_tree_view_convert_widget_to_bin_window_coords (GtkTreeView *tree_view,gint wx,gint wy,gint *bx,gint *by);
extern
void gtk_tree_view_convert_bin_window_to_widget_coords (GtkTreeView *tree_view,gint bx,gint by,gint *wx,gint *wy);
extern
void gtk_tree_view_convert_tree_to_bin_window_coords (GtkTreeView *tree_view,gint tx,gint ty,gint *bx,gint *by);
extern
void gtk_tree_view_convert_bin_window_to_tree_coords (GtkTreeView *tree_view,gint bx,gint by,gint *tx,gint *ty);extern
void gtk_tree_view_set_destroy_count_func (GtkTreeView *tree_view,GtkTreeDestroyCountFunc func,gpointer data,GDestroyNotify destroy);
extern
void gtk_tree_view_set_fixed_height_mode (GtkTreeView *tree_view,gboolean enable);
extern
gboolean gtk_tree_view_get_fixed_height_mode (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_hover_selection (GtkTreeView *tree_view,gboolean hover);
extern
gboolean gtk_tree_view_get_hover_selection (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_hover_expand (GtkTreeView *tree_view,gboolean expand);
extern
gboolean gtk_tree_view_get_hover_expand (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_rubber_banding (GtkTreeView *tree_view,gboolean enable);
extern
gboolean gtk_tree_view_get_rubber_banding (GtkTreeView *tree_view);
extern
gboolean gtk_tree_view_is_rubber_banding_active (GtkTreeView *tree_view);
extern
GtkTreeViewRowSeparatorFunc gtk_tree_view_get_row_separator_func (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_row_separator_func (GtkTreeView *tree_view,GtkTreeViewRowSeparatorFunc func,gpointer data,GDestroyNotify destroy);
extern
GtkTreeViewGridLines gtk_tree_view_get_grid_lines (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_grid_lines (GtkTreeView *tree_view,GtkTreeViewGridLines grid_lines);
extern
gboolean gtk_tree_view_get_enable_tree_lines (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_enable_tree_lines (GtkTreeView *tree_view,gboolean enabled);
extern
void gtk_tree_view_set_show_expanders (GtkTreeView *tree_view,gboolean enabled);
extern
gboolean gtk_tree_view_get_show_expanders (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_level_indentation (GtkTreeView *tree_view,gint indentation);
extern
gint gtk_tree_view_get_level_indentation (GtkTreeView *tree_view);
extern
void gtk_tree_view_set_tooltip_row (GtkTreeView *tree_view,GtkTooltip *tooltip,GtkTreePath *path);
extern
void gtk_tree_view_set_tooltip_cell (GtkTreeView *tree_view,GtkTooltip *tooltip,GtkTreePath *path,GtkTreeViewColumn *column,GtkCellRenderer *cell);
extern
gboolean gtk_tree_view_get_tooltip_context(GtkTreeView *tree_view,gint *x,gint *y,gboolean keyboard_tip,GtkTreeModel **model,GtkTreePath **path,GtkTreeIter *iter);
extern
void gtk_tree_view_set_tooltip_column (GtkTreeView *tree_view,gint column);
extern
gint gtk_tree_view_get_tooltip_column (GtkTreeView *tree_view);extern
GType gtk_combo_box_get_type (void) ;
extern
GtkWidget *gtk_combo_box_new (void);
extern
GtkWidget *gtk_combo_box_new_with_area (GtkCellArea *area);
extern
GtkWidget *gtk_combo_box_new_with_area_and_entry (GtkCellArea *area);
extern
GtkWidget *gtk_combo_box_new_with_entry (void);
extern
GtkWidget *gtk_combo_box_new_with_model (GtkTreeModel *model);
extern
GtkWidget *gtk_combo_box_new_with_model_and_entry (GtkTreeModel *model);
extern
gint gtk_combo_box_get_wrap_width (GtkComboBox *combo_box);
extern
void gtk_combo_box_set_wrap_width (GtkComboBox *combo_box,gint width);
extern
gint gtk_combo_box_get_row_span_column (GtkComboBox *combo_box);
extern
void gtk_combo_box_set_row_span_column (GtkComboBox *combo_box,gint row_span);
extern
gint gtk_combo_box_get_column_span_column (GtkComboBox *combo_box);
extern
void gtk_combo_box_set_column_span_column (GtkComboBox *combo_box,gint column_span);extern
gboolean gtk_combo_box_get_add_tearoffs (GtkComboBox *combo_box);extern
void gtk_combo_box_set_add_tearoffs (GtkComboBox *combo_box,gboolean add_tearoffs);extern
const gchar * gtk_combo_box_get_title (GtkComboBox *combo_box);extern
void gtk_combo_box_set_title (GtkComboBox *combo_box,const gchar *title);extern
gboolean gtk_combo_box_get_focus_on_click (GtkComboBox *combo);extern
void gtk_combo_box_set_focus_on_click (GtkComboBox *combo,gboolean focus_on_click);
extern
gint gtk_combo_box_get_active (GtkComboBox *combo_box);
extern
void gtk_combo_box_set_active (GtkComboBox *combo_box,gint index_);
extern
gboolean gtk_combo_box_get_active_iter (GtkComboBox *combo_box,GtkTreeIter *iter);
extern
void gtk_combo_box_set_active_iter (GtkComboBox *combo_box,GtkTreeIter *iter);
extern
void gtk_combo_box_set_model (GtkComboBox *combo_box,GtkTreeModel *model);
extern
GtkTreeModel *gtk_combo_box_get_model (GtkComboBox *combo_box);
extern
GtkTreeViewRowSeparatorFunc gtk_combo_box_get_row_separator_func (GtkComboBox *combo_box);
extern
void gtk_combo_box_set_row_separator_func (GtkComboBox *combo_box,GtkTreeViewRowSeparatorFunc func,gpointer data,GDestroyNotify destroy);
extern
void gtk_combo_box_set_button_sensitivity (GtkComboBox *combo_box,GtkSensitivityType sensitivity);
extern
GtkSensitivityType gtk_combo_box_get_button_sensitivity (GtkComboBox *combo_box);
extern
gboolean gtk_combo_box_get_has_entry (GtkComboBox *combo_box);
extern
void gtk_combo_box_set_entry_text_column (GtkComboBox *combo_box,gint text_column);
extern
gint gtk_combo_box_get_entry_text_column (GtkComboBox *combo_box);
extern
void gtk_combo_box_set_popup_fixed_width (GtkComboBox *combo_box,gboolean fixed);
extern
gboolean gtk_combo_box_get_popup_fixed_width (GtkComboBox *combo_box);
extern
void gtk_combo_box_popup (GtkComboBox *combo_box);
extern
void gtk_combo_box_popup_for_device (GtkComboBox *combo_box,GdkDevice *device);
extern
void gtk_combo_box_popdown (GtkComboBox *combo_box);
extern
AtkObject * gtk_combo_box_get_popup_accessible (GtkComboBox *combo_box);
extern
gint gtk_combo_box_get_id_column (GtkComboBox *combo_box);
extern
void gtk_combo_box_set_id_column (GtkComboBox *combo_box,gint id_column);
extern
const gchar * gtk_combo_box_get_active_id (GtkComboBox *combo_box);
extern
gboolean gtk_combo_box_set_active_id (GtkComboBox *combo_box,const gchar *active_id);extern
GType gtk_app_chooser_button_get_type (void) ;
extern
GtkWidget * gtk_app_chooser_button_new (const gchar *content_type);
extern
void gtk_app_chooser_button_append_separator (GtkAppChooserButton *self);
extern
void gtk_app_chooser_button_append_custom_item (GtkAppChooserButton *self,const gchar *name,const gchar *label,GIcon *icon);
extern
void gtk_app_chooser_button_set_active_custom_item (GtkAppChooserButton *self,const gchar *name);
extern
void gtk_app_chooser_button_set_show_dialog_item (GtkAppChooserButton *self,gboolean setting);
extern
gboolean gtk_app_chooser_button_get_show_dialog_item (GtkAppChooserButton *self);
extern
void gtk_app_chooser_button_set_heading (GtkAppChooserButton *self,const gchar *heading);
extern
const gchar *gtk_app_chooser_button_get_heading (GtkAppChooserButton *self);
extern
void gtk_app_chooser_button_set_show_default_item (GtkAppChooserButton *self,gboolean setting);
extern
gboolean gtk_app_chooser_button_get_show_default_item (GtkAppChooserButton *self);extern
GType gtk_shortcuts_window_get_type (void) ;extern
GType gtk_application_window_get_type (void) ;
extern
GtkWidget * gtk_application_window_new (GtkApplication *application);
extern
void gtk_application_window_set_show_menubar (GtkApplicationWindow *window,gboolean show_menubar);
extern
gboolean gtk_application_window_get_show_menubar (GtkApplicationWindow *window);
extern
guint gtk_application_window_get_id (GtkApplicationWindow *window);
extern
void gtk_application_window_set_help_overlay (GtkApplicationWindow *window,GtkShortcutsWindow *help_overlay);
extern
GtkShortcutsWindow *gtk_application_window_get_help_overlay (GtkApplicationWindow *window);extern
GType gtk_frame_get_type (void) ;
extern
GtkWidget* gtk_frame_new (const gchar *label);
extern
void gtk_frame_set_label (GtkFrame *frame,const gchar *label);
extern
const gchar * gtk_frame_get_label (GtkFrame *frame);
extern
void gtk_frame_set_label_widget (GtkFrame *frame,GtkWidget *label_widget);
extern
GtkWidget *gtk_frame_get_label_widget (GtkFrame *frame);
extern
void gtk_frame_set_label_align (GtkFrame *frame,gfloat xalign,gfloat yalign);
extern
void gtk_frame_get_label_align (GtkFrame *frame,gfloat *xalign,gfloat *yalign);
extern
void gtk_frame_set_shadow_type (GtkFrame *frame,GtkShadowType type);
extern
GtkShadowType gtk_frame_get_shadow_type (GtkFrame *frame);extern
GType gtk_aspect_frame_get_type (void) ;
extern
GtkWidget* gtk_aspect_frame_new (const gchar *label,gfloat xalign,gfloat yalign,gfloat ratio,gboolean obey_child);
extern
void gtk_aspect_frame_set (GtkAspectFrame *aspect_frame,gfloat xalign,gfloat yalign,gfloat ratio,gboolean obey_child);extern
GType gtk_assistant_get_type (void) ;
extern
GtkWidget *gtk_assistant_new (void);
extern
void gtk_assistant_next_page (GtkAssistant *assistant);
extern
void gtk_assistant_previous_page (GtkAssistant *assistant);
extern
gint gtk_assistant_get_current_page (GtkAssistant *assistant);
extern
void gtk_assistant_set_current_page (GtkAssistant *assistant,gint page_num);
extern
gint gtk_assistant_get_n_pages (GtkAssistant *assistant);
extern
GtkWidget *gtk_assistant_get_nth_page (GtkAssistant *assistant,gint page_num);
extern
gint gtk_assistant_prepend_page (GtkAssistant *assistant,GtkWidget *page);
extern
gint gtk_assistant_append_page (GtkAssistant *assistant,GtkWidget *page);
extern
gint gtk_assistant_insert_page (GtkAssistant *assistant,GtkWidget *page,gint position);
extern
void gtk_assistant_remove_page (GtkAssistant *assistant,gint page_num);
extern
void gtk_assistant_set_forward_page_func (GtkAssistant *assistant,GtkAssistantPageFunc page_func,gpointer data,GDestroyNotify destroy);
extern
void gtk_assistant_set_page_type (GtkAssistant *assistant,GtkWidget *page,GtkAssistantPageType type);
extern
GtkAssistantPageType gtk_assistant_get_page_type (GtkAssistant *assistant,GtkWidget *page);
extern
void gtk_assistant_set_page_title (GtkAssistant *assistant,GtkWidget *page,const gchar *title);
extern
const gchar * gtk_assistant_get_page_title (GtkAssistant *assistant,GtkWidget *page);extern
void gtk_assistant_set_page_header_image (GtkAssistant *assistant,GtkWidget *page,GdkPixbuf *pixbuf);extern
GdkPixbuf *gtk_assistant_get_page_header_image (GtkAssistant *assistant,GtkWidget *page);extern
void gtk_assistant_set_page_side_image (GtkAssistant *assistant,GtkWidget *page,GdkPixbuf *pixbuf);extern
GdkPixbuf *gtk_assistant_get_page_side_image (GtkAssistant *assistant,GtkWidget *page);
extern
void gtk_assistant_set_page_complete (GtkAssistant *assistant,GtkWidget *page,gboolean complete);
extern
gboolean gtk_assistant_get_page_complete (GtkAssistant *assistant,GtkWidget *page);
extern
void gtk_assistant_add_action_widget (GtkAssistant *assistant,GtkWidget *child);
extern
void gtk_assistant_remove_action_widget (GtkAssistant *assistant,GtkWidget *child);
extern
void gtk_assistant_update_buttons_state (GtkAssistant *assistant);
extern
void gtk_assistant_commit (GtkAssistant *assistant);
extern
void gtk_assistant_set_page_has_padding (GtkAssistant *assistant,GtkWidget *page,gboolean has_padding);
extern
gboolean gtk_assistant_get_page_has_padding (GtkAssistant *assistant,GtkWidget *page);extern
GType gtk_button_box_get_type (void) ;
extern
GtkWidget * gtk_button_box_new (GtkOrientation orientation);
extern
GtkButtonBoxStyle gtk_button_box_get_layout (GtkButtonBox *widget);
extern
void gtk_button_box_set_layout (GtkButtonBox *widget,GtkButtonBoxStyle layout_style);
extern
gboolean gtk_button_box_get_child_secondary (GtkButtonBox *widget,GtkWidget *child);
extern
void gtk_button_box_set_child_secondary (GtkButtonBox *widget,GtkWidget *child,gboolean is_secondary);
extern
gboolean gtk_button_box_get_child_non_homogeneous (GtkButtonBox *widget,GtkWidget *child);
extern
void gtk_button_box_set_child_non_homogeneous (GtkButtonBox *widget,GtkWidget *child,gboolean non_homogeneous);extern
GtkBindingSet *gtk_binding_set_new (const gchar *set_name);
extern
GtkBindingSet *gtk_binding_set_by_class (gpointer object_class);
extern
GtkBindingSet *gtk_binding_set_find (const gchar *set_name);
extern
gboolean gtk_bindings_activate (GObject *object,guint keyval,GdkModifierType modifiers);
extern
gboolean gtk_bindings_activate_event (GObject *object,GdkEventKey *event);
extern
gboolean gtk_binding_set_activate (GtkBindingSet *binding_set,guint keyval,GdkModifierType modifiers,GObject *object);
extern
void gtk_binding_entry_skip (GtkBindingSet *binding_set,guint keyval,GdkModifierType modifiers);
extern
void gtk_binding_entry_add_signal (GtkBindingSet *binding_set,guint keyval,GdkModifierType modifiers,const gchar *signal_name,guint n_args,...);
extern
void gtk_binding_entry_add_signall (GtkBindingSet *binding_set,guint keyval,GdkModifierType modifiers,const gchar *signal_name,GSList *binding_args);
extern
GTokenType gtk_binding_entry_add_signal_from_string(GtkBindingSet *binding_set,const gchar *signal_desc);
extern
void gtk_binding_entry_remove (GtkBindingSet *binding_set,guint keyval,GdkModifierType modifiers);
extern
GQuark gtk_builder_error_quark (void);extern
GType gtk_builder_get_type (void) ;
extern
GtkBuilder* gtk_builder_new (void);
extern
guint gtk_builder_add_from_file (GtkBuilder *builder,const gchar *filename,GError **error);
extern
guint gtk_builder_add_from_resource (GtkBuilder *builder,const gchar *resource_path,GError **error);
extern
guint gtk_builder_add_from_string (GtkBuilder *builder,const gchar *buffer,gsize length,GError **error);
extern
guint gtk_builder_add_objects_from_file (GtkBuilder *builder,const gchar *filename,gchar **object_ids,GError **error);
extern
guint gtk_builder_add_objects_from_resource(GtkBuilder *builder,const gchar *resource_path,gchar **object_ids,GError **error);
extern
guint gtk_builder_add_objects_from_string (GtkBuilder *builder,const gchar *buffer,gsize length,gchar **object_ids,GError **error);
extern
GObject* gtk_builder_get_object (GtkBuilder *builder,const gchar *name);
extern
GSList* gtk_builder_get_objects (GtkBuilder *builder);
extern
void gtk_builder_expose_object (GtkBuilder *builder,const gchar *name,GObject *object);
extern
void gtk_builder_connect_signals (GtkBuilder *builder,gpointer user_data);
extern
void gtk_builder_connect_signals_full (GtkBuilder *builder,GtkBuilderConnectFunc func,gpointer user_data);
extern
void gtk_builder_set_translation_domain (GtkBuilder *builder,const gchar *domain);
extern
const gchar* gtk_builder_get_translation_domain (GtkBuilder *builder);
extern
GType gtk_builder_get_type_from_name (GtkBuilder *builder,const char *type_name);
extern
gboolean gtk_builder_value_from_string (GtkBuilder *builder,GParamSpec *pspec,const gchar *string,GValue *value,GError **error);
extern
gboolean gtk_builder_value_from_string_type (GtkBuilder *builder,GType type,const gchar *string,GValue *value,GError **error);
extern
GtkBuilder * gtk_builder_new_from_file (const gchar *filename);
extern
GtkBuilder * gtk_builder_new_from_resource (const gchar *resource_path);
extern
GtkBuilder * gtk_builder_new_from_string (const gchar *string,gssize length);
extern
void gtk_builder_add_callback_symbol (GtkBuilder *builder,const gchar *callback_name,GCallback callback_symbol);
extern
void gtk_builder_add_callback_symbols (GtkBuilder *builder,const gchar *first_callback_name,GCallback first_callback_symbol,...) ;
extern
GCallback gtk_builder_lookup_callback_symbol (GtkBuilder *builder,const gchar *callback_name);
extern
void gtk_builder_set_application (GtkBuilder *builder,GtkApplication *application);
extern
GtkApplication * gtk_builder_get_application (GtkBuilder *builder);
extern
guint gtk_builder_extend_with_template (GtkBuilder *builder,GtkWidget *widget,GType template_type, const gchar *buffer,gsize length,GError **error);extern
GType gtk_buildable_get_type (void) ;
extern
void gtk_buildable_set_name (GtkBuildable *buildable,const gchar *name);
extern
const gchar * gtk_buildable_get_name (GtkBuildable *buildable);
extern
void gtk_buildable_add_child (GtkBuildable *buildable,GtkBuilder *builder,GObject *child,const gchar *type);
extern
void gtk_buildable_set_buildable_property (GtkBuildable *buildable,GtkBuilder *builder,const gchar *name,const GValue *value);
extern
GObject * gtk_buildable_construct_child (GtkBuildable *buildable,GtkBuilder *builder,const gchar *name);
extern
gboolean gtk_buildable_custom_tag_start (GtkBuildable *buildable,GtkBuilder *builder,GObject *child,const gchar *tagname,GMarkupParser *parser,gpointer *data);
extern
void gtk_buildable_custom_tag_end (GtkBuildable *buildable,GtkBuilder *builder,GObject *child,const gchar *tagname,gpointer *data);
extern
void gtk_buildable_custom_finished (GtkBuildable *buildable,GtkBuilder *builder,GObject *child,const gchar *tagname,gpointer data);
extern
void gtk_buildable_parser_finished (GtkBuildable *buildable,GtkBuilder *builder);
extern
GObject * gtk_buildable_get_internal_child (GtkBuildable *buildable,GtkBuilder *builder,const gchar *childname);extern
GType gtk_button_get_type (void) ;
extern
GtkWidget* gtk_button_new (void);
extern
GtkWidget* gtk_button_new_with_label (const gchar *label);
extern
GtkWidget* gtk_button_new_from_icon_name (const gchar *icon_name,GtkIconSize size);extern
GtkWidget* gtk_button_new_from_stock (const gchar *stock_id);
extern
GtkWidget* gtk_button_new_with_mnemonic (const gchar *label);
extern
void gtk_button_clicked (GtkButton *button);extern
void gtk_button_pressed (GtkButton *button);extern
void gtk_button_released (GtkButton *button);extern
void gtk_button_enter (GtkButton *button);extern
void gtk_button_leave (GtkButton *button);
extern
void gtk_button_set_relief (GtkButton *button,GtkReliefStyle relief);
extern
GtkReliefStyle gtk_button_get_relief (GtkButton *button);
extern
void gtk_button_set_label (GtkButton *button,const gchar *label);
extern
const gchar * gtk_button_get_label (GtkButton *button);
extern
void gtk_button_set_use_underline (GtkButton *button,gboolean use_underline);
extern
gboolean gtk_button_get_use_underline (GtkButton *button);extern
void gtk_button_set_use_stock (GtkButton *button,gboolean use_stock);extern
gboolean gtk_button_get_use_stock (GtkButton *button);extern
void gtk_button_set_focus_on_click (GtkButton *button,gboolean focus_on_click);extern
gboolean gtk_button_get_focus_on_click (GtkButton *button);extern
void gtk_button_set_alignment (GtkButton *button,gfloat xalign,gfloat yalign);extern
void gtk_button_get_alignment (GtkButton *button,gfloat *xalign,gfloat *yalign);
extern
void gtk_button_set_image (GtkButton *button,GtkWidget *image);
extern
GtkWidget* gtk_button_get_image (GtkButton *button);
extern
void gtk_button_set_image_position (GtkButton *button,GtkPositionType position);
extern
GtkPositionType gtk_button_get_image_position (GtkButton *button);
extern
void gtk_button_set_always_show_image (GtkButton *button,gboolean always_show);
extern
gboolean gtk_button_get_always_show_image (GtkButton *button);
extern
GdkWindow* gtk_button_get_event_window (GtkButton *button);extern
GType gtk_calendar_get_type (void) ;
extern
GtkWidget* gtk_calendar_new (void);
extern
void gtk_calendar_select_month (GtkCalendar *calendar,guint month,guint year);
extern
void gtk_calendar_select_day (GtkCalendar *calendar,guint day);
extern
void gtk_calendar_mark_day (GtkCalendar *calendar,guint day);
extern
void gtk_calendar_unmark_day (GtkCalendar *calendar,guint day);
extern
void gtk_calendar_clear_marks (GtkCalendar *calendar);
extern
void gtk_calendar_set_display_options (GtkCalendar *calendar,GtkCalendarDisplayOptions flags);
extern
GtkCalendarDisplayOptions gtk_calendar_get_display_options (GtkCalendar *calendar);
extern
void gtk_calendar_get_date (GtkCalendar *calendar,guint *year,guint *month,guint *day);
extern
void gtk_calendar_set_detail_func (GtkCalendar *calendar,GtkCalendarDetailFunc func,gpointer data,GDestroyNotify destroy);
extern
void gtk_calendar_set_detail_width_chars (GtkCalendar *calendar,gint chars);
extern
void gtk_calendar_set_detail_height_rows (GtkCalendar *calendar,gint rows);
extern
gint gtk_calendar_get_detail_width_chars (GtkCalendar *calendar);
extern
gint gtk_calendar_get_detail_height_rows (GtkCalendar *calendar);
extern
gboolean gtk_calendar_get_day_is_marked (GtkCalendar *calendar,guint day);extern
GType gtk_cell_area_box_get_type (void) ;
extern
GtkCellArea *gtk_cell_area_box_new (void);
extern
void gtk_cell_area_box_pack_start (GtkCellAreaBox *box,GtkCellRenderer *renderer,gboolean expand,gboolean align,gboolean fixed);
extern
void gtk_cell_area_box_pack_end (GtkCellAreaBox *box,GtkCellRenderer *renderer,gboolean expand,gboolean align,gboolean fixed);
extern
gint gtk_cell_area_box_get_spacing (GtkCellAreaBox *box);
extern
void gtk_cell_area_box_set_spacing (GtkCellAreaBox *box,gint spacing);extern
GType gtk_cell_area_context_get_type (void) ;
extern
GtkCellArea *gtk_cell_area_context_get_area (GtkCellAreaContext *context);
extern
void gtk_cell_area_context_allocate (GtkCellAreaContext *context,gint width,gint height);
extern
void gtk_cell_area_context_reset (GtkCellAreaContext *context);
extern
void gtk_cell_area_context_get_preferred_width (GtkCellAreaContext *context,gint *minimum_width,gint *natural_width);
extern
void gtk_cell_area_context_get_preferred_height (GtkCellAreaContext *context,gint *minimum_height,gint *natural_height);
extern
void gtk_cell_area_context_get_preferred_height_for_width (GtkCellAreaContext *context,gint width,gint *minimum_height,gint *natural_height);
extern
void gtk_cell_area_context_get_preferred_width_for_height (GtkCellAreaContext *context,gint height,gint *minimum_width,gint *natural_width);
extern
void gtk_cell_area_context_get_allocation (GtkCellAreaContext *context,gint *width,gint *height);
extern
void gtk_cell_area_context_push_preferred_width (GtkCellAreaContext *context,gint minimum_width,gint natural_width);
extern
void gtk_cell_area_context_push_preferred_height (GtkCellAreaContext *context,gint minimum_height,gint natural_height);extern
GType gtk_cell_layout_get_type (void) ;
extern
void gtk_cell_layout_pack_start (GtkCellLayout *cell_layout,GtkCellRenderer *cell,gboolean expand);
extern
void gtk_cell_layout_pack_end (GtkCellLayout *cell_layout,GtkCellRenderer *cell,gboolean expand);
extern
GList *gtk_cell_layout_get_cells (GtkCellLayout *cell_layout);
extern
void gtk_cell_layout_clear (GtkCellLayout *cell_layout);
extern
void gtk_cell_layout_set_attributes (GtkCellLayout *cell_layout,GtkCellRenderer *cell,...) ;
extern
void gtk_cell_layout_add_attribute (GtkCellLayout *cell_layout,GtkCellRenderer *cell,const gchar *attribute,gint column);
extern
void gtk_cell_layout_set_cell_data_func (GtkCellLayout *cell_layout,GtkCellRenderer *cell,GtkCellLayoutDataFunc func,gpointer func_data,GDestroyNotify destroy);
extern
void gtk_cell_layout_clear_attributes (GtkCellLayout *cell_layout,GtkCellRenderer *cell);
extern
void gtk_cell_layout_reorder (GtkCellLayout *cell_layout,GtkCellRenderer *cell,gint position);
extern
GtkCellArea *gtk_cell_layout_get_area (GtkCellLayout *cell_layout);extern
GType gtk_cell_renderer_text_get_type (void) ;
extern
GtkCellRenderer *gtk_cell_renderer_text_new (void);
extern
void gtk_cell_renderer_text_set_fixed_height_from_font (GtkCellRendererText *renderer,gint number_of_rows);extern
GType gtk_cell_renderer_accel_get_type (void) ;
extern
GtkCellRenderer *gtk_cell_renderer_accel_new (void);extern
GType gtk_cell_renderer_combo_get_type (void) ;
extern
GtkCellRenderer *gtk_cell_renderer_combo_new (void);extern
GType gtk_cell_renderer_pixbuf_get_type (void) ;
extern
GtkCellRenderer *gtk_cell_renderer_pixbuf_new (void);extern
GType gtk_cell_renderer_progress_get_type (void) ;
extern
GtkCellRenderer* gtk_cell_renderer_progress_new (void);extern
GType gtk_cell_renderer_spin_get_type (void);
extern
GtkCellRenderer *gtk_cell_renderer_spin_new (void);extern
GType gtk_cell_renderer_spinner_get_type (void) ;
extern
GtkCellRenderer *gtk_cell_renderer_spinner_new (void);extern
GType gtk_cell_renderer_toggle_get_type (void) ;
extern
GtkCellRenderer *gtk_cell_renderer_toggle_new (void);
extern
gboolean gtk_cell_renderer_toggle_get_radio (GtkCellRendererToggle *toggle);
extern
void gtk_cell_renderer_toggle_set_radio (GtkCellRendererToggle *toggle,gboolean radio);
extern
gboolean gtk_cell_renderer_toggle_get_active (GtkCellRendererToggle *toggle);
extern
void gtk_cell_renderer_toggle_set_active (GtkCellRendererToggle *toggle,gboolean setting);
extern
gboolean gtk_cell_renderer_toggle_get_activatable (GtkCellRendererToggle *toggle);
extern
void gtk_cell_renderer_toggle_set_activatable (GtkCellRendererToggle *toggle,gboolean setting);extern
GType gtk_cell_view_get_type (void) ;
extern
GtkWidget *gtk_cell_view_new (void);
extern
GtkWidget *gtk_cell_view_new_with_context (GtkCellArea *area,GtkCellAreaContext *context);
extern
GtkWidget *gtk_cell_view_new_with_text (const gchar *text);
extern
GtkWidget *gtk_cell_view_new_with_markup (const gchar *markup);
extern
GtkWidget *gtk_cell_view_new_with_pixbuf (GdkPixbuf *pixbuf);
extern
void gtk_cell_view_set_model (GtkCellView *cell_view,GtkTreeModel *model);
extern
GtkTreeModel *gtk_cell_view_get_model (GtkCellView *cell_view);
extern
void gtk_cell_view_set_displayed_row (GtkCellView *cell_view,GtkTreePath *path);
extern
GtkTreePath *gtk_cell_view_get_displayed_row (GtkCellView *cell_view);
extern
void gtk_cell_view_set_background_rgba (GtkCellView *cell_view,const GdkRGBA *rgba);
extern
gboolean gtk_cell_view_get_draw_sensitive (GtkCellView *cell_view);
extern
void gtk_cell_view_set_draw_sensitive (GtkCellView *cell_view,gboolean draw_sensitive);
extern
gboolean gtk_cell_view_get_fit_model (GtkCellView *cell_view);
extern
void gtk_cell_view_set_fit_model (GtkCellView *cell_view,gboolean fit_model);extern
gboolean gtk_cell_view_get_size_of_row (GtkCellView *cell_view,GtkTreePath *path,GtkRequisition *requisition);extern
void gtk_cell_view_set_background_color (GtkCellView *cell_view,const GdkColor *color);extern
GType gtk_toggle_button_get_type (void) ;
extern
GtkWidget* gtk_toggle_button_new (void);
extern
GtkWidget* gtk_toggle_button_new_with_label (const gchar *label);
extern
GtkWidget* gtk_toggle_button_new_with_mnemonic (const gchar *label);
extern
void gtk_toggle_button_set_mode (GtkToggleButton *toggle_button,gboolean draw_indicator);
extern
gboolean gtk_toggle_button_get_mode (GtkToggleButton *toggle_button);
extern
void gtk_toggle_button_set_active (GtkToggleButton *toggle_button,gboolean is_active);
extern
gboolean gtk_toggle_button_get_active (GtkToggleButton *toggle_button);
extern
void gtk_toggle_button_toggled (GtkToggleButton *toggle_button);
extern
void gtk_toggle_button_set_inconsistent (GtkToggleButton *toggle_button,gboolean setting);
extern
gboolean gtk_toggle_button_get_inconsistent (GtkToggleButton *toggle_button);extern
GType gtk_check_button_get_type (void) ;
extern
GtkWidget* gtk_check_button_new (void);
extern
GtkWidget* gtk_check_button_new_with_label (const gchar *label);
extern
GtkWidget* gtk_check_button_new_with_mnemonic (const gchar *label);extern
GType gtk_menu_item_get_type (void) ;
extern
GtkWidget* gtk_menu_item_new (void);
extern
GtkWidget* gtk_menu_item_new_with_label (const gchar *label);
extern
GtkWidget* gtk_menu_item_new_with_mnemonic (const gchar *label);
extern
void gtk_menu_item_set_submenu (GtkMenuItem *menu_item,GtkWidget *submenu);
extern
GtkWidget* gtk_menu_item_get_submenu (GtkMenuItem *menu_item);
extern
void gtk_menu_item_select (GtkMenuItem *menu_item);
extern
void gtk_menu_item_deselect (GtkMenuItem *menu_item);
extern
void gtk_menu_item_activate (GtkMenuItem *menu_item);
extern
void gtk_menu_item_toggle_size_request (GtkMenuItem *menu_item,gint *requisition);
extern
void gtk_menu_item_toggle_size_allocate (GtkMenuItem *menu_item,gint allocation);extern
void gtk_menu_item_set_right_justified (GtkMenuItem *menu_item,gboolean right_justified);extern
gboolean gtk_menu_item_get_right_justified (GtkMenuItem *menu_item);
extern
void gtk_menu_item_set_accel_path (GtkMenuItem *menu_item,const gchar *accel_path);
extern
const gchar * gtk_menu_item_get_accel_path (GtkMenuItem *menu_item);
extern
void gtk_menu_item_set_label (GtkMenuItem *menu_item,const gchar *label);
extern
const gchar * gtk_menu_item_get_label (GtkMenuItem *menu_item);
extern
void gtk_menu_item_set_use_underline (GtkMenuItem *menu_item,gboolean setting);
extern
gboolean gtk_menu_item_get_use_underline (GtkMenuItem *menu_item);
extern
void gtk_menu_item_set_reserve_indicator (GtkMenuItem *menu_item,gboolean reserve);
extern
gboolean gtk_menu_item_get_reserve_indicator (GtkMenuItem *menu_item);extern
GType gtk_check_menu_item_get_type (void) ;
extern
GtkWidget* gtk_check_menu_item_new (void);
extern
GtkWidget* gtk_check_menu_item_new_with_label (const gchar *label);
extern
GtkWidget* gtk_check_menu_item_new_with_mnemonic (const gchar *label);
extern
void gtk_check_menu_item_set_active (GtkCheckMenuItem *check_menu_item,gboolean is_active);
extern
gboolean gtk_check_menu_item_get_active (GtkCheckMenuItem *check_menu_item);
extern
void gtk_check_menu_item_toggled (GtkCheckMenuItem *check_menu_item);
extern
void gtk_check_menu_item_set_inconsistent (GtkCheckMenuItem *check_menu_item,gboolean setting);
extern
gboolean gtk_check_menu_item_get_inconsistent (GtkCheckMenuItem *check_menu_item);
extern
void gtk_check_menu_item_set_draw_as_radio (GtkCheckMenuItem *check_menu_item,gboolean draw_as_radio);
extern
gboolean gtk_check_menu_item_get_draw_as_radio (GtkCheckMenuItem *check_menu_item);
extern
GType gtk_clipboard_get_type (void) ;
extern
GtkClipboard *gtk_clipboard_get_for_display (GdkDisplay *display,GdkAtom selection);
extern
GtkClipboard *gtk_clipboard_get (GdkAtom selection);
extern
GtkClipboard *gtk_clipboard_get_default (GdkDisplay *display);
extern
GdkDisplay *gtk_clipboard_get_display (GtkClipboard *clipboard);
extern
gboolean gtk_clipboard_set_with_data (GtkClipboard *clipboard,const GtkTargetEntry *targets,guint n_targets,GtkClipboardGetFunc get_func,GtkClipboardClearFunc clear_func,gpointer user_data);
extern
gboolean gtk_clipboard_set_with_owner (GtkClipboard *clipboard,const GtkTargetEntry *targets,guint n_targets,GtkClipboardGetFunc get_func,GtkClipboardClearFunc clear_func,GObject *owner);
extern
GObject *gtk_clipboard_get_owner (GtkClipboard *clipboard);
extern
void gtk_clipboard_clear (GtkClipboard *clipboard);
extern
void gtk_clipboard_set_text (GtkClipboard *clipboard,const gchar *text,gint len);
extern
void gtk_clipboard_set_image (GtkClipboard *clipboard,GdkPixbuf *pixbuf);
extern
void gtk_clipboard_request_contents (GtkClipboard *clipboard,GdkAtom target,GtkClipboardReceivedFunc callback,gpointer user_data);
extern
void gtk_clipboard_request_text (GtkClipboard *clipboard,GtkClipboardTextReceivedFunc callback,gpointer user_data);
extern
void gtk_clipboard_request_rich_text (GtkClipboard *clipboard,GtkTextBuffer *buffer,GtkClipboardRichTextReceivedFunc callback,gpointer user_data);
extern
void gtk_clipboard_request_image (GtkClipboard *clipboard,GtkClipboardImageReceivedFunc callback,gpointer user_data);
extern
void gtk_clipboard_request_uris (GtkClipboard *clipboard,GtkClipboardURIReceivedFunc callback,gpointer user_data);
extern
void gtk_clipboard_request_targets (GtkClipboard *clipboard,GtkClipboardTargetsReceivedFunc callback,gpointer user_data);
extern
GtkSelectionData *gtk_clipboard_wait_for_contents (GtkClipboard *clipboard,GdkAtom target);
extern
gchar * gtk_clipboard_wait_for_text (GtkClipboard *clipboard);
extern
guint8 * gtk_clipboard_wait_for_rich_text (GtkClipboard *clipboard,GtkTextBuffer *buffer,GdkAtom *format,gsize *length);
extern
GdkPixbuf * gtk_clipboard_wait_for_image (GtkClipboard *clipboard);
extern
gchar ** gtk_clipboard_wait_for_uris (GtkClipboard *clipboard);
extern
gboolean gtk_clipboard_wait_for_targets (GtkClipboard *clipboard,GdkAtom **targets,gint *n_targets);
extern
gboolean gtk_clipboard_wait_is_text_available (GtkClipboard *clipboard);
extern
gboolean gtk_clipboard_wait_is_rich_text_available (GtkClipboard *clipboard,GtkTextBuffer *buffer);
extern
gboolean gtk_clipboard_wait_is_image_available (GtkClipboard *clipboard);
extern
gboolean gtk_clipboard_wait_is_uris_available (GtkClipboard *clipboard);
extern
gboolean gtk_clipboard_wait_is_target_available (GtkClipboard *clipboard,GdkAtom target);
extern
void gtk_clipboard_set_can_store (GtkClipboard *clipboard,const GtkTargetEntry *targets,gint n_targets);
extern
void gtk_clipboard_store (GtkClipboard *clipboard);
extern
GdkAtom gtk_clipboard_get_selection (GtkClipboard *clipboard);extern
GType gtk_color_button_get_type (void) ;
extern
GtkWidget * gtk_color_button_new (void);
extern
GtkWidget * gtk_color_button_new_with_rgba (const GdkRGBA *rgba);
extern
void gtk_color_button_set_title (GtkColorButton *button,const gchar *title);
extern
const gchar *gtk_color_button_get_title (GtkColorButton *button);extern
GtkWidget *gtk_color_button_new_with_color (const GdkColor *color);extern
void gtk_color_button_set_color (GtkColorButton *button,const GdkColor *color);extern
void gtk_color_button_get_color (GtkColorButton *button,GdkColor *color);extern
void gtk_color_button_set_alpha (GtkColorButton *button,guint16 alpha);extern
guint16 gtk_color_button_get_alpha (GtkColorButton *button);extern
void gtk_color_button_set_use_alpha (GtkColorButton *button,gboolean use_alpha);extern
gboolean gtk_color_button_get_use_alpha (GtkColorButton *button);extern
void gtk_color_button_set_rgba (GtkColorButton *button,const GdkRGBA *rgba);extern
void gtk_color_button_get_rgba (GtkColorButton *button,GdkRGBA *rgba);extern
GType gtk_color_chooser_get_type (void) ;
extern
void gtk_color_chooser_get_rgba (GtkColorChooser *chooser,GdkRGBA *color);
extern
void gtk_color_chooser_set_rgba (GtkColorChooser *chooser,const GdkRGBA *color);
extern
gboolean gtk_color_chooser_get_use_alpha (GtkColorChooser *chooser);
extern
void gtk_color_chooser_set_use_alpha (GtkColorChooser *chooser,gboolean use_alpha);
extern
void gtk_color_chooser_add_palette (GtkColorChooser *chooser,GtkOrientation orientation,gint colors_per_line,gint n_colors,GdkRGBA *colors);extern
GType gtk_color_chooser_dialog_get_type (void) ;
extern
GtkWidget * gtk_color_chooser_dialog_new (const gchar *title,GtkWindow *parent);extern
GType gtk_color_chooser_widget_get_type (void) ;
extern
GtkWidget * gtk_color_chooser_widget_new (void);
extern
void gtk_hsv_to_rgb (gdouble h, gdouble s, gdouble v,gdouble *r, gdouble *g, gdouble *b);
extern
void gtk_rgb_to_hsv (gdouble r, gdouble g, gdouble b,gdouble *h, gdouble *s, gdouble *v);extern
GType gtk_combo_box_text_get_type (void) ;
extern
GtkWidget* gtk_combo_box_text_new (void);
extern
GtkWidget* gtk_combo_box_text_new_with_entry (void);
extern
void gtk_combo_box_text_append_text (GtkComboBoxText *combo_box,const gchar *text);
extern
void gtk_combo_box_text_insert_text (GtkComboBoxText *combo_box,gint position,const gchar *text);
extern
void gtk_combo_box_text_prepend_text (GtkComboBoxText *combo_box,const gchar *text);
extern
void gtk_combo_box_text_remove (GtkComboBoxText *combo_box,gint position);
extern
void gtk_combo_box_text_remove_all (GtkComboBoxText *combo_box);
extern
gchar *gtk_combo_box_text_get_active_text (GtkComboBoxText *combo_box);
extern
void gtk_combo_box_text_insert (GtkComboBoxText *combo_box,gint position,const gchar *id,const gchar *text);
extern
void gtk_combo_box_text_append (GtkComboBoxText *combo_box,const gchar *id,const gchar *text);
extern
void gtk_combo_box_text_prepend (GtkComboBoxText *combo_box,const gchar *id,const gchar *text);
extern
GType gtk_css_section_get_type (void) ;
extern
GtkCssSection * gtk_css_section_ref (GtkCssSection *section);
extern
void gtk_css_section_unref (GtkCssSection *section);
extern
GtkCssSectionType gtk_css_section_get_section_type (const GtkCssSection *section);
extern
GtkCssSection * gtk_css_section_get_parent (const GtkCssSection *section);
extern
GFile * gtk_css_section_get_file (const GtkCssSection *section);
extern
guint gtk_css_section_get_start_line (const GtkCssSection *section);
extern
guint gtk_css_section_get_start_position (const GtkCssSection *section);
extern
guint gtk_css_section_get_end_line (const GtkCssSection *section);
extern
guint gtk_css_section_get_end_position (const GtkCssSection *section);
extern
GQuark gtk_css_provider_error_quark (void);extern
GType gtk_css_provider_get_type (void) ;
extern
GtkCssProvider * gtk_css_provider_new (void);
extern
char * gtk_css_provider_to_string (GtkCssProvider *provider);
extern
gboolean gtk_css_provider_load_from_data (GtkCssProvider *css_provider,const gchar *data,gssize length,GError **error);
extern
gboolean gtk_css_provider_load_from_file (GtkCssProvider *css_provider,GFile *file,GError **error);
extern
gboolean gtk_css_provider_load_from_path (GtkCssProvider *css_provider,const gchar *path,GError **error);
extern
void gtk_css_provider_load_from_resource (GtkCssProvider *css_provider,const gchar *resource_path);extern
GtkCssProvider * gtk_css_provider_get_default (void);
extern
GtkCssProvider * gtk_css_provider_get_named (const gchar *name,const gchar *variant);
extern
guint gtk_get_debug_flags (void);
extern
void gtk_set_debug_flags (guint flags);
extern
void gtk_drag_dest_set (GtkWidget *widget,GtkDestDefaults flags,const GtkTargetEntry *targets,gint n_targets,GdkDragAction actions);extern
void gtk_drag_dest_set_proxy (GtkWidget *widget,GdkWindow *proxy_window,GdkDragProtocol protocol,gboolean use_coordinates);
extern
void gtk_drag_dest_unset (GtkWidget *widget);
extern
GdkAtom gtk_drag_dest_find_target (GtkWidget *widget,GdkDragContext *context,GtkTargetList *target_list);
extern
GtkTargetList* gtk_drag_dest_get_target_list (GtkWidget *widget);
extern
void gtk_drag_dest_set_target_list (GtkWidget *widget,GtkTargetList *target_list);
extern
void gtk_drag_dest_add_text_targets (GtkWidget *widget);
extern
void gtk_drag_dest_add_image_targets (GtkWidget *widget);
extern
void gtk_drag_dest_add_uri_targets (GtkWidget *widget);
extern
void gtk_drag_dest_set_track_motion (GtkWidget *widget,gboolean track_motion);
extern
gboolean gtk_drag_dest_get_track_motion (GtkWidget *widget);
extern
void gtk_drag_source_set (GtkWidget *widget,GdkModifierType start_button_mask,const GtkTargetEntry *targets,gint n_targets,GdkDragAction actions);
extern
void gtk_drag_source_unset (GtkWidget *widget);
extern
GtkTargetList* gtk_drag_source_get_target_list (GtkWidget *widget);
extern
void gtk_drag_source_set_target_list (GtkWidget *widget,GtkTargetList *target_list);
extern
void gtk_drag_source_add_text_targets (GtkWidget *widget);
extern
void gtk_drag_source_add_image_targets (GtkWidget *widget);
extern
void gtk_drag_source_add_uri_targets (GtkWidget *widget);
extern
void gtk_drag_source_set_icon_pixbuf (GtkWidget *widget,GdkPixbuf *pixbuf);extern
void gtk_drag_source_set_icon_stock (GtkWidget *widget,const gchar *stock_id);
extern
void gtk_drag_source_set_icon_name (GtkWidget *widget,const gchar *icon_name);
extern
void gtk_drag_source_set_icon_gicon (GtkWidget *widget,GIcon *icon);extern
GType gtk_drawing_area_get_type (void) ;
extern
GtkWidget* gtk_drawing_area_new (void);extern
GType gtk_event_box_get_type (void) ;
extern
GtkWidget* gtk_event_box_new (void);
extern
gboolean gtk_event_box_get_visible_window (GtkEventBox *event_box);
extern
void gtk_event_box_set_visible_window (GtkEventBox *event_box,gboolean visible_window);
extern
gboolean gtk_event_box_get_above_child (GtkEventBox *event_box);
extern
void gtk_event_box_set_above_child (GtkEventBox *event_box,gboolean above_child);
extern
GType gtk_event_controller_get_type (void) ;
extern
GtkWidget * gtk_event_controller_get_widget (GtkEventController *controller);
extern
gboolean gtk_event_controller_handle_event (GtkEventController *controller,const GdkEvent *event);
extern
void gtk_event_controller_reset (GtkEventController *controller);
extern
GtkPropagationPhase gtk_event_controller_get_propagation_phase (GtkEventController *controller);
extern
void gtk_event_controller_set_propagation_phase (GtkEventController *controller,GtkPropagationPhase phase);
extern
GType gtk_event_controller_key_get_type (void) ;
extern
GtkEventController *gtk_event_controller_key_new (GtkWidget *widget);
extern
void gtk_event_controller_key_set_im_context (GtkEventControllerKey *controller,GtkIMContext *im_context);
extern
GtkIMContext * gtk_event_controller_key_get_im_context (GtkEventControllerKey *controller);
extern
gboolean gtk_event_controller_key_forward (GtkEventControllerKey *controller,GtkWidget *widget);
extern
guint gtk_event_controller_key_get_group (GtkEventControllerKey *controller);
extern
GType gtk_event_controller_motion_get_type (void) ;
extern
GtkEventController *gtk_event_controller_motion_new (GtkWidget *widget);
extern
GType gtk_event_controller_scroll_get_type (void) ;
extern
GtkEventController *gtk_event_controller_scroll_new (GtkWidget *widget,GtkEventControllerScrollFlags flags);
extern
void gtk_event_controller_scroll_set_flags (GtkEventControllerScroll *controller,GtkEventControllerScrollFlags flags);
extern
GtkEventControllerScrollFlags gtk_event_controller_scroll_get_flags (GtkEventControllerScroll *controller);extern
GType gtk_expander_get_type (void) ;
extern
GtkWidget *gtk_expander_new (const gchar *label);
extern
GtkWidget *gtk_expander_new_with_mnemonic (const gchar *label);
extern
void gtk_expander_set_expanded (GtkExpander *expander,gboolean expanded);
extern
gboolean gtk_expander_get_expanded (GtkExpander *expander);
extern
void gtk_expander_set_spacing (GtkExpander *expander,gint spacing);
extern
gint gtk_expander_get_spacing (GtkExpander *expander);
extern
void gtk_expander_set_label (GtkExpander *expander,const gchar *label);
extern
const gchar * gtk_expander_get_label (GtkExpander *expander);
extern
void gtk_expander_set_use_underline (GtkExpander *expander,gboolean use_underline);
extern
gboolean gtk_expander_get_use_underline (GtkExpander *expander);
extern
void gtk_expander_set_use_markup (GtkExpander *expander,gboolean use_markup);
extern
gboolean gtk_expander_get_use_markup (GtkExpander *expander);
extern
void gtk_expander_set_label_widget (GtkExpander *expander,GtkWidget *label_widget);
extern
GtkWidget *gtk_expander_get_label_widget (GtkExpander *expander);
extern
void gtk_expander_set_label_fill (GtkExpander *expander,gboolean label_fill);
extern
gboolean gtk_expander_get_label_fill (GtkExpander *expander);
extern
void gtk_expander_set_resize_toplevel (GtkExpander *expander,gboolean resize_toplevel);
extern
gboolean gtk_expander_get_resize_toplevel (GtkExpander *expander);extern
GType gtk_fixed_get_type (void) ;
extern
GtkWidget* gtk_fixed_new (void);
extern
void gtk_fixed_put (GtkFixed *fixed,GtkWidget *widget,gint x,gint y);
extern
void gtk_fixed_move (GtkFixed *fixed,GtkWidget *widget,gint x,gint y);extern
GType gtk_file_filter_get_type (void) ;
extern
GtkFileFilter * gtk_file_filter_new (void);
extern
void gtk_file_filter_set_name (GtkFileFilter *filter,const gchar *name);
extern
const gchar * gtk_file_filter_get_name (GtkFileFilter *filter);
extern
void gtk_file_filter_add_mime_type (GtkFileFilter *filter,const gchar *mime_type);
extern
void gtk_file_filter_add_pattern (GtkFileFilter *filter,const gchar *pattern);
extern
void gtk_file_filter_add_pixbuf_formats (GtkFileFilter *filter);
extern
void gtk_file_filter_add_custom (GtkFileFilter *filter,GtkFileFilterFlags needed,GtkFileFilterFunc func,gpointer data,GDestroyNotify notify);
extern
GtkFileFilterFlags gtk_file_filter_get_needed (GtkFileFilter *filter);
extern
gboolean gtk_file_filter_filter (GtkFileFilter *filter,const GtkFileFilterInfo *filter_info);
extern
GVariant *gtk_file_filter_to_gvariant (GtkFileFilter *filter);
extern
GtkFileFilter *gtk_file_filter_new_from_gvariant (GVariant *variant);
extern
GType gtk_file_chooser_get_type (void) ;
extern
GQuark gtk_file_chooser_error_quark (void);
extern
void gtk_file_chooser_set_action (GtkFileChooser *chooser,GtkFileChooserAction action);
extern
GtkFileChooserAction gtk_file_chooser_get_action (GtkFileChooser *chooser);
extern
void gtk_file_chooser_set_local_only (GtkFileChooser *chooser,gboolean local_only);
extern
gboolean gtk_file_chooser_get_local_only (GtkFileChooser *chooser);
extern
void gtk_file_chooser_set_select_multiple (GtkFileChooser *chooser,gboolean select_multiple);
extern
gboolean gtk_file_chooser_get_select_multiple (GtkFileChooser *chooser);
extern
void gtk_file_chooser_set_show_hidden (GtkFileChooser *chooser,gboolean show_hidden);
extern
gboolean gtk_file_chooser_get_show_hidden (GtkFileChooser *chooser);
extern
void gtk_file_chooser_set_do_overwrite_confirmation (GtkFileChooser *chooser,gboolean do_overwrite_confirmation);
extern
gboolean gtk_file_chooser_get_do_overwrite_confirmation (GtkFileChooser *chooser);
extern
void gtk_file_chooser_set_create_folders (GtkFileChooser *chooser,gboolean create_folders);
extern
gboolean gtk_file_chooser_get_create_folders (GtkFileChooser *chooser);
extern
void gtk_file_chooser_set_current_name (GtkFileChooser *chooser,const gchar *name);
extern
gchar *gtk_file_chooser_get_current_name (GtkFileChooser *chooser);
extern
gchar * gtk_file_chooser_get_filename (GtkFileChooser *chooser);
extern
gboolean gtk_file_chooser_set_filename (GtkFileChooser *chooser,const char *filename);
extern
gboolean gtk_file_chooser_select_filename (GtkFileChooser *chooser,const char *filename);
extern
void gtk_file_chooser_unselect_filename (GtkFileChooser *chooser,const char *filename);
extern
void gtk_file_chooser_select_all (GtkFileChooser *chooser);
extern
void gtk_file_chooser_unselect_all (GtkFileChooser *chooser);
extern
GSList * gtk_file_chooser_get_filenames (GtkFileChooser *chooser);
extern
gboolean gtk_file_chooser_set_current_folder (GtkFileChooser *chooser,const gchar *filename);
extern
gchar * gtk_file_chooser_get_current_folder (GtkFileChooser *chooser);
extern
gchar * gtk_file_chooser_get_uri (GtkFileChooser *chooser);
extern
gboolean gtk_file_chooser_set_uri (GtkFileChooser *chooser,const char *uri);
extern
gboolean gtk_file_chooser_select_uri (GtkFileChooser *chooser,const char *uri);
extern
void gtk_file_chooser_unselect_uri (GtkFileChooser *chooser,const char *uri);
extern
GSList * gtk_file_chooser_get_uris (GtkFileChooser *chooser);
extern
gboolean gtk_file_chooser_set_current_folder_uri (GtkFileChooser *chooser,const gchar *uri);
extern
gchar * gtk_file_chooser_get_current_folder_uri (GtkFileChooser *chooser);
extern
GFile * gtk_file_chooser_get_file (GtkFileChooser *chooser);
extern
gboolean gtk_file_chooser_set_file (GtkFileChooser *chooser,GFile *file,GError **error);
extern
gboolean gtk_file_chooser_select_file (GtkFileChooser *chooser,GFile *file,GError **error);
extern
void gtk_file_chooser_unselect_file (GtkFileChooser *chooser,GFile *file);
extern
GSList * gtk_file_chooser_get_files (GtkFileChooser *chooser);
extern
gboolean gtk_file_chooser_set_current_folder_file (GtkFileChooser *chooser,GFile *file,GError **error);
extern
GFile * gtk_file_chooser_get_current_folder_file (GtkFileChooser *chooser);
extern
void gtk_file_chooser_set_preview_widget (GtkFileChooser *chooser,GtkWidget *preview_widget);
extern
GtkWidget *gtk_file_chooser_get_preview_widget (GtkFileChooser *chooser);
extern
void gtk_file_chooser_set_preview_widget_active (GtkFileChooser *chooser,gboolean active);
extern
gboolean gtk_file_chooser_get_preview_widget_active (GtkFileChooser *chooser);
extern
void gtk_file_chooser_set_use_preview_label (GtkFileChooser *chooser,gboolean use_label);
extern
gboolean gtk_file_chooser_get_use_preview_label (GtkFileChooser *chooser);
extern
char *gtk_file_chooser_get_preview_filename (GtkFileChooser *chooser);
extern
char *gtk_file_chooser_get_preview_uri (GtkFileChooser *chooser);
extern
GFile *gtk_file_chooser_get_preview_file (GtkFileChooser *chooser);
extern
void gtk_file_chooser_set_extra_widget (GtkFileChooser *chooser,GtkWidget *extra_widget);
extern
GtkWidget *gtk_file_chooser_get_extra_widget (GtkFileChooser *chooser);
extern
void gtk_file_chooser_add_filter (GtkFileChooser *chooser,GtkFileFilter *filter);
extern
void gtk_file_chooser_remove_filter (GtkFileChooser *chooser,GtkFileFilter *filter);
extern
GSList *gtk_file_chooser_list_filters (GtkFileChooser *chooser);
extern
void gtk_file_chooser_set_filter (GtkFileChooser *chooser,GtkFileFilter *filter);
extern
GtkFileFilter *gtk_file_chooser_get_filter (GtkFileChooser *chooser);
extern
gboolean gtk_file_chooser_add_shortcut_folder (GtkFileChooser *chooser,const char *folder,GError **error);
extern
gboolean gtk_file_chooser_remove_shortcut_folder (GtkFileChooser *chooser,const char *folder,GError **error);
extern
GSList *gtk_file_chooser_list_shortcut_folders (GtkFileChooser *chooser);
extern
gboolean gtk_file_chooser_add_shortcut_folder_uri (GtkFileChooser *chooser,const char *uri,GError **error);
extern
gboolean gtk_file_chooser_remove_shortcut_folder_uri (GtkFileChooser *chooser,const char *uri,GError **error);
extern
GSList *gtk_file_chooser_list_shortcut_folder_uris (GtkFileChooser *chooser);
extern
void gtk_file_chooser_add_choice (GtkFileChooser *chooser,const char *id,const char *label,const char **options,const char **option_labels);
extern
void gtk_file_chooser_remove_choice (GtkFileChooser *chooser,const char *id);
extern
void gtk_file_chooser_set_choice (GtkFileChooser *chooser,const char *id,const char *option);
extern
const char *gtk_file_chooser_get_choice (GtkFileChooser *chooser,const char *id);extern
GType gtk_file_chooser_button_get_type (void) ;
extern
GtkWidget * gtk_file_chooser_button_new (const gchar *title,GtkFileChooserAction action);
extern
GtkWidget * gtk_file_chooser_button_new_with_dialog (GtkWidget *dialog);
extern
const gchar * gtk_file_chooser_button_get_title (GtkFileChooserButton *button);
extern
void gtk_file_chooser_button_set_title (GtkFileChooserButton *button,const gchar *title);
extern
gint gtk_file_chooser_button_get_width_chars (GtkFileChooserButton *button);
extern
void gtk_file_chooser_button_set_width_chars (GtkFileChooserButton *button,gint n_chars);extern
gboolean gtk_file_chooser_button_get_focus_on_click (GtkFileChooserButton *button);extern
void gtk_file_chooser_button_set_focus_on_click (GtkFileChooserButton *button,gboolean focus_on_click);extern
GType gtk_file_chooser_dialog_get_type (void) ;
extern
GtkWidget *gtk_file_chooser_dialog_new (const gchar *title,GtkWindow *parent,GtkFileChooserAction action,const gchar *first_button_text,...) ;
extern
GType gtk_native_dialog_get_type (void);extern
void gtk_native_dialog_show (GtkNativeDialog *self);
extern
void gtk_native_dialog_hide (GtkNativeDialog *self);
extern
void gtk_native_dialog_destroy (GtkNativeDialog *self);
extern
gboolean gtk_native_dialog_get_visible (GtkNativeDialog *self);
extern
void gtk_native_dialog_set_modal (GtkNativeDialog *self,gboolean modal);
extern
gboolean gtk_native_dialog_get_modal (GtkNativeDialog *self);
extern
void gtk_native_dialog_set_title (GtkNativeDialog *self,const char *title);
extern
const char * gtk_native_dialog_get_title (GtkNativeDialog *self);
extern
void gtk_native_dialog_set_transient_for (GtkNativeDialog *self,GtkWindow *parent);
extern
GtkWindow * gtk_native_dialog_get_transient_for (GtkNativeDialog *self);
extern
gint gtk_native_dialog_run (GtkNativeDialog *self);
extern
GType gtk_file_chooser_native_get_type (void);extern
GtkFileChooserNative *gtk_file_chooser_native_new (const gchar *title,GtkWindow *parent,GtkFileChooserAction action,const gchar *accept_label,const gchar *cancel_label);
extern
const char *gtk_file_chooser_native_get_accept_label (GtkFileChooserNative *self);
extern
void gtk_file_chooser_native_set_accept_label (GtkFileChooserNative *self,const char *accept_label);
extern
const char *gtk_file_chooser_native_get_cancel_label (GtkFileChooserNative *self);
extern
void gtk_file_chooser_native_set_cancel_label (GtkFileChooserNative *self,const char *cancel_label);extern
GType gtk_file_chooser_widget_get_type (void) ;
extern
GtkWidget *gtk_file_chooser_widget_new (GtkFileChooserAction action);extern
GType gtk_flow_box_child_get_type (void) ;
extern
GtkWidget* gtk_flow_box_child_new (void);
extern
gint gtk_flow_box_child_get_index (GtkFlowBoxChild *child);
extern
gboolean gtk_flow_box_child_is_selected (GtkFlowBoxChild *child);
extern
void gtk_flow_box_child_changed (GtkFlowBoxChild *child);
extern
GType gtk_flow_box_get_type (void) ;
extern
GtkWidget *gtk_flow_box_new (void);
extern
void gtk_flow_box_bind_model (GtkFlowBox *box,GListModel *model,GtkFlowBoxCreateWidgetFunc create_widget_func,gpointer user_data,GDestroyNotify user_data_free_func);
extern
void gtk_flow_box_set_homogeneous (GtkFlowBox *box,gboolean homogeneous);
extern
gboolean gtk_flow_box_get_homogeneous (GtkFlowBox *box);
extern
void gtk_flow_box_set_row_spacing (GtkFlowBox *box,guint spacing);
extern
guint gtk_flow_box_get_row_spacing (GtkFlowBox *box);
extern
void gtk_flow_box_set_column_spacing (GtkFlowBox *box,guint spacing);
extern
guint gtk_flow_box_get_column_spacing (GtkFlowBox *box);
extern
void gtk_flow_box_set_min_children_per_line (GtkFlowBox *box,guint n_children);
extern
guint gtk_flow_box_get_min_children_per_line (GtkFlowBox *box);
extern
void gtk_flow_box_set_max_children_per_line (GtkFlowBox *box,guint n_children);
extern
guint gtk_flow_box_get_max_children_per_line (GtkFlowBox *box);
extern
void gtk_flow_box_set_activate_on_single_click (GtkFlowBox *box,gboolean single);
extern
gboolean gtk_flow_box_get_activate_on_single_click (GtkFlowBox *box);
extern
void gtk_flow_box_insert (GtkFlowBox *box,GtkWidget *widget,gint position);
extern
GtkFlowBoxChild *gtk_flow_box_get_child_at_index (GtkFlowBox *box,gint idx);
extern
GtkFlowBoxChild *gtk_flow_box_get_child_at_pos (GtkFlowBox *box,gint x,gint y);
extern
void gtk_flow_box_selected_foreach (GtkFlowBox *box,GtkFlowBoxForeachFunc func,gpointer data);
extern
GList *gtk_flow_box_get_selected_children (GtkFlowBox *box);
extern
void gtk_flow_box_select_child (GtkFlowBox *box,GtkFlowBoxChild *child);
extern
void gtk_flow_box_unselect_child (GtkFlowBox *box,GtkFlowBoxChild *child);
extern
void gtk_flow_box_select_all (GtkFlowBox *box);
extern
void gtk_flow_box_unselect_all (GtkFlowBox *box);
extern
void gtk_flow_box_set_selection_mode (GtkFlowBox *box,GtkSelectionMode mode);
extern
GtkSelectionMode gtk_flow_box_get_selection_mode (GtkFlowBox *box);
extern
void gtk_flow_box_set_hadjustment (GtkFlowBox *box,GtkAdjustment *adjustment);
extern
void gtk_flow_box_set_vadjustment (GtkFlowBox *box,GtkAdjustment *adjustment);
extern
void gtk_flow_box_set_filter_func (GtkFlowBox *box,GtkFlowBoxFilterFunc filter_func,gpointer user_data,GDestroyNotify destroy);
extern
void gtk_flow_box_invalidate_filter (GtkFlowBox *box);
extern
void gtk_flow_box_set_sort_func (GtkFlowBox *box,GtkFlowBoxSortFunc sort_func,gpointer user_data,GDestroyNotify destroy);
extern
void gtk_flow_box_invalidate_sort (GtkFlowBox *box);extern
GType gtk_font_button_get_type (void) ;
extern
GtkWidget *gtk_font_button_new (void);
extern
GtkWidget *gtk_font_button_new_with_font (const gchar *fontname);
extern
const gchar * gtk_font_button_get_title (GtkFontButton *font_button);
extern
void gtk_font_button_set_title (GtkFontButton *font_button,const gchar *title);
extern
gboolean gtk_font_button_get_use_font (GtkFontButton *font_button);
extern
void gtk_font_button_set_use_font (GtkFontButton *font_button,gboolean use_font);
extern
gboolean gtk_font_button_get_use_size (GtkFontButton *font_button);
extern
void gtk_font_button_set_use_size (GtkFontButton *font_button,gboolean use_size);extern
const gchar * gtk_font_button_get_font_name (GtkFontButton *font_button);extern
gboolean gtk_font_button_set_font_name (GtkFontButton *font_button,const gchar *fontname);
extern
gboolean gtk_font_button_get_show_style (GtkFontButton *font_button);
extern
void gtk_font_button_set_show_style (GtkFontButton *font_button,gboolean show_style);
extern
gboolean gtk_font_button_get_show_size (GtkFontButton *font_button);
extern
void gtk_font_button_set_show_size (GtkFontButton *font_button,gboolean show_size);extern
GType gtk_font_chooser_get_type (void) ;
extern
PangoFontFamily *gtk_font_chooser_get_font_family (GtkFontChooser *fontchooser);
extern
PangoFontFace *gtk_font_chooser_get_font_face (GtkFontChooser *fontchooser);
extern
gint gtk_font_chooser_get_font_size (GtkFontChooser *fontchooser);
extern
PangoFontDescription *gtk_font_chooser_get_font_desc (GtkFontChooser *fontchooser);
extern
void gtk_font_chooser_set_font_desc (GtkFontChooser *fontchooser,const PangoFontDescription *font_desc);
extern
gchar* gtk_font_chooser_get_font (GtkFontChooser *fontchooser);
extern
void gtk_font_chooser_set_font (GtkFontChooser *fontchooser,const gchar *fontname);
extern
gchar* gtk_font_chooser_get_preview_text (GtkFontChooser *fontchooser);
extern
void gtk_font_chooser_set_preview_text (GtkFontChooser *fontchooser,const gchar *text);
extern
gboolean gtk_font_chooser_get_show_preview_entry (GtkFontChooser *fontchooser);
extern
void gtk_font_chooser_set_show_preview_entry (GtkFontChooser *fontchooser,gboolean show_preview_entry);
extern
void gtk_font_chooser_set_filter_func (GtkFontChooser *fontchooser,GtkFontFilterFunc filter,gpointer user_data,GDestroyNotify destroy);
extern
void gtk_font_chooser_set_font_map (GtkFontChooser *fontchooser,PangoFontMap *fontmap);
extern
PangoFontMap * gtk_font_chooser_get_font_map (GtkFontChooser *fontchooser);
extern
void gtk_font_chooser_set_level (GtkFontChooser *fontchooser,GtkFontChooserLevel level);
extern
GtkFontChooserLevel gtk_font_chooser_get_level (GtkFontChooser *fontchooser);
extern
char * gtk_font_chooser_get_font_features (GtkFontChooser *fontchooser);
extern
char * gtk_font_chooser_get_language (GtkFontChooser *fontchooser);
extern
void gtk_font_chooser_set_language (GtkFontChooser *fontchooser,const char *language);extern
GType gtk_font_chooser_dialog_get_type (void) ;
extern
GtkWidget* gtk_font_chooser_dialog_new (const gchar *title,GtkWindow *parent);extern
GType gtk_font_chooser_widget_get_type (void) ;
extern
GtkWidget* gtk_font_chooser_widget_new (void);
extern
GType gtk_gesture_get_type (void) ;
extern
GdkDevice * gtk_gesture_get_device (GtkGesture *gesture);
extern
gboolean gtk_gesture_set_state (GtkGesture *gesture,GtkEventSequenceState state);
extern
GtkEventSequenceState gtk_gesture_get_sequence_state (GtkGesture *gesture,GdkEventSequence *sequence);
extern
gboolean gtk_gesture_set_sequence_state (GtkGesture *gesture,GdkEventSequence *sequence,GtkEventSequenceState state);
extern
GList * gtk_gesture_get_sequences (GtkGesture *gesture);
extern
GdkEventSequence * gtk_gesture_get_last_updated_sequence(GtkGesture *gesture);
extern
gboolean gtk_gesture_handles_sequence (GtkGesture *gesture,GdkEventSequence *sequence);
extern
const GdkEvent *gtk_gesture_get_last_event (GtkGesture *gesture,GdkEventSequence *sequence);
extern
gboolean gtk_gesture_get_point (GtkGesture *gesture,GdkEventSequence *sequence,gdouble *x,gdouble *y);
extern
gboolean gtk_gesture_get_bounding_box (GtkGesture *gesture,GdkRectangle *rect);
extern
gboolean gtk_gesture_get_bounding_box_center(GtkGesture *gesture,gdouble *x,gdouble *y);
extern
gboolean gtk_gesture_is_active (GtkGesture *gesture);
extern
gboolean gtk_gesture_is_recognized (GtkGesture *gesture);
extern
GdkWindow * gtk_gesture_get_window (GtkGesture *gesture);
extern
void gtk_gesture_set_window (GtkGesture *gesture,GdkWindow *window);
extern
void gtk_gesture_group (GtkGesture *group_gesture,GtkGesture *gesture);
extern
void gtk_gesture_ungroup (GtkGesture *gesture);
extern
GList * gtk_gesture_get_group (GtkGesture *gesture);
extern
gboolean gtk_gesture_is_grouped_with (GtkGesture *gesture,GtkGesture *other);
extern
GType gtk_gesture_single_get_type (void) ;
extern
gboolean gtk_gesture_single_get_touch_only (GtkGestureSingle *gesture);
extern
void gtk_gesture_single_set_touch_only (GtkGestureSingle *gesture,gboolean touch_only);
extern
gboolean gtk_gesture_single_get_exclusive (GtkGestureSingle *gesture);
extern
void gtk_gesture_single_set_exclusive (GtkGestureSingle *gesture,gboolean exclusive);
extern
guint gtk_gesture_single_get_button (GtkGestureSingle *gesture);
extern
void gtk_gesture_single_set_button (GtkGestureSingle *gesture,guint button);
extern
guint gtk_gesture_single_get_current_button(GtkGestureSingle *gesture);
extern
GdkEventSequence * gtk_gesture_single_get_current_sequence(GtkGestureSingle *gesture);
extern
GType gtk_gesture_drag_get_type (void) ;
extern
GtkGesture * gtk_gesture_drag_new (GtkWidget *widget);
extern
gboolean gtk_gesture_drag_get_start_point (GtkGestureDrag *gesture,gdouble *x,gdouble *y);
extern
gboolean gtk_gesture_drag_get_offset (GtkGestureDrag *gesture,gdouble *x,gdouble *y);
extern
GType gtk_gesture_long_press_get_type (void) ;
extern
GtkGesture * gtk_gesture_long_press_new (GtkWidget *widget);
extern
GType gtk_gesture_multi_press_get_type (void) ;
extern
GtkGesture * gtk_gesture_multi_press_new (GtkWidget *widget);
extern
void gtk_gesture_multi_press_set_area (GtkGestureMultiPress *gesture,const GdkRectangle *rect);
extern
gboolean gtk_gesture_multi_press_get_area (GtkGestureMultiPress *gesture,GdkRectangle *rect);
extern
GType gtk_gesture_pan_get_type (void) ;
extern
GtkGesture * gtk_gesture_pan_new (GtkWidget *widget,GtkOrientation orientation);
extern
GtkOrientation gtk_gesture_pan_get_orientation (GtkGesturePan *gesture);
extern
void gtk_gesture_pan_set_orientation (GtkGesturePan *gesture,GtkOrientation orientation);
extern
GType gtk_gesture_rotate_get_type (void) ;
extern
GtkGesture * gtk_gesture_rotate_new (GtkWidget *widget);
extern
gdouble gtk_gesture_rotate_get_angle_delta (GtkGestureRotate *gesture);
extern
GType gtk_gesture_stylus_get_type (void) ;
extern
GtkGesture * gtk_gesture_stylus_new (GtkWidget *widget);
extern
gboolean gtk_gesture_stylus_get_axis (GtkGestureStylus *gesture,GdkAxisUse axis,gdouble *value);
extern
gboolean gtk_gesture_stylus_get_axes (GtkGestureStylus *gesture,GdkAxisUse axes[],gdouble **values);
extern
GdkDeviceTool * gtk_gesture_stylus_get_device_tool (GtkGestureStylus *gesture);
extern
GType gtk_gesture_swipe_get_type (void) ;
extern
GtkGesture * gtk_gesture_swipe_new (GtkWidget *widget);
extern
gboolean gtk_gesture_swipe_get_velocity (GtkGestureSwipe *gesture,gdouble *velocity_x,gdouble *velocity_y);
extern
GType gtk_gesture_zoom_get_type (void) ;
extern
GtkGesture * gtk_gesture_zoom_new (GtkWidget *widget);
extern
gdouble gtk_gesture_zoom_get_scale_delta (GtkGestureZoom *gesture);extern
GType gtk_gl_area_get_type (void) ;
extern
GtkWidget * gtk_gl_area_new (void);
extern
void gtk_gl_area_set_use_es (GtkGLArea *area,gboolean use_es);
extern
gboolean gtk_gl_area_get_use_es (GtkGLArea *area);
extern
void gtk_gl_area_set_required_version (GtkGLArea *area,gint major,gint minor);
extern
void gtk_gl_area_get_required_version (GtkGLArea *area,gint *major,gint *minor);
extern
gboolean gtk_gl_area_get_has_alpha (GtkGLArea *area);
extern
void gtk_gl_area_set_has_alpha (GtkGLArea *area,gboolean has_alpha);
extern
gboolean gtk_gl_area_get_has_depth_buffer (GtkGLArea *area);
extern
void gtk_gl_area_set_has_depth_buffer (GtkGLArea *area,gboolean has_depth_buffer);
extern
gboolean gtk_gl_area_get_has_stencil_buffer (GtkGLArea *area);
extern
void gtk_gl_area_set_has_stencil_buffer (GtkGLArea *area,gboolean has_stencil_buffer);
extern
gboolean gtk_gl_area_get_auto_render (GtkGLArea *area);
extern
void gtk_gl_area_set_auto_render (GtkGLArea *area,gboolean auto_render);
extern
void gtk_gl_area_queue_render (GtkGLArea *area);
extern
GdkGLContext * gtk_gl_area_get_context (GtkGLArea *area);
extern
void gtk_gl_area_make_current (GtkGLArea *area);
extern
void gtk_gl_area_attach_buffers (GtkGLArea *area);
extern
void gtk_gl_area_set_error (GtkGLArea *area,const GError *error);
extern
GError * gtk_gl_area_get_error (GtkGLArea *area);extern
GType gtk_grid_get_type (void) ;
extern
GtkWidget* gtk_grid_new (void);
extern
void gtk_grid_attach (GtkGrid *grid,GtkWidget *child,gint left,gint top,gint width,gint height);
extern
void gtk_grid_attach_next_to (GtkGrid *grid,GtkWidget *child,GtkWidget *sibling,GtkPositionType side,gint width,gint height);
extern
GtkWidget *gtk_grid_get_child_at (GtkGrid *grid,gint left,gint top);
extern
void gtk_grid_insert_row (GtkGrid *grid,gint position);
extern
void gtk_grid_insert_column (GtkGrid *grid,gint position);
extern
void gtk_grid_remove_row (GtkGrid *grid,gint position);
extern
void gtk_grid_remove_column (GtkGrid *grid,gint position);
extern
void gtk_grid_insert_next_to (GtkGrid *grid,GtkWidget *sibling,GtkPositionType side);
extern
void gtk_grid_set_row_homogeneous (GtkGrid *grid,gboolean homogeneous);
extern
gboolean gtk_grid_get_row_homogeneous (GtkGrid *grid);
extern
void gtk_grid_set_row_spacing (GtkGrid *grid,guint spacing);
extern
guint gtk_grid_get_row_spacing (GtkGrid *grid);
extern
void gtk_grid_set_column_homogeneous (GtkGrid *grid,gboolean homogeneous);
extern
gboolean gtk_grid_get_column_homogeneous (GtkGrid *grid);
extern
void gtk_grid_set_column_spacing (GtkGrid *grid,guint spacing);
extern
guint gtk_grid_get_column_spacing (GtkGrid *grid);
extern
void gtk_grid_set_row_baseline_position (GtkGrid *grid,gint row,GtkBaselinePosition pos);
extern
GtkBaselinePosition gtk_grid_get_row_baseline_position (GtkGrid *grid,gint row);
extern
void gtk_grid_set_baseline_row (GtkGrid *grid,gint row);
extern
gint gtk_grid_get_baseline_row (GtkGrid *grid);extern
GType gtk_header_bar_get_type (void) ;
extern
GtkWidget *gtk_header_bar_new (void);
extern
void gtk_header_bar_set_title (GtkHeaderBar *bar,const gchar *title);
extern
const gchar *gtk_header_bar_get_title (GtkHeaderBar *bar);
extern
void gtk_header_bar_set_subtitle (GtkHeaderBar *bar,const gchar *subtitle);
extern
const gchar *gtk_header_bar_get_subtitle (GtkHeaderBar *bar);
extern
void gtk_header_bar_set_custom_title (GtkHeaderBar *bar,GtkWidget *title_widget);
extern
GtkWidget *gtk_header_bar_get_custom_title (GtkHeaderBar *bar);
extern
void gtk_header_bar_pack_start (GtkHeaderBar *bar,GtkWidget *child);
extern
void gtk_header_bar_pack_end (GtkHeaderBar *bar,GtkWidget *child);
extern
gboolean gtk_header_bar_get_show_close_button (GtkHeaderBar *bar);
extern
void gtk_header_bar_set_show_close_button (GtkHeaderBar *bar,gboolean setting);
extern
void gtk_header_bar_set_has_subtitle (GtkHeaderBar *bar,gboolean setting);
extern
gboolean gtk_header_bar_get_has_subtitle (GtkHeaderBar *bar);
extern
void gtk_header_bar_set_decoration_layout (GtkHeaderBar *bar,const gchar *layout);
extern
const gchar *gtk_header_bar_get_decoration_layout (GtkHeaderBar *bar);extern
GType gtk_icon_factory_get_type (void) ;extern
GtkIconFactory* gtk_icon_factory_new (void);extern
void gtk_icon_factory_add (GtkIconFactory *factory,const gchar *stock_id,GtkIconSet *icon_set);extern
GtkIconSet* gtk_icon_factory_lookup (GtkIconFactory *factory,const gchar *stock_id);extern
void gtk_icon_factory_add_default (GtkIconFactory *factory);extern
void gtk_icon_factory_remove_default (GtkIconFactory *factory);extern
GtkIconSet* gtk_icon_factory_lookup_default (const gchar *stock_id);
extern
gboolean gtk_icon_size_lookup (GtkIconSize size,gint *width,gint *height);extern
gboolean gtk_icon_size_lookup_for_settings (GtkSettings *settings,GtkIconSize size,gint *width,gint *height);extern
GtkIconSize gtk_icon_size_register (const gchar *name,gint width,gint height);extern
void gtk_icon_size_register_alias (const gchar *alias,GtkIconSize target);extern
GtkIconSize gtk_icon_size_from_name (const gchar *name);extern
const gchar* gtk_icon_size_get_name (GtkIconSize size);extern
GType gtk_icon_set_get_type (void) ;extern
GtkIconSet* gtk_icon_set_new (void);extern
GtkIconSet* gtk_icon_set_new_from_pixbuf (GdkPixbuf *pixbuf);extern
GtkIconSet* gtk_icon_set_ref (GtkIconSet *icon_set);extern
void gtk_icon_set_unref (GtkIconSet *icon_set);extern
GtkIconSet* gtk_icon_set_copy (GtkIconSet *icon_set);extern
GdkPixbuf* gtk_icon_set_render_icon (GtkIconSet *icon_set,GtkStyle *style,GtkTextDirection direction,GtkStateType state,GtkIconSize size,GtkWidget *widget,const gchar *detail);extern
void gtk_icon_set_add_source (GtkIconSet *icon_set,const GtkIconSource *source);extern
void gtk_icon_set_get_sizes (GtkIconSet *icon_set,GtkIconSize **sizes,gint *n_sizes);extern
GType gtk_icon_source_get_type (void) ;extern
GtkIconSource* gtk_icon_source_new (void);extern
GtkIconSource* gtk_icon_source_copy (const GtkIconSource *source);extern
void gtk_icon_source_free (GtkIconSource *source);extern
void gtk_icon_source_set_filename (GtkIconSource *source,const gchar *filename);extern
void gtk_icon_source_set_icon_name (GtkIconSource *source,const gchar *icon_name);extern
void gtk_icon_source_set_pixbuf (GtkIconSource *source,GdkPixbuf *pixbuf);extern
const gchar * gtk_icon_source_get_filename (const GtkIconSource *source);extern
const gchar * gtk_icon_source_get_icon_name (const GtkIconSource *source);extern
GdkPixbuf* gtk_icon_source_get_pixbuf (const GtkIconSource *source);extern
void gtk_icon_source_set_direction_wildcarded (GtkIconSource *source,gboolean setting);extern
void gtk_icon_source_set_state_wildcarded (GtkIconSource *source,gboolean setting);extern
void gtk_icon_source_set_size_wildcarded (GtkIconSource *source,gboolean setting);extern
gboolean gtk_icon_source_get_size_wildcarded (const GtkIconSource *source);extern
gboolean gtk_icon_source_get_state_wildcarded (const GtkIconSource *source);extern
gboolean gtk_icon_source_get_direction_wildcarded (const GtkIconSource *source);extern
void gtk_icon_source_set_direction (GtkIconSource *source,GtkTextDirection direction);extern
void gtk_icon_source_set_state (GtkIconSource *source,GtkStateType state);extern
void gtk_icon_source_set_size (GtkIconSource *source,GtkIconSize size);extern
GtkTextDirection gtk_icon_source_get_direction (const GtkIconSource *source);extern
GtkStateType gtk_icon_source_get_state (const GtkIconSource *source);extern
GtkIconSize gtk_icon_source_get_size (const GtkIconSource *source);extern
GType gtk_style_properties_get_type (void) ;extern
void gtk_style_properties_register_property (GtkStylePropertyParser parse_func,GParamSpec *pspec);extern
gboolean gtk_style_properties_lookup_property (const gchar *property_name,GtkStylePropertyParser *parse_func,GParamSpec **pspec);extern
GtkStyleProperties * gtk_style_properties_new (void);extern
void gtk_style_properties_map_color (GtkStyleProperties *props,const gchar *name,GtkSymbolicColor *color);extern
GtkSymbolicColor * gtk_style_properties_lookup_color (GtkStyleProperties *props,const gchar *name);extern
void gtk_style_properties_set_property (GtkStyleProperties *props,const gchar *property,GtkStateFlags state,const GValue *value);extern
void gtk_style_properties_set_valist (GtkStyleProperties *props,GtkStateFlags state,va_list args);extern
void gtk_style_properties_set (GtkStyleProperties *props,GtkStateFlags state,...) ;extern
gboolean gtk_style_properties_get_property (GtkStyleProperties *props,const gchar *property,GtkStateFlags state,GValue *value);extern
void gtk_style_properties_get_valist (GtkStyleProperties *props,GtkStateFlags state,va_list args);extern
void gtk_style_properties_get (GtkStyleProperties *props,GtkStateFlags state,...) ;extern
void gtk_style_properties_unset_property (GtkStyleProperties *props,const gchar *property,GtkStateFlags state);extern
void gtk_style_properties_clear (GtkStyleProperties *props);extern
void gtk_style_properties_merge (GtkStyleProperties *props,const GtkStyleProperties *props_to_merge,gboolean replace);extern
GType gtk_style_provider_get_type (void) ;extern
GtkStyleProperties *gtk_style_provider_get_style (GtkStyleProvider *provider,GtkWidgetPath *path);
extern
gboolean gtk_style_provider_get_style_property (GtkStyleProvider *provider,GtkWidgetPath *path,GtkStateFlags state,GParamSpec *pspec,GValue *value);extern
GtkIconFactory * gtk_style_provider_get_icon_factory (GtkStyleProvider *provider,GtkWidgetPath *path);extern
GType gtk_style_context_get_type (void) ;
extern
GtkStyleContext * gtk_style_context_new (void);
extern
void gtk_style_context_add_provider_for_screen (GdkScreen *screen,GtkStyleProvider *provider,guint priority);
extern
void gtk_style_context_remove_provider_for_screen (GdkScreen *screen,GtkStyleProvider *provider);
extern
void gtk_style_context_add_provider (GtkStyleContext *context,GtkStyleProvider *provider,guint priority);
extern
void gtk_style_context_remove_provider (GtkStyleContext *context,GtkStyleProvider *provider);
extern
void gtk_style_context_save (GtkStyleContext *context);
extern
void gtk_style_context_restore (GtkStyleContext *context);
extern
GtkCssSection * gtk_style_context_get_section (GtkStyleContext *context,const gchar *property);
extern
void gtk_style_context_get_property (GtkStyleContext *context,const gchar *property,GtkStateFlags state,GValue *value);
extern
void gtk_style_context_get_valist (GtkStyleContext *context,GtkStateFlags state,va_list args);
extern
void gtk_style_context_get (GtkStyleContext *context,GtkStateFlags state,...) ;
extern
void gtk_style_context_set_state (GtkStyleContext *context,GtkStateFlags flags);
extern
GtkStateFlags gtk_style_context_get_state (GtkStyleContext *context);
extern
void gtk_style_context_set_scale (GtkStyleContext *context,gint scale);
extern
gint gtk_style_context_get_scale (GtkStyleContext *context);extern
gboolean gtk_style_context_state_is_running (GtkStyleContext *context,GtkStateType state,gdouble *progress);
extern
void gtk_style_context_set_path (GtkStyleContext *context,GtkWidgetPath *path);
extern
const GtkWidgetPath * gtk_style_context_get_path (GtkStyleContext *context);
extern
void gtk_style_context_set_parent (GtkStyleContext *context,GtkStyleContext *parent);
extern
GtkStyleContext *gtk_style_context_get_parent (GtkStyleContext *context);
extern
GList * gtk_style_context_list_classes (GtkStyleContext *context);
extern
void gtk_style_context_add_class (GtkStyleContext *context,const gchar *class_name);
extern
void gtk_style_context_remove_class (GtkStyleContext *context,const gchar *class_name);
extern
gboolean gtk_style_context_has_class (GtkStyleContext *context,const gchar *class_name);extern
GList * gtk_style_context_list_regions (GtkStyleContext *context);extern
void gtk_style_context_add_region (GtkStyleContext *context,const gchar *region_name,GtkRegionFlags flags);extern
void gtk_style_context_remove_region (GtkStyleContext *context,const gchar *region_name);extern
gboolean gtk_style_context_has_region (GtkStyleContext *context,const gchar *region_name,GtkRegionFlags *flags_return);
extern
void gtk_style_context_get_style_property (GtkStyleContext *context,const gchar *property_name,GValue *value);
extern
void gtk_style_context_get_style_valist (GtkStyleContext *context,va_list args);
extern
void gtk_style_context_get_style (GtkStyleContext *context,...);extern
GtkIconSet * gtk_style_context_lookup_icon_set (GtkStyleContext *context,const gchar *stock_id);extern
GdkPixbuf * gtk_icon_set_render_icon_pixbuf (GtkIconSet *icon_set,GtkStyleContext *context,GtkIconSize size);extern
cairo_surface_t *
gtk_icon_set_render_icon_surface (GtkIconSet *icon_set,GtkStyleContext *context,GtkIconSize size,int scale,GdkWindow *for_window);
extern
void gtk_style_context_set_screen (GtkStyleContext *context,GdkScreen *screen);
extern
GdkScreen * gtk_style_context_get_screen (GtkStyleContext *context);
extern
void gtk_style_context_set_frame_clock (GtkStyleContext *context,GdkFrameClock *frame_clock);
extern
GdkFrameClock *gtk_style_context_get_frame_clock (GtkStyleContext *context);extern
void gtk_style_context_set_direction (GtkStyleContext *context,GtkTextDirection direction);extern
GtkTextDirection gtk_style_context_get_direction (GtkStyleContext *context);
extern
void gtk_style_context_set_junction_sides (GtkStyleContext *context,GtkJunctionSides sides);
extern
GtkJunctionSides gtk_style_context_get_junction_sides (GtkStyleContext *context);
extern
gboolean gtk_style_context_lookup_color (GtkStyleContext *context,const gchar *color_name,GdkRGBA *color);extern
void gtk_style_context_notify_state_change (GtkStyleContext *context,GdkWindow *window,gpointer region_id,GtkStateType state,gboolean state_value);extern
void gtk_style_context_cancel_animations (GtkStyleContext *context,gpointer region_id);extern
void gtk_style_context_scroll_animations (GtkStyleContext *context,GdkWindow *window,gint dx,gint dy);extern
void gtk_style_context_push_animatable_region (GtkStyleContext *context,gpointer region_id);extern
void gtk_style_context_pop_animatable_region (GtkStyleContext *context);
extern
void gtk_style_context_get_color (GtkStyleContext *context,GtkStateFlags state,GdkRGBA *color);extern
void gtk_style_context_get_background_color (GtkStyleContext *context,GtkStateFlags state,GdkRGBA *color);extern
void gtk_style_context_get_border_color (GtkStyleContext *context,GtkStateFlags state,GdkRGBA *color);extern
const PangoFontDescription *gtk_style_context_get_font (GtkStyleContext *context,GtkStateFlags state);
extern
void gtk_style_context_get_border (GtkStyleContext *context,GtkStateFlags state,GtkBorder *border);
extern
void gtk_style_context_get_padding (GtkStyleContext *context,GtkStateFlags state,GtkBorder *padding);
extern
void gtk_style_context_get_margin (GtkStyleContext *context,GtkStateFlags state,GtkBorder *margin);extern
void gtk_style_context_invalidate (GtkStyleContext *context);
extern
void gtk_style_context_reset_widgets (GdkScreen *screen);extern
void gtk_style_context_set_background (GtkStyleContext *context,GdkWindow *window);
extern
void gtk_render_insertion_cursor(GtkStyleContext *context,cairo_t *cr,gdouble x,gdouble y,PangoLayout *layout,int index,PangoDirection direction);extern
void gtk_draw_insertion_cursor (GtkWidget *widget,cairo_t *cr,const GdkRectangle *location,gboolean is_primary,GtkTextDirection direction,gboolean draw_arrow);
extern
char * gtk_style_context_to_string (GtkStyleContext *context,GtkStyleContextPrintFlags flags);extern
GQuark gtk_icon_theme_error_quark (void);
extern
GType gtk_icon_theme_get_type (void) ;
extern
GtkIconTheme *gtk_icon_theme_new (void);
extern
GtkIconTheme *gtk_icon_theme_get_default (void);
extern
GtkIconTheme *gtk_icon_theme_get_for_screen (GdkScreen *screen);
extern
void gtk_icon_theme_set_screen (GtkIconTheme *icon_theme,GdkScreen *screen);
extern
void gtk_icon_theme_set_search_path (GtkIconTheme *icon_theme,const gchar *path[],gint n_elements);
extern
void gtk_icon_theme_get_search_path (GtkIconTheme *icon_theme,gchar **path[],gint *n_elements);
extern
void gtk_icon_theme_append_search_path (GtkIconTheme *icon_theme,const gchar *path);
extern
void gtk_icon_theme_prepend_search_path (GtkIconTheme *icon_theme,const gchar *path);
extern
void gtk_icon_theme_add_resource_path (GtkIconTheme *icon_theme,const gchar *path);
extern
void gtk_icon_theme_set_custom_theme (GtkIconTheme *icon_theme,const gchar *theme_name);
extern
gboolean gtk_icon_theme_has_icon (GtkIconTheme *icon_theme,const gchar *icon_name);
extern
gint *gtk_icon_theme_get_icon_sizes (GtkIconTheme *icon_theme,const gchar *icon_name);
extern
GtkIconInfo * gtk_icon_theme_lookup_icon (GtkIconTheme *icon_theme,const gchar *icon_name,gint size,GtkIconLookupFlags flags);
extern
GtkIconInfo * gtk_icon_theme_lookup_icon_for_scale (GtkIconTheme *icon_theme,const gchar *icon_name,gint size,gint scale,GtkIconLookupFlags flags);
extern
GtkIconInfo * gtk_icon_theme_choose_icon (GtkIconTheme *icon_theme,const gchar *icon_names[],gint size,GtkIconLookupFlags flags);
extern
GtkIconInfo * gtk_icon_theme_choose_icon_for_scale (GtkIconTheme *icon_theme,const gchar *icon_names[],gint size,gint scale,GtkIconLookupFlags flags);
extern
GdkPixbuf * gtk_icon_theme_load_icon (GtkIconTheme *icon_theme,const gchar *icon_name,gint size,GtkIconLookupFlags flags,GError **error);
extern
GdkPixbuf * gtk_icon_theme_load_icon_for_scale (GtkIconTheme *icon_theme,const gchar *icon_name,gint size,gint scale,GtkIconLookupFlags flags,GError **error);
extern
cairo_surface_t * gtk_icon_theme_load_surface (GtkIconTheme *icon_theme,const gchar *icon_name,gint size,gint scale,GdkWindow *for_window,GtkIconLookupFlags flags,GError **error);
extern
GtkIconInfo * gtk_icon_theme_lookup_by_gicon (GtkIconTheme *icon_theme,GIcon *icon,gint size,GtkIconLookupFlags flags);
extern
GtkIconInfo * gtk_icon_theme_lookup_by_gicon_for_scale (GtkIconTheme *icon_theme,GIcon *icon,gint size,gint scale,GtkIconLookupFlags flags);
extern
GList * gtk_icon_theme_list_icons (GtkIconTheme *icon_theme,const gchar *context);
extern
GList * gtk_icon_theme_list_contexts (GtkIconTheme *icon_theme);
extern
char * gtk_icon_theme_get_example_icon_name (GtkIconTheme *icon_theme);
extern
gboolean gtk_icon_theme_rescan_if_needed (GtkIconTheme *icon_theme);extern
void gtk_icon_theme_add_builtin_icon (const gchar *icon_name,gint size,GdkPixbuf *pixbuf);
extern
GType gtk_icon_info_get_type (void) ;extern
GtkIconInfo * gtk_icon_info_copy (GtkIconInfo *icon_info);extern
void gtk_icon_info_free (GtkIconInfo *icon_info);
extern
GtkIconInfo * gtk_icon_info_new_for_pixbuf (GtkIconTheme *icon_theme,GdkPixbuf *pixbuf);
extern
gint gtk_icon_info_get_base_size (GtkIconInfo *icon_info);
extern
gint gtk_icon_info_get_base_scale (GtkIconInfo *icon_info);
extern
const gchar * gtk_icon_info_get_filename (GtkIconInfo *icon_info);extern
GdkPixbuf * gtk_icon_info_get_builtin_pixbuf (GtkIconInfo *icon_info);
extern
gboolean gtk_icon_info_is_symbolic (GtkIconInfo *icon_info);
extern
GdkPixbuf * gtk_icon_info_load_icon (GtkIconInfo *icon_info,GError **error);
extern
cairo_surface_t * gtk_icon_info_load_surface (GtkIconInfo *icon_info,GdkWindow *for_window,GError **error);
extern
void gtk_icon_info_load_icon_async (GtkIconInfo *icon_info,GCancellable *cancellable,GAsyncReadyCallback callback,gpointer user_data);
extern
GdkPixbuf * gtk_icon_info_load_icon_finish (GtkIconInfo *icon_info,GAsyncResult *res,GError **error);
extern
GdkPixbuf * gtk_icon_info_load_symbolic (GtkIconInfo *icon_info,const GdkRGBA *fg,const GdkRGBA *success_color,const GdkRGBA *warning_color,const GdkRGBA *error_color,gboolean *was_symbolic,GError **error);
extern
void gtk_icon_info_load_symbolic_async (GtkIconInfo *icon_info,const GdkRGBA *fg,const GdkRGBA *success_color,const GdkRGBA *warning_color,const GdkRGBA *error_color,GCancellable *cancellable,GAsyncReadyCallback callback,gpointer user_data);
extern
GdkPixbuf * gtk_icon_info_load_symbolic_finish (GtkIconInfo *icon_info,GAsyncResult *res,gboolean *was_symbolic,GError **error);
extern
GdkPixbuf * gtk_icon_info_load_symbolic_for_context (GtkIconInfo *icon_info,GtkStyleContext *context,gboolean *was_symbolic,GError **error);
extern
void gtk_icon_info_load_symbolic_for_context_async (GtkIconInfo *icon_info,GtkStyleContext *context,GCancellable *cancellable,GAsyncReadyCallback callback,gpointer user_data);
extern
GdkPixbuf * gtk_icon_info_load_symbolic_for_context_finish (GtkIconInfo *icon_info,GAsyncResult *res,gboolean *was_symbolic,GError **error);extern
GdkPixbuf * gtk_icon_info_load_symbolic_for_style (GtkIconInfo *icon_info,GtkStyle *style,GtkStateType state,gboolean *was_symbolic,GError **error);extern
void gtk_icon_info_set_raw_coordinates (GtkIconInfo *icon_info,gboolean raw_coordinates);extern
gboolean gtk_icon_info_get_embedded_rect (GtkIconInfo *icon_info,GdkRectangle *rectangle);extern
gboolean gtk_icon_info_get_attach_points (GtkIconInfo *icon_info,GdkPoint **points,gint *n_points);extern
const gchar * gtk_icon_info_get_display_name (GtkIconInfo *icon_info);
extern
GType gtk_tooltip_get_type (void);
extern
void gtk_tooltip_set_markup (GtkTooltip *tooltip,const gchar *markup);
extern
void gtk_tooltip_set_text (GtkTooltip *tooltip,const gchar *text);
extern
void gtk_tooltip_set_icon (GtkTooltip *tooltip,GdkPixbuf *pixbuf);extern
void gtk_tooltip_set_icon_from_stock (GtkTooltip *tooltip,const gchar *stock_id,GtkIconSize size);
extern
void gtk_tooltip_set_icon_from_icon_name (GtkTooltip *tooltip,const gchar *icon_name,GtkIconSize size);
extern
void gtk_tooltip_set_icon_from_gicon (GtkTooltip *tooltip,GIcon *gicon,GtkIconSize size);
extern
void gtk_tooltip_set_custom (GtkTooltip *tooltip,GtkWidget *custom_widget);
extern
void gtk_tooltip_set_tip_area (GtkTooltip *tooltip,const GdkRectangle *rect);
extern
void gtk_tooltip_trigger_tooltip_query (GdkDisplay *display);extern
GType gtk_icon_view_get_type (void) ;
extern
GtkWidget * gtk_icon_view_new (void);
extern
GtkWidget * gtk_icon_view_new_with_area (GtkCellArea *area);
extern
GtkWidget * gtk_icon_view_new_with_model (GtkTreeModel *model);
extern
void gtk_icon_view_set_model (GtkIconView *icon_view,GtkTreeModel *model);
extern
GtkTreeModel * gtk_icon_view_get_model (GtkIconView *icon_view);
extern
void gtk_icon_view_set_text_column (GtkIconView *icon_view,gint column);
extern
gint gtk_icon_view_get_text_column (GtkIconView *icon_view);
extern
void gtk_icon_view_set_markup_column (GtkIconView *icon_view,gint column);
extern
gint gtk_icon_view_get_markup_column (GtkIconView *icon_view);
extern
void gtk_icon_view_set_pixbuf_column (GtkIconView *icon_view,gint column);
extern
gint gtk_icon_view_get_pixbuf_column (GtkIconView *icon_view);
extern
void gtk_icon_view_set_item_orientation (GtkIconView *icon_view,GtkOrientation orientation);
extern
GtkOrientation gtk_icon_view_get_item_orientation (GtkIconView *icon_view);
extern
void gtk_icon_view_set_columns (GtkIconView *icon_view,gint columns);
extern
gint gtk_icon_view_get_columns (GtkIconView *icon_view);
extern
void gtk_icon_view_set_item_width (GtkIconView *icon_view,gint item_width);
extern
gint gtk_icon_view_get_item_width (GtkIconView *icon_view);
extern
void gtk_icon_view_set_spacing (GtkIconView *icon_view,gint spacing);
extern
gint gtk_icon_view_get_spacing (GtkIconView *icon_view);
extern
void gtk_icon_view_set_row_spacing (GtkIconView *icon_view,gint row_spacing);
extern
gint gtk_icon_view_get_row_spacing (GtkIconView *icon_view);
extern
void gtk_icon_view_set_column_spacing (GtkIconView *icon_view,gint column_spacing);
extern
gint gtk_icon_view_get_column_spacing (GtkIconView *icon_view);
extern
void gtk_icon_view_set_margin (GtkIconView *icon_view,gint margin);
extern
gint gtk_icon_view_get_margin (GtkIconView *icon_view);
extern
void gtk_icon_view_set_item_padding (GtkIconView *icon_view,gint item_padding);
extern
gint gtk_icon_view_get_item_padding (GtkIconView *icon_view);
extern
GtkTreePath * gtk_icon_view_get_path_at_pos (GtkIconView *icon_view,gint x,gint y);
extern
gboolean gtk_icon_view_get_item_at_pos (GtkIconView *icon_view,gint x,gint y,GtkTreePath **path,GtkCellRenderer **cell);
extern
gboolean gtk_icon_view_get_visible_range (GtkIconView *icon_view,GtkTreePath **start_path,GtkTreePath **end_path);
extern
void gtk_icon_view_set_activate_on_single_click (GtkIconView *icon_view,gboolean single);
extern
gboolean gtk_icon_view_get_activate_on_single_click (GtkIconView *icon_view);
extern
void gtk_icon_view_selected_foreach (GtkIconView *icon_view,GtkIconViewForeachFunc func,gpointer data);
extern
void gtk_icon_view_set_selection_mode (GtkIconView *icon_view,GtkSelectionMode mode);
extern
GtkSelectionMode gtk_icon_view_get_selection_mode (GtkIconView *icon_view);
extern
void gtk_icon_view_select_path (GtkIconView *icon_view,GtkTreePath *path);
extern
void gtk_icon_view_unselect_path (GtkIconView *icon_view,GtkTreePath *path);
extern
gboolean gtk_icon_view_path_is_selected (GtkIconView *icon_view,GtkTreePath *path);
extern
gint gtk_icon_view_get_item_row (GtkIconView *icon_view,GtkTreePath *path);
extern
gint gtk_icon_view_get_item_column (GtkIconView *icon_view,GtkTreePath *path);
extern
GList *gtk_icon_view_get_selected_items (GtkIconView *icon_view);
extern
void gtk_icon_view_select_all (GtkIconView *icon_view);
extern
void gtk_icon_view_unselect_all (GtkIconView *icon_view);
extern
void gtk_icon_view_item_activated (GtkIconView *icon_view,GtkTreePath *path);
extern
void gtk_icon_view_set_cursor (GtkIconView *icon_view,GtkTreePath *path,GtkCellRenderer *cell,gboolean start_editing);
extern
gboolean gtk_icon_view_get_cursor (GtkIconView *icon_view,GtkTreePath **path,GtkCellRenderer **cell);
extern
void gtk_icon_view_scroll_to_path (GtkIconView *icon_view,GtkTreePath *path,gboolean use_align,gfloat row_align,gfloat col_align);
extern
void gtk_icon_view_enable_model_drag_source (GtkIconView *icon_view,GdkModifierType start_button_mask,const GtkTargetEntry *targets,gint n_targets,GdkDragAction actions);
extern
void gtk_icon_view_enable_model_drag_dest (GtkIconView *icon_view,const GtkTargetEntry *targets,gint n_targets,GdkDragAction actions);
extern
void gtk_icon_view_unset_model_drag_source (GtkIconView *icon_view);
extern
void gtk_icon_view_unset_model_drag_dest (GtkIconView *icon_view);
extern
void gtk_icon_view_set_reorderable (GtkIconView *icon_view,gboolean reorderable);
extern
gboolean gtk_icon_view_get_reorderable (GtkIconView *icon_view);
extern
void gtk_icon_view_set_drag_dest_item (GtkIconView *icon_view,GtkTreePath *path,GtkIconViewDropPosition pos);
extern
void gtk_icon_view_get_drag_dest_item (GtkIconView *icon_view,GtkTreePath **path,GtkIconViewDropPosition *pos);
extern
gboolean gtk_icon_view_get_dest_item_at_pos (GtkIconView *icon_view,gint drag_x,gint drag_y,GtkTreePath **path,GtkIconViewDropPosition *pos);
extern
cairo_surface_t *gtk_icon_view_create_drag_icon (GtkIconView *icon_view,GtkTreePath *path);
extern
void gtk_icon_view_convert_widget_to_bin_window_coords (GtkIconView *icon_view,gint wx,gint wy,gint *bx,gint *by);
extern
gboolean gtk_icon_view_get_cell_rect (GtkIconView *icon_view,GtkTreePath *path,GtkCellRenderer *cell,GdkRectangle *rect);
extern
void gtk_icon_view_set_tooltip_item (GtkIconView *icon_view,GtkTooltip *tooltip,GtkTreePath *path);
extern
void gtk_icon_view_set_tooltip_cell (GtkIconView *icon_view,GtkTooltip *tooltip,GtkTreePath *path,GtkCellRenderer *cell);
extern
gboolean gtk_icon_view_get_tooltip_context (GtkIconView *icon_view,gint *x,gint *y,gboolean keyboard_tip,GtkTreeModel **model,GtkTreePath **path,GtkTreeIter *iter);
extern
void gtk_icon_view_set_tooltip_column (GtkIconView *icon_view,gint column);
extern
gint gtk_icon_view_get_tooltip_column (GtkIconView *icon_view);extern
GType gtk_im_context_simple_get_type (void) ;
extern
GtkIMContext *gtk_im_context_simple_new (void);
extern
void gtk_im_context_simple_add_table (GtkIMContextSimple *context_simple,guint16 *data,gint max_seq_len,gint n_seqs);
extern
void gtk_im_context_simple_add_compose_file (GtkIMContextSimple *context_simple,const gchar *compose_file);extern
GType gtk_im_multicontext_get_type (void) ;
extern
GtkIMContext *gtk_im_multicontext_new (void);extern
void gtk_im_multicontext_append_menuitems (GtkIMMulticontext *context,GtkMenuShell *menushell);
extern
const char * gtk_im_multicontext_get_context_id (GtkIMMulticontext *context);
extern
void gtk_im_multicontext_set_context_id (GtkIMMulticontext *context,const char *context_id);extern
GType gtk_info_bar_get_type (void) ;
extern
GtkWidget *gtk_info_bar_new (void);
extern
GtkWidget *gtk_info_bar_new_with_buttons (const gchar *first_button_text,...);
extern
GtkWidget *gtk_info_bar_get_action_area (GtkInfoBar *info_bar);
extern
GtkWidget *gtk_info_bar_get_content_area (GtkInfoBar *info_bar);
extern
void gtk_info_bar_add_action_widget (GtkInfoBar *info_bar,GtkWidget *child,gint response_id);
extern
GtkWidget *gtk_info_bar_add_button (GtkInfoBar *info_bar,const gchar *button_text,gint response_id);
extern
void gtk_info_bar_add_buttons (GtkInfoBar *info_bar,const gchar *first_button_text,...);
extern
void gtk_info_bar_set_response_sensitive (GtkInfoBar *info_bar,gint response_id,gboolean setting);
extern
void gtk_info_bar_set_default_response (GtkInfoBar *info_bar,gint response_id);
extern
void gtk_info_bar_response (GtkInfoBar *info_bar,gint response_id);
extern
void gtk_info_bar_set_message_type (GtkInfoBar *info_bar,GtkMessageType message_type);
extern
GtkMessageType gtk_info_bar_get_message_type (GtkInfoBar *info_bar);
extern
void gtk_info_bar_set_show_close_button (GtkInfoBar *info_bar,gboolean setting);
extern
gboolean gtk_info_bar_get_show_close_button (GtkInfoBar *info_bar);
extern
void gtk_info_bar_set_revealed (GtkInfoBar *info_bar,gboolean revealed);
extern
gboolean gtk_info_bar_get_revealed (GtkInfoBar *info_bar);extern
GType gtk_invisible_get_type (void) ;
extern
GtkWidget* gtk_invisible_new (void);
extern
GtkWidget* gtk_invisible_new_for_screen (GdkScreen *screen);
extern
void gtk_invisible_set_screen (GtkInvisible *invisible,GdkScreen *screen);
extern
GdkScreen* gtk_invisible_get_screen (GtkInvisible *invisible);extern
GType gtk_layout_get_type (void) ;
extern
GtkWidget* gtk_layout_new (GtkAdjustment *hadjustment,GtkAdjustment *vadjustment);
extern
GdkWindow* gtk_layout_get_bin_window (GtkLayout *layout);
extern
void gtk_layout_put (GtkLayout *layout,GtkWidget *child_widget,gint x,gint y);
extern
void gtk_layout_move (GtkLayout *layout,GtkWidget *child_widget,gint x,gint y);
extern
void gtk_layout_set_size (GtkLayout *layout,guint width,guint height);
extern
void gtk_layout_get_size (GtkLayout *layout,guint *width,guint *height);extern
GtkAdjustment* gtk_layout_get_hadjustment (GtkLayout *layout);extern
GtkAdjustment* gtk_layout_get_vadjustment (GtkLayout *layout);extern
void gtk_layout_set_hadjustment (GtkLayout *layout,GtkAdjustment *adjustment);extern
void gtk_layout_set_vadjustment (GtkLayout *layout,GtkAdjustment *adjustment);extern
GType gtk_level_bar_get_type (void) ;
extern
GtkWidget *gtk_level_bar_new (void);
extern
GtkWidget *gtk_level_bar_new_for_interval (gdouble min_value,gdouble max_value);
extern
void gtk_level_bar_set_mode (GtkLevelBar *self,GtkLevelBarMode mode);
extern
GtkLevelBarMode gtk_level_bar_get_mode (GtkLevelBar *self);
extern
void gtk_level_bar_set_value (GtkLevelBar *self,gdouble value);
extern
gdouble gtk_level_bar_get_value (GtkLevelBar *self);
extern
void gtk_level_bar_set_min_value (GtkLevelBar *self,gdouble value);
extern
gdouble gtk_level_bar_get_min_value (GtkLevelBar *self);
extern
void gtk_level_bar_set_max_value (GtkLevelBar *self,gdouble value);
extern
gdouble gtk_level_bar_get_max_value (GtkLevelBar *self);
extern
void gtk_level_bar_set_inverted (GtkLevelBar *self,gboolean inverted);
extern
gboolean gtk_level_bar_get_inverted (GtkLevelBar *self);
extern
void gtk_level_bar_add_offset_value (GtkLevelBar *self,const gchar *name,gdouble value);
extern
void gtk_level_bar_remove_offset_value (GtkLevelBar *self,const gchar *name);
extern
gboolean gtk_level_bar_get_offset_value (GtkLevelBar *self,const gchar *name,gdouble *value);extern
GType gtk_link_button_get_type (void) ;
extern
GtkWidget * gtk_link_button_new (const gchar *uri);
extern
GtkWidget * gtk_link_button_new_with_label (const gchar *uri,const gchar *label);
extern
const gchar * gtk_link_button_get_uri (GtkLinkButton *link_button);
extern
void gtk_link_button_set_uri (GtkLinkButton *link_button,const gchar *uri);
extern
gboolean gtk_link_button_get_visited (GtkLinkButton *link_button);
extern
void gtk_link_button_set_visited (GtkLinkButton *link_button,gboolean visited);extern
GType gtk_list_box_row_get_type (void) ;
extern
GtkWidget* gtk_list_box_row_new (void);
extern
GtkWidget* gtk_list_box_row_get_header (GtkListBoxRow *row);
extern
void gtk_list_box_row_set_header (GtkListBoxRow *row,GtkWidget *header);
extern
gint gtk_list_box_row_get_index (GtkListBoxRow *row);
extern
void gtk_list_box_row_changed (GtkListBoxRow *row);
extern
gboolean gtk_list_box_row_is_selected (GtkListBoxRow *row);
extern
void gtk_list_box_row_set_selectable (GtkListBoxRow *row,gboolean selectable);
extern
gboolean gtk_list_box_row_get_selectable (GtkListBoxRow *row);
extern
void gtk_list_box_row_set_activatable (GtkListBoxRow *row,gboolean activatable);
extern
gboolean gtk_list_box_row_get_activatable (GtkListBoxRow *row);
extern
GType gtk_list_box_get_type (void) ;
extern
void gtk_list_box_prepend (GtkListBox *box,GtkWidget *child);
extern
void gtk_list_box_insert (GtkListBox *box,GtkWidget *child,gint position);
extern
GtkListBoxRow* gtk_list_box_get_selected_row (GtkListBox *box);
extern
GtkListBoxRow* gtk_list_box_get_row_at_index (GtkListBox *box,gint index_);
extern
GtkListBoxRow* gtk_list_box_get_row_at_y (GtkListBox *box,gint y);
extern
void gtk_list_box_select_row (GtkListBox *box,GtkListBoxRow *row);
extern
void gtk_list_box_set_placeholder (GtkListBox *box,GtkWidget *placeholder);
extern
void gtk_list_box_set_adjustment (GtkListBox *box,GtkAdjustment *adjustment);
extern
GtkAdjustment *gtk_list_box_get_adjustment (GtkListBox *box);
extern
void gtk_list_box_selected_foreach (GtkListBox *box,GtkListBoxForeachFunc func,gpointer data);
extern
GList *gtk_list_box_get_selected_rows (GtkListBox *box);
extern
void gtk_list_box_unselect_row (GtkListBox *box,GtkListBoxRow *row);
extern
void gtk_list_box_select_all (GtkListBox *box);
extern
void gtk_list_box_unselect_all (GtkListBox *box);
extern
void gtk_list_box_set_selection_mode (GtkListBox *box,GtkSelectionMode mode);
extern
GtkSelectionMode gtk_list_box_get_selection_mode (GtkListBox *box);
extern
void gtk_list_box_set_filter_func (GtkListBox *box,GtkListBoxFilterFunc filter_func,gpointer user_data,GDestroyNotify destroy);
extern
void gtk_list_box_set_header_func (GtkListBox *box,GtkListBoxUpdateHeaderFunc update_header,gpointer user_data,GDestroyNotify destroy);
extern
void gtk_list_box_invalidate_filter (GtkListBox *box);
extern
void gtk_list_box_invalidate_sort (GtkListBox *box);
extern
void gtk_list_box_invalidate_headers (GtkListBox *box);
extern
void gtk_list_box_set_sort_func (GtkListBox *box,GtkListBoxSortFunc sort_func,gpointer user_data,GDestroyNotify destroy);
extern
void gtk_list_box_set_activate_on_single_click (GtkListBox *box,gboolean single);
extern
gboolean gtk_list_box_get_activate_on_single_click (GtkListBox *box);
extern
void gtk_list_box_drag_unhighlight_row (GtkListBox *box);
extern
void gtk_list_box_drag_highlight_row (GtkListBox *box,GtkListBoxRow *row);
extern
GtkWidget* gtk_list_box_new (void);
extern
void gtk_list_box_bind_model (GtkListBox *box,GListModel *model,GtkListBoxCreateWidgetFunc create_widget_func,gpointer user_data,GDestroyNotify user_data_free_func);extern
GType gtk_lock_button_get_type (void) ;
extern
GtkWidget *gtk_lock_button_new (GPermission *permission);
extern
GPermission *gtk_lock_button_get_permission (GtkLockButton *button);
extern
void gtk_lock_button_set_permission (GtkLockButton *button,GPermission *permission);
extern
guint gtk_get_major_version (void) ;
extern
guint gtk_get_minor_version (void) ;
extern
guint gtk_get_micro_version (void) ;
extern
guint gtk_get_binary_age (void) ;
extern
guint gtk_get_interface_age (void) ;
extern
const gchar* gtk_check_version (guint required_major,guint required_minor,guint required_micro);
extern
gboolean gtk_parse_args (int *argc,char ***argv);
extern
void gtk_init (int *argc,char ***argv);
extern
gboolean gtk_init_check (int *argc,char ***argv);
extern
gboolean gtk_init_with_args (gint *argc,gchar ***argv,const gchar *parameter_string,const GOptionEntry *entries,const gchar *translation_domain,GError **error);
extern
GOptionGroup *gtk_get_option_group (gboolean open_default_display);
extern
void gtk_disable_setlocale (void);
extern
PangoLanguage *gtk_get_default_language (void);
extern
GtkTextDirection gtk_get_locale_direction (void);
extern
gboolean gtk_events_pending (void);
extern
void gtk_main_do_event (GdkEvent *event);
extern
void gtk_main (void);
extern
guint gtk_main_level (void);
extern
void gtk_main_quit (void);
extern
gboolean gtk_main_iteration (void);
extern
gboolean gtk_main_iteration_do (gboolean blocking);
extern
gboolean gtk_true (void) ;
extern
gboolean gtk_false (void) ;
extern
void gtk_grab_add (GtkWidget *widget);
extern
GtkWidget* gtk_grab_get_current (void);
extern
void gtk_grab_remove (GtkWidget *widget);
extern
void gtk_device_grab_add (GtkWidget *widget,GdkDevice *device,gboolean block_others);
extern
void gtk_device_grab_remove (GtkWidget *widget,GdkDevice *device);extern
guint gtk_key_snooper_install (GtkKeySnoopFunc snooper,gpointer func_data);extern
void gtk_key_snooper_remove (guint snooper_handler_id);
extern
GdkEvent * gtk_get_current_event (void);
extern
guint32 gtk_get_current_event_time (void);
extern
gboolean gtk_get_current_event_state (GdkModifierType *state);
extern
GdkDevice *gtk_get_current_event_device (void);
extern
GtkWidget *gtk_get_event_widget (GdkEvent *event);
extern
void gtk_propagate_event (GtkWidget *widget,GdkEvent *event);extern
GType gtk_menu_bar_get_type (void) ;
extern
GtkWidget* gtk_menu_bar_new (void);
extern
GtkWidget* gtk_menu_bar_new_from_model (GMenuModel *model);
extern
GtkPackDirection gtk_menu_bar_get_pack_direction (GtkMenuBar *menubar);
extern
void gtk_menu_bar_set_pack_direction (GtkMenuBar *menubar,GtkPackDirection pack_dir);
extern
GtkPackDirection gtk_menu_bar_get_child_pack_direction (GtkMenuBar *menubar);
extern
void gtk_menu_bar_set_child_pack_direction (GtkMenuBar *menubar,GtkPackDirection child_pack_dir);extern
GType gtk_popover_get_type (void) ;
extern
GtkWidget * gtk_popover_new (GtkWidget *relative_to);
extern
GtkWidget * gtk_popover_new_from_model (GtkWidget *relative_to,GMenuModel *model);
extern
void gtk_popover_set_relative_to (GtkPopover *popover,GtkWidget *relative_to);
extern
GtkWidget * gtk_popover_get_relative_to (GtkPopover *popover);
extern
void gtk_popover_set_pointing_to (GtkPopover *popover,const GdkRectangle *rect);
extern
gboolean gtk_popover_get_pointing_to (GtkPopover *popover,GdkRectangle *rect);
extern
void gtk_popover_set_position (GtkPopover *popover,GtkPositionType position);
extern
GtkPositionType gtk_popover_get_position (GtkPopover *popover);
extern
void gtk_popover_set_modal (GtkPopover *popover,gboolean modal);
extern
gboolean gtk_popover_get_modal (GtkPopover *popover);
extern
void gtk_popover_bind_model (GtkPopover *popover,GMenuModel *model,const gchar *action_namespace);extern
void gtk_popover_set_transitions_enabled (GtkPopover *popover,gboolean transitions_enabled);extern
gboolean gtk_popover_get_transitions_enabled (GtkPopover *popover);
extern
void gtk_popover_set_default_widget (GtkPopover *popover,GtkWidget *widget);
extern
GtkWidget * gtk_popover_get_default_widget (GtkPopover *popover);
extern
void gtk_popover_set_constrain_to (GtkPopover *popover,GtkPopoverConstraint constraint);
extern
GtkPopoverConstraint gtk_popover_get_constrain_to (GtkPopover *popover);
extern
void gtk_popover_popup (GtkPopover *popover);
extern
void gtk_popover_popdown (GtkPopover *popover);extern
GType gtk_menu_button_get_type (void) ;
extern
GtkWidget *gtk_menu_button_new (void);
extern
void gtk_menu_button_set_popup (GtkMenuButton *menu_button,GtkWidget *menu);
extern
GtkMenu *gtk_menu_button_get_popup (GtkMenuButton *menu_button);
extern
void gtk_menu_button_set_popover (GtkMenuButton *menu_button,GtkWidget *popover);
extern
GtkPopover *gtk_menu_button_get_popover (GtkMenuButton *menu_button);
extern
void gtk_menu_button_set_direction (GtkMenuButton *menu_button,GtkArrowType direction);
extern
GtkArrowType gtk_menu_button_get_direction (GtkMenuButton *menu_button);
extern
void gtk_menu_button_set_menu_model (GtkMenuButton *menu_button,GMenuModel *menu_model);
extern
GMenuModel *gtk_menu_button_get_menu_model (GtkMenuButton *menu_button);
extern
void gtk_menu_button_set_align_widget (GtkMenuButton *menu_button,GtkWidget *align_widget);
extern
GtkWidget *gtk_menu_button_get_align_widget (GtkMenuButton *menu_button);
extern
void gtk_menu_button_set_use_popover (GtkMenuButton *menu_button,gboolean use_popover);
extern
gboolean gtk_menu_button_get_use_popover (GtkMenuButton *menu_button);extern
GType gtk_size_group_get_type (void) ;
extern
GtkSizeGroup * gtk_size_group_new (GtkSizeGroupMode mode);
extern
void gtk_size_group_set_mode (GtkSizeGroup *size_group,GtkSizeGroupMode mode);
extern
GtkSizeGroupMode gtk_size_group_get_mode (GtkSizeGroup *size_group);extern
void gtk_size_group_set_ignore_hidden (GtkSizeGroup *size_group,gboolean ignore_hidden);extern
gboolean gtk_size_group_get_ignore_hidden (GtkSizeGroup *size_group);
extern
void gtk_size_group_add_widget (GtkSizeGroup *size_group,GtkWidget *widget);
extern
void gtk_size_group_remove_widget (GtkSizeGroup *size_group,GtkWidget *widget);
extern
GSList * gtk_size_group_get_widgets (GtkSizeGroup *size_group);extern
GType gtk_tool_item_get_type (void) ;
extern
GtkToolItem *gtk_tool_item_new (void);
extern
void gtk_tool_item_set_homogeneous (GtkToolItem *tool_item,gboolean homogeneous);
extern
gboolean gtk_tool_item_get_homogeneous (GtkToolItem *tool_item);
extern
void gtk_tool_item_set_expand (GtkToolItem *tool_item,gboolean expand);
extern
gboolean gtk_tool_item_get_expand (GtkToolItem *tool_item);
extern
void gtk_tool_item_set_tooltip_text (GtkToolItem *tool_item,const gchar *text);
extern
void gtk_tool_item_set_tooltip_markup (GtkToolItem *tool_item,const gchar *markup);
extern
void gtk_tool_item_set_use_drag_window (GtkToolItem *tool_item,gboolean use_drag_window);
extern
gboolean gtk_tool_item_get_use_drag_window (GtkToolItem *tool_item);
extern
void gtk_tool_item_set_visible_horizontal (GtkToolItem *tool_item,gboolean visible_horizontal);
extern
gboolean gtk_tool_item_get_visible_horizontal (GtkToolItem *tool_item);
extern
void gtk_tool_item_set_visible_vertical (GtkToolItem *tool_item,gboolean visible_vertical);
extern
gboolean gtk_tool_item_get_visible_vertical (GtkToolItem *tool_item);
extern
gboolean gtk_tool_item_get_is_important (GtkToolItem *tool_item);
extern
void gtk_tool_item_set_is_important (GtkToolItem *tool_item,gboolean is_important);
extern
PangoEllipsizeMode gtk_tool_item_get_ellipsize_mode (GtkToolItem *tool_item);
extern
GtkIconSize gtk_tool_item_get_icon_size (GtkToolItem *tool_item);
extern
GtkOrientation gtk_tool_item_get_orientation (GtkToolItem *tool_item);
extern
GtkToolbarStyle gtk_tool_item_get_toolbar_style (GtkToolItem *tool_item);
extern
GtkReliefStyle gtk_tool_item_get_relief_style (GtkToolItem *tool_item);
extern
gfloat gtk_tool_item_get_text_alignment (GtkToolItem *tool_item);
extern
GtkOrientation gtk_tool_item_get_text_orientation (GtkToolItem *tool_item);
extern
GtkSizeGroup * gtk_tool_item_get_text_size_group (GtkToolItem *tool_item);
extern
GtkWidget * gtk_tool_item_retrieve_proxy_menu_item (GtkToolItem *tool_item);
extern
GtkWidget * gtk_tool_item_get_proxy_menu_item (GtkToolItem *tool_item,const gchar *menu_item_id);
extern
void gtk_tool_item_set_proxy_menu_item (GtkToolItem *tool_item,const gchar *menu_item_id,GtkWidget *menu_item);
extern
void gtk_tool_item_rebuild_menu (GtkToolItem *tool_item);
extern
void gtk_tool_item_toolbar_reconfigured (GtkToolItem *tool_item);extern
GType gtk_tool_button_get_type (void) ;
extern
GtkToolItem *gtk_tool_button_new (GtkWidget *icon_widget,const gchar *label);extern
GtkToolItem *gtk_tool_button_new_from_stock (const gchar *stock_id);
extern
void gtk_tool_button_set_label (GtkToolButton *button,const gchar *label);
extern
const gchar * gtk_tool_button_get_label (GtkToolButton *button);
extern
void gtk_tool_button_set_use_underline (GtkToolButton *button,gboolean use_underline);
extern
gboolean gtk_tool_button_get_use_underline (GtkToolButton *button);extern
void gtk_tool_button_set_stock_id (GtkToolButton *button,const gchar *stock_id);extern
const gchar * gtk_tool_button_get_stock_id (GtkToolButton *button);
extern
void gtk_tool_button_set_icon_name (GtkToolButton *button,const gchar *icon_name);
extern
const gchar * gtk_tool_button_get_icon_name (GtkToolButton *button);
extern
void gtk_tool_button_set_icon_widget (GtkToolButton *button,GtkWidget *icon_widget);
extern
GtkWidget * gtk_tool_button_get_icon_widget (GtkToolButton *button);
extern
void gtk_tool_button_set_label_widget (GtkToolButton *button,GtkWidget *label_widget);
extern
GtkWidget * gtk_tool_button_get_label_widget (GtkToolButton *button);extern
GType gtk_menu_tool_button_get_type (void) ;
extern
GtkToolItem *gtk_menu_tool_button_new (GtkWidget *icon_widget,const gchar *label);extern
GtkToolItem *gtk_menu_tool_button_new_from_stock (const gchar *stock_id);
extern
void gtk_menu_tool_button_set_menu (GtkMenuToolButton *button,GtkWidget *menu);
extern
GtkWidget *gtk_menu_tool_button_get_menu (GtkMenuToolButton *button);
extern
void gtk_menu_tool_button_set_arrow_tooltip_text (GtkMenuToolButton *button,const gchar *text);
extern
void gtk_menu_tool_button_set_arrow_tooltip_markup (GtkMenuToolButton *button,const gchar *markup);extern
GType gtk_message_dialog_get_type (void) ;
extern
GtkWidget* gtk_message_dialog_new (GtkWindow *parent,GtkDialogFlags flags,GtkMessageType type,GtkButtonsType buttons,const gchar *message_format,...) ;
extern
GtkWidget* gtk_message_dialog_new_with_markup (GtkWindow *parent,GtkDialogFlags flags,GtkMessageType type,GtkButtonsType buttons,const gchar *message_format,...) ;extern
void gtk_message_dialog_set_image (GtkMessageDialog *dialog,GtkWidget *image);extern
GtkWidget * gtk_message_dialog_get_image (GtkMessageDialog *dialog);
extern
void gtk_message_dialog_set_markup (GtkMessageDialog *message_dialog,const gchar *str);
extern
void gtk_message_dialog_format_secondary_text (GtkMessageDialog *message_dialog,const gchar *message_format,...) ;
extern
void gtk_message_dialog_format_secondary_markup (GtkMessageDialog *message_dialog,const gchar *message_format,...) ;
extern
GtkWidget *gtk_message_dialog_get_message_area (GtkMessageDialog *message_dialog);
extern
GType gtk_model_button_get_type (void) ;
extern
GtkWidget * gtk_model_button_new (void);extern
GType gtk_mount_operation_get_type (void);
extern
GMountOperation *gtk_mount_operation_new (GtkWindow *parent);
extern
gboolean gtk_mount_operation_is_showing (GtkMountOperation *op);
extern
void gtk_mount_operation_set_parent (GtkMountOperation *op,GtkWindow *parent);
extern
GtkWindow * gtk_mount_operation_get_parent (GtkMountOperation *op);
extern
void gtk_mount_operation_set_screen (GtkMountOperation *op,GdkScreen *screen);
extern
GdkScreen *gtk_mount_operation_get_screen (GtkMountOperation *op);extern
GType gtk_notebook_get_type (void) ;
extern
GtkWidget * gtk_notebook_new (void);
extern
gint gtk_notebook_append_page (GtkNotebook *notebook,GtkWidget *child,GtkWidget *tab_label);
extern
gint gtk_notebook_append_page_menu (GtkNotebook *notebook,GtkWidget *child,GtkWidget *tab_label,GtkWidget *menu_label);
extern
gint gtk_notebook_prepend_page (GtkNotebook *notebook,GtkWidget *child,GtkWidget *tab_label);
extern
gint gtk_notebook_prepend_page_menu (GtkNotebook *notebook,GtkWidget *child,GtkWidget *tab_label,GtkWidget *menu_label);
extern
gint gtk_notebook_insert_page (GtkNotebook *notebook,GtkWidget *child,GtkWidget *tab_label,gint position);
extern
gint gtk_notebook_insert_page_menu (GtkNotebook *notebook,GtkWidget *child,GtkWidget *tab_label,GtkWidget *menu_label,gint position);
extern
void gtk_notebook_remove_page (GtkNotebook *notebook,gint page_num);
extern
void gtk_notebook_set_group_name (GtkNotebook *notebook,const gchar *group_name);
extern
const gchar *gtk_notebook_get_group_name (GtkNotebook *notebook);
extern
gint gtk_notebook_get_current_page (GtkNotebook *notebook);
extern
GtkWidget* gtk_notebook_get_nth_page (GtkNotebook *notebook,gint page_num);
extern
gint gtk_notebook_get_n_pages (GtkNotebook *notebook);
extern
gint gtk_notebook_page_num (GtkNotebook *notebook,GtkWidget *child);
extern
void gtk_notebook_set_current_page (GtkNotebook *notebook,gint page_num);
extern
void gtk_notebook_next_page (GtkNotebook *notebook);
extern
void gtk_notebook_prev_page (GtkNotebook *notebook);
extern
void gtk_notebook_set_show_border (GtkNotebook *notebook,gboolean show_border);
extern
gboolean gtk_notebook_get_show_border (GtkNotebook *notebook);
extern
void gtk_notebook_set_show_tabs (GtkNotebook *notebook,gboolean show_tabs);
extern
gboolean gtk_notebook_get_show_tabs (GtkNotebook *notebook);
extern
void gtk_notebook_set_tab_pos (GtkNotebook *notebook,GtkPositionType pos);
extern
GtkPositionType gtk_notebook_get_tab_pos (GtkNotebook *notebook);
extern
void gtk_notebook_set_scrollable (GtkNotebook *notebook,gboolean scrollable);
extern
gboolean gtk_notebook_get_scrollable (GtkNotebook *notebook);extern
guint16 gtk_notebook_get_tab_hborder (GtkNotebook *notebook);extern
guint16 gtk_notebook_get_tab_vborder (GtkNotebook *notebook);
extern
void gtk_notebook_popup_enable (GtkNotebook *notebook);
extern
void gtk_notebook_popup_disable (GtkNotebook *notebook);
extern
GtkWidget * gtk_notebook_get_tab_label (GtkNotebook *notebook,GtkWidget *child);
extern
void gtk_notebook_set_tab_label (GtkNotebook *notebook,GtkWidget *child,GtkWidget *tab_label);
extern
void gtk_notebook_set_tab_label_text (GtkNotebook *notebook,GtkWidget *child,const gchar *tab_text);
extern
const gchar * gtk_notebook_get_tab_label_text (GtkNotebook *notebook,GtkWidget *child);
extern
GtkWidget * gtk_notebook_get_menu_label (GtkNotebook *notebook,GtkWidget *child);
extern
void gtk_notebook_set_menu_label (GtkNotebook *notebook,GtkWidget *child,GtkWidget *menu_label);
extern
void gtk_notebook_set_menu_label_text (GtkNotebook *notebook,GtkWidget *child,const gchar *menu_text);
extern
const gchar * gtk_notebook_get_menu_label_text (GtkNotebook *notebook,GtkWidget *child);
extern
void gtk_notebook_reorder_child (GtkNotebook *notebook,GtkWidget *child,gint position);
extern
gboolean gtk_notebook_get_tab_reorderable (GtkNotebook *notebook,GtkWidget *child);
extern
void gtk_notebook_set_tab_reorderable (GtkNotebook *notebook,GtkWidget *child,gboolean reorderable);
extern
gboolean gtk_notebook_get_tab_detachable (GtkNotebook *notebook,GtkWidget *child);
extern
void gtk_notebook_set_tab_detachable (GtkNotebook *notebook,GtkWidget *child,gboolean detachable);
extern
void gtk_notebook_detach_tab (GtkNotebook *notebook,GtkWidget *child);
extern
GtkWidget* gtk_notebook_get_action_widget (GtkNotebook *notebook,GtkPackType pack_type);
extern
void gtk_notebook_set_action_widget (GtkNotebook *notebook,GtkWidget *widget,GtkPackType pack_type);extern
GType gtk_offscreen_window_get_type (void) ;
extern
GtkWidget *gtk_offscreen_window_new (void);
extern
cairo_surface_t *gtk_offscreen_window_get_surface (GtkOffscreenWindow *offscreen);
extern
GdkPixbuf *gtk_offscreen_window_get_pixbuf (GtkOffscreenWindow *offscreen);extern
GType gtk_orientable_get_type (void) ;
extern
void gtk_orientable_set_orientation (GtkOrientable *orientable,GtkOrientation orientation);
extern
GtkOrientation gtk_orientable_get_orientation (GtkOrientable *orientable);extern
GType gtk_overlay_get_type (void) ;
extern
GtkWidget *gtk_overlay_new (void);
extern
void gtk_overlay_add_overlay (GtkOverlay *overlay,GtkWidget *widget);
extern
void gtk_overlay_reorder_overlay (GtkOverlay *overlay,GtkWidget *child,int index_);
extern
gboolean gtk_overlay_get_overlay_pass_through (GtkOverlay *overlay,GtkWidget *widget);
extern
void gtk_overlay_set_overlay_pass_through (GtkOverlay *overlay,GtkWidget *widget,gboolean pass_through);extern
GType gtk_pad_controller_get_type (void) ;
extern
GtkPadController *gtk_pad_controller_new (GtkWindow *window,GActionGroup *group,GdkDevice *pad);
extern
void gtk_pad_controller_set_action_entries (GtkPadController *controller,const GtkPadActionEntry *entries,gint n_entries);
extern
void gtk_pad_controller_set_action (GtkPadController *controller,GtkPadActionType type,gint index,gint mode,const gchar *label,const gchar *action_name);
extern
GType gtk_paper_size_get_type (void) ;
extern
GtkPaperSize *gtk_paper_size_new (const gchar *name);
extern
GtkPaperSize *gtk_paper_size_new_from_ppd (const gchar *ppd_name,const gchar *ppd_display_name,gdouble width,gdouble height);
extern
GtkPaperSize *gtk_paper_size_new_from_ipp (const gchar *ipp_name,gdouble width,gdouble height);
extern
GtkPaperSize *gtk_paper_size_new_custom (const gchar *name,const gchar *display_name,gdouble width,gdouble height,GtkUnit unit);
extern
GtkPaperSize *gtk_paper_size_copy (GtkPaperSize *other);
extern
void gtk_paper_size_free (GtkPaperSize *size);
extern
gboolean gtk_paper_size_is_equal (GtkPaperSize *size1,GtkPaperSize *size2);
extern
GList *gtk_paper_size_get_paper_sizes (gboolean include_custom);
extern
const gchar *gtk_paper_size_get_name (GtkPaperSize *size);
extern
const gchar *gtk_paper_size_get_display_name (GtkPaperSize *size);
extern
const gchar *gtk_paper_size_get_ppd_name (GtkPaperSize *size);
extern
gdouble gtk_paper_size_get_width (GtkPaperSize *size, GtkUnit unit);
extern
gdouble gtk_paper_size_get_height (GtkPaperSize *size, GtkUnit unit);
extern
gboolean gtk_paper_size_is_custom (GtkPaperSize *size);
extern
gboolean gtk_paper_size_is_ipp (GtkPaperSize *size);
extern
void gtk_paper_size_set_size (GtkPaperSize *size,gdouble width,gdouble height,GtkUnit unit);
extern
gdouble gtk_paper_size_get_default_top_margin (GtkPaperSize *size,GtkUnit unit);
extern
gdouble gtk_paper_size_get_default_bottom_margin (GtkPaperSize *size,GtkUnit unit);
extern
gdouble gtk_paper_size_get_default_left_margin (GtkPaperSize *size,GtkUnit unit);
extern
gdouble gtk_paper_size_get_default_right_margin (GtkPaperSize *size,GtkUnit unit);
extern
const gchar *gtk_paper_size_get_default (void);
extern
GtkPaperSize *gtk_paper_size_new_from_key_file (GKeyFile *key_file,const gchar *group_name,GError **error);
extern
void gtk_paper_size_to_key_file (GtkPaperSize *size,GKeyFile *key_file,const gchar *group_name);
extern
GtkPaperSize *gtk_paper_size_new_from_gvariant (GVariant *variant);
extern
GVariant *gtk_paper_size_to_gvariant (GtkPaperSize *paper_size);
extern
GType gtk_page_setup_get_type (void) ;
extern
GtkPageSetup * gtk_page_setup_new (void);
extern
GtkPageSetup * gtk_page_setup_copy (GtkPageSetup *other);
extern
GtkPageOrientation gtk_page_setup_get_orientation (GtkPageSetup *setup);
extern
void gtk_page_setup_set_orientation (GtkPageSetup *setup,GtkPageOrientation orientation);
extern
GtkPaperSize * gtk_page_setup_get_paper_size (GtkPageSetup *setup);
extern
void gtk_page_setup_set_paper_size (GtkPageSetup *setup,GtkPaperSize *size);
extern
gdouble gtk_page_setup_get_top_margin (GtkPageSetup *setup,GtkUnit unit);
extern
void gtk_page_setup_set_top_margin (GtkPageSetup *setup,gdouble margin,GtkUnit unit);
extern
gdouble gtk_page_setup_get_bottom_margin (GtkPageSetup *setup,GtkUnit unit);
extern
void gtk_page_setup_set_bottom_margin (GtkPageSetup *setup,gdouble margin,GtkUnit unit);
extern
gdouble gtk_page_setup_get_left_margin (GtkPageSetup *setup,GtkUnit unit);
extern
void gtk_page_setup_set_left_margin (GtkPageSetup *setup,gdouble margin,GtkUnit unit);
extern
gdouble gtk_page_setup_get_right_margin (GtkPageSetup *setup,GtkUnit unit);
extern
void gtk_page_setup_set_right_margin (GtkPageSetup *setup,gdouble margin,GtkUnit unit);
extern
void gtk_page_setup_set_paper_size_and_default_margins (GtkPageSetup *setup,GtkPaperSize *size);
extern
gdouble gtk_page_setup_get_paper_width (GtkPageSetup *setup,GtkUnit unit);
extern
gdouble gtk_page_setup_get_paper_height (GtkPageSetup *setup,GtkUnit unit);
extern
gdouble gtk_page_setup_get_page_width (GtkPageSetup *setup,GtkUnit unit);
extern
gdouble gtk_page_setup_get_page_height (GtkPageSetup *setup,GtkUnit unit);
extern
GtkPageSetup *gtk_page_setup_new_from_file (const gchar *file_name,GError **error);
extern
gboolean gtk_page_setup_load_file (GtkPageSetup *setup,const char *file_name,GError **error);
extern
gboolean gtk_page_setup_to_file (GtkPageSetup *setup,const char *file_name,GError **error);
extern
GtkPageSetup *gtk_page_setup_new_from_key_file (GKeyFile *key_file,const gchar *group_name,GError **error);
extern
gboolean gtk_page_setup_load_key_file (GtkPageSetup *setup,GKeyFile *key_file,const gchar *group_name,GError **error);
extern
void gtk_page_setup_to_key_file (GtkPageSetup *setup,GKeyFile *key_file,const gchar *group_name);
extern
GVariant *gtk_page_setup_to_gvariant (GtkPageSetup *setup);
extern
GtkPageSetup *gtk_page_setup_new_from_gvariant (GVariant *variant);extern
GType gtk_paned_get_type (void) ;
extern
GtkWidget * gtk_paned_new (GtkOrientation orientation);
extern
void gtk_paned_add1 (GtkPaned *paned,GtkWidget *child);
extern
void gtk_paned_add2 (GtkPaned *paned,GtkWidget *child);
extern
void gtk_paned_pack1 (GtkPaned *paned,GtkWidget *child,gboolean resize,gboolean shrink);
extern
void gtk_paned_pack2 (GtkPaned *paned,GtkWidget *child,gboolean resize,gboolean shrink);
extern
gint gtk_paned_get_position (GtkPaned *paned);
extern
void gtk_paned_set_position (GtkPaned *paned,gint position);
extern
GtkWidget * gtk_paned_get_child1 (GtkPaned *paned);
extern
GtkWidget * gtk_paned_get_child2 (GtkPaned *paned);
extern
GdkWindow * gtk_paned_get_handle_window (GtkPaned *paned);
extern
void gtk_paned_set_wide_handle (GtkPaned *paned,gboolean wide);
extern
gboolean gtk_paned_get_wide_handle (GtkPaned *paned);
extern
GType gtk_places_sidebar_get_type (void) ;
extern
GtkWidget * gtk_places_sidebar_new (void);
extern
GtkPlacesOpenFlags gtk_places_sidebar_get_open_flags (GtkPlacesSidebar *sidebar);
extern
void gtk_places_sidebar_set_open_flags (GtkPlacesSidebar *sidebar,GtkPlacesOpenFlags flags);
extern
GFile * gtk_places_sidebar_get_location (GtkPlacesSidebar *sidebar);
extern
void gtk_places_sidebar_set_location (GtkPlacesSidebar *sidebar,GFile *location);
extern
gboolean gtk_places_sidebar_get_show_recent (GtkPlacesSidebar *sidebar);
extern
void gtk_places_sidebar_set_show_recent (GtkPlacesSidebar *sidebar,gboolean show_recent);
extern
gboolean gtk_places_sidebar_get_show_desktop (GtkPlacesSidebar *sidebar);
extern
void gtk_places_sidebar_set_show_desktop (GtkPlacesSidebar *sidebar,gboolean show_desktop);extern
gboolean gtk_places_sidebar_get_show_connect_to_server (GtkPlacesSidebar *sidebar);extern
void gtk_places_sidebar_set_show_connect_to_server (GtkPlacesSidebar *sidebar,gboolean show_connect_to_server);
extern
gboolean gtk_places_sidebar_get_show_enter_location (GtkPlacesSidebar *sidebar);
extern
void gtk_places_sidebar_set_show_enter_location (GtkPlacesSidebar *sidebar,gboolean show_enter_location);
extern
void gtk_places_sidebar_set_local_only (GtkPlacesSidebar *sidebar,gboolean local_only);
extern
gboolean gtk_places_sidebar_get_local_only (GtkPlacesSidebar *sidebar);
extern
void gtk_places_sidebar_add_shortcut (GtkPlacesSidebar *sidebar,GFile *location);
extern
void gtk_places_sidebar_remove_shortcut (GtkPlacesSidebar *sidebar,GFile *location);
extern
GSList * gtk_places_sidebar_list_shortcuts (GtkPlacesSidebar *sidebar);
extern
GFile * gtk_places_sidebar_get_nth_bookmark (GtkPlacesSidebar *sidebar,gint n);
extern
void gtk_places_sidebar_set_drop_targets_visible (GtkPlacesSidebar *sidebar,gboolean visible,GdkDragContext *context);
extern
gboolean gtk_places_sidebar_get_show_trash (GtkPlacesSidebar *sidebar);
extern
void gtk_places_sidebar_set_show_trash (GtkPlacesSidebar *sidebar,gboolean show_trash);
extern
void gtk_places_sidebar_set_show_other_locations (GtkPlacesSidebar *sidebar,gboolean show_other_locations);
extern
gboolean gtk_places_sidebar_get_show_other_locations (GtkPlacesSidebar *sidebar);
extern
void gtk_places_sidebar_set_show_starred_location (GtkPlacesSidebar *sidebar,gboolean show_starred_location);
extern
gboolean gtk_places_sidebar_get_show_starred_location (GtkPlacesSidebar *sidebar);extern
GType gtk_popover_menu_get_type (void) ;
extern
GtkWidget * gtk_popover_menu_new (void);
extern
void gtk_popover_menu_open_submenu (GtkPopoverMenu *popover,const gchar *name);
extern
GType gtk_print_context_get_type (void) ;
extern
cairo_t *gtk_print_context_get_cairo_context (GtkPrintContext *context);
extern
GtkPageSetup *gtk_print_context_get_page_setup (GtkPrintContext *context);
extern
gdouble gtk_print_context_get_width (GtkPrintContext *context);
extern
gdouble gtk_print_context_get_height (GtkPrintContext *context);
extern
gdouble gtk_print_context_get_dpi_x (GtkPrintContext *context);
extern
gdouble gtk_print_context_get_dpi_y (GtkPrintContext *context);
extern
gboolean gtk_print_context_get_hard_margins (GtkPrintContext *context,gdouble *top,gdouble *bottom,gdouble *left,gdouble *right);
extern
PangoFontMap *gtk_print_context_get_pango_fontmap (GtkPrintContext *context);
extern
PangoContext *gtk_print_context_create_pango_context (GtkPrintContext *context);
extern
PangoLayout *gtk_print_context_create_pango_layout (GtkPrintContext *context);
extern
void gtk_print_context_set_cairo_context (GtkPrintContext *context,cairo_t *cr,double dpi_x,double dpi_y);extern
GType gtk_print_settings_get_type (void) ;
extern
GtkPrintSettings *gtk_print_settings_new (void);
extern
GtkPrintSettings *gtk_print_settings_copy (GtkPrintSettings *other);
extern
GtkPrintSettings *gtk_print_settings_new_from_file (const gchar *file_name,GError **error);
extern
gboolean gtk_print_settings_load_file (GtkPrintSettings *settings,const gchar *file_name,GError **error);
extern
gboolean gtk_print_settings_to_file (GtkPrintSettings *settings,const gchar *file_name,GError **error);
extern
GtkPrintSettings *gtk_print_settings_new_from_key_file (GKeyFile *key_file,const gchar *group_name,GError **error);
extern
gboolean gtk_print_settings_load_key_file (GtkPrintSettings *settings,GKeyFile *key_file,const gchar *group_name,GError **error);
extern
void gtk_print_settings_to_key_file (GtkPrintSettings *settings,GKeyFile *key_file,const gchar *group_name);
extern
gboolean gtk_print_settings_has_key (GtkPrintSettings *settings,const gchar *key);
extern
const gchar * gtk_print_settings_get (GtkPrintSettings *settings,const gchar *key);
extern
void gtk_print_settings_set (GtkPrintSettings *settings,const gchar *key,const gchar *value);
extern
void gtk_print_settings_unset (GtkPrintSettings *settings,const gchar *key);
extern
void gtk_print_settings_foreach (GtkPrintSettings *settings,GtkPrintSettingsFunc func,gpointer user_data);
extern
gboolean gtk_print_settings_get_bool (GtkPrintSettings *settings,const gchar *key);
extern
void gtk_print_settings_set_bool (GtkPrintSettings *settings,const gchar *key,gboolean value);
extern
gdouble gtk_print_settings_get_double (GtkPrintSettings *settings,const gchar *key);
extern
gdouble gtk_print_settings_get_double_with_default (GtkPrintSettings *settings,const gchar *key,gdouble def);
extern
void gtk_print_settings_set_double (GtkPrintSettings *settings,const gchar *key,gdouble value);
extern
gdouble gtk_print_settings_get_length (GtkPrintSettings *settings,const gchar *key,GtkUnit unit);
extern
void gtk_print_settings_set_length (GtkPrintSettings *settings,const gchar *key,gdouble value,GtkUnit unit);
extern
gint gtk_print_settings_get_int (GtkPrintSettings *settings,const gchar *key);
extern
gint gtk_print_settings_get_int_with_default (GtkPrintSettings *settings,const gchar *key,gint def);
extern
void gtk_print_settings_set_int (GtkPrintSettings *settings,const gchar *key,gint value);
extern
const gchar * gtk_print_settings_get_printer (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_printer (GtkPrintSettings *settings,const gchar *printer);
extern
GtkPageOrientation gtk_print_settings_get_orientation (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_orientation (GtkPrintSettings *settings,GtkPageOrientation orientation);
extern
GtkPaperSize * gtk_print_settings_get_paper_size (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_paper_size (GtkPrintSettings *settings,GtkPaperSize *paper_size);
extern
gdouble gtk_print_settings_get_paper_width (GtkPrintSettings *settings,GtkUnit unit);
extern
void gtk_print_settings_set_paper_width (GtkPrintSettings *settings,gdouble width,GtkUnit unit);
extern
gdouble gtk_print_settings_get_paper_height (GtkPrintSettings *settings,GtkUnit unit);
extern
void gtk_print_settings_set_paper_height (GtkPrintSettings *settings,gdouble height,GtkUnit unit);
extern
gboolean gtk_print_settings_get_use_color (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_use_color (GtkPrintSettings *settings,gboolean use_color);
extern
gboolean gtk_print_settings_get_collate (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_collate (GtkPrintSettings *settings,gboolean collate);
extern
gboolean gtk_print_settings_get_reverse (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_reverse (GtkPrintSettings *settings,gboolean reverse);
extern
GtkPrintDuplex gtk_print_settings_get_duplex (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_duplex (GtkPrintSettings *settings,GtkPrintDuplex duplex);
extern
GtkPrintQuality gtk_print_settings_get_quality (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_quality (GtkPrintSettings *settings,GtkPrintQuality quality);
extern
gint gtk_print_settings_get_n_copies (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_n_copies (GtkPrintSettings *settings,gint num_copies);
extern
gint gtk_print_settings_get_number_up (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_number_up (GtkPrintSettings *settings,gint number_up);
extern
GtkNumberUpLayout gtk_print_settings_get_number_up_layout (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_number_up_layout (GtkPrintSettings *settings,GtkNumberUpLayout number_up_layout);
extern
gint gtk_print_settings_get_resolution (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_resolution (GtkPrintSettings *settings,gint resolution);
extern
gint gtk_print_settings_get_resolution_x (GtkPrintSettings *settings);
extern
gint gtk_print_settings_get_resolution_y (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_resolution_xy (GtkPrintSettings *settings,gint resolution_x,gint resolution_y);
extern
gdouble gtk_print_settings_get_printer_lpi (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_printer_lpi (GtkPrintSettings *settings,gdouble lpi);
extern
gdouble gtk_print_settings_get_scale (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_scale (GtkPrintSettings *settings,gdouble scale);
extern
GtkPrintPages gtk_print_settings_get_print_pages (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_print_pages (GtkPrintSettings *settings,GtkPrintPages pages);
extern
GtkPageRange * gtk_print_settings_get_page_ranges (GtkPrintSettings *settings,gint *num_ranges);
extern
void gtk_print_settings_set_page_ranges (GtkPrintSettings *settings,GtkPageRange *page_ranges,gint num_ranges);
extern
GtkPageSet gtk_print_settings_get_page_set (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_page_set (GtkPrintSettings *settings,GtkPageSet page_set);
extern
const gchar * gtk_print_settings_get_default_source (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_default_source (GtkPrintSettings *settings,const gchar *default_source);
extern
const gchar * gtk_print_settings_get_media_type (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_media_type (GtkPrintSettings *settings,const gchar *media_type);
extern
const gchar * gtk_print_settings_get_dither (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_dither (GtkPrintSettings *settings,const gchar *dither);
extern
const gchar * gtk_print_settings_get_finishings (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_finishings (GtkPrintSettings *settings,const gchar *finishings);
extern
const gchar * gtk_print_settings_get_output_bin (GtkPrintSettings *settings);
extern
void gtk_print_settings_set_output_bin (GtkPrintSettings *settings,const gchar *output_bin);
extern
GVariant *gtk_print_settings_to_gvariant (GtkPrintSettings *settings);
extern
GtkPrintSettings *gtk_print_settings_new_from_gvariant (GVariant *variant);extern
GType gtk_print_operation_preview_get_type (void) ;
extern
void gtk_print_operation_preview_render_page (GtkPrintOperationPreview *preview,gint page_nr);
extern
void gtk_print_operation_preview_end_preview (GtkPrintOperationPreview *preview);
extern
gboolean gtk_print_operation_preview_is_selected (GtkPrintOperationPreview *preview,gint page_nr);extern
GQuark gtk_print_error_quark (void);
extern
GType gtk_print_operation_get_type (void) ;
extern
GtkPrintOperation * gtk_print_operation_new (void);
extern
void gtk_print_operation_set_default_page_setup (GtkPrintOperation *op,GtkPageSetup *default_page_setup);
extern
GtkPageSetup * gtk_print_operation_get_default_page_setup (GtkPrintOperation *op);
extern
void gtk_print_operation_set_print_settings (GtkPrintOperation *op,GtkPrintSettings *print_settings);
extern
GtkPrintSettings * gtk_print_operation_get_print_settings (GtkPrintOperation *op);
extern
void gtk_print_operation_set_job_name (GtkPrintOperation *op,const gchar *job_name);
extern
void gtk_print_operation_set_n_pages (GtkPrintOperation *op,gint n_pages);
extern
void gtk_print_operation_set_current_page (GtkPrintOperation *op,gint current_page);
extern
void gtk_print_operation_set_use_full_page (GtkPrintOperation *op,gboolean full_page);
extern
void gtk_print_operation_set_unit (GtkPrintOperation *op,GtkUnit unit);
extern
void gtk_print_operation_set_export_filename (GtkPrintOperation *op,const gchar *filename);
extern
void gtk_print_operation_set_track_print_status (GtkPrintOperation *op,gboolean track_status);
extern
void gtk_print_operation_set_show_progress (GtkPrintOperation *op,gboolean show_progress);
extern
void gtk_print_operation_set_allow_async (GtkPrintOperation *op,gboolean allow_async);
extern
void gtk_print_operation_set_custom_tab_label (GtkPrintOperation *op,const gchar *label);
extern
GtkPrintOperationResult gtk_print_operation_run (GtkPrintOperation *op,GtkPrintOperationAction action,GtkWindow *parent,GError **error);
extern
void gtk_print_operation_get_error (GtkPrintOperation *op,GError **error);
extern
GtkPrintStatus gtk_print_operation_get_status (GtkPrintOperation *op);
extern
const gchar * gtk_print_operation_get_status_string (GtkPrintOperation *op);
extern
gboolean gtk_print_operation_is_finished (GtkPrintOperation *op);
extern
void gtk_print_operation_cancel (GtkPrintOperation *op);
extern
void gtk_print_operation_draw_page_finish (GtkPrintOperation *op);
extern
void gtk_print_operation_set_defer_drawing (GtkPrintOperation *op);
extern
void gtk_print_operation_set_support_selection (GtkPrintOperation *op,gboolean support_selection);
extern
gboolean gtk_print_operation_get_support_selection (GtkPrintOperation *op);
extern
void gtk_print_operation_set_has_selection (GtkPrintOperation *op,gboolean has_selection);
extern
gboolean gtk_print_operation_get_has_selection (GtkPrintOperation *op);
extern
void gtk_print_operation_set_embed_page_setup (GtkPrintOperation *op,gboolean embed);
extern
gboolean gtk_print_operation_get_embed_page_setup (GtkPrintOperation *op);
extern
gint gtk_print_operation_get_n_pages_to_print (GtkPrintOperation *op);
extern
GtkPageSetup *gtk_print_run_page_setup_dialog (GtkWindow *parent,GtkPageSetup *page_setup,GtkPrintSettings *settings);
extern
void gtk_print_run_page_setup_dialog_async (GtkWindow *parent,GtkPageSetup *page_setup,GtkPrintSettings *settings,GtkPageSetupDoneFunc done_cb,gpointer data);extern
GType gtk_progress_bar_get_type (void) ;
extern
GtkWidget* gtk_progress_bar_new (void);
extern
void gtk_progress_bar_pulse (GtkProgressBar *pbar);
extern
void gtk_progress_bar_set_text (GtkProgressBar *pbar,const gchar *text);
extern
void gtk_progress_bar_set_fraction (GtkProgressBar *pbar,gdouble fraction);
extern
void gtk_progress_bar_set_pulse_step (GtkProgressBar *pbar,gdouble fraction);
extern
void gtk_progress_bar_set_inverted (GtkProgressBar *pbar,gboolean inverted);
extern
const gchar * gtk_progress_bar_get_text (GtkProgressBar *pbar);
extern
gdouble gtk_progress_bar_get_fraction (GtkProgressBar *pbar);
extern
gdouble gtk_progress_bar_get_pulse_step (GtkProgressBar *pbar);
extern
gboolean gtk_progress_bar_get_inverted (GtkProgressBar *pbar);
extern
void gtk_progress_bar_set_ellipsize (GtkProgressBar *pbar,PangoEllipsizeMode mode);
extern
PangoEllipsizeMode gtk_progress_bar_get_ellipsize (GtkProgressBar *pbar);
extern
void gtk_progress_bar_set_show_text (GtkProgressBar *pbar,gboolean show_text);
extern
gboolean gtk_progress_bar_get_show_text (GtkProgressBar *pbar);extern
GType gtk_radio_button_get_type (void) ;
extern
GtkWidget* gtk_radio_button_new (GSList *group);
extern
GtkWidget* gtk_radio_button_new_from_widget (GtkRadioButton *radio_group_member);
extern
GtkWidget* gtk_radio_button_new_with_label (GSList *group,const gchar *label);
extern
GtkWidget* gtk_radio_button_new_with_label_from_widget (GtkRadioButton *radio_group_member,const gchar *label);
extern
GtkWidget* gtk_radio_button_new_with_mnemonic (GSList *group,const gchar *label);
extern
GtkWidget* gtk_radio_button_new_with_mnemonic_from_widget (GtkRadioButton *radio_group_member,const gchar *label);
extern
GSList* gtk_radio_button_get_group (GtkRadioButton *radio_button);
extern
void gtk_radio_button_set_group (GtkRadioButton *radio_button,GSList *group);
extern
void gtk_radio_button_join_group (GtkRadioButton *radio_button,GtkRadioButton *group_source);extern
GType gtk_radio_menu_item_get_type (void) ;
extern
GtkWidget* gtk_radio_menu_item_new (GSList *group);
extern
GtkWidget* gtk_radio_menu_item_new_with_label (GSList *group,const gchar *label);
extern
GtkWidget* gtk_radio_menu_item_new_with_mnemonic (GSList *group,const gchar *label);
extern
GtkWidget* gtk_radio_menu_item_new_from_widget (GtkRadioMenuItem *group);
extern
GtkWidget *gtk_radio_menu_item_new_with_mnemonic_from_widget (GtkRadioMenuItem *group,const gchar *label);
extern
GtkWidget *gtk_radio_menu_item_new_with_label_from_widget (GtkRadioMenuItem *group,const gchar *label);
extern
GSList* gtk_radio_menu_item_get_group (GtkRadioMenuItem *radio_menu_item);
extern
void gtk_radio_menu_item_set_group (GtkRadioMenuItem *radio_menu_item,GSList *group);
extern
void gtk_radio_menu_item_join_group (GtkRadioMenuItem *radio_menu_item,GtkRadioMenuItem *group_source);extern
GType gtk_toggle_tool_button_get_type (void) ;
extern
GtkToolItem *gtk_toggle_tool_button_new (void);extern
GtkToolItem *gtk_toggle_tool_button_new_from_stock (const gchar *stock_id);
extern
void gtk_toggle_tool_button_set_active (GtkToggleToolButton *button,gboolean is_active);
extern
gboolean gtk_toggle_tool_button_get_active (GtkToggleToolButton *button);extern
GType gtk_radio_tool_button_get_type (void) ;
extern
GtkToolItem *gtk_radio_tool_button_new (GSList *group);extern
GtkToolItem *gtk_radio_tool_button_new_from_stock (GSList *group,const gchar *stock_id);
extern
GtkToolItem *gtk_radio_tool_button_new_from_widget (GtkRadioToolButton *group);extern
GtkToolItem *gtk_radio_tool_button_new_with_stock_from_widget (GtkRadioToolButton *group,const gchar *stock_id);
extern
GSList * gtk_radio_tool_button_get_group (GtkRadioToolButton *button);
extern
void gtk_radio_tool_button_set_group (GtkRadioToolButton *button,GSList *group);extern
GType gtk_range_get_type (void) ;
extern
void gtk_range_set_adjustment (GtkRange *range,GtkAdjustment *adjustment);
extern
GtkAdjustment* gtk_range_get_adjustment (GtkRange *range);
extern
void gtk_range_set_inverted (GtkRange *range,gboolean setting);
extern
gboolean gtk_range_get_inverted (GtkRange *range);
extern
void gtk_range_set_flippable (GtkRange *range,gboolean flippable);
extern
gboolean gtk_range_get_flippable (GtkRange *range);
extern
void gtk_range_set_slider_size_fixed (GtkRange *range,gboolean size_fixed);
extern
gboolean gtk_range_get_slider_size_fixed (GtkRange *range);extern
void gtk_range_set_min_slider_size (GtkRange *range,gint min_size);extern
gint gtk_range_get_min_slider_size (GtkRange *range);
extern
void gtk_range_get_range_rect (GtkRange *range,GdkRectangle *range_rect);
extern
void gtk_range_get_slider_range (GtkRange *range,gint *slider_start,gint *slider_end);
extern
void gtk_range_set_lower_stepper_sensitivity (GtkRange *range,GtkSensitivityType sensitivity);
extern
GtkSensitivityType gtk_range_get_lower_stepper_sensitivity (GtkRange *range);
extern
void gtk_range_set_upper_stepper_sensitivity (GtkRange *range,GtkSensitivityType sensitivity);
extern
GtkSensitivityType gtk_range_get_upper_stepper_sensitivity (GtkRange *range);
extern
void gtk_range_set_increments (GtkRange *range,gdouble step,gdouble page);
extern
void gtk_range_set_range (GtkRange *range,gdouble min,gdouble max);
extern
void gtk_range_set_value (GtkRange *range,gdouble value);
extern
gdouble gtk_range_get_value (GtkRange *range);
extern
void gtk_range_set_show_fill_level (GtkRange *range,gboolean show_fill_level);
extern
gboolean gtk_range_get_show_fill_level (GtkRange *range);
extern
void gtk_range_set_restrict_to_fill_level (GtkRange *range,gboolean restrict_to_fill_level);
extern
gboolean gtk_range_get_restrict_to_fill_level (GtkRange *range);
extern
void gtk_range_set_fill_level (GtkRange *range,gdouble fill_level);
extern
gdouble gtk_range_get_fill_level (GtkRange *range);
extern
void gtk_range_set_round_digits (GtkRange *range,gint round_digits);
extern
gint gtk_range_get_round_digits (GtkRange *range);extern
GQuark gtk_recent_manager_error_quark (void);
extern
GType gtk_recent_manager_get_type (void) ;
extern
GtkRecentManager *gtk_recent_manager_new (void);
extern
GtkRecentManager *gtk_recent_manager_get_default (void);
extern
gboolean gtk_recent_manager_add_item (GtkRecentManager *manager,const gchar *uri);
extern
gboolean gtk_recent_manager_add_full (GtkRecentManager *manager,const gchar *uri,const GtkRecentData *recent_data);
extern
gboolean gtk_recent_manager_remove_item (GtkRecentManager *manager,const gchar *uri,GError **error);
extern
GtkRecentInfo * gtk_recent_manager_lookup_item (GtkRecentManager *manager,const gchar *uri,GError **error);
extern
gboolean gtk_recent_manager_has_item (GtkRecentManager *manager,const gchar *uri);
extern
gboolean gtk_recent_manager_move_item (GtkRecentManager *manager,const gchar *uri,const gchar *new_uri,GError **error);
extern
GList * gtk_recent_manager_get_items (GtkRecentManager *manager);
extern
gint gtk_recent_manager_purge_items (GtkRecentManager *manager,GError **error);
extern
GType gtk_recent_info_get_type (void) ;
extern
GtkRecentInfo * gtk_recent_info_ref (GtkRecentInfo *info);
extern
void gtk_recent_info_unref (GtkRecentInfo *info);
extern
const gchar * gtk_recent_info_get_uri (GtkRecentInfo *info);
extern
const gchar * gtk_recent_info_get_display_name (GtkRecentInfo *info);
extern
const gchar * gtk_recent_info_get_description (GtkRecentInfo *info);
extern
const gchar * gtk_recent_info_get_mime_type (GtkRecentInfo *info);
extern
time_t gtk_recent_info_get_added (GtkRecentInfo *info);
extern
time_t gtk_recent_info_get_modified (GtkRecentInfo *info);
extern
time_t gtk_recent_info_get_visited (GtkRecentInfo *info);
extern
gboolean gtk_recent_info_get_private_hint (GtkRecentInfo *info);
extern
gboolean gtk_recent_info_get_application_info (GtkRecentInfo *info,const gchar *app_name,const gchar **app_exec,guint *count,time_t *time_);
extern
GAppInfo * gtk_recent_info_create_app_info (GtkRecentInfo *info,const gchar *app_name,GError **error);
extern
gchar ** gtk_recent_info_get_applications (GtkRecentInfo *info,gsize *length) ;
extern
gchar * gtk_recent_info_last_application (GtkRecentInfo *info) ;
extern
gboolean gtk_recent_info_has_application (GtkRecentInfo *info,const gchar *app_name);
extern
gchar ** gtk_recent_info_get_groups (GtkRecentInfo *info,gsize *length) ;
extern
gboolean gtk_recent_info_has_group (GtkRecentInfo *info,const gchar *group_name);
extern
GdkPixbuf * gtk_recent_info_get_icon (GtkRecentInfo *info,gint size);
extern
GIcon * gtk_recent_info_get_gicon (GtkRecentInfo *info);
extern
gchar * gtk_recent_info_get_short_name (GtkRecentInfo *info) ;
extern
gchar * gtk_recent_info_get_uri_display (GtkRecentInfo *info) ;
extern
gint gtk_recent_info_get_age (GtkRecentInfo *info);
extern
gboolean gtk_recent_info_is_local (GtkRecentInfo *info);
extern
gboolean gtk_recent_info_exists (GtkRecentInfo *info);
extern
gboolean gtk_recent_info_match (GtkRecentInfo *info_a,GtkRecentInfo *info_b);extern
GType gtk_recent_filter_get_type (void) ;
extern
GtkRecentFilter * gtk_recent_filter_new (void);
extern
void gtk_recent_filter_set_name (GtkRecentFilter *filter,const gchar *name);
extern
const gchar * gtk_recent_filter_get_name (GtkRecentFilter *filter);
extern
void gtk_recent_filter_add_mime_type (GtkRecentFilter *filter,const gchar *mime_type);
extern
void gtk_recent_filter_add_pattern (GtkRecentFilter *filter,const gchar *pattern);
extern
void gtk_recent_filter_add_pixbuf_formats (GtkRecentFilter *filter);
extern
void gtk_recent_filter_add_application (GtkRecentFilter *filter,const gchar *application);
extern
void gtk_recent_filter_add_group (GtkRecentFilter *filter,const gchar *group);
extern
void gtk_recent_filter_add_age (GtkRecentFilter *filter,gint days);
extern
void gtk_recent_filter_add_custom (GtkRecentFilter *filter,GtkRecentFilterFlags needed,GtkRecentFilterFunc func,gpointer data,GDestroyNotify data_destroy);
extern
GtkRecentFilterFlags gtk_recent_filter_get_needed (GtkRecentFilter *filter);
extern
gboolean gtk_recent_filter_filter (GtkRecentFilter *filter,const GtkRecentFilterInfo *filter_info);
extern
GQuark gtk_recent_chooser_error_quark (void);extern
GType gtk_recent_chooser_get_type (void) ;
extern
void gtk_recent_chooser_set_show_private (GtkRecentChooser *chooser,gboolean show_private);
extern
gboolean gtk_recent_chooser_get_show_private (GtkRecentChooser *chooser);
extern
void gtk_recent_chooser_set_show_not_found (GtkRecentChooser *chooser,gboolean show_not_found);
extern
gboolean gtk_recent_chooser_get_show_not_found (GtkRecentChooser *chooser);
extern
void gtk_recent_chooser_set_select_multiple (GtkRecentChooser *chooser,gboolean select_multiple);
extern
gboolean gtk_recent_chooser_get_select_multiple (GtkRecentChooser *chooser);
extern
void gtk_recent_chooser_set_limit (GtkRecentChooser *chooser,gint limit);
extern
gint gtk_recent_chooser_get_limit (GtkRecentChooser *chooser);
extern
void gtk_recent_chooser_set_local_only (GtkRecentChooser *chooser,gboolean local_only);
extern
gboolean gtk_recent_chooser_get_local_only (GtkRecentChooser *chooser);
extern
void gtk_recent_chooser_set_show_tips (GtkRecentChooser *chooser,gboolean show_tips);
extern
gboolean gtk_recent_chooser_get_show_tips (GtkRecentChooser *chooser);
extern
void gtk_recent_chooser_set_show_icons (GtkRecentChooser *chooser,gboolean show_icons);
extern
gboolean gtk_recent_chooser_get_show_icons (GtkRecentChooser *chooser);
extern
void gtk_recent_chooser_set_sort_type (GtkRecentChooser *chooser,GtkRecentSortType sort_type);
extern
GtkRecentSortType gtk_recent_chooser_get_sort_type (GtkRecentChooser *chooser);
extern
void gtk_recent_chooser_set_sort_func (GtkRecentChooser *chooser,GtkRecentSortFunc sort_func,gpointer sort_data,GDestroyNotify data_destroy);
extern
gboolean gtk_recent_chooser_set_current_uri (GtkRecentChooser *chooser,const gchar *uri,GError **error);
extern
gchar * gtk_recent_chooser_get_current_uri (GtkRecentChooser *chooser);
extern
GtkRecentInfo *gtk_recent_chooser_get_current_item (GtkRecentChooser *chooser);
extern
gboolean gtk_recent_chooser_select_uri (GtkRecentChooser *chooser,const gchar *uri,GError **error);
extern
void gtk_recent_chooser_unselect_uri (GtkRecentChooser *chooser,const gchar *uri);
extern
void gtk_recent_chooser_select_all (GtkRecentChooser *chooser);
extern
void gtk_recent_chooser_unselect_all (GtkRecentChooser *chooser);
extern
GList * gtk_recent_chooser_get_items (GtkRecentChooser *chooser);
extern
gchar ** gtk_recent_chooser_get_uris (GtkRecentChooser *chooser,gsize *length);
extern
void gtk_recent_chooser_add_filter (GtkRecentChooser *chooser,GtkRecentFilter *filter);
extern
void gtk_recent_chooser_remove_filter (GtkRecentChooser *chooser,GtkRecentFilter *filter);
extern
GSList * gtk_recent_chooser_list_filters (GtkRecentChooser *chooser);
extern
void gtk_recent_chooser_set_filter (GtkRecentChooser *chooser,GtkRecentFilter *filter);
extern
GtkRecentFilter *gtk_recent_chooser_get_filter (GtkRecentChooser *chooser);extern
GType gtk_recent_chooser_dialog_get_type (void) ;
extern
GtkWidget *gtk_recent_chooser_dialog_new (const gchar *title,GtkWindow *parent,const gchar *first_button_text,...) ;
extern
GtkWidget *gtk_recent_chooser_dialog_new_for_manager (const gchar *title,GtkWindow *parent,GtkRecentManager *manager,const gchar *first_button_text,...) ;extern
GType gtk_recent_chooser_menu_get_type (void) ;
extern
GtkWidget *gtk_recent_chooser_menu_new (void);
extern
GtkWidget *gtk_recent_chooser_menu_new_for_manager (GtkRecentManager *manager);
extern
gboolean gtk_recent_chooser_menu_get_show_numbers (GtkRecentChooserMenu *menu);
extern
void gtk_recent_chooser_menu_set_show_numbers (GtkRecentChooserMenu *menu,gboolean show_numbers);extern
GType gtk_recent_chooser_widget_get_type (void) ;
extern
GtkWidget *gtk_recent_chooser_widget_new (void);
extern
GtkWidget *gtk_recent_chooser_widget_new_for_manager (GtkRecentManager *manager);
extern
void gtk_render_check (GtkStyleContext *context,cairo_t *cr,gdouble x,gdouble y,gdouble width,gdouble height);
extern
void gtk_render_option (GtkStyleContext *context,cairo_t *cr,gdouble x,gdouble y,gdouble width,gdouble height);
extern
void gtk_render_arrow (GtkStyleContext *context,cairo_t *cr,gdouble angle,gdouble x,gdouble y,gdouble size);
extern
void gtk_render_background (GtkStyleContext *context,cairo_t *cr,gdouble x,gdouble y,gdouble width,gdouble height);
extern
void gtk_render_background_get_clip (GtkStyleContext *context,gdouble x,gdouble y,gdouble width,gdouble height,GdkRectangle *out_clip);
extern
void gtk_render_frame (GtkStyleContext *context,cairo_t *cr,gdouble x,gdouble y,gdouble width,gdouble height);
extern
void gtk_render_expander (GtkStyleContext *context,cairo_t *cr,gdouble x,gdouble y,gdouble width,gdouble height);
extern
void gtk_render_focus (GtkStyleContext *context,cairo_t *cr,gdouble x,gdouble y,gdouble width,gdouble height);
extern
void gtk_render_layout (GtkStyleContext *context,cairo_t *cr,gdouble x,gdouble y,PangoLayout *layout);
extern
void gtk_render_line (GtkStyleContext *context,cairo_t *cr,gdouble x0,gdouble y0,gdouble x1,gdouble y1);
extern
void gtk_render_slider (GtkStyleContext *context,cairo_t *cr,gdouble x,gdouble y,gdouble width,gdouble height,GtkOrientation orientation);extern
void gtk_render_frame_gap (GtkStyleContext *context,cairo_t *cr,gdouble x,gdouble y,gdouble width,gdouble height,GtkPositionType gap_side,gdouble xy0_gap,gdouble xy1_gap);
extern
void gtk_render_extension (GtkStyleContext *context,cairo_t *cr,gdouble x,gdouble y,gdouble width,gdouble height,GtkPositionType gap_side);
extern
void gtk_render_handle (GtkStyleContext *context,cairo_t *cr,gdouble x,gdouble y,gdouble width,gdouble height);
extern
void gtk_render_activity (GtkStyleContext *context,cairo_t *cr,gdouble x,gdouble y,gdouble width,gdouble height);extern
GdkPixbuf * gtk_render_icon_pixbuf (GtkStyleContext *context,const GtkIconSource *source,GtkIconSize size);
extern
void gtk_render_icon (GtkStyleContext *context,cairo_t *cr,GdkPixbuf *pixbuf,gdouble x,gdouble y);
extern
void gtk_render_icon_surface (GtkStyleContext *context,cairo_t *cr,cairo_surface_t *surface,gdouble x,gdouble y);extern
GType gtk_revealer_get_type (void) ;
extern
GtkWidget* gtk_revealer_new (void);
extern
gboolean gtk_revealer_get_reveal_child (GtkRevealer *revealer);
extern
void gtk_revealer_set_reveal_child (GtkRevealer *revealer,gboolean reveal_child);
extern
gboolean gtk_revealer_get_child_revealed (GtkRevealer *revealer);
extern
guint gtk_revealer_get_transition_duration (GtkRevealer *revealer);
extern
void gtk_revealer_set_transition_duration (GtkRevealer *revealer,guint duration);
extern
void gtk_revealer_set_transition_type (GtkRevealer *revealer,GtkRevealerTransitionType transition);
extern
GtkRevealerTransitionType gtk_revealer_get_transition_type (GtkRevealer *revealer);extern
GType gtk_scale_get_type (void) ;
extern
GtkWidget * gtk_scale_new (GtkOrientation orientation,GtkAdjustment *adjustment);
extern
GtkWidget * gtk_scale_new_with_range (GtkOrientation orientation,gdouble min,gdouble max,gdouble step);
extern
void gtk_scale_set_digits (GtkScale *scale,gint digits);
extern
gint gtk_scale_get_digits (GtkScale *scale);
extern
void gtk_scale_set_draw_value (GtkScale *scale,gboolean draw_value);
extern
gboolean gtk_scale_get_draw_value (GtkScale *scale);
extern
void gtk_scale_set_has_origin (GtkScale *scale,gboolean has_origin);
extern
gboolean gtk_scale_get_has_origin (GtkScale *scale);
extern
void gtk_scale_set_value_pos (GtkScale *scale,GtkPositionType pos);
extern
GtkPositionType gtk_scale_get_value_pos (GtkScale *scale);
extern
PangoLayout * gtk_scale_get_layout (GtkScale *scale);
extern
void gtk_scale_get_layout_offsets (GtkScale *scale,gint *x,gint *y);
extern
void gtk_scale_add_mark (GtkScale *scale,gdouble value,GtkPositionType position,const gchar *markup);
extern
void gtk_scale_clear_marks (GtkScale *scale);extern
GType gtk_scale_button_get_type (void) ;
extern
GtkWidget * gtk_scale_button_new (GtkIconSize size,gdouble min,gdouble max,gdouble step,const gchar **icons);
extern
void gtk_scale_button_set_icons (GtkScaleButton *button,const gchar **icons);
extern
gdouble gtk_scale_button_get_value (GtkScaleButton *button);
extern
void gtk_scale_button_set_value (GtkScaleButton *button,gdouble value);
extern
GtkAdjustment * gtk_scale_button_get_adjustment (GtkScaleButton *button);
extern
void gtk_scale_button_set_adjustment (GtkScaleButton *button,GtkAdjustment *adjustment);
extern
GtkWidget * gtk_scale_button_get_plus_button (GtkScaleButton *button);
extern
GtkWidget * gtk_scale_button_get_minus_button (GtkScaleButton *button);
extern
GtkWidget * gtk_scale_button_get_popup (GtkScaleButton *button);extern
GType gtk_scrollable_get_type (void) ;
extern
GtkAdjustment *gtk_scrollable_get_hadjustment (GtkScrollable *scrollable);
extern
void gtk_scrollable_set_hadjustment (GtkScrollable *scrollable,GtkAdjustment *hadjustment);
extern
GtkAdjustment *gtk_scrollable_get_vadjustment (GtkScrollable *scrollable);
extern
void gtk_scrollable_set_vadjustment (GtkScrollable *scrollable,GtkAdjustment *vadjustment);
extern
GtkScrollablePolicy gtk_scrollable_get_hscroll_policy (GtkScrollable *scrollable);
extern
void gtk_scrollable_set_hscroll_policy (GtkScrollable *scrollable,GtkScrollablePolicy policy);
extern
GtkScrollablePolicy gtk_scrollable_get_vscroll_policy (GtkScrollable *scrollable);
extern
void gtk_scrollable_set_vscroll_policy (GtkScrollable *scrollable,GtkScrollablePolicy policy);
extern
gboolean gtk_scrollable_get_border (GtkScrollable *scrollable,GtkBorder *border);extern
GType gtk_scrollbar_get_type (void) ;
extern
GtkWidget * gtk_scrollbar_new (GtkOrientation orientation,GtkAdjustment *adjustment);extern
GType gtk_scrolled_window_get_type (void) ;
extern
GtkWidget* gtk_scrolled_window_new (GtkAdjustment *hadjustment,GtkAdjustment *vadjustment);
extern
void gtk_scrolled_window_set_hadjustment (GtkScrolledWindow *scrolled_window,GtkAdjustment *hadjustment);
extern
void gtk_scrolled_window_set_vadjustment (GtkScrolledWindow *scrolled_window,GtkAdjustment *vadjustment);
extern
GtkAdjustment* gtk_scrolled_window_get_hadjustment (GtkScrolledWindow *scrolled_window);
extern
GtkAdjustment* gtk_scrolled_window_get_vadjustment (GtkScrolledWindow *scrolled_window);
extern
GtkWidget* gtk_scrolled_window_get_hscrollbar (GtkScrolledWindow *scrolled_window);
extern
GtkWidget* gtk_scrolled_window_get_vscrollbar (GtkScrolledWindow *scrolled_window);
extern
void gtk_scrolled_window_set_policy (GtkScrolledWindow *scrolled_window,GtkPolicyType hscrollbar_policy,GtkPolicyType vscrollbar_policy);
extern
void gtk_scrolled_window_get_policy (GtkScrolledWindow *scrolled_window,GtkPolicyType *hscrollbar_policy,GtkPolicyType *vscrollbar_policy);
extern
void gtk_scrolled_window_set_placement (GtkScrolledWindow *scrolled_window,GtkCornerType window_placement);
extern
void gtk_scrolled_window_unset_placement (GtkScrolledWindow *scrolled_window);
extern
GtkCornerType gtk_scrolled_window_get_placement (GtkScrolledWindow *scrolled_window);
extern
void gtk_scrolled_window_set_shadow_type (GtkScrolledWindow *scrolled_window,GtkShadowType type);
extern
GtkShadowType gtk_scrolled_window_get_shadow_type (GtkScrolledWindow *scrolled_window);extern
void gtk_scrolled_window_add_with_viewport (GtkScrolledWindow *scrolled_window,GtkWidget *child);
extern
gint gtk_scrolled_window_get_min_content_width (GtkScrolledWindow *scrolled_window);
extern
void gtk_scrolled_window_set_min_content_width (GtkScrolledWindow *scrolled_window,gint width);
extern
gint gtk_scrolled_window_get_min_content_height (GtkScrolledWindow *scrolled_window);
extern
void gtk_scrolled_window_set_min_content_height (GtkScrolledWindow *scrolled_window,gint height);
extern
void gtk_scrolled_window_set_kinetic_scrolling (GtkScrolledWindow *scrolled_window,gboolean kinetic_scrolling);
extern
gboolean gtk_scrolled_window_get_kinetic_scrolling (GtkScrolledWindow *scrolled_window);
extern
void gtk_scrolled_window_set_capture_button_press (GtkScrolledWindow *scrolled_window,gboolean capture_button_press);
extern
gboolean gtk_scrolled_window_get_capture_button_press (GtkScrolledWindow *scrolled_window);
extern
void gtk_scrolled_window_set_overlay_scrolling (GtkScrolledWindow *scrolled_window,gboolean overlay_scrolling);
extern
gboolean gtk_scrolled_window_get_overlay_scrolling (GtkScrolledWindow *scrolled_window);
extern
void gtk_scrolled_window_set_max_content_width (GtkScrolledWindow *scrolled_window,gint width);
extern
gint gtk_scrolled_window_get_max_content_width (GtkScrolledWindow *scrolled_window);
extern
void gtk_scrolled_window_set_max_content_height (GtkScrolledWindow *scrolled_window,gint height);
extern
gint gtk_scrolled_window_get_max_content_height (GtkScrolledWindow *scrolled_window);
extern
void gtk_scrolled_window_set_propagate_natural_width (GtkScrolledWindow *scrolled_window,gboolean propagate);
extern
gboolean gtk_scrolled_window_get_propagate_natural_width (GtkScrolledWindow *scrolled_window);
extern
void gtk_scrolled_window_set_propagate_natural_height (GtkScrolledWindow *scrolled_window,gboolean propagate);
extern
gboolean gtk_scrolled_window_get_propagate_natural_height (GtkScrolledWindow *scrolled_window);extern
GType gtk_search_bar_get_type (void) ;
extern
GtkWidget* gtk_search_bar_new (void);
extern
void gtk_search_bar_connect_entry (GtkSearchBar *bar,GtkEntry *entry);
extern
gboolean gtk_search_bar_get_search_mode (GtkSearchBar *bar);
extern
void gtk_search_bar_set_search_mode (GtkSearchBar *bar,gboolean search_mode);
extern
gboolean gtk_search_bar_get_show_close_button (GtkSearchBar *bar);
extern
void gtk_search_bar_set_show_close_button (GtkSearchBar *bar,gboolean visible);
extern
gboolean gtk_search_bar_handle_event (GtkSearchBar *bar,GdkEvent *event);extern
GType gtk_search_entry_get_type (void) ;
extern
GtkWidget* gtk_search_entry_new (void);
extern
gboolean gtk_search_entry_handle_event (GtkSearchEntry *entry,GdkEvent *event);extern
GType gtk_separator_get_type (void) ;
extern
GtkWidget * gtk_separator_new (GtkOrientation orientation);extern
GType gtk_separator_menu_item_get_type (void) ;
extern
GtkWidget* gtk_separator_menu_item_new (void);extern
GType gtk_separator_tool_item_get_type (void) ;
extern
GtkToolItem *gtk_separator_tool_item_new (void);
extern
gboolean gtk_separator_tool_item_get_draw (GtkSeparatorToolItem *item);
extern
void gtk_separator_tool_item_set_draw (GtkSeparatorToolItem *item,gboolean draw);extern
GType gtk_settings_get_type (void) ;
extern
GtkSettings* gtk_settings_get_default (void);
extern
GtkSettings* gtk_settings_get_for_screen (GdkScreen *screen);extern
void gtk_settings_install_property (GParamSpec *pspec);extern
void gtk_settings_install_property_parser (GParamSpec *pspec,GtkRcPropertyParser parser);
extern
gboolean gtk_rc_property_parse_color (const GParamSpec *pspec,const GString *gstring,GValue *property_value);
extern
gboolean gtk_rc_property_parse_enum (const GParamSpec *pspec,const GString *gstring,GValue *property_value);
extern
gboolean gtk_rc_property_parse_flags (const GParamSpec *pspec,const GString *gstring,GValue *property_value);
extern
gboolean gtk_rc_property_parse_requisition (const GParamSpec *pspec,const GString *gstring,GValue *property_value);
extern
gboolean gtk_rc_property_parse_border (const GParamSpec *pspec,const GString *gstring,GValue *property_value);extern
void gtk_settings_set_property_value (GtkSettings *settings,const gchar *name,const GtkSettingsValue *svalue);extern
void gtk_settings_set_string_property (GtkSettings *settings,const gchar *name,const gchar *v_string,const gchar *origin);extern
void gtk_settings_set_long_property (GtkSettings *settings,const gchar *name,glong v_long,const gchar *origin);extern
void gtk_settings_set_double_property (GtkSettings *settings,const gchar *name,gdouble v_double,const gchar *origin);
extern
void gtk_settings_reset_property (GtkSettings *settings,const gchar *name);
extern
GType gtk_shortcut_label_get_type (void) ;
extern
GtkWidget *gtk_shortcut_label_new (const gchar *accelerator);
extern
const gchar *gtk_shortcut_label_get_accelerator (GtkShortcutLabel *self);
extern
void gtk_shortcut_label_set_accelerator (GtkShortcutLabel *self,const gchar *accelerator);
extern
const gchar *gtk_shortcut_label_get_disabled_text (GtkShortcutLabel *self);
extern
void gtk_shortcut_label_set_disabled_text (GtkShortcutLabel *self,const gchar *disabled_text);
extern
GType gtk_shortcuts_group_get_type (void) ;
extern
GType gtk_shortcuts_section_get_type (void) ;
extern
GType gtk_shortcuts_shortcut_get_type (void) ;extern
gboolean gtk_show_uri (GdkScreen *screen,const gchar *uri,guint32 timestamp,GError **error);
extern
gboolean gtk_show_uri_on_window (GtkWindow *parent,const char *uri,guint32 timestamp,GError **error);extern
GType gtk_stack_get_type (void) ;
extern
GtkWidget * gtk_stack_new (void);
extern
void gtk_stack_add_named (GtkStack *stack,GtkWidget *child,const gchar *name);
extern
void gtk_stack_add_titled (GtkStack *stack,GtkWidget *child,const gchar *name,const gchar *title);
extern
GtkWidget * gtk_stack_get_child_by_name (GtkStack *stack,const gchar *name);
extern
void gtk_stack_set_visible_child (GtkStack *stack,GtkWidget *child);
extern
GtkWidget * gtk_stack_get_visible_child (GtkStack *stack);
extern
void gtk_stack_set_visible_child_name (GtkStack *stack,const gchar *name);
extern
const gchar * gtk_stack_get_visible_child_name (GtkStack *stack);
extern
void gtk_stack_set_visible_child_full (GtkStack *stack,const gchar *name,GtkStackTransitionType transition);
extern
void gtk_stack_set_homogeneous (GtkStack *stack,gboolean homogeneous);
extern
gboolean gtk_stack_get_homogeneous (GtkStack *stack);
extern
void gtk_stack_set_hhomogeneous (GtkStack *stack,gboolean hhomogeneous);
extern
gboolean gtk_stack_get_hhomogeneous (GtkStack *stack);
extern
void gtk_stack_set_vhomogeneous (GtkStack *stack,gboolean vhomogeneous);
extern
gboolean gtk_stack_get_vhomogeneous (GtkStack *stack);
extern
void gtk_stack_set_transition_duration (GtkStack *stack,guint duration);
extern
guint gtk_stack_get_transition_duration (GtkStack *stack);
extern
void gtk_stack_set_transition_type (GtkStack *stack,GtkStackTransitionType transition);
extern
GtkStackTransitionType gtk_stack_get_transition_type (GtkStack *stack);
extern
gboolean gtk_stack_get_transition_running (GtkStack *stack);
extern
void gtk_stack_set_interpolate_size (GtkStack *stack,gboolean interpolate_size);
extern
gboolean gtk_stack_get_interpolate_size (GtkStack *stack);extern
GType gtk_stack_sidebar_get_type (void) ;
extern
GtkWidget * gtk_stack_sidebar_new (void);
extern
void gtk_stack_sidebar_set_stack (GtkStackSidebar *sidebar,GtkStack *stack);
extern
GtkStack * gtk_stack_sidebar_get_stack (GtkStackSidebar *sidebar);extern
gint gtk_distribute_natural_allocation (gint extra_space,guint n_requested_sizes,GtkRequestedSize *sizes);extern
GType gtk_spin_button_get_type (void) ;
extern
void gtk_spin_button_configure (GtkSpinButton *spin_button,GtkAdjustment *adjustment,gdouble climb_rate,guint digits);
extern
GtkWidget* gtk_spin_button_new (GtkAdjustment *adjustment,gdouble climb_rate,guint digits);
extern
GtkWidget* gtk_spin_button_new_with_range (gdouble min,gdouble max,gdouble step);
extern
void gtk_spin_button_set_adjustment (GtkSpinButton *spin_button,GtkAdjustment *adjustment);
extern
GtkAdjustment* gtk_spin_button_get_adjustment (GtkSpinButton *spin_button);
extern
void gtk_spin_button_set_digits (GtkSpinButton *spin_button,guint digits);
extern
guint gtk_spin_button_get_digits (GtkSpinButton *spin_button);
extern
void gtk_spin_button_set_increments (GtkSpinButton *spin_button,gdouble step,gdouble page);
extern
void gtk_spin_button_get_increments (GtkSpinButton *spin_button,gdouble *step,gdouble *page);
extern
void gtk_spin_button_set_range (GtkSpinButton *spin_button,gdouble min,gdouble max);
extern
void gtk_spin_button_get_range (GtkSpinButton *spin_button,gdouble *min,gdouble *max);
extern
gdouble gtk_spin_button_get_value (GtkSpinButton *spin_button);
extern
gint gtk_spin_button_get_value_as_int (GtkSpinButton *spin_button);
extern
void gtk_spin_button_set_value (GtkSpinButton *spin_button,gdouble value);
extern
void gtk_spin_button_set_update_policy (GtkSpinButton *spin_button,GtkSpinButtonUpdatePolicy policy);
extern
GtkSpinButtonUpdatePolicy gtk_spin_button_get_update_policy (GtkSpinButton *spin_button);
extern
void gtk_spin_button_set_numeric (GtkSpinButton *spin_button,gboolean numeric);
extern
gboolean gtk_spin_button_get_numeric (GtkSpinButton *spin_button);
extern
void gtk_spin_button_spin (GtkSpinButton *spin_button,GtkSpinType direction,gdouble increment);
extern
void gtk_spin_button_set_wrap (GtkSpinButton *spin_button,gboolean wrap);
extern
gboolean gtk_spin_button_get_wrap (GtkSpinButton *spin_button);
extern
void gtk_spin_button_set_snap_to_ticks (GtkSpinButton *spin_button,gboolean snap_to_ticks);
extern
gboolean gtk_spin_button_get_snap_to_ticks (GtkSpinButton *spin_button);
extern
void gtk_spin_button_update (GtkSpinButton *spin_button);extern
GType gtk_spinner_get_type (void) ;
extern
GtkWidget *gtk_spinner_new (void);
extern
void gtk_spinner_start (GtkSpinner *spinner);
extern
void gtk_spinner_stop (GtkSpinner *spinner);extern
GType gtk_stack_switcher_get_type (void) ;
extern
GtkWidget * gtk_stack_switcher_new (void);
extern
void gtk_stack_switcher_set_stack (GtkStackSwitcher *switcher,GtkStack *stack);
extern
GtkStack * gtk_stack_switcher_get_stack (GtkStackSwitcher *switcher);extern
GType gtk_statusbar_get_type (void) ;
extern
GtkWidget* gtk_statusbar_new (void);
extern
guint gtk_statusbar_get_context_id (GtkStatusbar *statusbar,const gchar *context_description);
extern
guint gtk_statusbar_push (GtkStatusbar *statusbar,guint context_id,const gchar *text);
extern
void gtk_statusbar_pop (GtkStatusbar *statusbar,guint context_id);
extern
void gtk_statusbar_remove (GtkStatusbar *statusbar,guint context_id,guint message_id);
extern
void gtk_statusbar_remove_all (GtkStatusbar *statusbar,guint context_id);
extern
GtkWidget* gtk_statusbar_get_message_area (GtkStatusbar *statusbar);extern
GType gtk_switch_get_type (void) ;
extern
GtkWidget * gtk_switch_new (void);
extern
void gtk_switch_set_active (GtkSwitch *sw,gboolean is_active);
extern
gboolean gtk_switch_get_active (GtkSwitch *sw);
extern
void gtk_switch_set_state (GtkSwitch *sw,gboolean state);
extern
gboolean gtk_switch_get_state (GtkSwitch *sw);extern
GType gtk_text_tag_table_get_type (void) ;
extern
GtkTextTagTable *gtk_text_tag_table_new (void);
extern
gboolean gtk_text_tag_table_add (GtkTextTagTable *table,GtkTextTag *tag);
extern
void gtk_text_tag_table_remove (GtkTextTagTable *table,GtkTextTag *tag);
extern
GtkTextTag *gtk_text_tag_table_lookup (GtkTextTagTable *table,const gchar *name);
extern
void gtk_text_tag_table_foreach (GtkTextTagTable *table,GtkTextTagTableForeach func,gpointer data);
extern
gint gtk_text_tag_table_get_size (GtkTextTagTable *table);extern
GType gtk_text_mark_get_type (void) ;
extern
GtkTextMark *gtk_text_mark_new (const gchar *name,gboolean left_gravity);
extern
void gtk_text_mark_set_visible (GtkTextMark *mark,gboolean setting);
extern
gboolean gtk_text_mark_get_visible (GtkTextMark *mark);
extern
const gchar * gtk_text_mark_get_name (GtkTextMark *mark);
extern
gboolean gtk_text_mark_get_deleted (GtkTextMark *mark);
extern
GtkTextBuffer* gtk_text_mark_get_buffer (GtkTextMark *mark);
extern
gboolean gtk_text_mark_get_left_gravity (GtkTextMark *mark);extern
GType gtk_text_buffer_get_type (void) ;
extern
GtkTextBuffer *gtk_text_buffer_new (GtkTextTagTable *table);
extern
gint gtk_text_buffer_get_line_count (GtkTextBuffer *buffer);
extern
gint gtk_text_buffer_get_char_count (GtkTextBuffer *buffer);
extern
GtkTextTagTable* gtk_text_buffer_get_tag_table (GtkTextBuffer *buffer);
extern
void gtk_text_buffer_set_text (GtkTextBuffer *buffer,const gchar *text,gint len);
extern
void gtk_text_buffer_insert (GtkTextBuffer *buffer,GtkTextIter *iter,const gchar *text,gint len);
extern
void gtk_text_buffer_insert_at_cursor (GtkTextBuffer *buffer,const gchar *text,gint len);
extern
gboolean gtk_text_buffer_insert_interactive (GtkTextBuffer *buffer,GtkTextIter *iter,const gchar *text,gint len,gboolean default_editable);
extern
gboolean gtk_text_buffer_insert_interactive_at_cursor (GtkTextBuffer *buffer,const gchar *text,gint len,gboolean default_editable);
extern
void gtk_text_buffer_insert_range (GtkTextBuffer *buffer,GtkTextIter *iter,const GtkTextIter *start,const GtkTextIter *end);
extern
gboolean gtk_text_buffer_insert_range_interactive (GtkTextBuffer *buffer,GtkTextIter *iter,const GtkTextIter *start,const GtkTextIter *end,gboolean default_editable);
extern
void gtk_text_buffer_insert_with_tags (GtkTextBuffer *buffer,GtkTextIter *iter,const gchar *text,gint len,GtkTextTag *first_tag,...) ;
extern
void gtk_text_buffer_insert_with_tags_by_name (GtkTextBuffer *buffer,GtkTextIter *iter,const gchar *text,gint len,const gchar *first_tag_name,...) ;
extern
void gtk_text_buffer_insert_markup (GtkTextBuffer *buffer,GtkTextIter *iter,const gchar *markup,gint len);
extern
void gtk_text_buffer_delete (GtkTextBuffer *buffer,GtkTextIter *start,GtkTextIter *end);
extern
gboolean gtk_text_buffer_delete_interactive (GtkTextBuffer *buffer,GtkTextIter *start_iter,GtkTextIter *end_iter,gboolean default_editable);
extern
gboolean gtk_text_buffer_backspace (GtkTextBuffer *buffer,GtkTextIter *iter,gboolean interactive,gboolean default_editable);
extern
gchar *gtk_text_buffer_get_text (GtkTextBuffer *buffer,const GtkTextIter *start,const GtkTextIter *end,gboolean include_hidden_chars);
extern
gchar *gtk_text_buffer_get_slice (GtkTextBuffer *buffer,const GtkTextIter *start,const GtkTextIter *end,gboolean include_hidden_chars);
extern
void gtk_text_buffer_insert_pixbuf (GtkTextBuffer *buffer,GtkTextIter *iter,GdkPixbuf *pixbuf);
extern
void gtk_text_buffer_insert_child_anchor (GtkTextBuffer *buffer,GtkTextIter *iter,GtkTextChildAnchor *anchor);
extern
GtkTextChildAnchor *gtk_text_buffer_create_child_anchor (GtkTextBuffer *buffer,GtkTextIter *iter);
extern
void gtk_text_buffer_add_mark (GtkTextBuffer *buffer,GtkTextMark *mark,const GtkTextIter *where);
extern
GtkTextMark *gtk_text_buffer_create_mark (GtkTextBuffer *buffer,const gchar *mark_name,const GtkTextIter *where,gboolean left_gravity);
extern
void gtk_text_buffer_move_mark (GtkTextBuffer *buffer,GtkTextMark *mark,const GtkTextIter *where);
extern
void gtk_text_buffer_delete_mark (GtkTextBuffer *buffer,GtkTextMark *mark);
extern
GtkTextMark* gtk_text_buffer_get_mark (GtkTextBuffer *buffer,const gchar *name);
extern
void gtk_text_buffer_move_mark_by_name (GtkTextBuffer *buffer,const gchar *name,const GtkTextIter *where);
extern
void gtk_text_buffer_delete_mark_by_name (GtkTextBuffer *buffer,const gchar *name);
extern
GtkTextMark* gtk_text_buffer_get_insert (GtkTextBuffer *buffer);
extern
GtkTextMark* gtk_text_buffer_get_selection_bound (GtkTextBuffer *buffer);
extern
void gtk_text_buffer_place_cursor (GtkTextBuffer *buffer,const GtkTextIter *where);
extern
void gtk_text_buffer_select_range (GtkTextBuffer *buffer,const GtkTextIter *ins,const GtkTextIter *bound);
extern
void gtk_text_buffer_apply_tag (GtkTextBuffer *buffer,GtkTextTag *tag,const GtkTextIter *start,const GtkTextIter *end);
extern
void gtk_text_buffer_remove_tag (GtkTextBuffer *buffer,GtkTextTag *tag,const GtkTextIter *start,const GtkTextIter *end);
extern
void gtk_text_buffer_apply_tag_by_name (GtkTextBuffer *buffer,const gchar *name,const GtkTextIter *start,const GtkTextIter *end);
extern
void gtk_text_buffer_remove_tag_by_name (GtkTextBuffer *buffer,const gchar *name,const GtkTextIter *start,const GtkTextIter *end);
extern
void gtk_text_buffer_remove_all_tags (GtkTextBuffer *buffer,const GtkTextIter *start,const GtkTextIter *end);
extern
GtkTextTag *gtk_text_buffer_create_tag (GtkTextBuffer *buffer,const gchar *tag_name,const gchar *first_property_name,...);
extern
void gtk_text_buffer_get_iter_at_line_offset (GtkTextBuffer *buffer,GtkTextIter *iter,gint line_number,gint char_offset);
extern
void gtk_text_buffer_get_iter_at_line_index (GtkTextBuffer *buffer,GtkTextIter *iter,gint line_number,gint byte_index);
extern
void gtk_text_buffer_get_iter_at_offset (GtkTextBuffer *buffer,GtkTextIter *iter,gint char_offset);
extern
void gtk_text_buffer_get_iter_at_line (GtkTextBuffer *buffer,GtkTextIter *iter,gint line_number);
extern
void gtk_text_buffer_get_start_iter (GtkTextBuffer *buffer,GtkTextIter *iter);
extern
void gtk_text_buffer_get_end_iter (GtkTextBuffer *buffer,GtkTextIter *iter);
extern
void gtk_text_buffer_get_bounds (GtkTextBuffer *buffer,GtkTextIter *start,GtkTextIter *end);
extern
void gtk_text_buffer_get_iter_at_mark (GtkTextBuffer *buffer,GtkTextIter *iter,GtkTextMark *mark);
extern
void gtk_text_buffer_get_iter_at_child_anchor (GtkTextBuffer *buffer,GtkTextIter *iter,GtkTextChildAnchor *anchor);
extern
gboolean gtk_text_buffer_get_modified (GtkTextBuffer *buffer);
extern
void gtk_text_buffer_set_modified (GtkTextBuffer *buffer,gboolean setting);
extern
gboolean gtk_text_buffer_get_has_selection (GtkTextBuffer *buffer);
extern
void gtk_text_buffer_add_selection_clipboard (GtkTextBuffer *buffer,GtkClipboard *clipboard);
extern
void gtk_text_buffer_remove_selection_clipboard (GtkTextBuffer *buffer,GtkClipboard *clipboard);
extern
void gtk_text_buffer_cut_clipboard (GtkTextBuffer *buffer,GtkClipboard *clipboard,gboolean default_editable);
extern
void gtk_text_buffer_copy_clipboard (GtkTextBuffer *buffer,GtkClipboard *clipboard);
extern
void gtk_text_buffer_paste_clipboard (GtkTextBuffer *buffer,GtkClipboard *clipboard,GtkTextIter *override_location,gboolean default_editable);
extern
gboolean gtk_text_buffer_get_selection_bounds (GtkTextBuffer *buffer,GtkTextIter *start,GtkTextIter *end);
extern
gboolean gtk_text_buffer_delete_selection (GtkTextBuffer *buffer,gboolean interactive,gboolean default_editable);
extern
void gtk_text_buffer_begin_user_action (GtkTextBuffer *buffer);
extern
void gtk_text_buffer_end_user_action (GtkTextBuffer *buffer);
extern
GtkTargetList * gtk_text_buffer_get_copy_target_list (GtkTextBuffer *buffer);
extern
GtkTargetList * gtk_text_buffer_get_paste_target_list (GtkTextBuffer *buffer);
extern
GdkAtom gtk_text_buffer_register_serialize_format (GtkTextBuffer *buffer,const gchar *mime_type,GtkTextBufferSerializeFunc function,gpointer user_data,GDestroyNotify user_data_destroy);
extern
GdkAtom gtk_text_buffer_register_serialize_tagset (GtkTextBuffer *buffer,const gchar *tagset_name);
extern
GdkAtom gtk_text_buffer_register_deserialize_format (GtkTextBuffer *buffer,const gchar *mime_type,GtkTextBufferDeserializeFunc function,gpointer user_data,GDestroyNotify user_data_destroy);
extern
GdkAtom gtk_text_buffer_register_deserialize_tagset (GtkTextBuffer *buffer,const gchar *tagset_name);
extern
void gtk_text_buffer_unregister_serialize_format (GtkTextBuffer *buffer,GdkAtom format);
extern
void gtk_text_buffer_unregister_deserialize_format (GtkTextBuffer *buffer,GdkAtom format);
extern
void gtk_text_buffer_deserialize_set_can_create_tags (GtkTextBuffer *buffer,GdkAtom format,gboolean can_create_tags);
extern
gboolean gtk_text_buffer_deserialize_get_can_create_tags (GtkTextBuffer *buffer,GdkAtom format);
extern
GdkAtom * gtk_text_buffer_get_serialize_formats (GtkTextBuffer *buffer,gint *n_formats);
extern
GdkAtom * gtk_text_buffer_get_deserialize_formats (GtkTextBuffer *buffer,gint *n_formats);
extern
guint8 * gtk_text_buffer_serialize (GtkTextBuffer *register_buffer,GtkTextBuffer *content_buffer,GdkAtom format,const GtkTextIter *start,const GtkTextIter *end,gsize *length);
extern
gboolean gtk_text_buffer_deserialize (GtkTextBuffer *register_buffer,GtkTextBuffer *content_buffer,GdkAtom format,GtkTextIter *iter,const guint8 *data,gsize length,GError **error);extern
GType gtk_text_view_get_type (void) ;
extern
GtkWidget * gtk_text_view_new (void);
extern
GtkWidget * gtk_text_view_new_with_buffer (GtkTextBuffer *buffer);
extern
void gtk_text_view_set_buffer (GtkTextView *text_view,GtkTextBuffer *buffer);
extern
GtkTextBuffer *gtk_text_view_get_buffer (GtkTextView *text_view);
extern
gboolean gtk_text_view_scroll_to_iter (GtkTextView *text_view,GtkTextIter *iter,gdouble within_margin,gboolean use_align,gdouble xalign,gdouble yalign);
extern
void gtk_text_view_scroll_to_mark (GtkTextView *text_view,GtkTextMark *mark,gdouble within_margin,gboolean use_align,gdouble xalign,gdouble yalign);
extern
void gtk_text_view_scroll_mark_onscreen (GtkTextView *text_view,GtkTextMark *mark);
extern
gboolean gtk_text_view_move_mark_onscreen (GtkTextView *text_view,GtkTextMark *mark);
extern
gboolean gtk_text_view_place_cursor_onscreen (GtkTextView *text_view);
extern
void gtk_text_view_get_visible_rect (GtkTextView *text_view,GdkRectangle *visible_rect);
extern
void gtk_text_view_set_cursor_visible (GtkTextView *text_view,gboolean setting);
extern
gboolean gtk_text_view_get_cursor_visible (GtkTextView *text_view);
extern
void gtk_text_view_reset_cursor_blink (GtkTextView *text_view);
extern
void gtk_text_view_get_cursor_locations (GtkTextView *text_view,const GtkTextIter *iter,GdkRectangle *strong,GdkRectangle *weak);
extern
void gtk_text_view_get_iter_location (GtkTextView *text_view,const GtkTextIter *iter,GdkRectangle *location);
extern
gboolean gtk_text_view_get_iter_at_location (GtkTextView *text_view,GtkTextIter *iter,gint x,gint y);
extern
gboolean gtk_text_view_get_iter_at_position (GtkTextView *text_view,GtkTextIter *iter,gint *trailing,gint x,gint y);
extern
void gtk_text_view_get_line_yrange (GtkTextView *text_view,const GtkTextIter *iter,gint *y,gint *height);
extern
void gtk_text_view_get_line_at_y (GtkTextView *text_view,GtkTextIter *target_iter,gint y,gint *line_top);
extern
void gtk_text_view_buffer_to_window_coords (GtkTextView *text_view,GtkTextWindowType win,gint buffer_x,gint buffer_y,gint *window_x,gint *window_y);
extern
void gtk_text_view_window_to_buffer_coords (GtkTextView *text_view,GtkTextWindowType win,gint window_x,gint window_y,gint *buffer_x,gint *buffer_y);extern
GtkAdjustment* gtk_text_view_get_hadjustment (GtkTextView *text_view);extern
GtkAdjustment* gtk_text_view_get_vadjustment (GtkTextView *text_view);
extern
GdkWindow* gtk_text_view_get_window (GtkTextView *text_view,GtkTextWindowType win);
extern
GtkTextWindowType gtk_text_view_get_window_type (GtkTextView *text_view,GdkWindow *window);
extern
void gtk_text_view_set_border_window_size (GtkTextView *text_view,GtkTextWindowType type,gint size);
extern
gint gtk_text_view_get_border_window_size (GtkTextView *text_view,GtkTextWindowType type);
extern
gboolean gtk_text_view_forward_display_line (GtkTextView *text_view,GtkTextIter *iter);
extern
gboolean gtk_text_view_backward_display_line (GtkTextView *text_view,GtkTextIter *iter);
extern
gboolean gtk_text_view_forward_display_line_end (GtkTextView *text_view,GtkTextIter *iter);
extern
gboolean gtk_text_view_backward_display_line_start (GtkTextView *text_view,GtkTextIter *iter);
extern
gboolean gtk_text_view_starts_display_line (GtkTextView *text_view,const GtkTextIter *iter);
extern
gboolean gtk_text_view_move_visually (GtkTextView *text_view,GtkTextIter *iter,gint count);
extern
gboolean gtk_text_view_im_context_filter_keypress (GtkTextView *text_view,GdkEventKey *event);
extern
void gtk_text_view_reset_im_context (GtkTextView *text_view);
extern
void gtk_text_view_add_child_at_anchor (GtkTextView *text_view,GtkWidget *child,GtkTextChildAnchor *anchor);
extern
void gtk_text_view_add_child_in_window (GtkTextView *text_view,GtkWidget *child,GtkTextWindowType which_window,gint xpos,gint ypos);
extern
void gtk_text_view_move_child (GtkTextView *text_view,GtkWidget *child,gint xpos,gint ypos);
extern
void gtk_text_view_set_wrap_mode (GtkTextView *text_view,GtkWrapMode wrap_mode);
extern
GtkWrapMode gtk_text_view_get_wrap_mode (GtkTextView *text_view);
extern
void gtk_text_view_set_editable (GtkTextView *text_view,gboolean setting);
extern
gboolean gtk_text_view_get_editable (GtkTextView *text_view);
extern
void gtk_text_view_set_overwrite (GtkTextView *text_view,gboolean overwrite);
extern
gboolean gtk_text_view_get_overwrite (GtkTextView *text_view);
extern
void gtk_text_view_set_accepts_tab (GtkTextView *text_view,gboolean accepts_tab);
extern
gboolean gtk_text_view_get_accepts_tab (GtkTextView *text_view);
extern
void gtk_text_view_set_pixels_above_lines (GtkTextView *text_view,gint pixels_above_lines);
extern
gint gtk_text_view_get_pixels_above_lines (GtkTextView *text_view);
extern
void gtk_text_view_set_pixels_below_lines (GtkTextView *text_view,gint pixels_below_lines);
extern
gint gtk_text_view_get_pixels_below_lines (GtkTextView *text_view);
extern
void gtk_text_view_set_pixels_inside_wrap (GtkTextView *text_view,gint pixels_inside_wrap);
extern
gint gtk_text_view_get_pixels_inside_wrap (GtkTextView *text_view);
extern
void gtk_text_view_set_justification (GtkTextView *text_view,GtkJustification justification);
extern
GtkJustification gtk_text_view_get_justification (GtkTextView *text_view);
extern
void gtk_text_view_set_left_margin (GtkTextView *text_view,gint left_margin);
extern
gint gtk_text_view_get_left_margin (GtkTextView *text_view);
extern
void gtk_text_view_set_right_margin (GtkTextView *text_view,gint right_margin);
extern
gint gtk_text_view_get_right_margin (GtkTextView *text_view);
extern
void gtk_text_view_set_top_margin (GtkTextView *text_view,gint top_margin);
extern
gint gtk_text_view_get_top_margin (GtkTextView *text_view);
extern
void gtk_text_view_set_bottom_margin (GtkTextView *text_view,gint bottom_margin);
extern
gint gtk_text_view_get_bottom_margin (GtkTextView *text_view);
extern
void gtk_text_view_set_indent (GtkTextView *text_view,gint indent);
extern
gint gtk_text_view_get_indent (GtkTextView *text_view);
extern
void gtk_text_view_set_tabs (GtkTextView *text_view,PangoTabArray *tabs);
extern
PangoTabArray* gtk_text_view_get_tabs (GtkTextView *text_view);
extern
GtkTextAttributes* gtk_text_view_get_default_attributes (GtkTextView *text_view);
extern
void gtk_text_view_set_input_purpose (GtkTextView *text_view,GtkInputPurpose purpose);
extern
GtkInputPurpose gtk_text_view_get_input_purpose (GtkTextView *text_view);
extern
void gtk_text_view_set_input_hints (GtkTextView *text_view,GtkInputHints hints);
extern
GtkInputHints gtk_text_view_get_input_hints (GtkTextView *text_view);
extern
void gtk_text_view_set_monospace (GtkTextView *text_view,gboolean monospace);
extern
gboolean gtk_text_view_get_monospace (GtkTextView *text_view);extern
GType gtk_toolbar_get_type (void) ;
extern
GtkWidget * gtk_toolbar_new (void);
extern
void gtk_toolbar_insert (GtkToolbar *toolbar,GtkToolItem *item,gint pos);
extern
gint gtk_toolbar_get_item_index (GtkToolbar *toolbar,GtkToolItem *item);
extern
gint gtk_toolbar_get_n_items (GtkToolbar *toolbar);
extern
GtkToolItem * gtk_toolbar_get_nth_item (GtkToolbar *toolbar,gint n);
extern
gboolean gtk_toolbar_get_show_arrow (GtkToolbar *toolbar);
extern
void gtk_toolbar_set_show_arrow (GtkToolbar *toolbar,gboolean show_arrow);
extern
GtkToolbarStyle gtk_toolbar_get_style (GtkToolbar *toolbar);
extern
void gtk_toolbar_set_style (GtkToolbar *toolbar,GtkToolbarStyle style);
extern
void gtk_toolbar_unset_style (GtkToolbar *toolbar);
extern
GtkIconSize gtk_toolbar_get_icon_size (GtkToolbar *toolbar);
extern
void gtk_toolbar_set_icon_size (GtkToolbar *toolbar,GtkIconSize icon_size);
extern
void gtk_toolbar_unset_icon_size (GtkToolbar *toolbar);
extern
GtkReliefStyle gtk_toolbar_get_relief_style (GtkToolbar *toolbar);
extern
gint gtk_toolbar_get_drop_index (GtkToolbar *toolbar,gint x,gint y);
extern
void gtk_toolbar_set_drop_highlight_item (GtkToolbar *toolbar,GtkToolItem *tool_item,gint index_);extern
GType gtk_tool_item_group_get_type (void) ;
extern
GtkWidget* gtk_tool_item_group_new (const gchar *label);
extern
void gtk_tool_item_group_set_label (GtkToolItemGroup *group,const gchar *label);
extern
void gtk_tool_item_group_set_label_widget (GtkToolItemGroup *group,GtkWidget *label_widget);
extern
void gtk_tool_item_group_set_collapsed (GtkToolItemGroup *group,gboolean collapsed);
extern
void gtk_tool_item_group_set_ellipsize (GtkToolItemGroup *group,PangoEllipsizeMode ellipsize);
extern
void gtk_tool_item_group_set_header_relief (GtkToolItemGroup *group,GtkReliefStyle style);
extern
const gchar * gtk_tool_item_group_get_label (GtkToolItemGroup *group);
extern
GtkWidget *gtk_tool_item_group_get_label_widget (GtkToolItemGroup *group);
extern
gboolean gtk_tool_item_group_get_collapsed (GtkToolItemGroup *group);
extern
PangoEllipsizeMode gtk_tool_item_group_get_ellipsize (GtkToolItemGroup *group);
extern
GtkReliefStyle gtk_tool_item_group_get_header_relief (GtkToolItemGroup *group);
extern
void gtk_tool_item_group_insert (GtkToolItemGroup *group,GtkToolItem *item,gint position);
extern
void gtk_tool_item_group_set_item_position (GtkToolItemGroup *group,GtkToolItem *item,gint position);
extern
gint gtk_tool_item_group_get_item_position (GtkToolItemGroup *group,GtkToolItem *item);
extern
guint gtk_tool_item_group_get_n_items (GtkToolItemGroup *group);
extern
GtkToolItem* gtk_tool_item_group_get_nth_item (GtkToolItemGroup *group,guint index);
extern
GtkToolItem* gtk_tool_item_group_get_drop_item (GtkToolItemGroup *group,gint x,gint y);extern
GType gtk_tool_palette_get_type (void) ;
extern
GtkWidget* gtk_tool_palette_new (void);
extern
void gtk_tool_palette_set_group_position (GtkToolPalette *palette,GtkToolItemGroup *group,gint position);
extern
void gtk_tool_palette_set_exclusive (GtkToolPalette *palette,GtkToolItemGroup *group,gboolean exclusive);
extern
void gtk_tool_palette_set_expand (GtkToolPalette *palette,GtkToolItemGroup *group,gboolean expand);
extern
gint gtk_tool_palette_get_group_position (GtkToolPalette *palette,GtkToolItemGroup *group);
extern
gboolean gtk_tool_palette_get_exclusive (GtkToolPalette *palette,GtkToolItemGroup *group);
extern
gboolean gtk_tool_palette_get_expand (GtkToolPalette *palette,GtkToolItemGroup *group);
extern
void gtk_tool_palette_set_icon_size (GtkToolPalette *palette,GtkIconSize icon_size);
extern
void gtk_tool_palette_unset_icon_size (GtkToolPalette *palette);
extern
void gtk_tool_palette_set_style (GtkToolPalette *palette,GtkToolbarStyle style);
extern
void gtk_tool_palette_unset_style (GtkToolPalette *palette);
extern
GtkIconSize gtk_tool_palette_get_icon_size (GtkToolPalette *palette);
extern
GtkToolbarStyle gtk_tool_palette_get_style (GtkToolPalette *palette);
extern
GtkToolItem* gtk_tool_palette_get_drop_item (GtkToolPalette *palette,gint x,gint y);
extern
GtkToolItemGroup* gtk_tool_palette_get_drop_group (GtkToolPalette *palette,gint x,gint y);
extern
GtkWidget* gtk_tool_palette_get_drag_item (GtkToolPalette *palette,const GtkSelectionData *selection);
extern
void gtk_tool_palette_set_drag_source (GtkToolPalette *palette,GtkToolPaletteDragTargets targets);
extern
void gtk_tool_palette_add_drag_dest (GtkToolPalette *palette,GtkWidget *widget,GtkDestDefaults flags,GtkToolPaletteDragTargets targets,GdkDragAction actions);extern
GtkAdjustment* gtk_tool_palette_get_hadjustment (GtkToolPalette *palette);extern
GtkAdjustment* gtk_tool_palette_get_vadjustment (GtkToolPalette *palette);
extern
const GtkTargetEntry* gtk_tool_palette_get_drag_target_item (void) ;
extern
const GtkTargetEntry* gtk_tool_palette_get_drag_target_group (void) ;extern
GType gtk_tool_shell_get_type (void) ;
extern
GtkIconSize gtk_tool_shell_get_icon_size (GtkToolShell *shell);
extern
GtkOrientation gtk_tool_shell_get_orientation (GtkToolShell *shell);
extern
GtkToolbarStyle gtk_tool_shell_get_style (GtkToolShell *shell);
extern
GtkReliefStyle gtk_tool_shell_get_relief_style (GtkToolShell *shell);
extern
void gtk_tool_shell_rebuild_menu (GtkToolShell *shell);
extern
GtkOrientation gtk_tool_shell_get_text_orientation (GtkToolShell *shell);
extern
gfloat gtk_tool_shell_get_text_alignment (GtkToolShell *shell);
extern
PangoEllipsizeMode gtk_tool_shell_get_ellipsize_mode (GtkToolShell *shell);
extern
GtkSizeGroup * gtk_tool_shell_get_text_size_group (GtkToolShell *shell);
extern
void gtk_test_init (int *argcp,char ***argvp,...);
extern
void gtk_test_register_all_types (void);
extern
const GType* gtk_test_list_all_types (guint *n_types);
extern
GtkWidget* gtk_test_find_widget (GtkWidget *widget,const gchar *label_pattern,GType widget_type);extern
GtkWidget* gtk_test_create_widget (GType widget_type,const gchar *first_property_name,...);extern
GtkWidget* gtk_test_create_simple_window (const gchar *window_title,const gchar *dialog_text);extern
GtkWidget* gtk_test_display_button_window (const gchar *window_title,const gchar *dialog_text,...);extern
void gtk_test_slider_set_perc (GtkWidget *widget,double percentage);extern
double gtk_test_slider_get_value (GtkWidget *widget);extern
gboolean gtk_test_spin_button_click (GtkSpinButton *spinner,guint button,gboolean upwards);
extern
void gtk_test_widget_wait_for_draw (GtkWidget *widget);extern
gboolean gtk_test_widget_click (GtkWidget *widget,guint button,GdkModifierType modifiers);
extern
gboolean gtk_test_widget_send_key (GtkWidget *widget,guint keyval,GdkModifierType modifiers);extern
void gtk_test_text_set (GtkWidget *widget,const gchar *string);extern
gchar* gtk_test_text_get (GtkWidget *widget);
extern
GtkWidget* gtk_test_find_sibling (GtkWidget *base_widget,GType widget_type);
extern
GtkWidget* gtk_test_find_label (GtkWidget *widget,const gchar *label_pattern);extern
GType gtk_tree_drag_source_get_type (void) ;
extern
gboolean gtk_tree_drag_source_row_draggable (GtkTreeDragSource *drag_source,GtkTreePath *path);
extern
gboolean gtk_tree_drag_source_drag_data_delete (GtkTreeDragSource *drag_source,GtkTreePath *path);
extern
gboolean gtk_tree_drag_source_drag_data_get (GtkTreeDragSource *drag_source,GtkTreePath *path,GtkSelectionData *selection_data);extern
GType gtk_tree_drag_dest_get_type (void) ;
extern
gboolean gtk_tree_drag_dest_drag_data_received (GtkTreeDragDest *drag_dest,GtkTreePath *dest,GtkSelectionData *selection_data);
extern
gboolean gtk_tree_drag_dest_row_drop_possible (GtkTreeDragDest *drag_dest,GtkTreePath *dest_path,GtkSelectionData *selection_data);
extern
gboolean gtk_tree_set_row_drag_data (GtkSelectionData *selection_data,GtkTreeModel *tree_model,GtkTreePath *path);
extern
gboolean gtk_tree_get_row_drag_data (GtkSelectionData *selection_data,GtkTreeModel **tree_model,GtkTreePath **path);extern
GType gtk_tree_model_sort_get_type (void) ;
extern
GtkTreeModel *gtk_tree_model_sort_new_with_model (GtkTreeModel *child_model);
extern
GtkTreeModel *gtk_tree_model_sort_get_model (GtkTreeModelSort *tree_model);
extern
GtkTreePath *gtk_tree_model_sort_convert_child_path_to_path (GtkTreeModelSort *tree_model_sort,GtkTreePath *child_path);
extern
gboolean gtk_tree_model_sort_convert_child_iter_to_iter (GtkTreeModelSort *tree_model_sort,GtkTreeIter *sort_iter,GtkTreeIter *child_iter);
extern
GtkTreePath *gtk_tree_model_sort_convert_path_to_child_path (GtkTreeModelSort *tree_model_sort,GtkTreePath *sorted_path);
extern
void gtk_tree_model_sort_convert_iter_to_child_iter (GtkTreeModelSort *tree_model_sort,GtkTreeIter *child_iter,GtkTreeIter *sorted_iter);
extern
void gtk_tree_model_sort_reset_default_sort_func (GtkTreeModelSort *tree_model_sort);
extern
void gtk_tree_model_sort_clear_cache (GtkTreeModelSort *tree_model_sort);
extern
gboolean gtk_tree_model_sort_iter_is_valid (GtkTreeModelSort *tree_model_sort,GtkTreeIter *iter);extern
GType gtk_tree_selection_get_type (void) ;
extern
void gtk_tree_selection_set_mode (GtkTreeSelection *selection,GtkSelectionMode type);
extern
GtkSelectionMode gtk_tree_selection_get_mode (GtkTreeSelection *selection);
extern
void gtk_tree_selection_set_select_function (GtkTreeSelection *selection,GtkTreeSelectionFunc func,gpointer data,GDestroyNotify destroy);
extern
gpointer gtk_tree_selection_get_user_data (GtkTreeSelection *selection);
extern
GtkTreeView* gtk_tree_selection_get_tree_view (GtkTreeSelection *selection);
extern
GtkTreeSelectionFunc gtk_tree_selection_get_select_function (GtkTreeSelection *selection);
extern
gboolean gtk_tree_selection_get_selected (GtkTreeSelection *selection,GtkTreeModel **model,GtkTreeIter *iter);
extern
GList * gtk_tree_selection_get_selected_rows (GtkTreeSelection *selection,GtkTreeModel **model);
extern
gint gtk_tree_selection_count_selected_rows (GtkTreeSelection *selection);
extern
void gtk_tree_selection_selected_foreach (GtkTreeSelection *selection,GtkTreeSelectionForeachFunc func,gpointer data);
extern
void gtk_tree_selection_select_path (GtkTreeSelection *selection,GtkTreePath *path);
extern
void gtk_tree_selection_unselect_path (GtkTreeSelection *selection,GtkTreePath *path);
extern
void gtk_tree_selection_select_iter (GtkTreeSelection *selection,GtkTreeIter *iter);
extern
void gtk_tree_selection_unselect_iter (GtkTreeSelection *selection,GtkTreeIter *iter);
extern
gboolean gtk_tree_selection_path_is_selected (GtkTreeSelection *selection,GtkTreePath *path);
extern
gboolean gtk_tree_selection_iter_is_selected (GtkTreeSelection *selection,GtkTreeIter *iter);
extern
void gtk_tree_selection_select_all (GtkTreeSelection *selection);
extern
void gtk_tree_selection_unselect_all (GtkTreeSelection *selection);
extern
void gtk_tree_selection_select_range (GtkTreeSelection *selection,GtkTreePath *start_path,GtkTreePath *end_path);
extern
void gtk_tree_selection_unselect_range (GtkTreeSelection *selection,GtkTreePath *start_path,GtkTreePath *end_path);extern
GType gtk_tree_store_get_type (void) ;
extern
GtkTreeStore *gtk_tree_store_new (gint n_columns,...);
extern
GtkTreeStore *gtk_tree_store_newv (gint n_columns,GType *types);
extern
void gtk_tree_store_set_column_types (GtkTreeStore *tree_store,gint n_columns,GType *types);
extern
void gtk_tree_store_set_value (GtkTreeStore *tree_store,GtkTreeIter *iter,gint column,GValue *value);
extern
void gtk_tree_store_set (GtkTreeStore *tree_store,GtkTreeIter *iter,...);
extern
void gtk_tree_store_set_valuesv (GtkTreeStore *tree_store,GtkTreeIter *iter,gint *columns,GValue *values,gint n_values);
extern
void gtk_tree_store_set_valist (GtkTreeStore *tree_store,GtkTreeIter *iter,va_list var_args);
extern
gboolean gtk_tree_store_remove (GtkTreeStore *tree_store,GtkTreeIter *iter);
extern
void gtk_tree_store_insert (GtkTreeStore *tree_store,GtkTreeIter *iter,GtkTreeIter *parent,gint position);
extern
void gtk_tree_store_insert_before (GtkTreeStore *tree_store,GtkTreeIter *iter,GtkTreeIter *parent,GtkTreeIter *sibling);
extern
void gtk_tree_store_insert_after (GtkTreeStore *tree_store,GtkTreeIter *iter,GtkTreeIter *parent,GtkTreeIter *sibling);
extern
void gtk_tree_store_insert_with_values (GtkTreeStore *tree_store,GtkTreeIter *iter,GtkTreeIter *parent,gint position,...);
extern
void gtk_tree_store_insert_with_valuesv (GtkTreeStore *tree_store,GtkTreeIter *iter,GtkTreeIter *parent,gint position,gint *columns,GValue *values,gint n_values);
extern
void gtk_tree_store_prepend (GtkTreeStore *tree_store,GtkTreeIter *iter,GtkTreeIter *parent);
extern
void gtk_tree_store_append (GtkTreeStore *tree_store,GtkTreeIter *iter,GtkTreeIter *parent);
extern
gboolean gtk_tree_store_is_ancestor (GtkTreeStore *tree_store,GtkTreeIter *iter,GtkTreeIter *descendant);
extern
gint gtk_tree_store_iter_depth (GtkTreeStore *tree_store,GtkTreeIter *iter);
extern
void gtk_tree_store_clear (GtkTreeStore *tree_store);
extern
gboolean gtk_tree_store_iter_is_valid (GtkTreeStore *tree_store,GtkTreeIter *iter);
extern
void gtk_tree_store_reorder (GtkTreeStore *tree_store,GtkTreeIter *parent,gint *new_order);
extern
void gtk_tree_store_swap (GtkTreeStore *tree_store,GtkTreeIter *a,GtkTreeIter *b);
extern
void gtk_tree_store_move_before (GtkTreeStore *tree_store,GtkTreeIter *iter,GtkTreeIter *position);
extern
void gtk_tree_store_move_after (GtkTreeStore *tree_store,GtkTreeIter *iter,GtkTreeIter *position);
extern GType gtk_rc_flags_get_type (void) ;
extern GType gtk_rc_token_type_get_type (void) ;
extern GType gtk_path_priority_type_get_type (void) ;
extern GType gtk_path_type_get_type (void) ;
extern GType gtk_expander_style_get_type (void) ;
extern GType gtk_attach_options_get_type (void) ;
extern GType gtk_ui_manager_item_type_get_type (void) ;
extern GType gtk_license_get_type (void) ;
extern GType gtk_accel_flags_get_type (void) ;
extern GType gtk_application_inhibit_flags_get_type (void) ;
extern GType gtk_assistant_page_type_get_type (void) ;
extern GType gtk_button_box_style_get_type (void) ;
extern GType gtk_builder_error_get_type (void) ;
extern GType gtk_calendar_display_options_get_type (void) ;
extern GType gtk_cell_renderer_state_get_type (void) ;
extern GType gtk_cell_renderer_mode_get_type (void) ;
extern GType gtk_cell_renderer_accel_mode_get_type (void) ;
extern GType gtk_resize_mode_get_type (void) ;
extern GType gtk_css_provider_error_get_type (void) ;
extern GType gtk_css_section_type_get_type (void) ;
extern GType gtk_debug_flag_get_type (void) ;
extern GType gtk_dialog_flags_get_type (void) ;
extern GType gtk_response_type_get_type (void) ;
extern GType gtk_dest_defaults_get_type (void) ;
extern GType gtk_entry_icon_position_get_type (void) ;
extern GType gtk_align_get_type (void) ;
extern GType gtk_arrow_type_get_type (void) ;
extern GType gtk_baseline_position_get_type (void) ;
extern GType gtk_delete_type_get_type (void) ;
extern GType gtk_direction_type_get_type (void) ;
extern GType gtk_icon_size_get_type (void) ;
extern GType gtk_sensitivity_type_get_type (void) ;
extern GType gtk_text_direction_get_type (void) ;
extern GType gtk_justification_get_type (void) ;
extern GType gtk_menu_direction_type_get_type (void) ;
extern GType gtk_message_type_get_type (void) ;
extern GType gtk_movement_step_get_type (void) ;
extern GType gtk_scroll_step_get_type (void) ;
extern GType gtk_orientation_get_type (void) ;
extern GType gtk_pack_type_get_type (void) ;
extern GType gtk_position_type_get_type (void) ;
extern GType gtk_relief_style_get_type (void) ;
extern GType gtk_scroll_type_get_type (void) ;
extern GType gtk_selection_mode_get_type (void) ;
extern GType gtk_shadow_type_get_type (void) ;
extern GType gtk_state_type_get_type (void) ;
extern GType gtk_toolbar_style_get_type (void) ;
extern GType gtk_wrap_mode_get_type (void) ;
extern GType gtk_sort_type_get_type (void) ;
extern GType gtk_im_preedit_style_get_type (void) ;
extern GType gtk_im_status_style_get_type (void) ;
extern GType gtk_pack_direction_get_type (void) ;
extern GType gtk_print_pages_get_type (void) ;
extern GType gtk_page_set_get_type (void) ;
extern GType gtk_number_up_layout_get_type (void) ;
extern GType gtk_page_orientation_get_type (void) ;
extern GType gtk_print_quality_get_type (void) ;
extern GType gtk_print_duplex_get_type (void) ;
extern GType gtk_unit_get_type (void) ;
extern GType gtk_tree_view_grid_lines_get_type (void) ;
extern GType gtk_drag_result_get_type (void) ;
extern GType gtk_size_group_mode_get_type (void) ;
extern GType gtk_size_request_mode_get_type (void) ;
extern GType gtk_scrollable_policy_get_type (void) ;
extern GType gtk_state_flags_get_type (void) ;
extern GType gtk_region_flags_get_type (void) ;
extern GType gtk_junction_sides_get_type (void) ;
extern GType gtk_border_style_get_type (void) ;
extern GType gtk_level_bar_mode_get_type (void) ;
extern GType gtk_input_purpose_get_type (void) ;
extern GType gtk_input_hints_get_type (void) ;
extern GType gtk_propagation_phase_get_type (void) ;
extern GType gtk_event_sequence_state_get_type (void) ;
extern GType gtk_pan_direction_get_type (void) ;
extern GType gtk_popover_constraint_get_type (void) ;
extern GType gtk_event_controller_scroll_flags_get_type (void) ;
extern GType gtk_file_chooser_action_get_type (void) ;
extern GType gtk_file_chooser_confirmation_get_type (void) ;
extern GType gtk_file_chooser_error_get_type (void) ;
extern GType gtk_file_filter_flags_get_type (void) ;
extern GType gtk_font_chooser_level_get_type (void) ;
extern GType gtk_icon_lookup_flags_get_type (void) ;
extern GType gtk_icon_theme_error_get_type (void) ;
extern GType gtk_icon_view_drop_position_get_type (void) ;
extern GType gtk_image_type_get_type (void) ;
extern GType gtk_arrow_placement_get_type (void) ;
extern GType gtk_buttons_type_get_type (void) ;
extern GType gtk_button_role_get_type (void) ;
extern GType gtk_notebook_tab_get_type (void) ;
extern GType gtk_pad_action_type_get_type (void) ;
extern GType gtk_places_open_flags_get_type (void) ;
extern GType gtk_print_status_get_type (void) ;
extern GType gtk_print_operation_result_get_type (void) ;
extern GType gtk_print_operation_action_get_type (void) ;
extern GType gtk_print_error_get_type (void) ;
extern GType gtk_recent_sort_type_get_type (void) ;
extern GType gtk_recent_chooser_error_get_type (void) ;
extern GType gtk_recent_filter_flags_get_type (void) ;
extern GType gtk_recent_manager_error_get_type (void) ;
extern GType gtk_revealer_transition_type_get_type (void) ;
extern GType gtk_corner_type_get_type (void) ;
extern GType gtk_policy_type_get_type (void) ;
extern GType gtk_target_flags_get_type (void) ;
extern GType gtk_shortcut_type_get_type (void) ;
extern GType gtk_spin_button_update_policy_get_type (void) ;
extern GType gtk_spin_type_get_type (void) ;
extern GType gtk_stack_transition_type_get_type (void) ;
extern GType gtk_style_context_print_flags_get_type (void) ;
extern GType gtk_text_buffer_target_info_get_type (void) ;
extern GType gtk_text_search_flags_get_type (void) ;
extern GType gtk_text_window_type_get_type (void) ;
extern GType gtk_text_view_layer_get_type (void) ;
extern GType gtk_text_extend_selection_get_type (void) ;
extern GType gtk_toolbar_space_style_get_type (void) ;
extern GType gtk_tool_palette_drag_targets_get_type (void) ;
extern GType gtk_tree_model_flags_get_type (void) ;
extern GType gtk_tree_view_drop_position_get_type (void) ;
extern GType gtk_tree_view_column_sizing_get_type (void) ;
extern GType gtk_widget_help_type_get_type (void) ;
extern GType gtk_window_type_get_type (void) ;
extern GType gtk_window_position_get_type (void) ;extern
GType gtk_viewport_get_type (void) ;
extern
GtkWidget* gtk_viewport_new (GtkAdjustment *hadjustment,GtkAdjustment *vadjustment);extern
GtkAdjustment* gtk_viewport_get_hadjustment (GtkViewport *viewport);extern
GtkAdjustment* gtk_viewport_get_vadjustment (GtkViewport *viewport);extern
void gtk_viewport_set_hadjustment (GtkViewport *viewport,GtkAdjustment *adjustment);extern
void gtk_viewport_set_vadjustment (GtkViewport *viewport,GtkAdjustment *adjustment);
extern
void gtk_viewport_set_shadow_type (GtkViewport *viewport,GtkShadowType type);
extern
GtkShadowType gtk_viewport_get_shadow_type (GtkViewport *viewport);
extern
GdkWindow* gtk_viewport_get_bin_window (GtkViewport *viewport);
extern
GdkWindow* gtk_viewport_get_view_window (GtkViewport *viewport);extern
GType gtk_volume_button_get_type (void) ;
extern
GtkWidget* gtk_volume_button_new (void);
extern
GType gtk_widget_path_get_type (void) ;
extern
GtkWidgetPath * gtk_widget_path_new (void);
extern
GtkWidgetPath * gtk_widget_path_copy (const GtkWidgetPath *path);
extern
GtkWidgetPath * gtk_widget_path_ref (GtkWidgetPath *path);
extern
void gtk_widget_path_unref (GtkWidgetPath *path);
extern
void gtk_widget_path_free (GtkWidgetPath *path);
extern
char * gtk_widget_path_to_string (const GtkWidgetPath *path);
extern
gint gtk_widget_path_length (const GtkWidgetPath *path);
extern
gint gtk_widget_path_append_type (GtkWidgetPath *path,GType type);
extern
void gtk_widget_path_prepend_type (GtkWidgetPath *path,GType type);
extern
gint gtk_widget_path_append_with_siblings(GtkWidgetPath *path,GtkWidgetPath *siblings,guint sibling_index);
extern
gint gtk_widget_path_append_for_widget (GtkWidgetPath *path,GtkWidget *widget);
extern
GType gtk_widget_path_iter_get_object_type (const GtkWidgetPath *path,gint pos);
extern
void gtk_widget_path_iter_set_object_type (GtkWidgetPath *path,gint pos,GType type);
extern
const char * gtk_widget_path_iter_get_object_name (const GtkWidgetPath *path,gint pos);
extern
void gtk_widget_path_iter_set_object_name (GtkWidgetPath *path,gint pos,const char *name);
extern
const GtkWidgetPath *gtk_widget_path_iter_get_siblings (const GtkWidgetPath *path,gint pos);
extern
guint gtk_widget_path_iter_get_sibling_index(const GtkWidgetPath *path,gint pos);
extern
const gchar * gtk_widget_path_iter_get_name (const GtkWidgetPath *path,gint pos);
extern
void gtk_widget_path_iter_set_name (GtkWidgetPath *path,gint pos,const gchar *name);
extern
gboolean gtk_widget_path_iter_has_name (const GtkWidgetPath *path,gint pos,const gchar *name);
extern
gboolean gtk_widget_path_iter_has_qname (const GtkWidgetPath *path,gint pos,GQuark qname);
extern
GtkStateFlags gtk_widget_path_iter_get_state (const GtkWidgetPath *path,gint pos);
extern
void gtk_widget_path_iter_set_state (GtkWidgetPath *path,gint pos,GtkStateFlags state);
extern
void gtk_widget_path_iter_add_class (GtkWidgetPath *path,gint pos,const gchar *name);
extern
void gtk_widget_path_iter_remove_class (GtkWidgetPath *path,gint pos,const gchar *name);
extern
void gtk_widget_path_iter_clear_classes (GtkWidgetPath *path,gint pos);
extern
GSList * gtk_widget_path_iter_list_classes (const GtkWidgetPath *path,gint pos);
extern
gboolean gtk_widget_path_iter_has_class (const GtkWidgetPath *path,gint pos,const gchar *name);
extern
gboolean gtk_widget_path_iter_has_qclass (const GtkWidgetPath *path,gint pos,GQuark qname);extern
void gtk_widget_path_iter_add_region (GtkWidgetPath *path,gint pos,const gchar *name,GtkRegionFlags flags);extern
void gtk_widget_path_iter_remove_region (GtkWidgetPath *path,gint pos,const gchar *name);extern
void gtk_widget_path_iter_clear_regions (GtkWidgetPath *path,gint pos);extern
GSList * gtk_widget_path_iter_list_regions (const GtkWidgetPath *path,gint pos);extern
gboolean gtk_widget_path_iter_has_region (const GtkWidgetPath *path,gint pos,const gchar *name,GtkRegionFlags *flags);extern
gboolean gtk_widget_path_iter_has_qregion (const GtkWidgetPath *path,gint pos,GQuark qname,GtkRegionFlags *flags);
extern
GType gtk_widget_path_get_object_type (const GtkWidgetPath *path);
extern
gboolean gtk_widget_path_is_type (const GtkWidgetPath *path,GType type);
extern
gboolean gtk_widget_path_has_parent (const GtkWidgetPath *path,GType type);extern
GType gtk_window_group_get_type (void) ;
extern
GtkWindowGroup * gtk_window_group_new (void);
extern
void gtk_window_group_add_window (GtkWindowGroup *window_group,GtkWindow *window);
extern
void gtk_window_group_remove_window (GtkWindowGroup *window_group,GtkWindow *window);
extern
GList * gtk_window_group_list_windows (GtkWindowGroup *window_group);
extern
GtkWidget * gtk_window_group_get_current_grab (GtkWindowGroup *window_group);
extern
GtkWidget * gtk_window_group_get_current_device_grab (GtkWindowGroup *window_group,GdkDevice *device);extern
GType gtk_arrow_get_type (void) ;extern
GtkWidget* gtk_arrow_new (GtkArrowType arrow_type,GtkShadowType shadow_type);extern
void gtk_arrow_set (GtkArrow *arrow,GtkArrowType arrow_type,GtkShadowType shadow_type);extern
GType gtk_action_get_type (void) ;extern
GtkAction *gtk_action_new (const gchar *name,const gchar *label,const gchar *tooltip,const gchar *stock_id);extern
const gchar* gtk_action_get_name (GtkAction *action);extern
gboolean gtk_action_is_sensitive (GtkAction *action);extern
gboolean gtk_action_get_sensitive (GtkAction *action);extern
void gtk_action_set_sensitive (GtkAction *action,gboolean sensitive);extern
gboolean gtk_action_is_visible (GtkAction *action);extern
gboolean gtk_action_get_visible (GtkAction *action);extern
void gtk_action_set_visible (GtkAction *action,gboolean visible);extern
void gtk_action_activate (GtkAction *action);extern
GtkWidget * gtk_action_create_icon (GtkAction *action,GtkIconSize icon_size);extern
GtkWidget * gtk_action_create_menu_item (GtkAction *action);extern
GtkWidget * gtk_action_create_tool_item (GtkAction *action);extern
GtkWidget * gtk_action_create_menu (GtkAction *action);extern
GSList * gtk_action_get_proxies (GtkAction *action);extern
void gtk_action_connect_accelerator (GtkAction *action);extern
void gtk_action_disconnect_accelerator (GtkAction *action);extern
const gchar *gtk_action_get_accel_path (GtkAction *action);extern
GClosure *gtk_action_get_accel_closure (GtkAction *action);extern
void gtk_action_block_activate (GtkAction *action);extern
void gtk_action_unblock_activate (GtkAction *action);extern
void gtk_action_set_accel_path (GtkAction *action,const gchar *accel_path);extern
void gtk_action_set_accel_group (GtkAction *action,GtkAccelGroup *accel_group);extern
void gtk_action_set_label (GtkAction *action,const gchar *label);extern
const gchar * gtk_action_get_label (GtkAction *action);extern
void gtk_action_set_short_label (GtkAction *action,const gchar *short_label);extern
const gchar * gtk_action_get_short_label (GtkAction *action);extern
void gtk_action_set_tooltip (GtkAction *action,const gchar *tooltip);extern
const gchar * gtk_action_get_tooltip (GtkAction *action);extern
void gtk_action_set_stock_id (GtkAction *action,const gchar *stock_id);extern
const gchar * gtk_action_get_stock_id (GtkAction *action);extern
void gtk_action_set_gicon (GtkAction *action,GIcon *icon);extern
GIcon *gtk_action_get_gicon (GtkAction *action);extern
void gtk_action_set_icon_name (GtkAction *action,const gchar *icon_name);extern
const gchar * gtk_action_get_icon_name (GtkAction *action);extern
void gtk_action_set_visible_horizontal (GtkAction *action,gboolean visible_horizontal);extern
gboolean gtk_action_get_visible_horizontal (GtkAction *action);extern
void gtk_action_set_visible_vertical (GtkAction *action,gboolean visible_vertical);extern
gboolean gtk_action_get_visible_vertical (GtkAction *action);extern
void gtk_action_set_is_important (GtkAction *action,gboolean is_important);extern
gboolean gtk_action_get_is_important (GtkAction *action);extern
void gtk_action_set_always_show_image (GtkAction *action,gboolean always_show);extern
gboolean gtk_action_get_always_show_image (GtkAction *action);extern
GType gtk_activatable_get_type (void) ;extern
void gtk_activatable_sync_action_properties (GtkActivatable *activatable,GtkAction *action);extern
void gtk_activatable_set_related_action (GtkActivatable *activatable,GtkAction *action);extern
GtkAction *gtk_activatable_get_related_action (GtkActivatable *activatable);extern
void gtk_activatable_set_use_action_appearance (GtkActivatable *activatable,gboolean use_appearance);extern
gboolean gtk_activatable_get_use_action_appearance (GtkActivatable *activatable);extern
void gtk_activatable_do_set_related_action (GtkActivatable *activatable,GtkAction *action);extern
void gtk_stock_add (const GtkStockItem *items,guint n_items);extern
void gtk_stock_add_static (const GtkStockItem *items,guint n_items);extern
gboolean gtk_stock_lookup (const gchar *stock_id,GtkStockItem *item);extern
GSList* gtk_stock_list_ids (void);extern
GtkStockItem *gtk_stock_item_copy (const GtkStockItem *item);extern
void gtk_stock_item_free (GtkStockItem *item);extern
void gtk_stock_set_translate_func (const gchar *domain,GtkTranslateFunc func,gpointer data,GDestroyNotify notify);extern
GType gtk_action_group_get_type (void) ;extern
GtkActionGroup *gtk_action_group_new (const gchar *name);extern
const gchar *gtk_action_group_get_name (GtkActionGroup *action_group);extern
gboolean gtk_action_group_get_sensitive (GtkActionGroup *action_group);extern
void gtk_action_group_set_sensitive (GtkActionGroup *action_group,gboolean sensitive);extern
gboolean gtk_action_group_get_visible (GtkActionGroup *action_group);extern
void gtk_action_group_set_visible (GtkActionGroup *action_group,gboolean visible);extern
GtkAccelGroup *gtk_action_group_get_accel_group (GtkActionGroup *action_group);extern
void gtk_action_group_set_accel_group (GtkActionGroup *action_group,GtkAccelGroup *accel_group);extern
GtkAction *gtk_action_group_get_action (GtkActionGroup *action_group,const gchar *action_name);extern
GList *gtk_action_group_list_actions (GtkActionGroup *action_group);extern
void gtk_action_group_add_action (GtkActionGroup *action_group,GtkAction *action);extern
void gtk_action_group_add_action_with_accel (GtkActionGroup *action_group,GtkAction *action,const gchar *accelerator);extern
void gtk_action_group_remove_action (GtkActionGroup *action_group,GtkAction *action);extern
void gtk_action_group_add_actions (GtkActionGroup *action_group,const GtkActionEntry *entries,guint n_entries,gpointer user_data);extern
void gtk_action_group_add_toggle_actions (GtkActionGroup *action_group,const GtkToggleActionEntry *entries,guint n_entries,gpointer user_data);extern
void gtk_action_group_add_radio_actions (GtkActionGroup *action_group,const GtkRadioActionEntry *entries,guint n_entries,gint value,GCallback on_change,gpointer user_data);extern
void gtk_action_group_add_actions_full (GtkActionGroup *action_group,const GtkActionEntry *entries,guint n_entries,gpointer user_data,GDestroyNotify destroy);extern
void gtk_action_group_add_toggle_actions_full (GtkActionGroup *action_group,const GtkToggleActionEntry *entries,guint n_entries,gpointer user_data,GDestroyNotify destroy);extern
void gtk_action_group_add_radio_actions_full (GtkActionGroup *action_group,const GtkRadioActionEntry *entries,guint n_entries,gint value,GCallback on_change,gpointer user_data,GDestroyNotify destroy);extern
void gtk_action_group_set_translate_func (GtkActionGroup *action_group,GtkTranslateFunc func,gpointer data,GDestroyNotify notify);extern
void gtk_action_group_set_translation_domain (GtkActionGroup *action_group,const gchar *domain);extern
const gchar * gtk_action_group_translate_string (GtkActionGroup *action_group,const gchar *string);extern
GType gtk_alignment_get_type (void) ;extern
GtkWidget* gtk_alignment_new (gfloat xalign,gfloat yalign,gfloat xscale,gfloat yscale);extern
void gtk_alignment_set (GtkAlignment *alignment,gfloat xalign,gfloat yalign,gfloat xscale,gfloat yscale);extern
void gtk_alignment_set_padding (GtkAlignment *alignment,guint padding_top,guint padding_bottom,guint padding_left,guint padding_right);extern
void gtk_alignment_get_padding (GtkAlignment *alignment,guint *padding_top,guint *padding_bottom,guint *padding_left,guint *padding_right);extern
GType gtk_color_selection_get_type (void) ;extern
GtkWidget *gtk_color_selection_new (void);extern
gboolean gtk_color_selection_get_has_opacity_control (GtkColorSelection *colorsel);extern
void gtk_color_selection_set_has_opacity_control (GtkColorSelection *colorsel,gboolean has_opacity);extern
gboolean gtk_color_selection_get_has_palette (GtkColorSelection *colorsel);extern
void gtk_color_selection_set_has_palette (GtkColorSelection *colorsel,gboolean has_palette);extern
void gtk_color_selection_set_current_alpha (GtkColorSelection *colorsel,guint16 alpha);extern
guint16 gtk_color_selection_get_current_alpha (GtkColorSelection *colorsel);extern
void gtk_color_selection_set_previous_alpha (GtkColorSelection *colorsel,guint16 alpha);extern
guint16 gtk_color_selection_get_previous_alpha (GtkColorSelection *colorsel);extern
void gtk_color_selection_set_current_rgba (GtkColorSelection *colorsel,const GdkRGBA *rgba);extern
void gtk_color_selection_get_current_rgba (GtkColorSelection *colorsel,GdkRGBA *rgba);extern
void gtk_color_selection_set_previous_rgba (GtkColorSelection *colorsel,const GdkRGBA *rgba);extern
void gtk_color_selection_get_previous_rgba (GtkColorSelection *colorsel,GdkRGBA *rgba);extern
gboolean gtk_color_selection_is_adjusting (GtkColorSelection *colorsel);extern
gboolean gtk_color_selection_palette_from_string (const gchar *str,GdkColor **colors,gint *n_colors);extern
gchar* gtk_color_selection_palette_to_string (const GdkColor *colors,gint n_colors);extern
GtkColorSelectionChangePaletteWithScreenFunc gtk_color_selection_set_change_palette_with_screen_hook (GtkColorSelectionChangePaletteWithScreenFunc func);extern
void gtk_color_selection_set_current_color (GtkColorSelection *colorsel,const GdkColor *color);extern
void gtk_color_selection_get_current_color (GtkColorSelection *colorsel,GdkColor *color);extern
void gtk_color_selection_set_previous_color (GtkColorSelection *colorsel,const GdkColor *color);extern
void gtk_color_selection_get_previous_color (GtkColorSelection *colorsel,GdkColor *color);extern
GType gtk_color_selection_dialog_get_type (void) ;extern
GtkWidget* gtk_color_selection_dialog_new (const gchar *title);extern
GtkWidget* gtk_color_selection_dialog_get_color_selection (GtkColorSelectionDialog *colorsel);extern
GType gtk_font_selection_get_type (void) ;extern
GtkWidget * gtk_font_selection_new (void);extern
GtkWidget * gtk_font_selection_get_family_list (GtkFontSelection *fontsel);extern
GtkWidget * gtk_font_selection_get_face_list (GtkFontSelection *fontsel);extern
GtkWidget * gtk_font_selection_get_size_entry (GtkFontSelection *fontsel);extern
GtkWidget * gtk_font_selection_get_size_list (GtkFontSelection *fontsel);extern
GtkWidget * gtk_font_selection_get_preview_entry (GtkFontSelection *fontsel);extern
PangoFontFamily *gtk_font_selection_get_family (GtkFontSelection *fontsel);extern
PangoFontFace *gtk_font_selection_get_face (GtkFontSelection *fontsel);extern
gint gtk_font_selection_get_size (GtkFontSelection *fontsel);extern
gchar* gtk_font_selection_get_font_name (GtkFontSelection *fontsel);extern
gboolean gtk_font_selection_set_font_name (GtkFontSelection *fontsel,const gchar *fontname);extern
const gchar* gtk_font_selection_get_preview_text (GtkFontSelection *fontsel);extern
void gtk_font_selection_set_preview_text (GtkFontSelection *fontsel,const gchar *text);extern
GType gtk_font_selection_dialog_get_type (void) ;extern
GtkWidget *gtk_font_selection_dialog_new (const gchar *title);extern
GtkWidget *gtk_font_selection_dialog_get_ok_button (GtkFontSelectionDialog *fsd);extern
GtkWidget *gtk_font_selection_dialog_get_cancel_button (GtkFontSelectionDialog *fsd);extern
GtkWidget *gtk_font_selection_dialog_get_font_selection (GtkFontSelectionDialog *fsd);extern
gchar* gtk_font_selection_dialog_get_font_name (GtkFontSelectionDialog *fsd);extern
gboolean gtk_font_selection_dialog_set_font_name (GtkFontSelectionDialog *fsd,const gchar *fontname);extern
const gchar*gtk_font_selection_dialog_get_preview_text (GtkFontSelectionDialog *fsd);extern
void gtk_font_selection_dialog_set_preview_text (GtkFontSelectionDialog *fsd,const gchar *text);extern
GType gtk_symbolic_color_get_type (void) ;extern
GtkSymbolicColor * gtk_symbolic_color_new_literal (const GdkRGBA *color);extern
GtkSymbolicColor * gtk_symbolic_color_new_name (const gchar *name);extern
GtkSymbolicColor * gtk_symbolic_color_new_shade (GtkSymbolicColor *color,gdouble factor);extern
GtkSymbolicColor * gtk_symbolic_color_new_alpha (GtkSymbolicColor *color,gdouble factor);extern
GtkSymbolicColor * gtk_symbolic_color_new_mix (GtkSymbolicColor *color1,GtkSymbolicColor *color2,gdouble factor);extern
GtkSymbolicColor * gtk_symbolic_color_new_win32 (const gchar *theme_class,gint id);extern
GtkSymbolicColor * gtk_symbolic_color_ref (GtkSymbolicColor *color);extern
void gtk_symbolic_color_unref (GtkSymbolicColor *color);extern
char * gtk_symbolic_color_to_string (GtkSymbolicColor *color);extern
gboolean gtk_symbolic_color_resolve (GtkSymbolicColor *color,GtkStyleProperties *props,GdkRGBA *resolved_color);extern
GType gtk_gradient_get_type (void) ;extern
GtkGradient * gtk_gradient_new_linear (gdouble x0,gdouble y0,gdouble x1,gdouble y1);extern
GtkGradient * gtk_gradient_new_radial (gdouble x0,gdouble y0,gdouble radius0,gdouble x1,gdouble y1,gdouble radius1);extern
void gtk_gradient_add_color_stop (GtkGradient *gradient,gdouble offset,GtkSymbolicColor *color);extern
GtkGradient * gtk_gradient_ref (GtkGradient *gradient);extern
void gtk_gradient_unref (GtkGradient *gradient);extern
gboolean gtk_gradient_resolve (GtkGradient *gradient,GtkStyleProperties *props,cairo_pattern_t **resolved_gradient);extern
cairo_pattern_t *gtk_gradient_resolve_for_context(GtkGradient *gradient,GtkStyleContext *context);extern
char * gtk_gradient_to_string (GtkGradient *gradient);extern
GType gtk_handle_box_get_type (void) ;extern
GtkWidget* gtk_handle_box_new (void);extern
void gtk_handle_box_set_shadow_type (GtkHandleBox *handle_box,GtkShadowType type);extern
GtkShadowType gtk_handle_box_get_shadow_type (GtkHandleBox *handle_box);extern
void gtk_handle_box_set_handle_position (GtkHandleBox *handle_box,GtkPositionType position);extern
GtkPositionType gtk_handle_box_get_handle_position(GtkHandleBox *handle_box);extern
void gtk_handle_box_set_snap_edge (GtkHandleBox *handle_box,GtkPositionType edge);extern
GtkPositionType gtk_handle_box_get_snap_edge (GtkHandleBox *handle_box);extern
gboolean gtk_handle_box_get_child_detached (GtkHandleBox *handle_box);extern
GType gtk_hbutton_box_get_type (void) ;extern
GtkWidget* gtk_hbutton_box_new (void);extern
GType gtk_hbox_get_type (void) ;extern
GtkWidget * gtk_hbox_new (gboolean homogeneous,gint spacing);extern
GType gtk_hpaned_get_type (void) ;extern
GtkWidget * gtk_hpaned_new (void);extern
GType gtk_hsv_get_type (void) ;extern
GtkWidget* gtk_hsv_new (void);extern
void gtk_hsv_set_color (GtkHSV *hsv,double h,double s,double v);extern
void gtk_hsv_get_color (GtkHSV *hsv,gdouble *h,gdouble *s,gdouble *v);extern
void gtk_hsv_set_metrics (GtkHSV *hsv,gint size,gint ring_width);extern
void gtk_hsv_get_metrics (GtkHSV *hsv,gint *size,gint *ring_width);extern
gboolean gtk_hsv_is_adjusting (GtkHSV *hsv);extern
GType gtk_hscale_get_type (void) ;extern
GtkWidget* gtk_hscale_new (GtkAdjustment *adjustment);extern
GtkWidget* gtk_hscale_new_with_range (gdouble min,gdouble max,gdouble step);extern
GType gtk_hscrollbar_get_type (void) ;extern
GtkWidget* gtk_hscrollbar_new (GtkAdjustment *adjustment);extern
GType gtk_hseparator_get_type (void) ;extern
GtkWidget* gtk_hseparator_new (void);extern
GType gtk_image_menu_item_get_type (void) ;extern
GtkWidget* gtk_image_menu_item_new (void);extern
GtkWidget* gtk_image_menu_item_new_with_label (const gchar *label);extern
GtkWidget* gtk_image_menu_item_new_with_mnemonic (const gchar *label);extern
GtkWidget* gtk_image_menu_item_new_from_stock (const gchar *stock_id,GtkAccelGroup *accel_group);extern
void gtk_image_menu_item_set_always_show_image (GtkImageMenuItem *image_menu_item,gboolean always_show);extern
gboolean gtk_image_menu_item_get_always_show_image (GtkImageMenuItem *image_menu_item);extern
void gtk_image_menu_item_set_image (GtkImageMenuItem *image_menu_item,GtkWidget *image);extern
GtkWidget* gtk_image_menu_item_get_image (GtkImageMenuItem *image_menu_item);extern
void gtk_image_menu_item_set_use_stock (GtkImageMenuItem *image_menu_item,gboolean use_stock);extern
gboolean gtk_image_menu_item_get_use_stock (GtkImageMenuItem *image_menu_item);extern
void gtk_image_menu_item_set_accel_group (GtkImageMenuItem *image_menu_item,GtkAccelGroup *accel_group);extern
GType gtk_numerable_icon_get_type (void) ;extern
GIcon * gtk_numerable_icon_new (GIcon *base_icon);extern
GIcon * gtk_numerable_icon_new_with_style_context (GIcon *base_icon,GtkStyleContext *context);extern
GtkStyleContext * gtk_numerable_icon_get_style_context (GtkNumerableIcon *self);extern
void gtk_numerable_icon_set_style_context (GtkNumerableIcon *self,GtkStyleContext *style);extern
gint gtk_numerable_icon_get_count (GtkNumerableIcon *self);extern
void gtk_numerable_icon_set_count (GtkNumerableIcon *self,gint count);extern
const gchar * gtk_numerable_icon_get_label (GtkNumerableIcon *self);extern
void gtk_numerable_icon_set_label (GtkNumerableIcon *self,const gchar *label);extern
void gtk_numerable_icon_set_background_gicon (GtkNumerableIcon *self,GIcon *icon);extern
GIcon * gtk_numerable_icon_get_background_gicon (GtkNumerableIcon *self);extern
void gtk_numerable_icon_set_background_icon_name (GtkNumerableIcon *self,const gchar *icon_name);extern
const gchar * gtk_numerable_icon_get_background_icon_name (GtkNumerableIcon *self);extern
GType gtk_toggle_action_get_type (void) ;extern
GtkToggleAction *gtk_toggle_action_new (const gchar *name,const gchar *label,const gchar *tooltip,const gchar *stock_id);extern
void gtk_toggle_action_toggled (GtkToggleAction *action);extern
void gtk_toggle_action_set_active (GtkToggleAction *action,gboolean is_active);extern
gboolean gtk_toggle_action_get_active (GtkToggleAction *action);extern
void gtk_toggle_action_set_draw_as_radio (GtkToggleAction *action,gboolean draw_as_radio);extern
gboolean gtk_toggle_action_get_draw_as_radio (GtkToggleAction *action);extern
GType gtk_radio_action_get_type (void) ;extern
GtkRadioAction *gtk_radio_action_new (const gchar *name,const gchar *label,const gchar *tooltip,const gchar *stock_id,gint value);extern
GSList *gtk_radio_action_get_group (GtkRadioAction *action);extern
void gtk_radio_action_set_group (GtkRadioAction *action,GSList *group);extern
void gtk_radio_action_join_group (GtkRadioAction *action,GtkRadioAction *group_source);extern
gint gtk_radio_action_get_current_value (GtkRadioAction *action);extern
void gtk_radio_action_set_current_value (GtkRadioAction *action,gint current_value);extern
void gtk_rc_add_default_file (const gchar *filename);extern
void gtk_rc_set_default_files (gchar **filenames);extern
gchar** gtk_rc_get_default_files (void);extern
GtkStyle* gtk_rc_get_style (GtkWidget *widget);extern
GtkStyle* gtk_rc_get_style_by_paths (GtkSettings *settings,const char *widget_path,const char *class_path,GType type);extern
gboolean gtk_rc_reparse_all_for_settings (GtkSettings *settings,gboolean force_load);extern
void gtk_rc_reset_styles (GtkSettings *settings);extern
gchar* gtk_rc_find_pixmap_in_path (GtkSettings *settings,GScanner *scanner,const gchar *pixmap_file);extern
void gtk_rc_parse (const gchar *filename);extern
void gtk_rc_parse_string (const gchar *rc_string);extern
gboolean gtk_rc_reparse_all (void);extern
GType gtk_rc_style_get_type (void) ;extern
GtkRcStyle* gtk_rc_style_new (void);extern
GtkRcStyle* gtk_rc_style_copy (GtkRcStyle *orig);extern
gchar* gtk_rc_find_module_in_path (const gchar *module_file);extern
gchar* gtk_rc_get_theme_dir (void);extern
gchar* gtk_rc_get_module_dir (void);extern
gchar* gtk_rc_get_im_module_path (void);extern
gchar* gtk_rc_get_im_module_file (void);extern
GScanner* gtk_rc_scanner_new (void);extern
guint gtk_rc_parse_color (GScanner *scanner,GdkColor *color);extern
guint gtk_rc_parse_color_full (GScanner *scanner,GtkRcStyle *style,GdkColor *color);extern
guint gtk_rc_parse_state (GScanner *scanner,GtkStateType *state);extern
guint gtk_rc_parse_priority (GScanner *scanner,GtkPathPriorityType *priority);extern
void gtk_binding_set_add_path (GtkBindingSet *binding_set,GtkPathType path_type,const gchar *path_pattern,GtkPathPriorityType priority);extern
GType gtk_recent_action_get_type (void) ;extern
GtkAction *gtk_recent_action_new (const gchar *name,const gchar *label,const gchar *tooltip,const gchar *stock_id);extern
GtkAction *gtk_recent_action_new_for_manager (const gchar *name,const gchar *label,const gchar *tooltip,const gchar *stock_id,GtkRecentManager *manager);extern
gboolean gtk_recent_action_get_show_numbers (GtkRecentAction *action);extern
void gtk_recent_action_set_show_numbers (GtkRecentAction *action,gboolean show_numbers);extern
GType gtk_status_icon_get_type (void) ;extern
GtkStatusIcon *gtk_status_icon_new (void);extern
GtkStatusIcon *gtk_status_icon_new_from_pixbuf (GdkPixbuf *pixbuf);extern
GtkStatusIcon *gtk_status_icon_new_from_file (const gchar *filename);extern
GtkStatusIcon *gtk_status_icon_new_from_stock (const gchar *stock_id);extern
GtkStatusIcon *gtk_status_icon_new_from_icon_name (const gchar *icon_name);extern
GtkStatusIcon *gtk_status_icon_new_from_gicon (GIcon *icon);extern
void gtk_status_icon_set_from_pixbuf (GtkStatusIcon *status_icon,GdkPixbuf *pixbuf);extern
void gtk_status_icon_set_from_file (GtkStatusIcon *status_icon,const gchar *filename);extern
void gtk_status_icon_set_from_stock (GtkStatusIcon *status_icon,const gchar *stock_id);extern
void gtk_status_icon_set_from_icon_name (GtkStatusIcon *status_icon,const gchar *icon_name);extern
void gtk_status_icon_set_from_gicon (GtkStatusIcon *status_icon,GIcon *icon);extern
GtkImageType gtk_status_icon_get_storage_type (GtkStatusIcon *status_icon);extern
GdkPixbuf *gtk_status_icon_get_pixbuf (GtkStatusIcon *status_icon);extern
const gchar * gtk_status_icon_get_stock (GtkStatusIcon *status_icon);extern
const gchar * gtk_status_icon_get_icon_name (GtkStatusIcon *status_icon);extern
GIcon *gtk_status_icon_get_gicon (GtkStatusIcon *status_icon);extern
gint gtk_status_icon_get_size (GtkStatusIcon *status_icon);extern
void gtk_status_icon_set_screen (GtkStatusIcon *status_icon,GdkScreen *screen);extern
GdkScreen *gtk_status_icon_get_screen (GtkStatusIcon *status_icon);extern
void gtk_status_icon_set_has_tooltip (GtkStatusIcon *status_icon,gboolean has_tooltip);extern
void gtk_status_icon_set_tooltip_text (GtkStatusIcon *status_icon,const gchar *text);extern
void gtk_status_icon_set_tooltip_markup (GtkStatusIcon *status_icon,const gchar *markup);extern
void gtk_status_icon_set_title (GtkStatusIcon *status_icon,const gchar *title);extern
const gchar * gtk_status_icon_get_title (GtkStatusIcon *status_icon);extern
void gtk_status_icon_set_name (GtkStatusIcon *status_icon,const gchar *name);extern
void gtk_status_icon_set_visible (GtkStatusIcon *status_icon,gboolean visible);extern
gboolean gtk_status_icon_get_visible (GtkStatusIcon *status_icon);extern
gboolean gtk_status_icon_is_embedded (GtkStatusIcon *status_icon);extern
void gtk_status_icon_position_menu (GtkMenu *menu,gint *x,gint *y,gboolean *push_in,gpointer user_data);extern
gboolean gtk_status_icon_get_geometry (GtkStatusIcon *status_icon,GdkScreen **screen,GdkRectangle *area,GtkOrientation *orientation);extern
gboolean gtk_status_icon_get_has_tooltip (GtkStatusIcon *status_icon);extern
gchar *gtk_status_icon_get_tooltip_text (GtkStatusIcon *status_icon);extern
gchar *gtk_status_icon_get_tooltip_markup (GtkStatusIcon *status_icon);extern
guint32 gtk_status_icon_get_x11_window_id (GtkStatusIcon *status_icon);extern
GType gtk_style_get_type (void) ;extern
GtkStyle* gtk_style_new (void);extern
GtkStyle* gtk_style_copy (GtkStyle *style);extern
GtkStyle* gtk_style_attach (GtkStyle *style,GdkWindow *window);extern
void gtk_style_detach (GtkStyle *style);extern
void gtk_style_set_background (GtkStyle *style,GdkWindow *window,GtkStateType state_type);extern
void gtk_style_apply_default_background (GtkStyle *style,cairo_t *cr,GdkWindow *window,GtkStateType state_type,gint x,gint y,gint width,gint height);extern
GtkIconSet* gtk_style_lookup_icon_set (GtkStyle *style,const gchar *stock_id);extern
gboolean gtk_style_lookup_color (GtkStyle *style,const gchar *color_name,GdkColor *color);extern
GdkPixbuf* gtk_style_render_icon (GtkStyle *style,const GtkIconSource *source,GtkTextDirection direction,GtkStateType state,GtkIconSize size,GtkWidget *widget,const gchar *detail);extern
void gtk_paint_hline (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkWidget *widget,const gchar *detail,gint x1,gint x2,gint y);extern
void gtk_paint_vline (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkWidget *widget,const gchar *detail,gint y1_,gint y2_,gint x);extern
void gtk_paint_shadow (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkShadowType shadow_type,GtkWidget *widget,const gchar *detail,gint x,gint y,gint width,gint height);extern
void gtk_paint_arrow (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkShadowType shadow_type,GtkWidget *widget,const gchar *detail,GtkArrowType arrow_type,gboolean fill,gint x,gint y,gint width,gint height);extern
void gtk_paint_diamond (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkShadowType shadow_type,GtkWidget *widget,const gchar *detail,gint x,gint y,gint width,gint height);extern
void gtk_paint_box (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkShadowType shadow_type,GtkWidget *widget,const gchar *detail,gint x,gint y,gint width,gint height);extern
void gtk_paint_flat_box (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkShadowType shadow_type,GtkWidget *widget,const gchar *detail,gint x,gint y,gint width,gint height);extern
void gtk_paint_check (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkShadowType shadow_type,GtkWidget *widget,const gchar *detail,gint x,gint y,gint width,gint height);extern
void gtk_paint_option (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkShadowType shadow_type,GtkWidget *widget,const gchar *detail,gint x,gint y,gint width,gint height);extern
void gtk_paint_tab (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkShadowType shadow_type,GtkWidget *widget,const gchar *detail,gint x,gint y,gint width,gint height);extern
void gtk_paint_shadow_gap (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkShadowType shadow_type,GtkWidget *widget,const gchar *detail,gint x,gint y,gint width,gint height,GtkPositionType gap_side,gint gap_x,gint gap_width);extern
void gtk_paint_box_gap (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkShadowType shadow_type,GtkWidget *widget,const gchar *detail,gint x,gint y,gint width,gint height,GtkPositionType gap_side,gint gap_x,gint gap_width);extern
void gtk_paint_extension (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkShadowType shadow_type,GtkWidget *widget,const gchar *detail,gint x,gint y,gint width,gint height,GtkPositionType gap_side);extern
void gtk_paint_focus (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkWidget *widget,const gchar *detail,gint x,gint y,gint width,gint height);extern
void gtk_paint_slider (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkShadowType shadow_type,GtkWidget *widget,const gchar *detail,gint x,gint y,gint width,gint height,GtkOrientation orientation);extern
void gtk_paint_handle (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkShadowType shadow_type,GtkWidget *widget,const gchar *detail,gint x,gint y,gint width,gint height,GtkOrientation orientation);extern
void gtk_paint_expander (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkWidget *widget,const gchar *detail,gint x,gint y,GtkExpanderStyle expander_style);extern
void gtk_paint_layout (GtkStyle *style,cairo_t *cr,GtkStateType state_type,gboolean use_text,GtkWidget *widget,const gchar *detail,gint x,gint y,PangoLayout *layout);extern
void gtk_paint_resize_grip (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkWidget *widget,const gchar *detail,GdkWindowEdge edge,gint x,gint y,gint width,gint height);extern
void gtk_paint_spinner (GtkStyle *style,cairo_t *cr,GtkStateType state_type,GtkWidget *widget,const gchar *detail,guint step,gint x,gint y,gint width,gint height);extern
void gtk_style_get_style_property (GtkStyle *style,GType widget_type,const gchar *property_name,GValue *value);extern
void gtk_style_get_valist (GtkStyle *style,GType widget_type,const gchar *first_property_name,va_list var_args);extern
void gtk_style_get (GtkStyle *style,GType widget_type,const gchar *first_property_name,...) ;extern
gboolean gtk_style_has_context (GtkStyle *style);extern
void gtk_widget_style_attach (GtkWidget *widget);extern
gboolean gtk_widget_has_rc_style (GtkWidget *widget);extern
void gtk_widget_set_style (GtkWidget *widget,GtkStyle *style);extern
void gtk_widget_ensure_style (GtkWidget *widget);extern
GtkStyle * gtk_widget_get_style (GtkWidget *widget);extern
void gtk_widget_modify_style (GtkWidget *widget,GtkRcStyle *style);extern
GtkRcStyle *gtk_widget_get_modifier_style (GtkWidget *widget);extern
void gtk_widget_modify_fg (GtkWidget *widget,GtkStateType state,const GdkColor *color);extern
void gtk_widget_modify_bg (GtkWidget *widget,GtkStateType state,const GdkColor *color);extern
void gtk_widget_modify_text (GtkWidget *widget,GtkStateType state,const GdkColor *color);extern
void gtk_widget_modify_base (GtkWidget *widget,GtkStateType state,const GdkColor *color);extern
void gtk_widget_modify_cursor (GtkWidget *widget,const GdkColor *primary,const GdkColor *secondary);extern
void gtk_widget_modify_font (GtkWidget *widget,PangoFontDescription *font_desc);extern
void gtk_widget_reset_rc_styles (GtkWidget *widget);extern
GtkStyle* gtk_widget_get_default_style (void);extern
void gtk_widget_path (GtkWidget *widget,guint *path_length,gchar **path,gchar **path_reversed);extern
void gtk_widget_class_path (GtkWidget *widget,guint *path_length,gchar **path,gchar **path_reversed);extern
GdkPixbuf *gtk_widget_render_icon (GtkWidget *widget,const gchar *stock_id,GtkIconSize size,const gchar *detail);extern
GType gtk_table_get_type (void) ;extern
GtkWidget* gtk_table_new (guint rows,guint columns,gboolean homogeneous);extern
void gtk_table_resize (GtkTable *table,guint rows,guint columns);extern
void gtk_table_attach (GtkTable *table,GtkWidget *child,guint left_attach,guint right_attach,guint top_attach,guint bottom_attach,GtkAttachOptions xoptions,GtkAttachOptions yoptions,guint xpadding,guint ypadding);extern
void gtk_table_attach_defaults (GtkTable *table,GtkWidget *widget,guint left_attach,guint right_attach,guint top_attach,guint bottom_attach);extern
void gtk_table_set_row_spacing (GtkTable *table,guint row,guint spacing);extern
guint gtk_table_get_row_spacing (GtkTable *table,guint row);extern
void gtk_table_set_col_spacing (GtkTable *table,guint column,guint spacing);extern
guint gtk_table_get_col_spacing (GtkTable *table,guint column);extern
void gtk_table_set_row_spacings (GtkTable *table,guint spacing);extern
guint gtk_table_get_default_row_spacing (GtkTable *table);extern
void gtk_table_set_col_spacings (GtkTable *table,guint spacing);extern
guint gtk_table_get_default_col_spacing (GtkTable *table);extern
void gtk_table_set_homogeneous (GtkTable *table,gboolean homogeneous);extern
gboolean gtk_table_get_homogeneous (GtkTable *table);extern
void gtk_table_get_size (GtkTable *table,guint *rows,guint *columns);extern
GType gtk_tearoff_menu_item_get_type (void) ;extern
GtkWidget* gtk_tearoff_menu_item_new (void);extern
GType gtk_theming_engine_get_type (void) ;extern
void gtk_theming_engine_register_property (const gchar *name_space,GtkStylePropertyParser parse_func,GParamSpec *pspec);extern
void gtk_theming_engine_get_property (GtkThemingEngine *engine,const gchar *property,GtkStateFlags state,GValue *value);extern
void gtk_theming_engine_get_valist (GtkThemingEngine *engine,GtkStateFlags state,va_list args);extern
void gtk_theming_engine_get (GtkThemingEngine *engine,GtkStateFlags state,...) ;extern
void gtk_theming_engine_get_style_property (GtkThemingEngine *engine,const gchar *property_name,GValue *value);extern
void gtk_theming_engine_get_style_valist (GtkThemingEngine *engine,va_list args);extern
void gtk_theming_engine_get_style (GtkThemingEngine *engine,...);extern
gboolean gtk_theming_engine_lookup_color (GtkThemingEngine *engine,const gchar *color_name,GdkRGBA *color);extern
const GtkWidgetPath * gtk_theming_engine_get_path (GtkThemingEngine *engine);extern
gboolean gtk_theming_engine_has_class (GtkThemingEngine *engine,const gchar *style_class);extern
gboolean gtk_theming_engine_has_region (GtkThemingEngine *engine,const gchar *style_region,GtkRegionFlags *flags);extern
GtkStateFlags gtk_theming_engine_get_state (GtkThemingEngine *engine);extern
gboolean gtk_theming_engine_state_is_running (GtkThemingEngine *engine,GtkStateType state,gdouble *progress);extern
GtkTextDirection gtk_theming_engine_get_direction (GtkThemingEngine *engine);extern
GtkJunctionSides gtk_theming_engine_get_junction_sides (GtkThemingEngine *engine);extern
void gtk_theming_engine_get_color (GtkThemingEngine *engine,GtkStateFlags state,GdkRGBA *color);extern
void gtk_theming_engine_get_background_color (GtkThemingEngine *engine,GtkStateFlags state,GdkRGBA *color);extern
void gtk_theming_engine_get_border_color (GtkThemingEngine *engine,GtkStateFlags state,GdkRGBA *color);extern
void gtk_theming_engine_get_border (GtkThemingEngine *engine,GtkStateFlags state,GtkBorder *border);extern
void gtk_theming_engine_get_padding (GtkThemingEngine *engine,GtkStateFlags state,GtkBorder *padding);extern
void gtk_theming_engine_get_margin (GtkThemingEngine *engine,GtkStateFlags state,GtkBorder *margin);extern
const PangoFontDescription * gtk_theming_engine_get_font (GtkThemingEngine *engine,GtkStateFlags state);extern
GtkThemingEngine * gtk_theming_engine_load (const gchar *name);extern
GdkScreen * gtk_theming_engine_get_screen (GtkThemingEngine *engine);extern
GType gtk_ui_manager_get_type (void) ;extern
GtkUIManager *gtk_ui_manager_new (void);extern
void gtk_ui_manager_set_add_tearoffs (GtkUIManager *manager,gboolean add_tearoffs);extern
gboolean gtk_ui_manager_get_add_tearoffs (GtkUIManager *manager);extern
void gtk_ui_manager_insert_action_group (GtkUIManager *manager,GtkActionGroup *action_group,gint pos);extern
void gtk_ui_manager_remove_action_group (GtkUIManager *manager,GtkActionGroup *action_group);extern
GList *gtk_ui_manager_get_action_groups (GtkUIManager *manager);extern
GtkAccelGroup *gtk_ui_manager_get_accel_group (GtkUIManager *manager);extern
GtkWidget *gtk_ui_manager_get_widget (GtkUIManager *manager,const gchar *path);extern
GSList *gtk_ui_manager_get_toplevels (GtkUIManager *manager,GtkUIManagerItemType types);extern
GtkAction *gtk_ui_manager_get_action (GtkUIManager *manager,const gchar *path);extern
guint gtk_ui_manager_add_ui_from_string (GtkUIManager *manager,const gchar *buffer,gssize length,GError **error);extern
guint gtk_ui_manager_add_ui_from_file (GtkUIManager *manager,const gchar *filename,GError **error);extern
guint gtk_ui_manager_add_ui_from_resource(GtkUIManager *manager,const gchar *resource_path,GError **error);extern
void gtk_ui_manager_add_ui (GtkUIManager *manager,guint merge_id,const gchar *path,const gchar *name,const gchar *action,GtkUIManagerItemType type,gboolean top);extern
void gtk_ui_manager_remove_ui (GtkUIManager *manager,guint merge_id);extern
gchar *gtk_ui_manager_get_ui (GtkUIManager *manager);extern
void gtk_ui_manager_ensure_update (GtkUIManager *manager);extern
guint gtk_ui_manager_new_merge_id (GtkUIManager *manager);extern
GType gtk_vbutton_box_get_type (void) ;extern
GtkWidget *gtk_vbutton_box_new (void);extern
GType gtk_vbox_get_type (void) ;extern
GtkWidget * gtk_vbox_new (gboolean homogeneous,gint spacing);extern
GType gtk_vpaned_get_type (void) ;extern
GtkWidget * gtk_vpaned_new (void);extern
GType gtk_vscale_get_type (void) ;extern
GtkWidget* gtk_vscale_new (GtkAdjustment *adjustment);extern
GtkWidget* gtk_vscale_new_with_range (gdouble min,gdouble max,gdouble step);extern
GType gtk_vscrollbar_get_type (void) ;extern
GtkWidget* gtk_vscrollbar_new (GtkAdjustment *adjustment);extern
GType gtk_vseparator_get_type (void) ;extern
GtkWidget* gtk_vseparator_new (void);
GQuark gtk_builder_error_quark (void);