extern
GType g_application_get_type(void);
extern
gboolean g_application_id_is_valid(const gchar *application_id);
extern
GApplication * g_application_new(const gchar *application_id, GApplicationFlags flags);
extern
const gchar * g_application_get_application_id(GApplication *application);
extern
void g_application_set_application_id(GApplication *application, const gchar *application_id);
extern
GDBusConnection * g_application_get_dbus_connection(GApplication *application);
extern
const gchar * g_application_get_dbus_object_path(GApplication *application);
extern
guint g_application_get_inactivity_timeout(GApplication *application);
extern
void g_application_set_inactivity_timeout(GApplication *application, guint inactivity_timeout);
extern
GApplicationFlags g_application_get_flags(GApplication *application);
extern
void g_application_set_flags(GApplication *application, GApplicationFlags flags);
extern
const gchar * g_application_get_resource_base_path(GApplication *application);
extern
void g_application_set_resource_base_path(GApplication *application, const gchar *resource_path);
extern
void g_application_set_action_group(GApplication *application, GActionGroup *action_group);
extern
void g_application_add_main_option_entries(GApplication *application, const GOptionEntry *entries);
extern
void g_application_add_main_option(GApplication *application, const char *long_name, char short_name, GOptionFlags flags, GOptionArg arg, const char *description, const char *arg_description);
extern
void g_application_add_option_group(GApplication *application, GOptionGroup *group);
extern
void g_application_set_option_context_parameter_string(GApplication *application, const gchar *parameter_string);
extern
void g_application_set_option_context_summary(GApplication *application, const gchar *summary);
extern
void g_application_set_option_context_description(GApplication *application, const gchar *description);
extern
gboolean g_application_get_is_registered(GApplication *application);
extern
gboolean g_application_get_is_remote(GApplication *application);
extern
gboolean g_application_register(GApplication *application, GCancellable *cancellable, GError **error);
extern
void g_application_hold(GApplication *application);
extern
void g_application_release(GApplication *application);
extern
void g_application_activate(GApplication *application);
extern
void g_application_open(GApplication *application, GFile **files, gint n_files, const gchar *hint);
extern
int g_application_run(GApplication *application, int argc, char **argv);
extern
void g_application_quit(GApplication *application);
extern
GApplication * g_application_get_default(void);
extern
void g_application_set_default(GApplication *application);
extern
void g_application_mark_busy(GApplication *application);
extern
void g_application_unmark_busy(GApplication *application);
extern
gboolean g_application_get_is_busy(GApplication *application);
extern
void g_application_send_notification(GApplication *application, const gchar *id, GNotification *notification);
extern
void g_application_withdraw_notification(GApplication *application, const gchar *id);
extern
void g_application_bind_busy_property(GApplication *application, gpointer object, const gchar *property);
extern
void g_application_unbind_busy_property(GApplication *application, gpointer object, const gchar *property);
extern
GType g_application_command_line_get_type(void);
extern
gchar ** g_application_command_line_get_arguments(GApplicationCommandLine *cmdline, int *argc);
extern
GVariantDict * g_application_command_line_get_options_dict(GApplicationCommandLine *cmdline);
extern
GInputStream * g_application_command_line_get_stdin(GApplicationCommandLine *cmdline);
extern
const gchar * const * g_application_command_line_get_environ(GApplicationCommandLine *cmdline);
extern
const gchar * g_application_command_line_getenv(GApplicationCommandLine *cmdline, const gchar *name);
extern
const gchar * g_application_command_line_get_cwd(GApplicationCommandLine *cmdline);
extern
gboolean g_application_command_line_get_is_remote(GApplicationCommandLine *cmdline);
extern
void g_application_command_line_print(GApplicationCommandLine *cmdline, const gchar *format, ...);
extern
void g_application_command_line_printerr(GApplicationCommandLine *cmdline, const gchar *format, ...);
extern
int g_application_command_line_get_exit_status(GApplicationCommandLine *cmdline);
extern
void g_application_command_line_set_exit_status(GApplicationCommandLine *cmdline, int exit_status);
extern
GVariant * g_application_command_line_get_platform_data(GApplicationCommandLine *cmdline);
extern
GFile * g_application_command_line_create_file_for_arg(GApplicationCommandLine *cmdline, const gchar *arg);
extern
GVariant * g_action_get_state_hint(GAction *action);
extern
gboolean g_action_get_enabled(GAction *action);
extern
GVariant * g_action_get_state(GAction *action);
extern
void g_action_change_state(GAction *action, GVariant *value);
extern
void g_action_activate(GAction *action, GVariant *parameter);
extern
gboolean g_action_name_is_valid(const gchar *action_name);
extern
gboolean g_action_parse_detailed_name(const gchar *detailed_name, gchar **action_name, GVariant **target_value, GError **error);
extern
gchar * g_action_print_detailed_name(const gchar *action_name, GVariant *target_value);
extern
GType g_action_group_get_type(void);
extern
gboolean g_action_group_has_action(GActionGroup *action_group, const gchar *action_name);
extern
gchar ** g_action_group_list_actions(GActionGroup *action_group);
extern
const GVariantType * g_action_group_get_action_parameter_type(GActionGroup *action_group, const gchar *action_name);
extern
const GVariantType * g_action_group_get_action_state_type(GActionGroup *action_group, const gchar *action_name);
extern
GVariant * g_action_group_get_action_state_hint(GActionGroup *action_group, const gchar *action_name);
extern
gboolean g_action_group_get_action_enabled(GActionGroup *action_group, const gchar *action_name);
extern
GVariant * g_action_group_get_action_state(GActionGroup *action_group, const gchar *action_name);
extern
void g_action_group_change_action_state(GActionGroup *action_group, const gchar *action_name, GVariant *value);
extern
void g_action_group_activate_action(GActionGroup *action_group, const gchar *action_name, GVariant *parameter);
extern
void g_action_group_action_added(GActionGroup *action_group, const gchar *action_name);
extern
void g_action_group_action_removed(GActionGroup *action_group, const gchar *action_name);
extern
void g_action_group_action_enabled_changed(GActionGroup *action_group, const gchar *action_name, gboolean enabled);
extern
void g_action_group_action_state_changed(GActionGroup *action_group, const gchar *action_name, GVariant *state);
extern
gboolean g_action_group_query_action(GActionGroup *action_group, const gchar *action_name, gboolean *enabled, const GVariantType **parameter_type, const GVariantType **state_type, GVariant **state_hint, GVariant **state);
extern
guint g_dbus_connection_export_action_group(GDBusConnection *connection, const gchar *object_path, GActionGroup *action_group, GError **error);
extern
void g_dbus_connection_unexport_action_group(GDBusConnection *connection, guint export_id);
extern
GType g_action_map_get_type(void);
extern
GAction * g_action_map_lookup_action(GActionMap *action_map, const gchar *action_name);
extern
void g_action_map_add_action(GActionMap *action_map, GAction *action);
extern
void g_action_map_remove_action(GActionMap *action_map, const gchar *action_name);
extern
void g_action_map_add_action_entries(GActionMap *action_map, const GActionEntry *entries, gint n_entries, gpointer user_data);
extern
GType g_app_info_get_type(void);
extern
GAppInfo * g_app_info_create_from_commandline(const char *commandline, const char *application_name, GAppInfoCreateFlags flags, GError **error);
extern
GAppInfo * g_app_info_dup(GAppInfo *appinfo);
extern
gboolean g_app_info_equal(GAppInfo *appinfo1, GAppInfo *appinfo2);
extern
const char *g_app_info_get_id(GAppInfo *appinfo);
extern
const char *g_app_info_get_name(GAppInfo *appinfo);
extern
const char *g_app_info_get_display_name(GAppInfo *appinfo);
extern
const char *g_app_info_get_description(GAppInfo *appinfo);
extern
const char *g_app_info_get_executable(GAppInfo *appinfo);
extern
const char *g_app_info_get_commandline(GAppInfo *appinfo);
extern
GIcon * g_app_info_get_icon(GAppInfo *appinfo);
extern
gboolean g_app_info_launch(GAppInfo *appinfo, GList *files, GAppLaunchContext *context, GError **error);
extern
gboolean g_app_info_supports_uris(GAppInfo *appinfo);
extern
gboolean g_app_info_supports_files(GAppInfo *appinfo);
extern
gboolean g_app_info_launch_uris(GAppInfo *appinfo, GList *uris, GAppLaunchContext *context, GError **error);
GLIB_AVAILABLE_IN_2_60 void g_app_info_launch_uris_async(GAppInfo *appinfo, GList *uris, GAppLaunchContext *context, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
GLIB_AVAILABLE_IN_2_60 gboolean g_app_info_launch_uris_finish(GAppInfo *appinfo, GAsyncResult *result, GError **error);
extern
gboolean g_app_info_should_show(GAppInfo *appinfo);
extern
gboolean g_app_info_set_as_default_for_type(GAppInfo *appinfo, const char *content_type, GError **error);
extern
gboolean g_app_info_set_as_default_for_extension(GAppInfo *appinfo, const char *extension, GError **error);
extern
gboolean g_app_info_add_supports_type(GAppInfo *appinfo, const char *content_type, GError **error);
extern
gboolean g_app_info_can_remove_supports_type(GAppInfo *appinfo);
extern
gboolean g_app_info_remove_supports_type(GAppInfo *appinfo, const char *content_type, GError **error);
extern
const char **g_app_info_get_supported_types(GAppInfo *appinfo);
extern
gboolean g_app_info_can_delete(GAppInfo *appinfo);
extern
gboolean g_app_info_delete(GAppInfo *appinfo);
extern
gboolean g_app_info_set_as_last_used_for_type(GAppInfo *appinfo, const char *content_type, GError **error);
extern
GList * g_app_info_get_all(void);
extern
GList * g_app_info_get_all_for_type(const char *content_type);
extern
GList * g_app_info_get_recommended_for_type(const gchar *content_type);
extern
GList * g_app_info_get_fallback_for_type(const gchar *content_type);
extern
void g_app_info_reset_type_associations(const char *content_type);
extern
GAppInfo *g_app_info_get_default_for_type(const char *content_type, gboolean must_support_uris);
extern
GAppInfo *g_app_info_get_default_for_uri_scheme(const char *uri_scheme);
extern
gboolean g_app_info_launch_default_for_uri(const char *uri, GAppLaunchContext *context, GError **error);
extern
void g_app_info_launch_default_for_uri_async(const char *uri, GAppLaunchContext *context, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
gboolean g_app_info_launch_default_for_uri_finish(GAsyncResult *result, GError **error);
extern
GType g_app_launch_context_get_type(void);
extern
GAppLaunchContext *g_app_launch_context_new(void);
extern
void g_app_launch_context_setenv(GAppLaunchContext *context, const char *variable, const char *value);
extern
void g_app_launch_context_unsetenv(GAppLaunchContext *context, const char *variable);
extern
char ** g_app_launch_context_get_environment(GAppLaunchContext *context);
extern
char * g_app_launch_context_get_display(GAppLaunchContext *context, GAppInfo *info, GList *files);
extern
char * g_app_launch_context_get_startup_notify_id(GAppLaunchContext *context, GAppInfo *info, GList *files);
extern
void g_app_launch_context_launch_failed(GAppLaunchContext *context, const char * startup_notify_id);
extern
GType g_app_info_monitor_get_type(void);
extern
GAppInfoMonitor * g_app_info_monitor_get(void);
extern
GType g_initable_get_type(void);
extern
gboolean g_initable_init(GInitable *initable, GCancellable *cancellable, GError **error);
extern
gpointer g_initable_new(GType object_type, GCancellable *cancellable, GError **error, const gchar *first_property_name, ...);
extern
gpointer g_initable_newv(GType object_type, guint n_parameters, GParameter *parameters, GCancellable *cancellable, GError **error);
extern
GObject* g_initable_new_valist(GType object_type, const gchar *first_property_name, va_list var_args, GCancellable *cancellable, GError **error);
extern
GType g_async_initable_get_type(void);
extern
void g_async_initable_init_async(GAsyncInitable *initable, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
gboolean g_async_initable_init_finish(GAsyncInitable *initable, GAsyncResult *res, GError **error);
extern
void g_async_initable_new_async(GType object_type, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data, const gchar *first_property_name, ...);
extern
void g_async_initable_newv_async(GType object_type, guint n_parameters, GParameter *parameters, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
void g_async_initable_new_valist_async(GType object_type, const gchar *first_property_name, va_list var_args, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
GObject *g_async_initable_new_finish(GAsyncInitable *initable, GAsyncResult *res, GError **error);
extern
GType g_async_result_get_type(void);
extern
gpointer g_async_result_get_user_data(GAsyncResult *res);
extern
GObject *g_async_result_get_source_object(GAsyncResult *res);
extern
gboolean g_async_result_legacy_propagate_error(GAsyncResult *res, GError **error);
extern
gboolean g_async_result_is_tagged(GAsyncResult *res, gpointer source_tag);
extern
GType g_input_stream_get_type(void);
extern
gssize g_input_stream_read(GInputStream *stream, void *buffer, gsize count, GCancellable *cancellable, GError **error);
extern
gboolean g_input_stream_read_all(GInputStream *stream, void *buffer, gsize count, gsize *bytes_read, GCancellable *cancellable, GError **error);
extern
GBytes *g_input_stream_read_bytes(GInputStream *stream, gsize count, GCancellable *cancellable, GError **error);
extern
gssize g_input_stream_skip(GInputStream *stream, gsize count, GCancellable *cancellable, GError **error);
extern
gboolean g_input_stream_close(GInputStream *stream, GCancellable *cancellable, GError **error);
extern
void g_input_stream_read_async(GInputStream *stream, void *buffer, gsize count, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
gssize g_input_stream_read_finish(GInputStream *stream, GAsyncResult *result, GError **error);
extern
void g_input_stream_read_all_async(GInputStream *stream, void *buffer, gsize count, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
gboolean g_input_stream_read_all_finish(GInputStream *stream, GAsyncResult *result, gsize *bytes_read, GError **error);
extern
void g_input_stream_read_bytes_async(GInputStream *stream, gsize count, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
GBytes *g_input_stream_read_bytes_finish(GInputStream *stream, GAsyncResult *result, GError **error);
extern
void g_input_stream_skip_async(GInputStream *stream, gsize count, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
gssize g_input_stream_skip_finish(GInputStream *stream, GAsyncResult *result, GError **error);
extern
void g_input_stream_close_async(GInputStream *stream, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
gboolean g_input_stream_close_finish(GInputStream *stream, GAsyncResult *result, GError **error);
extern
gboolean g_input_stream_is_closed(GInputStream *stream);
extern
gboolean g_input_stream_has_pending(GInputStream *stream);
extern
gboolean g_input_stream_set_pending(GInputStream *stream, GError **error);
extern
void g_input_stream_clear_pending(GInputStream *stream);
extern
GType g_filter_input_stream_get_type(void);
extern
GInputStream * g_filter_input_stream_get_base_stream(GFilterInputStream *stream);
extern
gboolean g_filter_input_stream_get_close_base_stream(GFilterInputStream *stream);
extern
void g_filter_input_stream_set_close_base_stream(GFilterInputStream *stream, gboolean close_base);
extern
GType g_buffered_input_stream_get_type(void);
extern
GInputStream* g_buffered_input_stream_new(GInputStream *base_stream);
extern
GInputStream* g_buffered_input_stream_new_sized(GInputStream *base_stream, gsize size);
extern
gsize g_buffered_input_stream_get_buffer_size(GBufferedInputStream *stream);
extern
void g_buffered_input_stream_set_buffer_size(GBufferedInputStream *stream, gsize size);
extern
gsize g_buffered_input_stream_get_available(GBufferedInputStream *stream);
extern
gsize g_buffered_input_stream_peek(GBufferedInputStream *stream, void *buffer, gsize offset, gsize count);
extern
const void* g_buffered_input_stream_peek_buffer(GBufferedInputStream *stream, gsize *count);
extern
gssize g_buffered_input_stream_fill(GBufferedInputStream *stream, gssize count, GCancellable *cancellable, GError **error);
extern
void g_buffered_input_stream_fill_async(GBufferedInputStream *stream, gssize count, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
gssize g_buffered_input_stream_fill_finish(GBufferedInputStream *stream, GAsyncResult *result, GError **error);
extern
int g_buffered_input_stream_read_byte(GBufferedInputStream *stream, GCancellable *cancellable, GError **error);
extern
GType g_output_stream_get_type(void);
extern
gssize g_output_stream_write(GOutputStream *stream, const void *buffer, gsize count, GCancellable *cancellable, GError **error);
extern
gboolean g_output_stream_write_all(GOutputStream *stream, const void *buffer, gsize count, gsize *bytes_written, GCancellable *cancellable, GError **error);
GLIB_AVAILABLE_IN_2_60 gboolean g_output_stream_writev(GOutputStream *stream, const GOutputVector *vectors, gsize n_vectors, gsize *bytes_written, GCancellable *cancellable, GError **error);
GLIB_AVAILABLE_IN_2_60 gboolean g_output_stream_writev_all(GOutputStream *stream, GOutputVector *vectors, gsize n_vectors, gsize *bytes_written, GCancellable *cancellable, GError **error);
extern
gboolean g_output_stream_printf(GOutputStream *stream, gsize *bytes_written, GCancellable *cancellable, GError **error, const gchar *format, ...);
extern
gboolean g_output_stream_vprintf(GOutputStream *stream, gsize *bytes_written, GCancellable *cancellable, GError **error, const gchar *format, va_list args);
extern
gssize g_output_stream_write_bytes(GOutputStream *stream, GBytes *bytes, GCancellable *cancellable, GError **error);
extern
gssize g_output_stream_splice(GOutputStream *stream, GInputStream *source, GOutputStreamSpliceFlags flags, GCancellable *cancellable, GError **error);
extern
gboolean g_output_stream_flush(GOutputStream *stream, GCancellable *cancellable, GError **error);
extern
gboolean g_output_stream_close(GOutputStream *stream, GCancellable *cancellable, GError **error);
extern
void g_output_stream_write_async(GOutputStream *stream, const void *buffer, gsize count, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
gssize g_output_stream_write_finish(GOutputStream *stream, GAsyncResult *result, GError **error);
extern
void g_output_stream_write_all_async(GOutputStream *stream, const void *buffer, gsize count, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
gboolean g_output_stream_write_all_finish(GOutputStream *stream, GAsyncResult *result, gsize *bytes_written, GError **error);
GLIB_AVAILABLE_IN_2_60 void g_output_stream_writev_async(GOutputStream *stream, const GOutputVector *vectors, gsize n_vectors, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
GLIB_AVAILABLE_IN_2_60 gboolean g_output_stream_writev_finish(GOutputStream *stream, GAsyncResult *result, gsize *bytes_written, GError **error);
GLIB_AVAILABLE_IN_2_60 void g_output_stream_writev_all_async(GOutputStream *stream, GOutputVector *vectors, gsize n_vectors, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
GLIB_AVAILABLE_IN_2_60 gboolean g_output_stream_writev_all_finish(GOutputStream *stream, GAsyncResult *result, gsize *bytes_written, GError **error);
extern void g_output_stream_write_bytes_async(GOutputStream *stream, GBytes *bytes, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
gssize g_output_stream_write_bytes_finish(GOutputStream *stream, GAsyncResult *result, GError **error);
extern
void g_output_stream_splice_async(GOutputStream *stream, GInputStream *source, GOutputStreamSpliceFlags flags, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
gssize g_output_stream_splice_finish(GOutputStream *stream, GAsyncResult *result, GError **error);
extern
void g_output_stream_flush_async(GOutputStream *stream, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
gboolean g_output_stream_flush_finish(GOutputStream *stream, GAsyncResult *result, GError **error);
extern
void g_output_stream_close_async(GOutputStream *stream, int io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
gboolean g_output_stream_close_finish(GOutputStream *stream, GAsyncResult *result, GError **error);
extern
gboolean g_output_stream_is_closed(GOutputStream *stream);
extern
gboolean g_output_stream_is_closing(GOutputStream *stream);
extern
gboolean g_output_stream_has_pending(GOutputStream *stream);
extern
gboolean g_output_stream_set_pending(GOutputStream *stream, GError **error);
extern
void g_output_stream_clear_pending(GOutputStream *stream);
extern
GType g_filter_output_stream_get_type(void);
extern
GOutputStream * g_filter_output_stream_get_base_stream(GFilterOutputStream *stream);
extern
gboolean g_filter_output_stream_get_close_base_stream(GFilterOutputStream *stream);
extern
void g_filter_output_stream_set_close_base_stream(GFilterOutputStream *stream, gboolean close_base);
extern
GType g_buffered_output_stream_get_type(void);
extern
GOutputStream* g_buffered_output_stream_new(GOutputStream *base_stream);
extern
GOutputStream* g_buffered_output_stream_new_sized(GOutputStream *base_stream, gsize size);
extern
gsize g_buffered_output_stream_get_buffer_size(GBufferedOutputStream *stream);
extern
void g_buffered_output_stream_set_buffer_size(GBufferedOutputStream *stream, gsize size);
extern
gboolean g_buffered_output_stream_get_auto_grow(GBufferedOutputStream *stream);
extern
void g_buffered_output_stream_set_auto_grow(GBufferedOutputStream *stream, gboolean auto_grow);
extern
GType g_bytes_icon_get_type(void);
extern
GIcon * g_bytes_icon_new(GBytes *bytes);
extern
GBytes * g_bytes_icon_get_bytes(GBytesIcon *icon);
extern
GType g_cancellable_get_type(void);
extern
GCancellable *g_cancellable_new(void);
extern
gboolean g_cancellable_is_cancelled(GCancellable *cancellable);
extern
gboolean g_cancellable_set_error_if_cancelled(GCancellable *cancellable, GError **error);
extern
int g_cancellable_get_fd(GCancellable *cancellable);
extern
gboolean g_cancellable_make_pollfd(GCancellable *cancellable, GPollFD *pollfd);
extern
void g_cancellable_release_fd(GCancellable *cancellable);
extern
GSource * g_cancellable_source_new(GCancellable *cancellable);
extern
GCancellable *g_cancellable_get_current(void);
extern
void g_cancellable_push_current(GCancellable *cancellable);
extern
void g_cancellable_pop_current(GCancellable *cancellable);
extern
void g_cancellable_reset(GCancellable *cancellable);
extern
gulong g_cancellable_connect(GCancellable *cancellable, GCallback callback, gpointer data, GDestroyNotify data_destroy_func);
extern
void g_cancellable_disconnect(GCancellable *cancellable, gulong handler_id);
extern
void g_cancellable_cancel(GCancellable *cancellable);
extern
GType g_converter_get_type(void);
extern
GConverterResult g_converter_convert(GConverter *converter, const void *inbuf, gsize inbuf_size, void *outbuf, gsize outbuf_size, GConverterFlags flags, gsize *bytes_read, gsize *bytes_written, GError **error);
extern
void g_converter_reset(GConverter *converter);
extern
GType g_charset_converter_get_type(void);
extern
GCharsetConverter *g_charset_converter_new(const gchar *to_charset, const gchar *from_charset, GError **error);
extern
void g_charset_converter_set_use_fallback(GCharsetConverter *converter, gboolean use_fallback);
extern
gboolean g_charset_converter_get_use_fallback(GCharsetConverter *converter);
extern
guint g_charset_converter_get_num_fallbacks(GCharsetConverter *converter);
extern
gboolean g_content_type_equals(const gchar *type1, const gchar *type2);
extern
gboolean g_content_type_is_a(const gchar *type, const gchar *supertype);
extern
gboolean g_content_type_is_mime_type(const gchar *type, const gchar *mime_type);
extern
gboolean g_content_type_is_unknown(const gchar *type);
extern
gchar * g_content_type_get_description(const gchar *type);
extern
gchar * g_content_type_get_mime_type(const gchar *type);
extern
GIcon * g_content_type_get_icon(const gchar *type);
extern
GIcon * g_content_type_get_symbolic_icon(const gchar *type);
extern
gchar * g_content_type_get_generic_icon_name(const gchar *type);
extern
gboolean g_content_type_can_be_executable(const gchar *type);
extern
gchar * g_content_type_from_mime_type(const gchar *mime_type);
extern
gchar * g_content_type_guess(const gchar *filename, const guchar *data, gsize data_size, gboolean *result_uncertain);
extern
gchar ** g_content_type_guess_for_tree(GFile *root);
extern
GList * g_content_types_get_registered(void);
GLIB_AVAILABLE_IN_2_60 const gchar * const *g_content_type_get_mime_dirs(void);
GLIB_AVAILABLE_IN_2_60 void g_content_type_set_mime_dirs(const gchar * const *dirs);
extern
GType g_converter_input_stream_get_type(void);
extern
GInputStream *g_converter_input_stream_new(GInputStream *base_stream, GConverter *converter);
extern
GConverter *g_converter_input_stream_get_converter(GConverterInputStream *converter_stream);
extern
GType g_converter_output_stream_get_type(void);
extern
GOutputStream *g_converter_output_stream_new(GOutputStream *base_stream, GConverter *converter);
extern
GConverter *g_converter_output_stream_get_converter(GConverterOutputStream *converter_stream);
extern
GType g_credentials_get_type(void);
extern
GCredentials *g_credentials_new(void);
extern
gchar *g_credentials_to_string(GCredentials *credentials);
extern
gpointer g_credentials_get_native(GCredentials *credentials, GCredentialsType native_type);
extern
void g_credentials_set_native(GCredentials *credentials, GCredentialsType native_type, gpointer native);
extern
gboolean g_credentials_is_same_user(GCredentials *credentials, GCredentials *other_credentials, GError **error);
LIBGTK_FUNC_AVAILABLE_IN_UINX pid_t g_credentials_get_unix_pid(GCredentials *credentials, GError **error);
LIBGTK_FUNC_AVAILABLE_IN_UINX uid_t g_credentials_get_unix_user(GCredentials *credentials, GError **error);
LIBGTK_FUNC_AVAILABLE_IN_UINX gboolean g_credentials_set_unix_user(GCredentials *credentials, uid_t uid, GError **error);
extern GType g_datagram_based_get_type(void);
extern gint g_datagram_based_receive_messages(GDatagramBased *datagram_based, GInputMessage *messages, guint num_messages, gint flags, gint64 timeout, GCancellable *cancellable, GError **error);
extern gint g_datagram_based_send_messages(GDatagramBased *datagram_based, GOutputMessage *messages, guint num_messages, gint flags, gint64 timeout, GCancellable *cancellable, GError **error);
extern GSource * g_datagram_based_create_source(GDatagramBased *datagram_based, GIOCondition condition, GCancellable *cancellable);
extern GIOCondition g_datagram_based_condition_check(GDatagramBased *datagram_based, GIOCondition condition);
extern gboolean g_datagram_based_condition_wait(GDatagramBased *datagram_based, GIOCondition condition, gint64 timeout, GCancellable *cancellable, GError **error);
extern
GType g_data_input_stream_get_type(void);
extern
GDataInputStream * g_data_input_stream_new(GInputStream *base_stream);
extern
void g_data_input_stream_set_byte_order(GDataInputStream *stream, GDataStreamByteOrder order);
extern
GDataStreamByteOrder g_data_input_stream_get_byte_order(GDataInputStream *stream);
extern
void g_data_input_stream_set_newline_type(GDataInputStream *stream, GDataStreamNewlineType type);
extern
GDataStreamNewlineType g_data_input_stream_get_newline_type(GDataInputStream *stream);
extern
guchar g_data_input_stream_read_byte(GDataInputStream *stream, GCancellable *cancellable, GError **error);
extern
gint16 g_data_input_stream_read_int16(GDataInputStream *stream, GCancellable *cancellable, GError **error);
extern
guint16 g_data_input_stream_read_uint16(GDataInputStream *stream, GCancellable *cancellable, GError **error);
extern
gint32 g_data_input_stream_read_int32(GDataInputStream *stream, GCancellable *cancellable, GError **error);
extern
guint32 g_data_input_stream_read_uint32(GDataInputStream *stream, GCancellable *cancellable, GError **error);
extern
gint64 g_data_input_stream_read_int64(GDataInputStream *stream, GCancellable *cancellable, GError **error);
extern
guint64 g_data_input_stream_read_uint64(GDataInputStream *stream, GCancellable *cancellable, GError **error);
extern
char * g_data_input_stream_read_line(GDataInputStream *stream, gsize *length, GCancellable *cancellable, GError **error);
extern
char * g_data_input_stream_read_line_utf8(GDataInputStream *stream, gsize *length, GCancellable *cancellable, GError **error);
extern
void g_data_input_stream_read_line_async(GDataInputStream *stream, gint io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
char * g_data_input_stream_read_line_finish(GDataInputStream *stream, GAsyncResult *result, gsize *length, GError **error);
extern
char * g_data_input_stream_read_line_finish_utf8(GDataInputStream *stream, GAsyncResult *result, gsize *length, GError **error);
extern
char * g_data_input_stream_read_until(GDataInputStream *stream, const gchar *stop_chars, gsize *length, GCancellable *cancellable, GError **error);
extern
void g_data_input_stream_read_until_async(GDataInputStream *stream, const gchar *stop_chars, gint io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
char * g_data_input_stream_read_until_finish(GDataInputStream *stream, GAsyncResult *result, gsize *length, GError **error);
extern
char * g_data_input_stream_read_upto(GDataInputStream *stream, const gchar *stop_chars, gssize stop_chars_len, gsize *length, GCancellable *cancellable, GError **error);
extern
void g_data_input_stream_read_upto_async(GDataInputStream *stream, const gchar *stop_chars, gssize stop_chars_len, gint io_priority, GCancellable *cancellable, GAsyncReadyCallback callback, gpointer user_data);
extern
char * g_data_input_stream_read_upto_finish(GDataInputStream *stream, GAsyncResult *result, gsize *length, GError **error);
