extern
guint g_signal_newv (const gchar *signal_name,GType itype,GSignalFlags signal_flags,GClosure *class_closure,GSignalAccumulator accumulator,gpointer accu_data,GSignalCMarshaller c_marshaller,GType return_type,guint n_params,GType *param_types);
extern
guint g_signal_new_valist (const gchar *signal_name,GType itype,GSignalFlags signal_flags,GClosure *class_closure,GSignalAccumulator accumulator,gpointer accu_data,GSignalCMarshaller c_marshaller,GType return_type,guint n_params,va_list args);
extern
guint g_signal_new (const gchar *signal_name,GType itype,GSignalFlags signal_flags,guint class_offset,GSignalAccumulator accumulator,gpointer accu_data,GSignalCMarshaller c_marshaller,GType return_type,guint n_params,...);
extern
guint g_signal_new_class_handler (const gchar *signal_name,GType itype,GSignalFlags signal_flags,GCallback class_handler,GSignalAccumulator accumulator,gpointer accu_data,GSignalCMarshaller c_marshaller,GType return_type,guint n_params,...);
extern
void g_signal_set_va_marshaller (guint signal_id,GType instance_type,GSignalCVaMarshaller va_marshaller);
extern
void g_signal_emitv (const GValue *instance_and_params,guint signal_id,GQuark detail,GValue *return_value);
extern
void g_signal_emit_valist (gpointer instance,guint signal_id,GQuark detail,va_list var_args);
extern
void g_signal_emit (gpointer instance,guint signal_id,GQuark detail,...);
extern
void g_signal_emit_by_name (gpointer instance,const gchar *detailed_signal,...);
extern
guint g_signal_lookup (const gchar *name,GType itype);
extern
const gchar * g_signal_name (guint signal_id);
extern
void g_signal_query (guint signal_id,GSignalQuery *query);
extern
guint* g_signal_list_ids (GType itype,guint *n_ids);
extern
gboolean g_signal_parse_name (const gchar *detailed_signal,GType itype,guint *signal_id_p,GQuark *detail_p,gboolean force_detail_quark);
extern
GSignalInvocationHint* g_signal_get_invocation_hint (gpointer instance);
extern
void g_signal_stop_emission (gpointer instance,guint signal_id,GQuark detail);
extern
void g_signal_stop_emission_by_name (gpointer instance,const gchar *detailed_signal);
extern
gulong g_signal_add_emission_hook (guint signal_id,GQuark detail,GSignalEmissionHook hook_func,gpointer hook_data,GDestroyNotify data_destroy);
extern
void g_signal_remove_emission_hook (guint signal_id,gulong hook_id);
extern
gboolean g_signal_has_handler_pending (gpointer instance,guint signal_id,GQuark detail,gboolean may_be_blocked);
extern
gulong g_signal_connect_closure_by_id (gpointer instance,guint signal_id,GQuark detail,GClosure *closure,gboolean after);
extern
gulong g_signal_connect_closure (gpointer instance,const gchar *detailed_signal,GClosure *closure,gboolean after);
extern
gulong g_signal_connect_data (gpointer instance,const gchar *detailed_signal,GCallback c_handler,gpointer data,GClosureNotify destroy_data,GConnectFlags connect_flags);
extern
void g_signal_handler_block (gpointer instance,gulong handler_id);
extern
void g_signal_handler_unblock (gpointer instance,gulong handler_id);
extern
void g_signal_handler_disconnect (gpointer instance,gulong handler_id);
extern
gboolean g_signal_handler_is_connected (gpointer instance,gulong handler_id);
extern
gulong g_signal_handler_find (gpointer instance,GSignalMatchType mask,guint signal_id,GQuark detail,GClosure *closure,gpointer func,gpointer data);
extern
guint g_signal_handlers_block_matched (gpointer instance,GSignalMatchType mask,guint signal_id,GQuark detail,GClosure *closure,gpointer func,gpointer data);
extern
guint g_signal_handlers_unblock_matched (gpointer instance,GSignalMatchType mask,guint signal_id,GQuark detail,GClosure *closure,gpointer func,gpointer data);
extern
guint g_signal_handlers_disconnect_matched (gpointer instance,GSignalMatchType mask,guint signal_id,GQuark detail,GClosure *closure,gpointer func,gpointer data);
extern
void g_clear_signal_handler (gulong *handler_id_ptr,gpointer instance);
extern
void g_signal_override_class_closure (guint signal_id,GType instance_type,GClosure *class_closure);
extern
void g_signal_override_class_handler (const gchar *signal_name,GType instance_type,GCallback class_handler);
extern
void g_signal_chain_from_overridden (const GValue *instance_and_params,GValue *return_value);
extern
void g_signal_chain_from_overridden_handler (gpointer instance,...);
extern
gboolean g_signal_accumulator_true_handled (GSignalInvocationHint *ihint,GValue *return_accu,const GValue *handler_return,gpointer dummy);
extern
gboolean g_signal_accumulator_first_wins (GSignalInvocationHint *ihint,GValue *return_accu,const GValue *handler_return,gpointer dummy);
extern
void g_signal_handlers_destroy (gpointer instance);extern
void g_object_unref (gpointer object);extern
GType g_initially_unowned_get_type (void);
extern
void g_object_class_install_property (GObjectClass *oclass,guint property_id,GParamSpec *pspec);
extern
GParamSpec* g_object_class_find_property (GObjectClass *oclass,const gchar *property_name);
extern
GParamSpec**g_object_class_list_properties (GObjectClass *oclass,guint *n_properties);
extern
void g_object_class_override_property (GObjectClass *oclass,guint property_id,const gchar *name);
extern
void g_object_class_install_properties (GObjectClass *oclass,guint n_pspecs,GParamSpec **pspecs);
extern
void g_object_interface_install_property (gpointer g_iface,GParamSpec *pspec);
extern
GParamSpec* g_object_interface_find_property (gpointer g_iface,const gchar *property_name);
extern
GParamSpec**g_object_interface_list_properties (gpointer g_iface,guint *n_properties_p);
extern
GType g_object_get_type (void);
extern
gpointer g_object_new (GType object_type,const gchar *first_property_name,...);
extern
GObject* g_object_new_with_properties (GType object_type,guint n_properties,const char *names[],const GValue values[]);
extern
gpointer g_object_newv (GType object_type,guint n_parameters,GParameter *parameters);
extern
GObject* g_object_new_valist (GType object_type,const gchar *first_property_name,va_list var_args);
extern
void g_object_set (gpointer object,const gchar *first_property_name,...) ;
extern
void g_object_get (gpointer object,const gchar *first_property_name,...) ;
extern
gpointer g_object_connect (gpointer object,const gchar *signal_spec,...) ;
extern
void g_object_disconnect (gpointer object,const gchar *signal_spec,...) ;
extern
void g_object_setv (GObject *object,guint n_properties,const gchar *names[],const GValue values[]);
extern
void g_object_set_valist (GObject *object,const gchar *first_property_name,va_list var_args);
extern
void g_object_getv (GObject *object,guint n_properties,const gchar *names[],GValue values[]);
extern
void g_object_get_valist (GObject *object,const gchar *first_property_name,va_list var_args);
extern
void g_object_set_property (GObject *object,const gchar *property_name,const GValue *value);
extern
void g_object_get_property (GObject *object,const gchar *property_name,GValue *value);
extern
void g_object_freeze_notify (GObject *object);
extern
void g_object_notify (GObject *object,const gchar *property_name);
extern
void g_object_notify_by_pspec (GObject *object,GParamSpec *pspec);
extern
void g_object_thaw_notify (GObject *object);
extern
gboolean g_object_is_floating (gpointer object);
extern
gpointer g_object_ref_sink (gpointer object);
extern
gpointer g_object_ref (gpointer object);extern
void g_object_weak_ref (GObject *object,GWeakNotify notify,gpointer data);
extern
void g_object_weak_unref (GObject *object,GWeakNotify notify,gpointer data);
extern
void g_object_add_weak_pointer (GObject *object,gpointer *weak_pointer_location);
extern
void g_object_remove_weak_pointer (GObject *object,gpointer *weak_pointer_location);extern
void g_object_add_toggle_ref (GObject *object,GToggleNotify notify,gpointer data);
extern
void g_object_remove_toggle_ref (GObject *object,GToggleNotify notify,gpointer data);
extern
gpointer g_object_get_qdata (GObject *object,GQuark quark);
extern
void g_object_set_qdata (GObject *object,GQuark quark,gpointer data);
extern
void g_object_set_qdata_full (GObject *object,GQuark quark,gpointer data,GDestroyNotify destroy);
extern
gpointer g_object_steal_qdata (GObject *object,GQuark quark);
extern
gpointer g_object_dup_qdata (GObject *object,GQuark quark,GDuplicateFunc dup_func,gpointer user_data);
extern
gboolean g_object_replace_qdata (GObject *object,GQuark quark,gpointer oldval,gpointer newval,GDestroyNotify destroy,GDestroyNotify *old_destroy);
extern
gpointer g_object_get_data (GObject *object,const gchar *key);
extern
void g_object_set_data (GObject *object,const gchar *key,gpointer data);
extern
void g_object_set_data_full (GObject *object,const gchar *key,gpointer data,GDestroyNotify destroy);
extern
gpointer g_object_steal_data (GObject *object,const gchar *key);
extern
gpointer g_object_dup_data (GObject *object,const gchar *key,GDuplicateFunc dup_func,gpointer user_data);
extern
gboolean g_object_replace_data (GObject *object,const gchar *key,gpointer oldval,gpointer newval,GDestroyNotify destroy,GDestroyNotify *old_destroy);
extern
void g_object_watch_closure (GObject *object,GClosure *closure);
extern
GClosure* g_cclosure_new_object (GCallback callback_func,GObject *object);
extern
GClosure* g_cclosure_new_object_swap (GCallback callback_func,GObject *object);
extern
GClosure* g_closure_new_object (guint sizeof_closure,GObject *object);
extern
void g_value_set_object (GValue *value,gpointer v_object);
extern
gpointer g_value_get_object (const GValue *value);
extern
gpointer g_value_dup_object (const GValue *value);
extern
gulong g_signal_connect_object (gpointer instance,const gchar *detailed_signal,GCallback c_handler,gpointer gobject,GConnectFlags connect_flags);
extern
void g_object_force_floating (GObject *object);
extern
void g_object_run_dispose (GObject *object);
extern
void g_value_take_object (GValue *value,gpointer v_object);
extern
void g_value_set_object_take_ownership (GValue *value,gpointer v_object);
extern
gsize g_object_compat_control (gsize what,gpointer data);
extern
void g_clear_object (GObject **object_ptr);
extern
void g_weak_ref_init (GWeakRef *weak_ref,gpointer object);
extern
void g_weak_ref_clear (GWeakRef *weak_ref);
extern
gpointer g_weak_ref_get (GWeakRef *weak_ref);
extern
void g_weak_ref_set (GWeakRef *weak_ref,gpointer object);extern
GType g_binding_flags_get_type (void);
extern
GType g_binding_get_type (void);
extern
GBindingFlags g_binding_get_flags (GBinding *binding);
extern
GObject * g_binding_get_source (GBinding *binding);
extern
GObject * g_binding_get_target (GBinding *binding);
extern
const gchar * g_binding_get_source_property (GBinding *binding);
extern
const gchar * g_binding_get_target_property (GBinding *binding);
extern
void g_binding_unbind (GBinding *binding);
extern
GBinding *g_object_bind_property (gpointer source,const gchar *source_property,gpointer target,const gchar *target_property,GBindingFlags flags);
extern
GBinding *g_object_bind_property_full (gpointer source,const gchar *source_property,gpointer target,const gchar *target_property,GBindingFlags flags,GBindingTransformFunc transform_to,GBindingTransformFunc transform_from,gpointer user_data,GDestroyNotify notify);
extern
GBinding *g_object_bind_property_with_closures (gpointer source,const gchar *source_property,gpointer target,const gchar *target_property,GBindingFlags flags,GClosure *transform_to,GClosure *transform_from);
extern
GClosure* g_cclosure_new (GCallback callback_func,gpointer user_data,GClosureNotify destroy_data);
extern
GClosure* g_cclosure_new_swap (GCallback callback_func,gpointer user_data,GClosureNotify destroy_data);
extern
GClosure* g_signal_type_cclosure_new (GType itype,guint struct_offset);
extern
GClosure* g_closure_ref (GClosure *closure);
extern
void g_closure_sink (GClosure *closure);
extern
void g_closure_unref (GClosure *closure);
extern
GClosure* g_closure_new_simple (guint sizeof_closure,gpointer data);
extern
void g_closure_add_finalize_notifier (GClosure *closure,gpointer notify_data,GClosureNotify notify_func);
extern
void g_closure_remove_finalize_notifier (GClosure *closure,gpointer notify_data,GClosureNotify notify_func);
extern
void g_closure_add_invalidate_notifier (GClosure *closure,gpointer notify_data,GClosureNotify notify_func);
extern
void g_closure_remove_invalidate_notifier (GClosure *closure,gpointer notify_data,GClosureNotify notify_func);
extern
void g_closure_add_marshal_guards (GClosure *closure,gpointer pre_marshal_data,GClosureNotify pre_marshal_notify,gpointer post_marshal_data,GClosureNotify post_marshal_notify);
extern
void g_closure_set_marshal (GClosure *closure,GClosureMarshal marshal);
extern
void g_closure_set_meta_marshal (GClosure *closure,gpointer marshal_data,GClosureMarshal meta_marshal);
extern
void g_closure_invalidate (GClosure *closure);
extern
void g_closure_invoke (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint);
extern
void g_cclosure_marshal_generic (GClosure *closure,GValue *return_gvalue,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_generic_va (GClosure *closure,GValue *return_value,gpointer instance,va_list args_list,gpointer marshal_data,int n_params,GType *param_types);extern
void g_cclosure_marshal_VOID__VOID (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__VOIDv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__BOOLEAN (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__BOOLEANv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__CHAR (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__CHARv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__UCHAR (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__UCHARv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__INT (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__INTv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__UINT (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__UINTv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__LONG (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__LONGv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__ULONG (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__ULONGv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__ENUM (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__ENUMv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__FLAGS (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__FLAGSv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__FLOAT (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__FLOATv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__DOUBLE (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__DOUBLEv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__STRING (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__STRINGv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__PARAM (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__PARAMv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__BOXED (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__BOXEDv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__POINTER (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__POINTERv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__OBJECT (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__OBJECTv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__VARIANT (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__VARIANTv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_VOID__UINT_POINTER (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_VOID__UINT_POINTERv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_BOOLEAN__FLAGS (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_BOOLEAN__FLAGSv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_STRING__OBJECT_POINTER (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_STRING__OBJECT_POINTERv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
extern
void g_cclosure_marshal_BOOLEAN__BOXED_BOXED (GClosure *closure,GValue *return_value,guint n_param_values,const GValue *param_values,gpointer invocation_hint,gpointer marshal_data);
extern
void g_cclosure_marshal_BOOLEAN__BOXED_BOXEDv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);
