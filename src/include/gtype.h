void g_type_init (void);
extern
void g_type_init_with_debug_flags (GTypeDebugFlags debug_flags);

extern
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
GType g_type_next_base (GType leaf_type,
            GType root_type);
extern
gboolean g_type_is_a (GType type,
            GType is_a_type);
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
gpointer g_type_interface_peek (gpointer instance_class,
            GType iface_type);
extern
gpointer g_type_interface_peek_parent (gpointer g_iface);
extern
gpointer g_type_default_interface_ref (GType g_type);
extern
gpointer g_type_default_interface_peek (GType g_type);
extern
void g_type_default_interface_unref (gpointer g_iface);
extern
GType* g_type_children (GType type,
            guint *n_children);
extern
GType* g_type_interfaces (GType type,
            guint *n_interfaces);
extern
void g_type_set_qdata (GType type,
            GQuark quark,
            gpointer data);
extern
gpointer g_type_get_qdata (GType type,
            GQuark quark);
extern
void g_type_query (GType type,
            GTypeQuery *query);
extern
int g_type_get_instance_count (GType type);
extern
GType g_type_register_static (GType parent_type,
      const gchar *type_name,
      const GTypeInfo *info,
      GTypeFlags flags);
extern
GType g_type_register_static_simple (GType parent_type,
      const gchar *type_name,
      guint class_size,
      GClassInitFunc class_init,
      guint instance_size,
      GInstanceInitFunc instance_init,
      GTypeFlags flags);
extern
GType g_type_register_dynamic (GType parent_type,
      const gchar *type_name,
      GTypePlugin *plugin,
      GTypeFlags flags);
extern
GType g_type_register_fundamental (GType type_id,
      const gchar *type_name,
      const GTypeInfo *info,
      const GTypeFundamentalInfo *finfo,
      GTypeFlags flags);
extern
void g_type_add_interface_static (GType instance_type,
      GType interface_type,
      const GInterfaceInfo *info);
extern
void g_type_add_interface_dynamic (GType instance_type,
      GType interface_type,
      GTypePlugin *plugin);
extern
void g_type_interface_add_prerequisite (GType interface_type,
      GType prerequisite_type);
extern
GType*g_type_interface_prerequisites (GType interface_type,
      guint *n_prerequisites);
extern
void g_type_class_add_private (gpointer g_class,
                                         gsize private_size);
extern
gint g_type_add_instance_private (GType class_type,
                                         gsize private_size);
extern
gpointer g_type_instance_get_private (GTypeInstance *instance,
                                         GType private_type);
extern
void g_type_class_adjust_private_offset (gpointer g_class,
                                             gint *private_size_or_offset);
extern
void g_type_add_class_private (GType class_type,
      gsize private_size);
extern
gpointer g_type_class_get_private (GTypeClass *klass,
      GType private_type);
extern
gint g_type_class_get_instance_private_offset (gpointer g_class);
extern
void g_type_ensure (GType type);
extern
guint g_type_get_type_registration_serial (void);
extern
GTypePlugin* g_type_get_plugin (GType type);
extern
GTypePlugin* g_type_interface_get_plugin (GType instance_type,
       GType interface_type);
extern
GType g_type_fundamental_next (void);
extern
GType g_type_fundamental (GType type_id);
extern
GTypeInstance* g_type_create_instance (GType type);
extern
void g_type_free_instance (GTypeInstance *instance);
extern
void g_type_add_class_cache_func (gpointer cache_data,
       GTypeClassCacheFunc cache_func);
extern
void g_type_remove_class_cache_func (gpointer cache_data,
       GTypeClassCacheFunc cache_func);
extern
void g_type_class_unref_uncached (gpointer g_class);
extern
void g_type_add_interface_check (gpointer check_data,
       GTypeInterfaceCheckFunc check_func);
extern
void g_type_remove_interface_check (gpointer check_data,
       GTypeInterfaceCheckFunc check_func);
extern
GTypeValueTable* g_type_value_table_peek (GType type);
extern
gboolean g_type_check_instance (GTypeInstance *instance) __attribute__((__pure__));
extern
GTypeInstance* g_type_check_instance_cast (GTypeInstance *instance,
       GType iface_type);
extern
gboolean g_type_check_instance_is_a (GTypeInstance *instance,
       GType iface_type) __attribute__((__pure__));
extern
gboolean g_type_check_instance_is_fundamentally_a (GTypeInstance *instance,
                                                           GType fundamental_type) __attribute__((__pure__));
extern
GTypeClass* g_type_check_class_cast (GTypeClass *g_class,
       GType is_a_type);
extern
gboolean g_type_check_class_is_a (GTypeClass *g_class,
       GType is_a_type) __attribute__((__pure__));
extern
gboolean g_type_check_is_value_type (GType type) __attribute__((__const__));
extern
gboolean g_type_check_value (const GValue *value) __attribute__((__pure__));
extern
gboolean g_type_check_value_holds (const GValue *value,
       GType type) __attribute__((__pure__));
extern
gboolean g_type_test_flags (GType type,
       guint flags) __attribute__((__const__));
extern
const gchar * g_type_name_from_instance (GTypeInstance *instance);
extern
const gchar * g_type_name_from_class (GTypeClass *g_class);
