extern
GType g_application_get_type (void);
extern
gboolean g_application_id_is_valid (const gchar *application_id);
extern
GApplication * g_application_new (const gchar *application_id,
                                                                         GApplicationFlags flags);
extern
const gchar * g_application_get_application_id (GApplication *application);
extern
void g_application_set_application_id (GApplication *application,
                                                                         const gchar *application_id);
extern
GDBusConnection * g_application_get_dbus_connection (GApplication *application);
extern
const gchar * g_application_get_dbus_object_path (GApplication *application);
extern
guint g_application_get_inactivity_timeout (GApplication *application);
extern
void g_application_set_inactivity_timeout (GApplication *application,
                                                                         guint inactivity_timeout);
extern
GApplicationFlags g_application_get_flags (GApplication *application);
extern
void g_application_set_flags (GApplication *application,
                                                                         GApplicationFlags flags);
extern
const gchar * g_application_get_resource_base_path (GApplication *application);
extern
void g_application_set_resource_base_path (GApplication *application,
                                                                         const gchar *resource_path);
extern
void g_application_set_action_group (GApplication *application,
                                                                         GActionGroup *action_group);
extern
void g_application_add_main_option_entries (GApplication *application,
                                                                         const GOptionEntry *entries);
extern
void g_application_add_main_option (GApplication *application,
                                                                         const char *long_name,
                                                                         char short_name,
                                                                         GOptionFlags flags,
                                                                         GOptionArg arg,
                                                                         const char *description,
                                                                         const char *arg_description);
extern
void g_application_add_option_group (GApplication *application,
                                                                         GOptionGroup *group);
extern
void g_application_set_option_context_parameter_string (GApplication *application,
                                                                           const gchar *parameter_string);
extern
void g_application_set_option_context_summary (GApplication *application,
                                                                         const gchar *summary);
extern
void g_application_set_option_context_description (GApplication *application,
                                                                         const gchar *description);
extern
gboolean g_application_get_is_registered (GApplication *application);
extern
gboolean g_application_get_is_remote (GApplication *application);
extern
gboolean g_application_register (GApplication *application,
                                                                         GCancellable *cancellable,
                                                                         GError **error);
extern
void g_application_hold (GApplication *application);
extern
void g_application_release (GApplication *application);
extern
void g_application_activate (GApplication *application);
extern
void g_application_open (GApplication *application,
                                                                         GFile **files,
                                                                         gint n_files,
                                                                         const gchar *hint);
extern
int g_application_run (GApplication *application,
                                                                         int argc,
                                                                         char **argv);
extern
void g_application_quit (GApplication *application);
extern
GApplication * g_application_get_default (void);
extern
void g_application_set_default (GApplication *application);
extern
void g_application_mark_busy (GApplication *application);
extern
void g_application_unmark_busy (GApplication *application);
extern
gboolean g_application_get_is_busy (GApplication *application);
extern
void g_application_send_notification (GApplication *application,
                                                                         const gchar *id,
                                                                         GNotification *notification);
extern
void g_application_withdraw_notification (GApplication *application,
                                                                         const gchar *id);
extern
void g_application_bind_busy_property (GApplication *application,
                                                                         gpointer object,
                                                                         const gchar *property);
extern
void g_application_unbind_busy_property (GApplication *application,
                                                                         gpointer object,
                                                                         const gchar *property);
                                                                         extern
GType g_application_command_line_get_type (void) __attribute__((__const__));
extern
gchar ** g_application_command_line_get_arguments (GApplicationCommandLine *cmdline,
                                                                         int *argc);
extern
GVariantDict * g_application_command_line_get_options_dict (GApplicationCommandLine *cmdline);
extern
GInputStream * g_application_command_line_get_stdin (GApplicationCommandLine *cmdline);
extern
const gchar * const * g_application_command_line_get_environ (GApplicationCommandLine *cmdline);
extern
const gchar * g_application_command_line_getenv (GApplicationCommandLine *cmdline,
                                                                         const gchar *name);
extern
const gchar * g_application_command_line_get_cwd (GApplicationCommandLine *cmdline);
extern
gboolean g_application_command_line_get_is_remote (GApplicationCommandLine *cmdline);
extern
void g_application_command_line_print (GApplicationCommandLine *cmdline,
                                                                         const gchar *format,
                                                                         ...) __attribute__((__format__ (gnu_printf, 2, 3)));
extern
void g_application_command_line_printerr (GApplicationCommandLine *cmdline,
                                                                         const gchar *format,
                                                                         ...) __attribute__((__format__ (gnu_printf, 2, 3)));
extern
int g_application_command_line_get_exit_status (GApplicationCommandLine *cmdline);
extern
void g_application_command_line_set_exit_status (GApplicationCommandLine *cmdline,
                                                                         int exit_status);
extern
GVariant * g_application_command_line_get_platform_data (GApplicationCommandLine *cmdline);
extern
GFile * g_application_command_line_create_file_for_arg (GApplicationCommandLine *cmdline,
                                                                         const gchar *arg);