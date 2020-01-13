void g_type_init (void);
extern
void g_type_init_with_debug_flags (GTypeDebugFlags debug_flags);extern
const gchar * g_type_name (GType type);
extern
GQuark g_type_qname (GType type);
extern
GType g_type_from_name (const gchar *name);
extern
GType g_type_parent (GType type);
extern
guint g_type_depth (GType type);
extern
GType g_type_next_base (GType leaf_type,GType root_type);
extern
gboolean g_type_is_a (GType type,GType is_a_type);
extern
gpointer g_type_class_ref (GType type);
extern
gpointer g_type_class_peek (GType type);
extern
gpointer g_type_class_peek_static (GType type);
extern
void g_type_class_unref (gpointer g_class);
extern
gpointer g_type_class_peek_parent (gpointer g_class);
extern
gpointer g_type_interface_peek (gpointer instance_class,GType iface_type);
extern
gpointer g_type_interface_peek_parent (gpointer g_iface);
extern
gpointer g_type_default_interface_ref (GType g_type);
extern
gpointer g_type_default_interface_peek (GType g_type);
extern
void g_type_default_interface_unref (gpointer g_iface);
extern
GType* g_type_children (GType type,guint *n_children);
extern
GType* g_type_interfaces (GType type,guint *n_interfaces);
extern
void g_type_set_qdata (GType type,GQuark quark,gpointer data);
extern
gpointer g_type_get_qdata (GType type,GQuark quark);
extern
void g_type_query (GType type,GTypeQuery *query);
extern
int g_type_get_instance_count (GType type);
extern
GType g_type_register_static (GType parent_type,const gchar *type_name,const GTypeInfo *info,GTypeFlags flags);
extern
GType g_type_register_static_simple (GType parent_type,const gchar *type_name,guint class_size,GClassInitFunc class_init,guint instance_size,GInstanceInitFunc instance_init,GTypeFlags flags);
extern
GType g_type_register_dynamic (GType parent_type,const gchar *type_name,GTypePlugin *plugin,GTypeFlags flags);
extern
GType g_type_register_fundamental (GType type_id,const gchar *type_name,const GTypeInfo *info,const GTypeFundamentalInfo *finfo,GTypeFlags flags);
extern
void g_type_add_interface_static (GType instance_type,GType interface_type,const GInterfaceInfo *info);
extern
void g_type_add_interface_dynamic (GType instance_type,GType interface_type,GTypePlugin *plugin);
extern
void g_type_interface_add_prerequisite (GType interface_type,GType prerequisite_type);
extern
GType*g_type_interface_prerequisites (GType interface_type,guint *n_prerequisites);
extern
void g_type_class_add_private (gpointer g_class,gsize private_size);
extern
gint g_type_add_instance_private (GType class_type,gsize private_size);
extern
gpointer g_type_instance_get_private (GTypeInstance *instance,GType private_type);
extern
void g_type_class_adjust_private_offset (gpointer g_class,gint *private_size_or_offset);
extern
void g_type_add_class_private (GType class_type,gsize private_size);
extern
gpointer g_type_class_get_private (GTypeClass *klass,GType private_type);
extern
gint g_type_class_get_instance_private_offset (gpointer g_class);
extern
void g_type_ensure (GType type);
extern
guint g_type_get_type_registration_serial (void);
extern
GTypePlugin* g_type_get_plugin (GType type);
extern
GTypePlugin* g_type_interface_get_plugin (GType instance_type,GType interface_type);
extern
GType g_type_fundamental_next (void);
extern
GType g_type_fundamental (GType type_id);
extern
GTypeInstance* g_type_create_instance (GType type);
extern
void g_type_free_instance (GTypeInstance *instance);
extern
void g_type_add_class_cache_func (gpointer cache_data,GTypeClassCacheFunc cache_func);
extern
void g_type_remove_class_cache_func (gpointer cache_data,GTypeClassCacheFunc cache_func);
extern
void g_type_class_unref_uncached (gpointer g_class);
extern
void g_type_add_interface_check (gpointer check_data,GTypeInterfaceCheckFunc check_func);
extern
void g_type_remove_interface_check (gpointer check_data,GTypeInterfaceCheckFunc check_func);
extern
GTypeValueTable* g_type_value_table_peek (GType type);
extern
gboolean g_type_check_instance (GTypeInstance *instance) __attribute__((__pure__));
extern
GTypeInstance* g_type_check_instance_cast (GTypeInstance *instance,GType iface_type);
extern
gboolean g_type_check_instance_is_a (GTypeInstance *instance,GType iface_type) __attribute__((__pure__));
extern
gboolean g_type_check_instance_is_fundamentally_a (GTypeInstance *instance,GType fundamental_type) __attribute__((__pure__));
extern
GTypeClass* g_type_check_class_cast (GTypeClass *g_class,GType is_a_type);
extern
gboolean g_type_check_class_is_a (GTypeClass *g_class,GType is_a_type) __attribute__((__pure__));
extern
gboolean g_type_check_is_value_type (GType type) __attribute__((__const__));
extern
gboolean g_type_check_value (const GValue *value) __attribute__((__pure__));
extern
gboolean g_type_check_value_holds (const GValue *value,GType type) __attribute__((__pure__));
extern
gboolean g_type_test_flags (GType type,guint flags) __attribute__((__const__));
extern
const gchar * g_type_name_from_instance (GTypeInstance *instance);
extern
const gchar * g_type_name_from_class (GTypeClass *g_class);extern
GParamSpec* g_param_spec_ref (GParamSpec *pspec);
extern
void g_param_spec_unref (GParamSpec *pspec);
extern
void g_param_spec_sink (GParamSpec *pspec);
extern
GParamSpec* g_param_spec_ref_sink (GParamSpec *pspec);
extern
gpointer g_param_spec_get_qdata (GParamSpec *pspec,GQuark quark);
extern
void g_param_spec_set_qdata (GParamSpec *pspec,GQuark quark,gpointer data);
extern
void g_param_spec_set_qdata_full (GParamSpec *pspec,GQuark quark,gpointer data,GDestroyNotify destroy);
extern
gpointer g_param_spec_steal_qdata (GParamSpec *pspec,GQuark quark);
extern
GParamSpec* g_param_spec_get_redirect_target (GParamSpec *pspec);
extern
void g_param_value_set_default (GParamSpec *pspec,GValue *value);
extern
gboolean g_param_value_defaults (GParamSpec *pspec,GValue *value);
extern
gboolean g_param_value_validate (GParamSpec *pspec,GValue *value);
extern
gboolean g_param_value_convert (GParamSpec *pspec,const GValue *src_value,GValue *dest_value,gboolean strict_validation);
extern
gint g_param_values_cmp (GParamSpec *pspec,const GValue *value1,const GValue *value2);
extern
const gchar * g_param_spec_get_name (GParamSpec *pspec);
extern
const gchar * g_param_spec_get_nick (GParamSpec *pspec);
extern
const gchar * g_param_spec_get_blurb (GParamSpec *pspec);
extern
void g_value_set_param (GValue *value,GParamSpec *param);
extern
GParamSpec* g_value_get_param (const GValue *value);
extern
GParamSpec* g_value_dup_param (const GValue *value);
extern
void g_value_take_param (GValue *value,GParamSpec *param);
extern
void g_value_set_param_take_ownership (GValue *value,GParamSpec *param);
extern
const GValue * g_param_spec_get_default_value (GParamSpec *pspec);
extern
GQuark g_param_spec_get_name_quark (GParamSpec *pspec);extern
GType g_param_type_register_static (const gchar *name,const GParamSpecTypeInfo *pspec_info);
extern
gpointer g_param_spec_internal (GType param_type,const gchar *name,const gchar *nick,const gchar *blurb,GParamFlags flags);
extern
GParamSpecPool* g_param_spec_pool_new (gboolean type_prefixing);
extern
void g_param_spec_pool_insert (GParamSpecPool *pool,GParamSpec *pspec,GType owner_type);
extern
void g_param_spec_pool_remove (GParamSpecPool *pool,GParamSpec *pspec);
extern
GParamSpec* g_param_spec_pool_lookup (GParamSpecPool *pool,const gchar *param_name,GType owner_type,gboolean walk_ancestors);
extern
GList* g_param_spec_pool_list_owned (GParamSpecPool *pool,GType owner_type);
extern
GParamSpec** g_param_spec_pool_list (GParamSpecPool *pool,GType owner_type,guint *n_pspecs_p);extern
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
void g_cclosure_marshal_generic_va (GClosure *closure,GValue *return_value,gpointer instance,va_list args_list,gpointer marshal_data,int n_params,GType *param_types);
extern
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
void g_cclosure_marshal_BOOLEAN__BOXED_BOXEDv (GClosure *closure,GValue *return_value,gpointer instance,va_list args,gpointer marshal_data,int n_params,GType *param_types);extern
GType g_date_get_type (void);
extern
GType g_strv_get_type (void);
extern
GType g_gstring_get_type (void);
extern
GType g_hash_table_get_type (void);
extern
GType g_array_get_type (void);
extern
GType g_byte_array_get_type (void);
extern
GType g_ptr_array_get_type (void);
extern
GType g_bytes_get_type (void);
extern
GType g_variant_type_get_gtype (void);
extern
GType g_regex_get_type (void);
extern
GType g_match_info_get_type (void);
extern
GType g_error_get_type (void);
extern
GType g_date_time_get_type (void);
extern
GType g_time_zone_get_type (void);
extern
GType g_io_channel_get_type (void);
extern
GType g_io_condition_get_type (void);
extern
GType g_variant_builder_get_type (void);
extern
GType g_variant_dict_get_type (void);
extern
GType g_key_file_get_type (void);
extern
GType g_main_loop_get_type (void);
extern
GType g_main_context_get_type (void);
extern
GType g_source_get_type (void);
extern
GType g_pollfd_get_type (void);
extern
GType g_thread_get_type (void);
extern
GType g_checksum_get_type (void);
extern
GType g_markup_parse_context_get_type (void);
extern
GType g_mapped_file_get_type (void);
extern
GType g_option_group_get_type (void);
extern
GType g_variant_get_gtype (void);
extern
gpointer g_boxed_copy (GType boxed_type,gconstpointer src_boxed);
extern
void g_boxed_free (GType boxed_type,gpointer boxed);
extern
void g_value_set_boxed (GValue *value,gconstpointer v_boxed);
extern
void g_value_set_static_boxed (GValue *value,gconstpointer v_boxed);
extern
void g_value_take_boxed (GValue *value,gconstpointer v_boxed);
extern
void g_value_set_boxed_take_ownership (GValue *value,gconstpointer v_boxed);
extern
gpointer g_value_get_boxed (const GValue *value);
extern
gpointer g_value_dup_boxed (const GValue *value);
extern
GType g_boxed_type_register_static (const gchar *name,GBoxedCopyFunc boxed_copy,GBoxedFreeFunc boxed_free);
extern
GType g_closure_get_type (void);
extern
GType g_value_get_type (void);
extern
GEnumValue* g_enum_get_value (GEnumClass *enum_class,gint value);
extern
GEnumValue* g_enum_get_value_by_name (GEnumClass *enum_class,const gchar *name);
extern
GEnumValue* g_enum_get_value_by_nick (GEnumClass *enum_class,const gchar *nick);
extern
GFlagsValue* g_flags_get_first_value (GFlagsClass *flags_class,guint value);
extern
GFlagsValue* g_flags_get_value_by_name (GFlagsClass *flags_class,const gchar *name);
extern
GFlagsValue* g_flags_get_value_by_nick (GFlagsClass *flags_class,const gchar *nick);
extern
gchar *g_enum_to_string (GType g_enum_type,gint value);
extern
gchar *g_flags_to_string (GType flags_type,guint value);
extern
void g_value_set_enum (GValue *value,gint v_enum);
extern
gint g_value_get_enum (const GValue *value);
extern
void g_value_set_flags (GValue *value,guint v_flags);
extern
guint g_value_get_flags (const GValue *value);
extern
GType g_enum_register_static (const gchar *name,const GEnumValue *const_static_values);
extern
GType g_flags_register_static (const gchar *name,const GFlagsValue *const_static_values);
extern
void g_enum_complete_type_info (GType g_enum_type,GTypeInfo *info,const GEnumValue *const_values);
extern
void g_flags_complete_type_info (GType g_flags_type,GTypeInfo *info,const GFlagsValue *const_values);
extern
GParamSpec* g_param_spec_char (const gchar *name,const gchar *nick,const gchar *blurb,gint8 minimum,gint8 maximum,gint8 default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_uchar (const gchar *name,const gchar *nick,const gchar *blurb,guint8 minimum,guint8 maximum,guint8 default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_boolean (const gchar *name,const gchar *nick,const gchar *blurb,gboolean default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_int (const gchar *name,const gchar *nick,const gchar *blurb,gint minimum,gint maximum,gint default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_uint (const gchar *name,const gchar *nick,const gchar *blurb,guint minimum,guint maximum,guint default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_long (const gchar *name,const gchar *nick,const gchar *blurb,glong minimum,glong maximum,glong default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_ulong (const gchar *name,const gchar *nick,const gchar *blurb,gulong minimum,gulong maximum,gulong default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_int64 (const gchar *name,const gchar *nick,const gchar *blurb,gint64 minimum,gint64 maximum,gint64 default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_uint64 (const gchar *name,const gchar *nick,const gchar *blurb,guint64 minimum,guint64 maximum,guint64 default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_unichar (const gchar *name,const gchar *nick,const gchar *blurb,gunichar default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_enum (const gchar *name,const gchar *nick,const gchar *blurb,GType enum_type,gint default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_flags (const gchar *name,const gchar *nick,const gchar *blurb,GType flags_type,guint default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_float (const gchar *name,const gchar *nick,const gchar *blurb,gfloat minimum,gfloat maximum,gfloat default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_double (const gchar *name,const gchar *nick,const gchar *blurb,gdouble minimum,gdouble maximum,gdouble default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_string (const gchar *name,const gchar *nick,const gchar *blurb,const gchar *default_value,GParamFlags flags);
extern
GParamSpec* g_param_spec_param (const gchar *name,const gchar *nick,const gchar *blurb,GType param_type,GParamFlags flags);
extern
GParamSpec* g_param_spec_boxed (const gchar *name,const gchar *nick,const gchar *blurb,GType boxed_type,GParamFlags flags);
extern
GParamSpec* g_param_spec_pointer (const gchar *name,const gchar *nick,const gchar *blurb,GParamFlags flags);
extern
GParamSpec* g_param_spec_value_array (const gchar *name,const gchar *nick,const gchar *blurb,GParamSpec *element_spec,GParamFlags flags);
extern
GParamSpec* g_param_spec_object (const gchar *name,const gchar *nick,const gchar *blurb,GType object_type,GParamFlags flags);
extern
GParamSpec* g_param_spec_override (const gchar *name,GParamSpec *overridden);
extern
GParamSpec* g_param_spec_gtype (const gchar *name,const gchar *nick,const gchar *blurb,GType is_a_type,GParamFlags flags);
extern
GParamSpec* g_param_spec_variant (const gchar *name,const gchar *nick,const gchar *blurb,const GVariantType *type,GVariant *default_value,GParamFlags flags);
extern GType *g_param_spec_types;
extern
void g_source_set_closure (GSource *source,GClosure *closure);
extern
void g_source_set_dummy_callback (GSource *source);
extern
GType g_type_module_get_type (void);
extern
gboolean g_type_module_use (GTypeModule *module);
extern
void g_type_module_unuse (GTypeModule *module);
extern
void g_type_module_set_name (GTypeModule *module,const gchar *name);
extern
GType g_type_module_register_type (GTypeModule *module,GType parent_type,const gchar *type_name,const GTypeInfo *type_info,GTypeFlags flags);
extern
void g_type_module_add_interface (GTypeModule *module,GType instance_type,GType interface_type,const GInterfaceInfo *interface_info);
extern
GType g_type_module_register_enum (GTypeModule *module,const gchar *name,const GEnumValue *const_static_values);
extern
GType g_type_module_register_flags (GTypeModule *module,const gchar *name,const GFlagsValue *const_static_values);
extern
GType g_type_plugin_get_type (void);
extern
void g_type_plugin_use (GTypePlugin *plugin);
extern
void g_type_plugin_unuse (GTypePlugin *plugin);
extern
void g_type_plugin_complete_type_info (GTypePlugin *plugin,GType g_type,GTypeInfo *info,GTypeValueTable *value_table);
extern
void g_type_plugin_complete_interface_info (GTypePlugin *plugin,GType instance_type,GType interface_type,GInterfaceInfo *info);
extern
GType g_value_array_get_type (void);
extern
GValue* g_value_array_get_nth (GValueArray *value_array,guint index_);
extern
GValueArray* g_value_array_new (guint n_prealloced);
extern
void g_value_array_free (GValueArray *value_array);
extern
GValueArray* g_value_array_copy (const GValueArray *value_array);
extern
GValueArray* g_value_array_prepend (GValueArray *value_array,const GValue *value);
extern
GValueArray* g_value_array_append (GValueArray *value_array,const GValue *value);
extern
GValueArray* g_value_array_insert (GValueArray *value_array,guint index_,const GValue *value);
extern
GValueArray* g_value_array_remove (GValueArray *value_array,guint index_);
extern
GValueArray* g_value_array_sort (GValueArray *value_array,GCompareFunc compare_func);
extern
GValueArray* g_value_array_sort_with_data (GValueArray *value_array,GCompareDataFunc compare_func,gpointer user_data);
extern
void g_value_set_char (GValue *value,gchar v_char);
extern
gchar g_value_get_char (const GValue *value);
extern
void g_value_set_schar (GValue *value,gint8 v_char);
extern
gint8 g_value_get_schar (const GValue *value);
extern
void g_value_set_uchar (GValue *value,guchar v_uchar);
extern
guchar g_value_get_uchar (const GValue *value);
extern
void g_value_set_boolean (GValue *value,gboolean v_boolean);
extern
gboolean g_value_get_boolean (const GValue *value);
extern
void g_value_set_int (GValue *value,gint v_int);
extern
gint g_value_get_int (const GValue *value);
extern
void g_value_set_uint (GValue *value,guint v_uint);
extern
guint g_value_get_uint (const GValue *value);
extern
void g_value_set_long (GValue *value,glong v_long);
extern
glong g_value_get_long (const GValue *value);
extern
void g_value_set_ulong (GValue *value,gulong v_ulong);
extern
gulong g_value_get_ulong (const GValue *value);
extern
void g_value_set_int64 (GValue *value,gint64 v_int64);
extern
gint64 g_value_get_int64 (const GValue *value);
extern
void g_value_set_uint64 (GValue *value,guint64 v_uint64);
extern
guint64 g_value_get_uint64 (const GValue *value);
extern
void g_value_set_float (GValue *value,gfloat v_float);
extern
gfloat g_value_get_float (const GValue *value);
extern
void g_value_set_double (GValue *value,gdouble v_double);
extern
gdouble g_value_get_double (const GValue *value);
extern
void g_value_set_string (GValue *value,const gchar *v_string);
extern
void g_value_set_static_string (GValue *value,const gchar *v_string);
extern
const gchar * g_value_get_string (const GValue *value);
extern
gchar* g_value_dup_string (const GValue *value);
extern
void g_value_set_pointer (GValue *value,gpointer v_pointer);
extern
gpointer g_value_get_pointer (const GValue *value);
extern
GType g_gtype_get_type (void);
extern
void g_value_set_gtype (GValue *value,GType v_gtype);
extern
GType g_value_get_gtype (const GValue *value);
extern
void g_value_set_variant (GValue *value,GVariant *variant);
extern
void g_value_take_variant (GValue *value,GVariant *variant);
extern
GVariant* g_value_get_variant (const GValue *value);
extern
GVariant* g_value_dup_variant (const GValue *value);
extern
GType g_pointer_type_register_static (const gchar *name);
extern
gchar* g_strdup_value_contents (const GValue *value);
extern
void g_value_take_string (GValue *value,gchar *v_string);
extern
void g_value_set_string_take_ownership (GValue *value,gchar *v_string);
extern GType g_unicode_type_get_type (void);
extern GType g_unicode_break_type_get_type (void);
extern GType g_unicode_script_get_type (void);
extern GType g_normalize_mode_get_type (void);
11