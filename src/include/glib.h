extern
GArray* g_array_new(gboolean zero_terminated, gboolean clear_, guint element_size);
extern
GArray* g_array_sized_new(gboolean zero_terminated, gboolean clear_, guint element_size, guint reserved_size);
GLIB_AVAILABLE_IN_2_62 GArray* g_array_copy(GArray *array);
extern
gchar* g_array_free(GArray *array, gboolean free_segment);
extern
GArray *g_array_ref(GArray *array);
extern
void g_array_unref(GArray *array);
extern
guint g_array_get_element_size(GArray *array);
extern
GArray* g_array_append_vals(GArray *array, gconstpointer data, guint len);
extern
GArray* g_array_prepend_vals(GArray *array, gconstpointer data, guint len);
extern
GArray* g_array_insert_vals(GArray *array, guint index_, gconstpointer data, guint len);
extern
GArray* g_array_set_size(GArray *array, guint length);
extern
GArray* g_array_remove_index(GArray *array, guint index_);
extern
GArray* g_array_remove_index_fast(GArray *array, guint index_);
extern
GArray* g_array_remove_range(GArray *array, guint index_, guint length);
extern
void g_array_sort(GArray *array, GCompareFunc compare_func);
extern
void g_array_sort_with_data(GArray *array, GCompareDataFunc compare_func, gpointer user_data);
GLIB_AVAILABLE_IN_2_62 gboolean g_array_binary_search(GArray *array, gconstpointer target, GCompareFunc compare_func, guint *out_match_index);
extern
void g_array_set_clear_func(GArray *array, GDestroyNotify clear_func);
extern
GPtrArray* g_ptr_array_new(void);
extern
GPtrArray* g_ptr_array_new_with_free_func(GDestroyNotify element_free_func);
GLIB_AVAILABLE_IN_2_62 GPtrArray *g_ptr_array_copy(GPtrArray *array, GCopyFunc func, gpointer user_data);
extern
GPtrArray* g_ptr_array_sized_new(guint reserved_size);
extern
GPtrArray* g_ptr_array_new_full(guint reserved_size, GDestroyNotify element_free_func);
extern
gpointer* g_ptr_array_free(GPtrArray *array, gboolean free_seg);
extern
GPtrArray* g_ptr_array_ref(GPtrArray *array);
extern
void g_ptr_array_unref(GPtrArray *array);
extern
void g_ptr_array_set_free_func(GPtrArray *array, GDestroyNotify element_free_func);
extern
void g_ptr_array_set_size(GPtrArray *array, gint length);
extern
gpointer g_ptr_array_remove_index(GPtrArray *array, guint index_);
extern
gpointer g_ptr_array_remove_index_fast(GPtrArray *array, guint index_);
GLIB_AVAILABLE_IN_2_58 gpointer g_ptr_array_steal_index(GPtrArray *array, guint index_);
GLIB_AVAILABLE_IN_2_58 gpointer g_ptr_array_steal_index_fast(GPtrArray *array, guint index_);
extern
gboolean g_ptr_array_remove(GPtrArray *array, gpointer data);
extern
gboolean g_ptr_array_remove_fast(GPtrArray *array, gpointer data);
extern
GPtrArray *g_ptr_array_remove_range(GPtrArray *array, guint index_, guint length);
extern
void g_ptr_array_add(GPtrArray *array, gpointer data);
GLIB_AVAILABLE_IN_2_62 void g_ptr_array_extend(GPtrArray *array_to_extend, GPtrArray *array, GCopyFunc func, gpointer user_data);
GLIB_AVAILABLE_IN_2_62 void g_ptr_array_extend_and_steal(GPtrArray *array_to_extend, GPtrArray *array);
extern
void g_ptr_array_insert(GPtrArray *array, gint index_, gpointer data);
extern
void g_ptr_array_sort(GPtrArray *array, GCompareFunc compare_func);
extern
void g_ptr_array_sort_with_data(GPtrArray *array, GCompareDataFunc compare_func, gpointer user_data);
extern
void g_ptr_array_foreach(GPtrArray *array, GFunc func, gpointer user_data);
extern
gboolean g_ptr_array_find(GPtrArray *haystack, gconstpointer needle, guint *index_);
extern
gboolean g_ptr_array_find_with_equal_func(GPtrArray *haystack, gconstpointer needle, GEqualFunc equal_func, guint *index_);
extern
GByteArray* g_byte_array_new(void);
extern
GByteArray* g_byte_array_new_take(guint8 *data, gsize len);
extern
GByteArray* g_byte_array_sized_new(guint reserved_size);
extern
guint8* g_byte_array_free(GByteArray *array, gboolean free_segment);
extern
GBytes* g_byte_array_free_to_bytes(GByteArray *array);
extern
GByteArray *g_byte_array_ref(GByteArray *array);
extern
void g_byte_array_unref(GByteArray *array);
extern
GByteArray* g_byte_array_append(GByteArray *array, const guint8 *data, guint len);
extern
GByteArray* g_byte_array_prepend(GByteArray *array, const guint8 *data, guint len);
extern
GByteArray* g_byte_array_set_size(GByteArray *array, guint length);
extern
GByteArray* g_byte_array_remove_index(GByteArray *array, guint index_);
extern
GByteArray* g_byte_array_remove_index_fast(GByteArray *array, guint index_);
extern
GByteArray* g_byte_array_remove_range(GByteArray *array, guint index_, guint length);
extern
void g_byte_array_sort(GByteArray *array, GCompareFunc compare_func);
extern
void g_byte_array_sort_with_data(GByteArray *array, GCompareDataFunc compare_func, gpointer user_data);
extern
gint g_atomic_int_get(const volatile gint *atomic);
extern
void g_atomic_int_set(volatile gint *atomic, gint newval);
extern
void g_atomic_int_inc(volatile gint *atomic);
extern
gboolean g_atomic_int_dec_and_test(volatile gint *atomic);
extern
gboolean g_atomic_int_compare_and_exchange(volatile gint *atomic, gint oldval, gint newval);
extern
gint g_atomic_int_add(volatile gint *atomic, gint val);
extern
guint g_atomic_int_and(volatile guint *atomic, guint val);
extern
guint g_atomic_int_or(volatile guint *atomic, guint val);
extern
guint g_atomic_int_xor(volatile guint *atomic, guint val);
extern
gpointer g_atomic_pointer_get(const volatile void *atomic);
extern
void g_atomic_pointer_set(volatile void *atomic, gpointer newval);
extern
gboolean g_atomic_pointer_compare_and_exchange(volatile void *atomic, gpointer oldval, gpointer newval);
extern
gssize g_atomic_pointer_add(volatile void *atomic, gssize val);
extern
gsize g_atomic_pointer_and(volatile void *atomic, gsize val);
extern
gsize g_atomic_pointer_or(volatile void *atomic, gsize val);
extern
gsize g_atomic_pointer_xor(volatile void *atomic, gsize val);
extern
gint g_atomic_int_exchange_and_add(volatile gint *atomic, gint val);
extern
GQuark g_quark_try_string(const gchar *string);
extern
GQuark g_quark_from_static_string(const gchar *string);
extern
GQuark g_quark_from_string(const gchar *string);
extern
const gchar * g_quark_to_string(GQuark quark);
extern
const gchar * g_intern_string(const gchar *string);
extern
const gchar * g_intern_static_string(const gchar *string);
extern
GError* g_error_new(GQuark domain, gint code, const gchar *format, ...);
extern
GError* g_error_new_literal(GQuark domain, gint code, const gchar *message);
extern
GError* g_error_new_valist(GQuark domain, gint code, const gchar *format, va_list args);
extern
void g_error_free(GError *error);
extern
GError* g_error_copy(const GError *error);
extern
gboolean g_error_matches(const GError *error, GQuark domain, gint code);
extern
void g_set_error(GError **err, GQuark domain, gint code, const gchar *format, ...);
extern
void g_set_error_literal(GError **err, GQuark domain, gint code, const gchar *message);
extern
void g_propagate_error(GError **dest, GError *src);
extern
void g_clear_error(GError **err);
extern
void g_prefix_error(GError **err, const gchar *format, ...);
extern
void g_propagate_prefixed_error(GError **dest, GError *src, const gchar *format, ...);
extern
const gchar * g_get_user_name(void);
extern
const gchar * g_get_real_name(void);
extern
const gchar * g_get_home_dir(void);
extern
const gchar * g_get_tmp_dir(void);
extern
const gchar * g_get_host_name(void);
extern
const gchar * g_get_prgname(void);
extern
void g_set_prgname(const gchar *prgname);
extern
const gchar * g_get_application_name(void);
extern
void g_set_application_name(const gchar *application_name);
extern
void g_reload_user_special_dirs_cache(void);
extern
const gchar * g_get_user_data_dir(void);
extern
const gchar * g_get_user_config_dir(void);
extern
const gchar * g_get_user_cache_dir(void);
extern
const gchar * const * g_get_system_data_dirs(void);
extern
const gchar * const * g_get_system_config_dirs(void);
extern
const gchar * g_get_user_runtime_dir(void);
extern
const gchar * g_get_user_special_dir(GUserDirectory directory);
extern
guint g_parse_debug_string(const gchar *string, const GDebugKey *keys, guint nkeys);
extern
gint g_snprintf(gchar *string, gulong n, gchar const *format, ...);
extern
gint g_vsnprintf(gchar *string, gulong n, gchar const *format, va_list args);
extern
void g_nullify_pointer(gpointer *nullify_location);
extern
gchar *g_format_size_full(guint64 size, GFormatSizeFlags flags);
extern
gchar *g_format_size(guint64 size);
extern
gchar *g_format_size_for_display(goffset size);
extern
void g_atexit(GVoidFunc func);
extern
gchar* g_find_program_in_path(const gchar *program);
extern
GThread * g_thread_ref(GThread *thread);
extern
void g_thread_unref(GThread *thread);
extern
GThread * g_thread_new(const gchar *name, GThreadFunc func, gpointer data);
extern
GThread * g_thread_try_new(const gchar *name, GThreadFunc func, gpointer data, GError **error);
extern
GThread * g_thread_self(void);
extern
void g_thread_exit(gpointer retval);
extern
gpointer g_thread_join(GThread *thread);
extern
void g_thread_yield(void);
extern
void g_mutex_init(GMutex *mutex);
extern
void g_mutex_clear(GMutex *mutex);
extern
void g_mutex_lock(GMutex *mutex);
extern
gboolean g_mutex_trylock(GMutex *mutex);
extern
void g_mutex_unlock(GMutex *mutex);
extern
void g_rw_lock_init(GRWLock *rw_lock);
extern
void g_rw_lock_clear(GRWLock *rw_lock);
extern
void g_rw_lock_writer_lock(GRWLock *rw_lock);
extern
gboolean g_rw_lock_writer_trylock(GRWLock *rw_lock);
extern
void g_rw_lock_writer_unlock(GRWLock *rw_lock);
extern
void g_rw_lock_reader_lock(GRWLock *rw_lock);
extern
gboolean g_rw_lock_reader_trylock(GRWLock *rw_lock);
extern
void g_rw_lock_reader_unlock(GRWLock *rw_lock);
extern
void g_rec_mutex_init(GRecMutex *rec_mutex);
extern
void g_rec_mutex_clear(GRecMutex *rec_mutex);
extern
void g_rec_mutex_lock(GRecMutex *rec_mutex);
extern
gboolean g_rec_mutex_trylock(GRecMutex *rec_mutex);
extern
void g_rec_mutex_unlock(GRecMutex *rec_mutex);
extern
void g_cond_init(GCond *cond);
extern
void g_cond_clear(GCond *cond);
extern
void g_cond_wait(GCond *cond, GMutex *mutex);
extern
void g_cond_signal(GCond *cond);
extern
void g_cond_broadcast(GCond *cond);
extern
gboolean g_cond_wait_until(GCond *cond, GMutex *mutex, gint64 end_time);
extern
gpointer g_private_get(GPrivate *key);
extern
void g_private_set(GPrivate *key, gpointer value);
extern
void g_private_replace(GPrivate *key, gpointer value);
extern
gpointer g_once_impl(GOnce *once, GThreadFunc func, gpointer arg);
extern
gboolean g_once_init_enter(volatile void *location);
extern
void g_once_init_leave(volatile void *location, gsize result);
extern
guint g_get_num_processors(void);
extern
GAsyncQueue *g_async_queue_new(void);
extern
GAsyncQueue *g_async_queue_new_full(GDestroyNotify item_free_func);
extern
void g_async_queue_lock(GAsyncQueue *queue);
extern
void g_async_queue_unlock(GAsyncQueue *queue);
extern
GAsyncQueue *g_async_queue_ref(GAsyncQueue *queue);
extern
void g_async_queue_unref(GAsyncQueue *queue);
extern
void g_async_queue_ref_unlocked(GAsyncQueue *queue);
extern
void g_async_queue_unref_and_unlock(GAsyncQueue *queue);
extern
void g_async_queue_push(GAsyncQueue *queue, gpointer data);
extern
void g_async_queue_push_unlocked(GAsyncQueue *queue, gpointer data);
extern
void g_async_queue_push_sorted(GAsyncQueue *queue, gpointer data, GCompareDataFunc func, gpointer user_data);
extern
void g_async_queue_push_sorted_unlocked(GAsyncQueue *queue, gpointer data, GCompareDataFunc func, gpointer user_data);
extern
gpointer g_async_queue_pop(GAsyncQueue *queue);
extern
gpointer g_async_queue_pop_unlocked(GAsyncQueue *queue);
extern
gpointer g_async_queue_try_pop(GAsyncQueue *queue);
extern
gpointer g_async_queue_try_pop_unlocked(GAsyncQueue *queue);
extern
gpointer g_async_queue_timeout_pop(GAsyncQueue *queue, guint64 timeout);
extern
gpointer g_async_queue_timeout_pop_unlocked(GAsyncQueue *queue, guint64 timeout);
extern
gint g_async_queue_length(GAsyncQueue *queue);
extern
gint g_async_queue_length_unlocked(GAsyncQueue *queue);
extern
void g_async_queue_sort(GAsyncQueue *queue, GCompareDataFunc func, gpointer user_data);
extern
void g_async_queue_sort_unlocked(GAsyncQueue *queue, GCompareDataFunc func, gpointer user_data);
extern
gboolean g_async_queue_remove(GAsyncQueue *queue, gpointer item);
extern
gboolean g_async_queue_remove_unlocked(GAsyncQueue *queue, gpointer item);
extern
void g_async_queue_push_front(GAsyncQueue *queue, gpointer item);
extern
void g_async_queue_push_front_unlocked(GAsyncQueue *queue, gpointer item);
extern
gpointer g_async_queue_timed_pop(GAsyncQueue *queue, GTimeVal *end_time);
extern
gpointer g_async_queue_timed_pop_unlocked(GAsyncQueue *queue, GTimeVal *end_time);
extern
void g_on_error_query(const gchar *prg_name);
extern
void g_on_error_stack_trace(const gchar *prg_name);
extern
gsize g_base64_encode_step(const guchar *in, gsize len, gboolean break_lines, gchar *out, gint *state, gint *save);
extern
gsize g_base64_encode_close(gboolean break_lines, gchar *out, gint *state, gint *save);
extern
gchar* g_base64_encode(const guchar *data, gsize len);
extern
gsize g_base64_decode_step(const gchar *in, gsize len, guchar *out, gint *state, guint *save);
extern
guchar *g_base64_decode(const gchar *text, gsize *out_len);
extern
guchar *g_base64_decode_inplace(gchar *text, gsize *out_len);
extern
void g_bit_lock(volatile gint *address, gint lock_bit);
extern
gboolean g_bit_trylock(volatile gint *address, gint lock_bit);
extern
void g_bit_unlock(volatile gint *address, gint lock_bit);
extern
void g_pointer_bit_lock(volatile void *address, gint lock_bit);
extern
gboolean g_pointer_bit_trylock(volatile void *address, gint lock_bit);
extern
void g_pointer_bit_unlock(volatile void *address, gint lock_bit);
extern
GBookmarkFile *g_bookmark_file_new(void);
extern
void g_bookmark_file_free(GBookmarkFile *bookmark);
extern
gboolean g_bookmark_file_load_from_file(GBookmarkFile *bookmark, const gchar *filename, GError **error);
extern
gboolean g_bookmark_file_load_from_data(GBookmarkFile *bookmark, const gchar *data, gsize length, GError **error);
extern
gboolean g_bookmark_file_load_from_data_dirs(GBookmarkFile *bookmark, const gchar *file, gchar **full_path, GError **error);
extern
gchar * g_bookmark_file_to_data(GBookmarkFile *bookmark, gsize *length, GError **error);
extern
gboolean g_bookmark_file_to_file(GBookmarkFile *bookmark, const gchar *filename, GError **error);
extern
void g_bookmark_file_set_title(GBookmarkFile *bookmark, const gchar *uri, const gchar *title);
extern
gchar * g_bookmark_file_get_title(GBookmarkFile *bookmark, const gchar *uri, GError **error);
extern
void g_bookmark_file_set_description(GBookmarkFile *bookmark, const gchar *uri, const gchar *description);
extern
gchar * g_bookmark_file_get_description(GBookmarkFile *bookmark, const gchar *uri, GError **error);
extern
void g_bookmark_file_set_mime_type(GBookmarkFile *bookmark, const gchar *uri, const gchar *mime_type);
extern
gchar * g_bookmark_file_get_mime_type(GBookmarkFile *bookmark, const gchar *uri, GError **error);
extern
void g_bookmark_file_set_groups(GBookmarkFile *bookmark, const gchar *uri, const gchar **groups, gsize length);
extern
void g_bookmark_file_add_group(GBookmarkFile *bookmark, const gchar *uri, const gchar *group);
extern
gboolean g_bookmark_file_has_group(GBookmarkFile *bookmark, const gchar *uri, const gchar *group, GError **error);
extern
gchar ** g_bookmark_file_get_groups(GBookmarkFile *bookmark, const gchar *uri, gsize *length, GError **error);
extern
void g_bookmark_file_add_application(GBookmarkFile *bookmark, const gchar *uri, const gchar *name, const gchar *exec);
extern
gboolean g_bookmark_file_has_application(GBookmarkFile *bookmark, const gchar *uri, const gchar *name, GError **error);
extern
gchar ** g_bookmark_file_get_applications(GBookmarkFile *bookmark, const gchar *uri, gsize *length, GError **error);
extern
gboolean g_bookmark_file_set_app_info(GBookmarkFile *bookmark, const gchar *uri, const gchar *name, const gchar *exec, gint count, time_t stamp, GError **error);
extern
gboolean g_bookmark_file_get_app_info(GBookmarkFile *bookmark, const gchar *uri, const gchar *name, gchar **exec, guint *count, time_t *stamp, GError **error);
extern
void g_bookmark_file_set_is_private(GBookmarkFile *bookmark, const gchar *uri, gboolean is_private);
extern
gboolean g_bookmark_file_get_is_private(GBookmarkFile *bookmark, const gchar *uri, GError **error);
extern
void g_bookmark_file_set_icon(GBookmarkFile *bookmark, const gchar *uri, const gchar *href, const gchar *mime_type);
extern
gboolean g_bookmark_file_get_icon(GBookmarkFile *bookmark, const gchar *uri, gchar **href, gchar **mime_type, GError **error);
extern
void g_bookmark_file_set_added(GBookmarkFile *bookmark, const gchar *uri, time_t added);
extern
time_t g_bookmark_file_get_added(GBookmarkFile *bookmark, const gchar *uri, GError **error);
extern
void g_bookmark_file_set_modified(GBookmarkFile *bookmark, const gchar *uri, time_t modified);
extern
time_t g_bookmark_file_get_modified(GBookmarkFile *bookmark, const gchar *uri, GError **error);
extern
void g_bookmark_file_set_visited(GBookmarkFile *bookmark, const gchar *uri, time_t visited);
extern
time_t g_bookmark_file_get_visited(GBookmarkFile *bookmark, const gchar *uri, GError **error);
extern
gboolean g_bookmark_file_has_item(GBookmarkFile *bookmark, const gchar *uri);
extern
gint g_bookmark_file_get_size(GBookmarkFile *bookmark);
extern
gchar ** g_bookmark_file_get_uris(GBookmarkFile *bookmark, gsize *length);
extern
gboolean g_bookmark_file_remove_group(GBookmarkFile *bookmark, const gchar *uri, const gchar *group, GError **error);
extern
gboolean g_bookmark_file_remove_application(GBookmarkFile *bookmark, const gchar *uri, const gchar *name, GError **error);
extern
gboolean g_bookmark_file_remove_item(GBookmarkFile *bookmark, const gchar *uri, GError **error);
extern
gboolean g_bookmark_file_move_item(GBookmarkFile *bookmark, const gchar *old_uri, const gchar *new_uri, GError **error);
extern
GBytes * g_bytes_new(gconstpointer data, gsize size);
extern
GBytes * g_bytes_new_take(gpointer data, gsize size);
extern
GBytes * g_bytes_new_static(gconstpointer data, gsize size);
extern
GBytes * g_bytes_new_with_free_func(gconstpointer data, gsize size, GDestroyNotify free_func, gpointer user_data);
extern
GBytes * g_bytes_new_from_bytes(GBytes *bytes, gsize offset, gsize length);
extern
gconstpointer g_bytes_get_data(GBytes *bytes, gsize *size);
extern
gsize g_bytes_get_size(GBytes *bytes);
extern
GBytes * g_bytes_ref(GBytes *bytes);
extern
void g_bytes_unref(GBytes *bytes);
extern
gpointer g_bytes_unref_to_data(GBytes *bytes, gsize *size);
extern
GByteArray * g_bytes_unref_to_array(GBytes *bytes);
extern
guint g_bytes_hash(gconstpointer bytes);
extern
gboolean g_bytes_equal(gconstpointer bytes1, gconstpointer bytes2);
extern
gint g_bytes_compare(gconstpointer bytes1, gconstpointer bytes2);
extern
gboolean g_get_charset(const char **charset);
extern
gchar * g_get_codeset(void);
GLIB_AVAILABLE_IN_2_62 gboolean g_get_console_charset(const char **charset);
extern
const gchar * const * g_get_language_names(void);
GLIB_AVAILABLE_IN_2_58 const gchar * const * g_get_language_names_with_category(const gchar *category_name);
extern
gchar ** g_get_locale_variants(const gchar *locale);
extern
gssize g_checksum_type_get_length(GChecksumType checksum_type);
extern
GChecksum * g_checksum_new(GChecksumType checksum_type);
extern
void g_checksum_reset(GChecksum *checksum);
extern
GChecksum * g_checksum_copy(const GChecksum *checksum);
extern
void g_checksum_free(GChecksum *checksum);
extern
void g_checksum_update(GChecksum *checksum, const guchar *data, gssize length);
extern
const gchar * g_checksum_get_string(GChecksum *checksum);
extern
void g_checksum_get_digest(GChecksum *checksum, guint8 *buffer, gsize *digest_len);
extern
gchar *g_compute_checksum_for_data(GChecksumType checksum_type, const guchar *data, gsize length);
extern
gchar *g_compute_checksum_for_string(GChecksumType checksum_type, const gchar *str, gssize length);
extern
gchar *g_compute_checksum_for_bytes(GChecksumType checksum_type, GBytes *data);
extern
GQuark g_convert_error_quark(void);
extern
GIConv g_iconv_open(const gchar *to_codeset, const gchar *from_codeset);
extern
gsize g_iconv(GIConv converter, gchar **inbuf, gsize *inbytes_left, gchar **outbuf, gsize *outbytes_left);
extern
gint g_iconv_close(GIConv converter);
extern
gchar* g_convert(const gchar *str, gssize len, const gchar *to_codeset, const gchar *from_codeset, gsize *bytes_read, gsize *bytes_written, GError **error);
extern
gchar* g_convert_with_iconv(const gchar *str, gssize len, GIConv converter, gsize *bytes_read, gsize *bytes_written, GError **error);
extern
gchar* g_convert_with_fallback(const gchar *str, gssize len, const gchar *to_codeset, const gchar *from_codeset, const gchar *fallback, gsize *bytes_read, gsize *bytes_written, GError **error);
extern
gchar* g_locale_to_utf8(const gchar *opsysstring, gssize len, gsize *bytes_read, gsize *bytes_written, GError **error);
extern
gchar* g_locale_from_utf8(const gchar *utf8string, gssize len, gsize *bytes_read, gsize *bytes_written, GError **error);
extern
gchar* g_filename_to_utf8(const gchar *opsysstring, gssize len, gsize *bytes_read, gsize *bytes_written, GError **error);
extern
gchar* g_filename_from_utf8(const gchar *utf8string, gssize len, gsize *bytes_read, gsize *bytes_written, GError **error);
extern
gchar *g_filename_from_uri(const gchar *uri, gchar **hostname, GError **error);
extern
gchar *g_filename_to_uri(const gchar *filename, const gchar *hostname, GError **error);
extern
gchar *g_filename_display_name(const gchar *filename);
extern
gboolean g_get_filename_charsets(const gchar ***filename_charsets);
extern
gchar *g_filename_display_basename(const gchar *filename);
extern
gchar **g_uri_list_extract_uris(const gchar *uri_list);
extern
void g_datalist_init(GData **datalist);
extern
void g_datalist_clear(GData **datalist);
extern
gpointer g_datalist_id_get_data(GData **datalist, GQuark key_id);
extern
void g_datalist_id_set_data_full(GData **datalist, GQuark key_id, gpointer data, GDestroyNotify destroy_func);
extern
gpointer g_datalist_id_dup_data(GData **datalist, GQuark key_id, GDuplicateFunc dup_func, gpointer user_data);
extern
gboolean g_datalist_id_replace_data(GData **datalist, GQuark key_id, gpointer oldval, gpointer newval, GDestroyNotify destroy, GDestroyNotify *old_destroy);
extern
gpointer g_datalist_id_remove_no_notify(GData **datalist, GQuark key_id);
extern
void g_datalist_foreach(GData **datalist, GDataForeachFunc func, gpointer user_data);
extern
void g_datalist_set_flags(GData **datalist, guint flags);
extern
void g_datalist_unset_flags(GData **datalist, guint flags);
extern
guint g_datalist_get_flags(GData **datalist);
extern
void g_dataset_destroy(gconstpointer dataset_location);
extern
gpointer g_dataset_id_get_data(gconstpointer dataset_location, GQuark key_id);
extern
gpointer g_datalist_get_data(GData **datalist, const gchar *key);
extern
void g_dataset_id_set_data_full(gconstpointer dataset_location, GQuark key_id, gpointer data, GDestroyNotify destroy_func);
extern
gpointer g_dataset_id_remove_no_notify(gconstpointer dataset_location, GQuark key_id);
extern
void g_dataset_foreach(gconstpointer dataset_location, GDataForeachFunc func, gpointer user_data);
extern
GDate* g_date_new(void);
extern
GDate* g_date_new_dmy(GDateDay day, GDateMonth month, GDateYear year);
extern
GDate* g_date_new_julian(guint32 julian_day);
extern
void g_date_free(GDate *date);
extern
GDate* g_date_copy(const GDate *date);
extern
gboolean g_date_valid(const GDate *date);
extern
gboolean g_date_valid_day(GDateDay day);
extern
gboolean g_date_valid_month(GDateMonth month);
extern
gboolean g_date_valid_year(GDateYear year);
extern
gboolean g_date_valid_weekday(GDateWeekday weekday);
extern
gboolean g_date_valid_julian(guint32 julian_date);
extern
gboolean g_date_valid_dmy(GDateDay day, GDateMonth month, GDateYear year);
extern
GDateWeekday g_date_get_weekday(const GDate *date);
extern
GDateMonth g_date_get_month(const GDate *date);
extern
GDateYear g_date_get_year(const GDate *date);
extern
GDateDay g_date_get_day(const GDate *date);
extern
guint32 g_date_get_julian(const GDate *date);
extern
guint g_date_get_day_of_year(const GDate *date);
extern
guint g_date_get_monday_week_of_year(const GDate *date);
extern
guint g_date_get_sunday_week_of_year(const GDate *date);
extern
guint g_date_get_iso8601_week_of_year(const GDate *date);
extern
void g_date_clear(GDate *date, guint n_dates);
extern
void g_date_set_parse(GDate *date, const gchar *str);
extern
void g_date_set_time_t(GDate *date, time_t timet);
extern
void g_date_set_time_val(GDate *date, GTimeVal *timeval);
extern
void g_date_set_time(GDate *date, GTime time_);
extern
void g_date_set_month(GDate *date, GDateMonth month);
extern
void g_date_set_day(GDate *date, GDateDay day);
extern
void g_date_set_year(GDate *date, GDateYear year);
extern
void g_date_set_dmy(GDate *date, GDateDay day, GDateMonth month, GDateYear y);
extern
void g_date_set_julian(GDate *date, guint32 julian_date);
extern
gboolean g_date_is_first_of_month(const GDate *date);
extern
gboolean g_date_is_last_of_month(const GDate *date);
extern
void g_date_add_days(GDate *date, guint n_days);
extern
void g_date_subtract_days(GDate *date, guint n_days);
extern
void g_date_add_months(GDate *date, guint n_months);
extern
void g_date_subtract_months(GDate *date, guint n_months);
extern
void g_date_add_years(GDate *date, guint n_years);
extern
void g_date_subtract_years(GDate *date, guint n_years);
extern
gboolean g_date_is_leap_year(GDateYear year);
extern
guint8 g_date_get_days_in_month(GDateMonth month, GDateYear year);
extern
guint8 g_date_get_monday_weeks_in_year(GDateYear year);
extern
guint8 g_date_get_sunday_weeks_in_year(GDateYear year);
extern
gint g_date_days_between(const GDate *date1, const GDate *date2);
extern
gint g_date_compare(const GDate *lhs, const GDate *rhs);
extern
void g_date_to_struct_tm(const GDate *date, struct tm *tm);
extern
void g_date_clamp(GDate *date, const GDate *min_date, const GDate *max_date);
extern
void g_date_order(GDate *date1, GDate *date2);
extern
gsize g_date_strftime(gchar *s, gsize slen, const gchar *format, const GDate *date);
extern
GTimeZone * g_time_zone_new(const gchar *identifier);
extern
GTimeZone * g_time_zone_new_utc(void);
extern
GTimeZone * g_time_zone_new_local(void);
GLIB_AVAILABLE_IN_2_58 GTimeZone * g_time_zone_new_offset(gint32 seconds);
extern
GTimeZone * g_time_zone_ref(GTimeZone *tz);
extern
void g_time_zone_unref(GTimeZone *tz);
extern
gint g_time_zone_find_interval(GTimeZone *tz, GTimeType type, gint64 time_);
extern
gint g_time_zone_adjust_time(GTimeZone *tz, GTimeType type, gint64 *time_);
extern
const gchar * g_time_zone_get_abbreviation(GTimeZone *tz, gint interval);
extern
gint32 g_time_zone_get_offset(GTimeZone *tz, gint interval);
extern
gboolean g_time_zone_is_dst(GTimeZone *tz, gint interval);
GLIB_AVAILABLE_IN_2_58 const gchar * g_time_zone_get_identifier(GTimeZone *tz);
extern
void g_date_time_unref(GDateTime *datetime);
extern
GDateTime * g_date_time_ref(GDateTime *datetime);
extern
GDateTime * g_date_time_new_now(GTimeZone *tz);
extern
GDateTime * g_date_time_new_now_local(void);
extern
GDateTime * g_date_time_new_now_utc(void);
extern
GDateTime * g_date_time_new_from_unix_local(gint64 t);
extern
GDateTime * g_date_time_new_from_unix_utc(gint64 t);
extern
GDateTime * g_date_time_new_from_timeval_local(const GTimeVal *tv);
extern
GDateTime * g_date_time_new_from_timeval_utc(const GTimeVal *tv);
extern
GDateTime * g_date_time_new_from_iso8601(const gchar *text, GTimeZone *default_tz);
extern
GDateTime * g_date_time_new(GTimeZone *tz, gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
extern
GDateTime * g_date_time_new_local(gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
extern
GDateTime * g_date_time_new_utc(gint year, gint month, gint day, gint hour, gint minute, gdouble seconds);
extern
GDateTime * g_date_time_add(GDateTime *datetime, GTimeSpan timespan);
extern
GDateTime * g_date_time_add_years(GDateTime *datetime, gint years);
extern
GDateTime * g_date_time_add_months(GDateTime *datetime, gint months);
extern
GDateTime * g_date_time_add_weeks(GDateTime *datetime, gint weeks);
extern
GDateTime * g_date_time_add_days(GDateTime *datetime, gint days);
extern
GDateTime * g_date_time_add_hours(GDateTime *datetime, gint hours);
extern
GDateTime * g_date_time_add_minutes(GDateTime *datetime, gint minutes);
extern
GDateTime * g_date_time_add_seconds(GDateTime *datetime, gdouble seconds);
extern
GDateTime * g_date_time_add_full(GDateTime *datetime, gint years, gint months, gint days, gint hours, gint minutes, gdouble seconds);
extern
gint g_date_time_compare(gconstpointer dt1, gconstpointer dt2);
extern
GTimeSpan g_date_time_difference(GDateTime *end, GDateTime *begin);
extern
guint g_date_time_hash(gconstpointer datetime);
extern
gboolean g_date_time_equal(gconstpointer dt1, gconstpointer dt2);
extern
void g_date_time_get_ymd(GDateTime *datetime, gint *year, gint *month, gint *day);
extern
gint g_date_time_get_year(GDateTime *datetime);
extern
gint g_date_time_get_month(GDateTime *datetime);
extern
gint g_date_time_get_day_of_month(GDateTime *datetime);
extern
gint g_date_time_get_week_numbering_year(GDateTime *datetime);
extern
gint g_date_time_get_week_of_year(GDateTime *datetime);
extern
gint g_date_time_get_day_of_week(GDateTime *datetime);
extern
gint g_date_time_get_day_of_year(GDateTime *datetime);
extern
gint g_date_time_get_hour(GDateTime *datetime);
extern
gint g_date_time_get_minute(GDateTime *datetime);
extern
gint g_date_time_get_second(GDateTime *datetime);
extern
gint g_date_time_get_microsecond(GDateTime *datetime);
extern
gdouble g_date_time_get_seconds(GDateTime *datetime);
extern
gint64 g_date_time_to_unix(GDateTime *datetime);
extern
gboolean g_date_time_to_timeval(GDateTime *datetime, GTimeVal *tv);
extern
GTimeSpan g_date_time_get_utc_offset(GDateTime *datetime);
GLIB_AVAILABLE_IN_2_58 GTimeZone * g_date_time_get_timezone(GDateTime *datetime);
extern
const gchar * g_date_time_get_timezone_abbreviation(GDateTime *datetime);
extern
gboolean g_date_time_is_daylight_savings(GDateTime *datetime);
extern
GDateTime * g_date_time_to_timezone(GDateTime *datetime, GTimeZone *tz);
extern
GDateTime * g_date_time_to_local(GDateTime *datetime);
extern
GDateTime * g_date_time_to_utc(GDateTime *datetime);
extern
gchar * g_date_time_format(GDateTime *datetime, const gchar *format);
GLIB_AVAILABLE_IN_2_62 gchar * g_date_time_format_iso8601(GDateTime *datetime);
extern
GDir * g_dir_open(const gchar *path, guint flags, GError **error);
extern
const gchar * g_dir_read_name(GDir *dir);
extern
void g_dir_rewind(GDir *dir);
extern
void g_dir_close(GDir *dir);
extern
const gchar * g_getenv(const gchar *variable);
extern
gboolean g_setenv(const gchar *variable, const gchar *value, gboolean overwrite);
extern
void g_unsetenv(const gchar *variable);
extern
gchar ** g_listenv(void);
extern
gchar ** g_get_environ(void);
extern
const gchar * g_environ_getenv(gchar **envp, const gchar *variable);
extern
gchar ** g_environ_setenv(gchar **envp, const gchar *variable, const gchar *value, gboolean overwrite);
extern
gchar ** g_environ_unsetenv(gchar **envp, const gchar *variable);
extern
GQuark g_file_error_quark(void);
extern
GFileError g_file_error_from_errno(gint err_no);
extern
gboolean g_file_test(const gchar *filename, GFileTest test);
extern
gboolean g_file_get_contents(const gchar *filename, gchar **contents, gsize *length, GError **error);
extern
gboolean g_file_set_contents(const gchar *filename, const gchar *contents, gssize length, GError **error);
extern
gchar *g_file_read_link(const gchar *filename, GError **error);
extern
gchar *g_mkdtemp(gchar *tmpl);
extern
gchar *g_mkdtemp_full(gchar *tmpl, gint mode);
extern
gint g_mkstemp(gchar *tmpl);
extern
gint g_mkstemp_full(gchar *tmpl, gint flags, gint mode);
extern
gint g_file_open_tmp(const gchar *tmpl, gchar **name_used, GError **error);
extern
gchar *g_dir_make_tmp(const gchar *tmpl, GError **error);
extern
gchar *g_build_path(const gchar *separator, const gchar *first_element, ...);
extern
gchar *g_build_pathv(const gchar *separator, gchar **args);
extern
gchar *g_build_filename(const gchar *first_element, ...);
extern
gchar *g_build_filenamev(gchar **args);
extern
gchar *g_build_filename_valist(const gchar *first_element, va_list *args);
extern
gint g_mkdir_with_parents(const gchar *pathname, gint mode);
extern
gboolean g_path_is_absolute(const gchar *file_name);
extern
const gchar *g_path_skip_root(const gchar *file_name);
extern
const gchar *g_basename(const gchar *file_name);
extern
gchar *g_get_current_dir(void);
extern
gchar *g_path_get_basename(const gchar *file_name);
extern
gchar *g_path_get_dirname(const gchar *file_name);
GLIB_AVAILABLE_IN_2_58 gchar *g_canonicalize_filename(const gchar *filename, const gchar *relative_to);
extern
const gchar *g_strip_context(const gchar *msgid, const gchar *msgval);
extern
const gchar *g_dgettext(const gchar *domain, const gchar *msgid);
extern
const gchar *g_dcgettext(const gchar *domain, const gchar *msgid, gint category);
extern
const gchar *g_dngettext(const gchar *domain, const gchar *msgid, const gchar *msgid_plural, gulong n);
extern
const gchar *g_dpgettext(const gchar *domain, const gchar *msgctxtid, gsize msgidoffset);
extern
const gchar *g_dpgettext2(const gchar *domain, const gchar *context, const gchar *msgid);
extern
void g_free(gpointer mem);
extern
void g_clear_pointer(gpointer *pp, GDestroyNotify destroy);
extern
gpointer g_malloc(gsize n_bytes);
extern
gpointer g_malloc0(gsize n_bytes);
extern
gpointer g_realloc(gpointer mem, gsize n_bytes);
extern
gpointer g_try_malloc(gsize n_bytes);
extern
gpointer g_try_malloc0(gsize n_bytes);
extern
gpointer g_try_realloc(gpointer mem, gsize n_bytes);
extern
gpointer g_malloc_n(gsize n_blocks, gsize n_block_bytes);
extern
gpointer g_malloc0_n(gsize n_blocks, gsize n_block_bytes);
extern
gpointer g_realloc_n(gpointer mem, gsize n_blocks, gsize n_block_bytes);
extern
gpointer g_try_malloc_n(gsize n_blocks, gsize n_block_bytes);
extern
gpointer g_try_malloc0_n(gsize n_blocks, gsize n_block_bytes);
extern
gpointer g_try_realloc_n(gpointer mem, gsize n_blocks, gsize n_block_bytes);
extern
void g_mem_set_vtable(GMemVTable *vtable);
extern
gboolean g_mem_is_system_malloc(void);
extern gboolean g_mem_gc_friendly;
extern GMemVTable *glib_mem_profiler_table;
extern
void g_mem_profile(void);
extern
GNode* g_node_new(gpointer data);
extern
void g_node_destroy(GNode *root);
extern
void g_node_unlink(GNode *node);
extern
GNode* g_node_copy_deep(GNode *node, GCopyFunc copy_func, gpointer data);
extern
GNode* g_node_copy(GNode *node);
extern
GNode* g_node_insert(GNode *parent, gint position, GNode *node);
extern
GNode* g_node_insert_before(GNode *parent, GNode *sibling, GNode *node);
extern
GNode* g_node_insert_after(GNode *parent, GNode *sibling, GNode *node);
extern
GNode* g_node_prepend(GNode *parent, GNode *node);
extern
guint g_node_n_nodes(GNode *root, GTraverseFlags flags);
extern
GNode* g_node_get_root(GNode *node);
extern
gboolean g_node_is_ancestor(GNode *node, GNode *descendant);
extern
guint g_node_depth(GNode *node);
extern
GNode* g_node_find(GNode *root, GTraverseType order, GTraverseFlags flags, gpointer data);
extern
void g_node_traverse(GNode *root, GTraverseType order, GTraverseFlags flags, gint max_depth, GNodeTraverseFunc func, gpointer data);
extern
guint g_node_max_height(GNode *root);
extern
void g_node_children_foreach(GNode *node, GTraverseFlags flags, GNodeForeachFunc func, gpointer data);
extern
void g_node_reverse_children(GNode *node);
extern
guint g_node_n_children(GNode *node);
extern
GNode* g_node_nth_child(GNode *node, guint n);
extern
GNode* g_node_last_child(GNode *node);
extern
GNode* g_node_find_child(GNode *node, GTraverseFlags flags, gpointer data);
extern
gint g_node_child_position(GNode *node, GNode *child);
extern
gint g_node_child_index(GNode *node, gpointer data);
extern
GNode* g_node_first_sibling(GNode *node);
extern
GNode* g_node_last_sibling(GNode *node);
extern
GList* g_list_alloc(void);
extern
void g_list_free(GList *list);
extern
void g_list_free_1(GList *list);
extern
void g_list_free_full(GList *list, GDestroyNotify free_func);
extern
GList* g_list_append(GList *list, gpointer data);
extern
GList* g_list_prepend(GList *list, gpointer data);
extern
GList* g_list_insert(GList *list, gpointer data, gint position);
extern
GList* g_list_insert_sorted(GList *list, gpointer data, GCompareFunc func);
extern
GList* g_list_insert_sorted_with_data(GList *list, gpointer data, GCompareDataFunc func, gpointer user_data);
extern
GList* g_list_insert_before(GList *list, GList *sibling, gpointer data);
GLIB_AVAILABLE_IN_2_62 GList* g_list_insert_before_link(GList *list, GList *sibling, GList *link_);
extern
GList* g_list_concat(GList *list1, GList *list2);
extern
GList* g_list_remove(GList *list, gconstpointer data);
extern
GList* g_list_remove_all(GList *list, gconstpointer data);
extern
GList* g_list_remove_link(GList *list, GList *llink);
extern
GList* g_list_delete_link(GList *list, GList *link_);
extern
GList* g_list_reverse(GList *list);
extern
GList* g_list_copy(GList *list);
extern
GList* g_list_copy_deep(GList *list, GCopyFunc func, gpointer user_data);
extern
GList* g_list_nth(GList *list, guint n);
extern
GList* g_list_nth_prev(GList *list, guint n);
extern
GList* g_list_find(GList *list, gconstpointer data);
extern
GList* g_list_find_custom(GList *list, gconstpointer data, GCompareFunc func);
extern
gint g_list_position(GList *list, GList *llink);
extern
gint g_list_index(GList *list, gconstpointer data);
extern
GList* g_list_last(GList *list);
extern
GList* g_list_first(GList *list);
extern
guint g_list_length(GList *list);
extern
void g_list_foreach(GList *list, GFunc func, gpointer user_data);
extern
GList* g_list_sort(GList *list, GCompareFunc compare_func);
extern
GList* g_list_sort_with_data(GList *list, GCompareDataFunc compare_func, gpointer user_data);
extern
gpointer g_list_nth_data(GList *list, guint n);
extern
GHashTable* g_hash_table_new(GHashFunc hash_func, GEqualFunc key_equal_func);
extern
GHashTable* g_hash_table_new_full(GHashFunc hash_func, GEqualFunc key_equal_func, GDestroyNotify key_destroy_func, GDestroyNotify value_destroy_func);
extern
void g_hash_table_destroy(GHashTable *hash_table);
extern
gboolean g_hash_table_insert(GHashTable *hash_table, gpointer key, gpointer value);
extern
gboolean g_hash_table_replace(GHashTable *hash_table, gpointer key, gpointer value);
extern
gboolean g_hash_table_add(GHashTable *hash_table, gpointer key);
extern
gboolean g_hash_table_remove(GHashTable *hash_table, gconstpointer key);
extern
void g_hash_table_remove_all(GHashTable *hash_table);
extern
gboolean g_hash_table_steal(GHashTable *hash_table, gconstpointer key);
GLIB_AVAILABLE_IN_2_58 gboolean g_hash_table_steal_extended(GHashTable *hash_table, gconstpointer lookup_key, gpointer *stolen_key, gpointer *stolen_value);
extern
void g_hash_table_steal_all(GHashTable *hash_table);
extern
gpointer g_hash_table_lookup(GHashTable *hash_table, gconstpointer key);
extern
gboolean g_hash_table_contains(GHashTable *hash_table, gconstpointer key);
extern
gboolean g_hash_table_lookup_extended(GHashTable *hash_table, gconstpointer lookup_key, gpointer *orig_key, gpointer *value);
extern
void g_hash_table_foreach(GHashTable *hash_table, GHFunc func, gpointer user_data);
extern
gpointer g_hash_table_find(GHashTable *hash_table, GHRFunc predicate, gpointer user_data);
extern
guint g_hash_table_foreach_remove(GHashTable *hash_table, GHRFunc func, gpointer user_data);
extern
guint g_hash_table_foreach_steal(GHashTable *hash_table, GHRFunc func, gpointer user_data);
extern
guint g_hash_table_size(GHashTable *hash_table);
extern
GList * g_hash_table_get_keys(GHashTable *hash_table);
extern
GList * g_hash_table_get_values(GHashTable *hash_table);
extern
gpointer * g_hash_table_get_keys_as_array(GHashTable *hash_table, guint *length);
extern
void g_hash_table_iter_init(GHashTableIter *iter, GHashTable *hash_table);
extern
gboolean g_hash_table_iter_next(GHashTableIter *iter, gpointer *key, gpointer *value);
extern
GHashTable* g_hash_table_iter_get_hash_table(GHashTableIter *iter);
extern
void g_hash_table_iter_remove(GHashTableIter *iter);
extern
void g_hash_table_iter_replace(GHashTableIter *iter, gpointer value);
extern
void g_hash_table_iter_steal(GHashTableIter *iter);
extern
GHashTable* g_hash_table_ref(GHashTable *hash_table);
extern
void g_hash_table_unref(GHashTable *hash_table);
extern
gboolean g_str_equal(gconstpointer v1, gconstpointer v2);
extern
guint g_str_hash(gconstpointer v);
extern
gboolean g_int_equal(gconstpointer v1, gconstpointer v2);
extern
guint g_int_hash(gconstpointer v);
extern
gboolean g_int64_equal(gconstpointer v1, gconstpointer v2);
extern
guint g_int64_hash(gconstpointer v);
extern
gboolean g_double_equal(gconstpointer v1, gconstpointer v2);
extern
guint g_double_hash(gconstpointer v);
extern
guint g_direct_hash(gconstpointer v);
extern
gboolean g_direct_equal(gconstpointer v1, gconstpointer v2);
extern
GHmac * g_hmac_new(GChecksumType digest_type, const guchar *key, gsize key_len);
extern
GHmac * g_hmac_copy(const GHmac *hmac);
extern
GHmac * g_hmac_ref(GHmac *hmac);
extern
void g_hmac_unref(GHmac *hmac);
extern
void g_hmac_update(GHmac *hmac, const guchar *data, gssize length);
extern
const gchar * g_hmac_get_string(GHmac *hmac);
extern
void g_hmac_get_digest(GHmac *hmac, guint8 *buffer, gsize *digest_len);
extern
gchar *g_compute_hmac_for_data(GChecksumType digest_type, const guchar *key, gsize key_len, const guchar *data, gsize length);
extern
gchar *g_compute_hmac_for_string(GChecksumType digest_type, const guchar *key, gsize key_len, const gchar *str, gssize length);
extern
gchar *g_compute_hmac_for_bytes(GChecksumType digest_type, GBytes *key, GBytes *data);
extern
void g_hook_list_init(GHookList *hook_list, guint hook_size);
extern
void g_hook_list_clear(GHookList *hook_list);
extern
GHook* g_hook_alloc(GHookList *hook_list);
extern
void g_hook_free(GHookList *hook_list, GHook *hook);
extern
GHook * g_hook_ref(GHookList *hook_list, GHook *hook);
extern
void g_hook_unref(GHookList *hook_list, GHook *hook);
extern
gboolean g_hook_destroy(GHookList *hook_list, gulong hook_id);
extern
void g_hook_destroy_link(GHookList *hook_list, GHook *hook);
extern
void g_hook_prepend(GHookList *hook_list, GHook *hook);
extern
void g_hook_insert_before(GHookList *hook_list, GHook *sibling, GHook *hook);
extern
void g_hook_insert_sorted(GHookList *hook_list, GHook *hook, GHookCompareFunc func);
extern
GHook* g_hook_get(GHookList *hook_list, gulong hook_id);
extern
GHook* g_hook_find(GHookList *hook_list, gboolean need_valids, GHookFindFunc func, gpointer data);
extern
GHook* g_hook_find_data(GHookList *hook_list, gboolean need_valids, gpointer data);
extern
GHook* g_hook_find_func(GHookList *hook_list, gboolean need_valids, gpointer func);
extern
GHook* g_hook_find_func_data(GHookList *hook_list, gboolean need_valids, gpointer func, gpointer data);
extern
GHook* g_hook_first_valid(GHookList *hook_list, gboolean may_be_in_call);
extern
GHook* g_hook_next_valid(GHookList *hook_list, GHook *hook, gboolean may_be_in_call);
extern
gint g_hook_compare_ids(GHook *new_hook, GHook *sibling);
extern
void g_hook_list_invoke(GHookList *hook_list, gboolean may_recurse);
extern
void g_hook_list_invoke_check(GHookList *hook_list, gboolean may_recurse);
extern
void g_hook_list_marshal(GHookList *hook_list, gboolean may_recurse, GHookMarshaller marshaller, gpointer marshal_data);
extern
void g_hook_list_marshal_check(GHookList *hook_list, gboolean may_recurse, GHookCheckMarshaller marshaller, gpointer marshal_data);
extern
gboolean g_hostname_is_non_ascii(const gchar *hostname);
extern
gboolean g_hostname_is_ascii_encoded(const gchar *hostname);
extern
gboolean g_hostname_is_ip_address(const gchar *hostname);
extern
gchar *g_hostname_to_ascii(const gchar *hostname);
extern
gchar *g_hostname_to_unicode(const gchar *hostname);
extern
gint
g_poll(GPollFD *fds, guint nfds, gint timeout);
extern
GSList* g_slist_alloc(void);
extern
void g_slist_free(GSList *list);
extern
void g_slist_free_1(GSList *list);
extern
void g_slist_free_full(GSList *list, GDestroyNotify free_func);
extern
GSList* g_slist_append(GSList *list, gpointer data);
extern
GSList* g_slist_prepend(GSList *list, gpointer data);
extern
GSList* g_slist_insert(GSList *list, gpointer data, gint position);
extern
GSList* g_slist_insert_sorted(GSList *list, gpointer data, GCompareFunc func);
extern
GSList* g_slist_insert_sorted_with_data(GSList *list, gpointer data, GCompareDataFunc func, gpointer user_data);
extern
GSList* g_slist_insert_before(GSList *slist, GSList *sibling, gpointer data);
extern
GSList* g_slist_concat(GSList *list1, GSList *list2);
extern
GSList* g_slist_remove(GSList *list, gconstpointer data);
extern
GSList* g_slist_remove_all(GSList *list, gconstpointer data);
extern
GSList* g_slist_remove_link(GSList *list, GSList *link_);
extern
GSList* g_slist_delete_link(GSList *list, GSList *link_);
extern
GSList* g_slist_reverse(GSList *list);
extern
GSList* g_slist_copy(GSList *list);
extern
GSList* g_slist_copy_deep(GSList *list, GCopyFunc func, gpointer user_data);
extern
GSList* g_slist_nth(GSList *list, guint n);
extern
GSList* g_slist_find(GSList *list, gconstpointer data);
extern
GSList* g_slist_find_custom(GSList *list, gconstpointer data, GCompareFunc func);
extern
gint g_slist_position(GSList *list, GSList *llink);
extern
gint g_slist_index(GSList *list, gconstpointer data);
extern
GSList* g_slist_last(GSList *list);
extern
guint g_slist_length(GSList *list);
extern
void g_slist_foreach(GSList *list, GFunc func, gpointer user_data);
extern
GSList* g_slist_sort(GSList *list, GCompareFunc compare_func);
extern
GSList* g_slist_sort_with_data(GSList *list, GCompareDataFunc compare_func, gpointer user_data);
extern
gpointer g_slist_nth_data(GSList *list, guint n);
extern
GMainContext *g_main_context_new(void);
extern
GMainContext *g_main_context_ref(GMainContext *context);
extern
void g_main_context_unref(GMainContext *context);
extern
GMainContext *g_main_context_default(void);
extern
gboolean g_main_context_iteration(GMainContext *context, gboolean may_block);
extern
gboolean g_main_context_pending(GMainContext *context);
extern
GSource *g_main_context_find_source_by_id(GMainContext *context, guint source_id);
extern
GSource *g_main_context_find_source_by_user_data(GMainContext *context, gpointer user_data);
extern
GSource *g_main_context_find_source_by_funcs_user_data(GMainContext *context, GSourceFuncs *funcs, gpointer user_data);
extern
void g_main_context_wakeup(GMainContext *context);
extern
gboolean g_main_context_acquire(GMainContext *context);
extern
void g_main_context_release(GMainContext *context);
extern
gboolean g_main_context_is_owner(GMainContext *context);
extern
gboolean g_main_context_wait(GMainContext *context, GCond *cond, GMutex *mutex);
extern
gboolean g_main_context_prepare(GMainContext *context, gint *priority);
extern
gint g_main_context_query(GMainContext *context, gint max_priority, gint *timeout_, GPollFD *fds, gint n_fds);
extern
gboolean g_main_context_check(GMainContext *context, gint max_priority, GPollFD *fds, gint n_fds);
extern
void g_main_context_dispatch(GMainContext *context);
extern
void g_main_context_set_poll_func(GMainContext *context, GPollFunc func);
extern
GPollFunc g_main_context_get_poll_func(GMainContext *context);
extern
void g_main_context_add_poll(GMainContext *context, GPollFD *fd, gint priority);
extern
void g_main_context_remove_poll(GMainContext *context, GPollFD *fd);
extern
gint g_main_depth(void);
extern
GSource *g_main_current_source(void);
extern
void g_main_context_push_thread_default(GMainContext *context);
extern
void g_main_context_pop_thread_default(GMainContext *context);
extern
GMainContext *g_main_context_get_thread_default(void);
extern
GMainContext *g_main_context_ref_thread_default(void);
extern
GMainLoop *g_main_loop_new(GMainContext *context, gboolean is_running);
extern
void g_main_loop_run(GMainLoop *loop);
extern
void g_main_loop_quit(GMainLoop *loop);
extern
GMainLoop *g_main_loop_ref(GMainLoop *loop);
extern
void g_main_loop_unref(GMainLoop *loop);
extern
gboolean g_main_loop_is_running(GMainLoop *loop);
extern
GMainContext *g_main_loop_get_context(GMainLoop *loop);
extern
GSource *g_source_new(GSourceFuncs *source_funcs, guint struct_size);
extern
GSource *g_source_ref(GSource *source);
extern
void g_source_unref(GSource *source);
extern
guint g_source_attach(GSource *source, GMainContext *context);
extern
void g_source_destroy(GSource *source);
extern
void g_source_set_priority(GSource *source, gint priority);
extern
gint g_source_get_priority(GSource *source);
extern
void g_source_set_can_recurse(GSource *source, gboolean can_recurse);
extern
gboolean g_source_get_can_recurse(GSource *source);
extern
guint g_source_get_id(GSource *source);
extern
GMainContext *g_source_get_context(GSource *source);
extern
void g_source_set_callback(GSource *source, GSourceFunc func, gpointer data, GDestroyNotify notify);
extern
void g_source_set_funcs(GSource *source, GSourceFuncs *funcs);
extern
gboolean g_source_is_destroyed(GSource *source);
extern
void g_source_set_name(GSource *source, const char *name);
extern
const char * g_source_get_name(GSource *source);
extern
void g_source_set_name_by_id(guint tag, const char *name);
extern
void g_source_set_ready_time(GSource *source, gint64 ready_time);
extern
gint64 g_source_get_ready_time(GSource *source);
extern
gpointer g_source_add_unix_fd(GSource *source, gint fd, GIOCondition events);
extern
void g_source_modify_unix_fd(GSource *source, gpointer tag, GIOCondition new_events);
extern
void g_source_remove_unix_fd(GSource *source, gpointer tag);
GLIB_AVAILABLE_IN_UINX GIOCondition g_source_query_unix_fd(GSource *source, gpointer tag);
extern
void g_source_set_callback_indirect(GSource *source, gpointer callback_data, GSourceCallbackFuncs *callback_funcs);
extern
void g_source_add_poll(GSource *source, GPollFD *fd);
extern
void g_source_remove_poll(GSource *source, GPollFD *fd);
extern
void g_source_add_child_source(GSource *source, GSource *child_source);
extern
void g_source_remove_child_source(GSource *source, GSource *child_source);
extern
void g_source_get_current_time(GSource *source, GTimeVal *timeval);
extern
gint64 g_source_get_time(GSource *source);
extern
GSource *g_idle_source_new(void);
extern
GSource *g_child_watch_source_new(GPid pid);
extern
GSource *g_timeout_source_new(guint interval);
extern
GSource *g_timeout_source_new_seconds(guint interval);
extern
void g_get_current_time(GTimeVal *result);
extern
gint64 g_get_monotonic_time(void);
extern
gint64 g_get_real_time(void);
extern
gboolean g_source_remove(guint tag);
extern
gboolean g_source_remove_by_user_data(gpointer user_data);
extern
gboolean g_source_remove_by_funcs_user_data(GSourceFuncs *funcs, gpointer user_data);
extern
void g_clear_handle_id(guint *tag_ptr, GClearHandleFunc clear_func);
extern
guint g_timeout_add_full(gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify);
extern
guint g_timeout_add(guint interval, GSourceFunc function, gpointer data);
extern
guint g_timeout_add_seconds_full(gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify);
extern
guint g_timeout_add_seconds(guint interval, GSourceFunc function, gpointer data);
extern
guint g_child_watch_add_full(gint priority, GPid pid, GChildWatchFunc function, gpointer data, GDestroyNotify notify);
extern
guint g_child_watch_add(GPid pid, GChildWatchFunc function, gpointer data);
extern
guint g_idle_add(GSourceFunc function, gpointer data);
extern
guint g_idle_add_full(gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify);
extern
gboolean g_idle_remove_by_data(gpointer data);
extern
void g_main_context_invoke_full(GMainContext *context, gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify);
extern
void g_main_context_invoke(GMainContext *context, GSourceFunc function, gpointer data);
extern GSourceFuncs g_timeout_funcs;
extern GSourceFuncs g_child_watch_funcs;
extern GSourceFuncs g_idle_funcs;
GLIB_AVAILABLE_IN_UINX GSourceFuncs g_unix_signal_funcs;
GLIB_AVAILABLE_IN_UINX GSourceFuncs g_unix_fd_source_funcs;
extern
guint32 g_unicode_script_to_iso15924(GUnicodeScript script);
extern
GUnicodeScript g_unicode_script_from_iso15924(guint32 iso15924);
extern
gboolean g_unichar_isalnum(gunichar c);
extern
gboolean g_unichar_isalpha(gunichar c);
extern
gboolean g_unichar_iscntrl(gunichar c);
extern
gboolean g_unichar_isdigit(gunichar c);
extern
gboolean g_unichar_isgraph(gunichar c);
extern
gboolean g_unichar_islower(gunichar c);
extern
gboolean g_unichar_isprint(gunichar c);
extern
gboolean g_unichar_ispunct(gunichar c);
extern
gboolean g_unichar_isspace(gunichar c);
extern
gboolean g_unichar_isupper(gunichar c);
extern
gboolean g_unichar_isxdigit(gunichar c);
extern
gboolean g_unichar_istitle(gunichar c);
extern
gboolean g_unichar_isdefined(gunichar c);
extern
gboolean g_unichar_iswide(gunichar c);
extern
gboolean g_unichar_iswide_cjk(gunichar c);
extern
gboolean g_unichar_iszerowidth(gunichar c);
extern
gboolean g_unichar_ismark(gunichar c);
extern
gunichar g_unichar_toupper(gunichar c);
extern
gunichar g_unichar_tolower(gunichar c);
extern
gunichar g_unichar_totitle(gunichar c);
extern
gint g_unichar_digit_value(gunichar c);
extern
gint g_unichar_xdigit_value(gunichar c);
extern
GUnicodeType g_unichar_type(gunichar c);
extern
GUnicodeBreakType g_unichar_break_type(gunichar c);
extern
gint g_unichar_combining_class(gunichar uc);
extern
gboolean g_unichar_get_mirror_char(gunichar ch, gunichar *mirrored_ch);
extern
GUnicodeScript g_unichar_get_script(gunichar ch);
extern
gboolean g_unichar_validate(gunichar ch);
extern
gboolean g_unichar_compose(gunichar a, gunichar b, gunichar *ch);
extern
gboolean g_unichar_decompose(gunichar ch, gunichar *a, gunichar *b);
extern
gsize g_unichar_fully_decompose(gunichar ch, gboolean compat, gunichar *result, gsize result_len);
extern
void g_unicode_canonical_ordering(gunichar *string, gsize len);
extern
gunichar *g_unicode_canonical_decomposition(gunichar ch, gsize *result_len);
extern const gchar * const g_utf8_skip;
extern
gunichar g_utf8_get_char(const gchar *p);
extern
gunichar g_utf8_get_char_validated(const gchar *p, gssize max_len);
extern
gchar* g_utf8_offset_to_pointer(const gchar *str, glong offset);
extern
glong g_utf8_pointer_to_offset(const gchar *str, const gchar *pos);
extern
gchar* g_utf8_prev_char(const gchar *p);
extern
gchar* g_utf8_find_next_char(const gchar *p, const gchar *end);
extern
gchar* g_utf8_find_prev_char(const gchar *str, const gchar *p);
extern
glong g_utf8_strlen(const gchar *p, gssize max);
extern
gchar *g_utf8_substring(const gchar *str, glong start_pos, glong end_pos);
extern
gchar *g_utf8_strncpy(gchar *dest, const gchar *src, gsize n);
extern
gchar* g_utf8_strchr(const gchar *p, gssize len, gunichar c);
extern
gchar* g_utf8_strrchr(const gchar *p, gssize len, gunichar c);
extern
gchar* g_utf8_strreverse(const gchar *str, gssize len);
extern
gunichar2 *g_utf8_to_utf16(const gchar *str, glong len, glong *items_read, glong *items_written, GError **error);
extern
gunichar * g_utf8_to_ucs4(const gchar *str, glong len, glong *items_read, glong *items_written, GError **error);
extern
gunichar * g_utf8_to_ucs4_fast(const gchar *str, glong len, glong *items_written);
extern
gunichar * g_utf16_to_ucs4(const gunichar2 *str, glong len, glong *items_read, glong *items_written, GError **error);
extern
gchar* g_utf16_to_utf8(const gunichar2 *str, glong len, glong *items_read, glong *items_written, GError **error);
extern
gunichar2 *g_ucs4_to_utf16(const gunichar *str, glong len, glong *items_read, glong *items_written, GError **error);
extern
gchar* g_ucs4_to_utf8(const gunichar *str, glong len, glong *items_read, glong *items_written, GError **error);
extern
gint g_unichar_to_utf8(gunichar c, gchar *outbuf);
extern
gboolean g_utf8_validate(const gchar *str, gssize max_len, const gchar **end);
GLIB_AVAILABLE_IN_2_60 gboolean g_utf8_validate_len(const gchar *str, gsize max_len, const gchar **end);
extern
gchar *g_utf8_strup(const gchar *str, gssize len);
extern
gchar *g_utf8_strdown(const gchar *str, gssize len);
extern
gchar *g_utf8_casefold(const gchar *str, gssize len);
extern
gchar *g_utf8_normalize(const gchar *str, gssize len, GNormalizeMode mode);
extern
gint g_utf8_collate(const gchar *str1, const gchar *str2);
extern
gchar *g_utf8_collate_key(const gchar *str, gssize len);
extern
gchar *g_utf8_collate_key_for_filename(const gchar *str, gssize len);
extern
gchar *g_utf8_make_valid(const gchar *str, gssize len);
extern
GString* g_string_new(const gchar *init);
extern
GString* g_string_new_len(const gchar *init, gssize len);
extern
GString* g_string_sized_new(gsize dfl_size);
extern
gchar* g_string_free(GString *string, gboolean free_segment);
extern
GBytes* g_string_free_to_bytes(GString *string);
extern
gboolean g_string_equal(const GString *v, const GString *v2);
extern
guint g_string_hash(const GString *str);
extern
GString* g_string_assign(GString *string, const gchar *rval);
extern
GString* g_string_truncate(GString *string, gsize len);
extern
GString* g_string_set_size(GString *string, gsize len);
extern
GString* g_string_insert_len(GString *string, gssize pos, const gchar *val, gssize len);
extern
GString* g_string_append(GString *string, const gchar *val);
extern
GString* g_string_append_len(GString *string, const gchar *val, gssize len);
extern
GString* g_string_append_c(GString *string, gchar c);
extern
GString* g_string_append_unichar(GString *string, gunichar wc);
extern
GString* g_string_prepend(GString *string, const gchar *val);
extern
GString* g_string_prepend_c(GString *string, gchar c);
extern
GString* g_string_prepend_unichar(GString *string, gunichar wc);
extern
GString* g_string_prepend_len(GString *string, const gchar *val, gssize len);
extern
GString* g_string_insert(GString *string, gssize pos, const gchar *val);
extern
GString* g_string_insert_c(GString *string, gssize pos, gchar c);
extern
GString* g_string_insert_unichar(GString *string, gssize pos, gunichar wc);
extern
GString* g_string_overwrite(GString *string, gsize pos, const gchar *val);
extern
GString* g_string_overwrite_len(GString *string, gsize pos, const gchar *val, gssize len);
extern
GString* g_string_erase(GString *string, gssize pos, gssize len);
extern
GString* g_string_ascii_down(GString *string);
extern
GString* g_string_ascii_up(GString *string);
extern
void g_string_vprintf(GString *string, const gchar *format, va_list args);
extern
void g_string_printf(GString *string, const gchar *format, ...);
extern
void g_string_append_vprintf(GString *string, const gchar *format, va_list args);
extern
void g_string_append_printf(GString *string, const gchar *format, ...);
extern
GString* g_string_append_uri_escaped(GString *string, const gchar *unescaped, const gchar *reserved_chars_allowed, gboolean allow_utf8);
extern
GString *g_string_down(GString *string);
extern
GString *g_string_up(GString *string);
extern
void g_io_channel_init(GIOChannel *channel);
extern
GIOChannel *g_io_channel_ref(GIOChannel *channel);
extern
void g_io_channel_unref(GIOChannel *channel);
extern
GIOError g_io_channel_read(GIOChannel *channel, gchar *buf, gsize count, gsize *bytes_read);
extern
GIOError g_io_channel_write(GIOChannel *channel, const gchar *buf, gsize count, gsize *bytes_written);
extern
GIOError g_io_channel_seek(GIOChannel *channel, gint64 offset, GSeekType type);
extern
void g_io_channel_close(GIOChannel *channel);
extern
GIOStatus g_io_channel_shutdown(GIOChannel *channel, gboolean flush, GError **err);
extern
guint g_io_add_watch_full(GIOChannel *channel, gint priority, GIOCondition condition, GIOFunc func, gpointer user_data, GDestroyNotify notify);
extern
GSource * g_io_create_watch(GIOChannel *channel, GIOCondition condition);
extern
guint g_io_add_watch(GIOChannel *channel, GIOCondition condition, GIOFunc func, gpointer user_data);
extern
void g_io_channel_set_buffer_size(GIOChannel *channel, gsize size);
extern
gsize g_io_channel_get_buffer_size(GIOChannel *channel);
extern
GIOCondition g_io_channel_get_buffer_condition(GIOChannel *channel);
extern
GIOStatus g_io_channel_set_flags(GIOChannel *channel, GIOFlags flags, GError **error);
extern
GIOFlags g_io_channel_get_flags(GIOChannel *channel);
extern
void g_io_channel_set_line_term(GIOChannel *channel, const gchar *line_term, gint length);
extern
const gchar * g_io_channel_get_line_term(GIOChannel *channel, gint *length);
extern
void g_io_channel_set_buffered(GIOChannel *channel, gboolean buffered);
extern
gboolean g_io_channel_get_buffered(GIOChannel *channel);
extern
GIOStatus g_io_channel_set_encoding(GIOChannel *channel, const gchar *encoding, GError **error);
extern
const gchar * g_io_channel_get_encoding(GIOChannel *channel);
extern
void g_io_channel_set_close_on_unref(GIOChannel *channel, gboolean do_close);
extern
gboolean g_io_channel_get_close_on_unref(GIOChannel *channel);
extern
GIOStatus g_io_channel_flush(GIOChannel *channel, GError **error);
extern
GIOStatus g_io_channel_read_line(GIOChannel *channel, gchar **str_return, gsize *length, gsize *terminator_pos, GError **error);
extern
GIOStatus g_io_channel_read_line_string(GIOChannel *channel, GString *buffer, gsize *terminator_pos, GError **error);
extern
GIOStatus g_io_channel_read_to_end(GIOChannel *channel, gchar **str_return, gsize *length, GError **error);
extern
GIOStatus g_io_channel_read_chars(GIOChannel *channel, gchar *buf, gsize count, gsize *bytes_read, GError **error);
extern
GIOStatus g_io_channel_read_unichar(GIOChannel *channel, gunichar *thechar, GError **error);
extern
GIOStatus g_io_channel_write_chars(GIOChannel *channel, const gchar *buf, gssize count, gsize *bytes_written, GError **error);
extern
GIOStatus g_io_channel_write_unichar(GIOChannel *channel, gunichar thechar, GError **error);
extern
GIOStatus g_io_channel_seek_position(GIOChannel *channel, gint64 offset, GSeekType type, GError **error);
extern
GIOChannel* g_io_channel_new_file(const gchar *filename, const gchar *mode, GError **error);
extern
GQuark g_io_channel_error_quark(void);
extern
GIOChannelError g_io_channel_error_from_errno(gint en);
GLIB_AVAILABLE_IN_UINX GIOChannel* g_io_channel_unix_new(int fd);
GLIB_AVAILABLE_IN_UINX gint g_io_channel_unix_get_fd(GIOChannel *channel);
extern GSourceFuncs g_io_watch_funcs;
extern
GQuark g_key_file_error_quark(void);
extern
GKeyFile *g_key_file_new(void);
extern
GKeyFile *g_key_file_ref(GKeyFile *key_file);
extern
void g_key_file_unref(GKeyFile *key_file);
extern
void g_key_file_free(GKeyFile *key_file);
extern
void g_key_file_set_list_separator(GKeyFile *key_file, gchar separator);
extern
gboolean g_key_file_load_from_file(GKeyFile *key_file, const gchar *file, GKeyFileFlags flags, GError **error);
extern
gboolean g_key_file_load_from_data(GKeyFile *key_file, const gchar *data, gsize length, GKeyFileFlags flags, GError **error);
extern
gboolean g_key_file_load_from_bytes(GKeyFile *key_file, GBytes *bytes, GKeyFileFlags flags, GError **error);
extern
gboolean g_key_file_load_from_dirs(GKeyFile *key_file, const gchar *file, const gchar **search_dirs, gchar **full_path, GKeyFileFlags flags, GError **error);
extern
gboolean g_key_file_load_from_data_dirs(GKeyFile *key_file, const gchar *file, gchar **full_path, GKeyFileFlags flags, GError **error);
extern
gchar *g_key_file_to_data(GKeyFile *key_file, gsize *length, GError **error);
extern
gboolean g_key_file_save_to_file(GKeyFile *key_file, const gchar *filename, GError **error);
extern
gchar *g_key_file_get_start_group(GKeyFile *key_file);
extern
gchar **g_key_file_get_groups(GKeyFile *key_file, gsize *length);
extern
gchar **g_key_file_get_keys(GKeyFile *key_file, const gchar *group_name, gsize *length, GError **error);
extern
gboolean g_key_file_has_group(GKeyFile *key_file, const gchar *group_name);
extern
gboolean g_key_file_has_key(GKeyFile *key_file, const gchar *group_name, const gchar *key, GError **error);
extern
gchar *g_key_file_get_value(GKeyFile *key_file, const gchar *group_name, const gchar *key, GError **error);
extern
void g_key_file_set_value(GKeyFile *key_file, const gchar *group_name, const gchar *key, const gchar *value);
extern
gchar *g_key_file_get_string(GKeyFile *key_file, const gchar *group_name, const gchar *key, GError **error);
extern
void g_key_file_set_string(GKeyFile *key_file, const gchar *group_name, const gchar *key, const gchar *string);
extern
gchar *g_key_file_get_locale_string(GKeyFile *key_file, const gchar *group_name, const gchar *key, const gchar *locale, GError **error);
extern
gchar *g_key_file_get_locale_for_key(GKeyFile *key_file, const gchar *group_name, const gchar *key, const gchar *locale);
extern
void g_key_file_set_locale_string(GKeyFile *key_file, const gchar *group_name, const gchar *key, const gchar *locale, const gchar *string);
extern
gboolean g_key_file_get_boolean(GKeyFile *key_file, const gchar *group_name, const gchar *key, GError **error);
extern
void g_key_file_set_boolean(GKeyFile *key_file, const gchar *group_name, const gchar *key, gboolean value);
extern
gint g_key_file_get_integer(GKeyFile *key_file, const gchar *group_name, const gchar *key, GError **error);
extern
void g_key_file_set_integer(GKeyFile *key_file, const gchar *group_name, const gchar *key, gint value);
extern
gint64 g_key_file_get_int64(GKeyFile *key_file, const gchar *group_name, const gchar *key, GError **error);
extern
void g_key_file_set_int64(GKeyFile *key_file, const gchar *group_name, const gchar *key, gint64 value);
extern
guint64 g_key_file_get_uint64(GKeyFile *key_file, const gchar *group_name, const gchar *key, GError **error);
extern
void g_key_file_set_uint64(GKeyFile *key_file, const gchar *group_name, const gchar *key, guint64 value);
extern
gdouble g_key_file_get_double(GKeyFile *key_file, const gchar *group_name, const gchar *key, GError **error);
extern
void g_key_file_set_double(GKeyFile *key_file, const gchar *group_name, const gchar *key, gdouble value);
extern
gchar **g_key_file_get_string_list(GKeyFile *key_file, const gchar *group_name, const gchar *key, gsize *length, GError **error);
extern
void g_key_file_set_string_list(GKeyFile *key_file, const gchar *group_name, const gchar *key, const gchar * const list[], gsize length);
extern
gchar **g_key_file_get_locale_string_list(GKeyFile *key_file, const gchar *group_name, const gchar *key, const gchar *locale, gsize *length, GError **error);
extern
void g_key_file_set_locale_string_list(GKeyFile *key_file, const gchar *group_name, const gchar *key, const gchar *locale, const gchar * const list[], gsize length);
extern
gboolean *g_key_file_get_boolean_list(GKeyFile *key_file, const gchar *group_name, const gchar *key, gsize *length, GError **error);
extern
void g_key_file_set_boolean_list(GKeyFile *key_file, const gchar *group_name, const gchar *key, gboolean list[], gsize length);
extern
gint *g_key_file_get_integer_list(GKeyFile *key_file, const gchar *group_name, const gchar *key, gsize *length, GError **error);
extern
void g_key_file_set_double_list(GKeyFile *key_file, const gchar *group_name, const gchar *key, gdouble list[], gsize length);
extern
gdouble *g_key_file_get_double_list(GKeyFile *key_file, const gchar *group_name, const gchar *key, gsize *length, GError **error);
extern
void g_key_file_set_integer_list(GKeyFile *key_file, const gchar *group_name, const gchar *key, gint list[], gsize length);
extern
gboolean g_key_file_set_comment(GKeyFile *key_file, const gchar *group_name, const gchar *key, const gchar *comment, GError **error);
extern
gchar *g_key_file_get_comment(GKeyFile *key_file, const gchar *group_name, const gchar *key, GError **error);
extern
gboolean g_key_file_remove_comment(GKeyFile *key_file, const gchar *group_name, const gchar *key, GError **error);
extern
gboolean g_key_file_remove_key(GKeyFile *key_file, const gchar *group_name, const gchar *key, GError **error);
extern
gboolean g_key_file_remove_group(GKeyFile *key_file, const gchar *group_name, GError **error);
extern
GMappedFile *g_mapped_file_new(const gchar *filename, gboolean writable, GError **error);
extern
GMappedFile *g_mapped_file_new_from_fd(gint fd, gboolean writable, GError **error);
extern
gsize g_mapped_file_get_length(GMappedFile *file);
extern
gchar *g_mapped_file_get_contents(GMappedFile *file);
extern
GBytes * g_mapped_file_get_bytes(GMappedFile *file);
extern
GMappedFile *g_mapped_file_ref(GMappedFile *file);
extern
void g_mapped_file_unref(GMappedFile *file);
extern
void g_mapped_file_free(GMappedFile *file);
extern
GQuark g_markup_error_quark(void);
extern
GMarkupParseContext *g_markup_parse_context_new(const GMarkupParser *parser, GMarkupParseFlags flags, gpointer user_data, GDestroyNotify user_data_dnotify);
extern
GMarkupParseContext *g_markup_parse_context_ref(GMarkupParseContext *context);
extern
void g_markup_parse_context_unref(GMarkupParseContext *context);
extern
void g_markup_parse_context_free(GMarkupParseContext *context);
extern
gboolean g_markup_parse_context_parse(GMarkupParseContext *context, const gchar *text, gssize text_len, GError **error);
extern
void g_markup_parse_context_push(GMarkupParseContext *context, const GMarkupParser *parser, gpointer user_data);
extern
gpointer g_markup_parse_context_pop(GMarkupParseContext *context);
extern
gboolean g_markup_parse_context_end_parse(GMarkupParseContext *context, GError **error);
extern
const gchar * g_markup_parse_context_get_element(GMarkupParseContext *context);
extern
const GSList * g_markup_parse_context_get_element_stack(GMarkupParseContext *context);
extern
void g_markup_parse_context_get_position(GMarkupParseContext *context, gint *line_number, gint *char_number);
extern
gpointer g_markup_parse_context_get_user_data(GMarkupParseContext *context);
extern
gchar* g_markup_escape_text(const gchar *text, gssize length);
extern
gchar *g_markup_printf_escaped(const char *format, ...);
extern
gchar *g_markup_vprintf_escaped(const char *format, va_list args);
extern
gboolean g_markup_collect_attributes(const gchar *element_name, const gchar **attribute_names, const gchar **attribute_values, GError **error, GMarkupCollectType first_type, const gchar *first_attr, ...);
extern
gboolean g_variant_type_string_is_valid(const gchar *type_string);
extern
gboolean g_variant_type_string_scan(const gchar *string, const gchar *limit, const gchar **endptr);
extern
void g_variant_type_free(GVariantType *type);
extern
GVariantType * g_variant_type_copy(const GVariantType *type);
extern
GVariantType * g_variant_type_new(const gchar *type_string);
extern
gsize g_variant_type_get_string_length(const GVariantType *type);
extern
const gchar * g_variant_type_peek_string(const GVariantType *type);
extern
gchar * g_variant_type_dup_string(const GVariantType *type);
extern
gboolean g_variant_type_is_definite(const GVariantType *type);
extern
gboolean g_variant_type_is_container(const GVariantType *type);
extern
gboolean g_variant_type_is_basic(const GVariantType *type);
extern
gboolean g_variant_type_is_maybe(const GVariantType *type);
extern
gboolean g_variant_type_is_array(const GVariantType *type);
extern
gboolean g_variant_type_is_tuple(const GVariantType *type);
extern
gboolean g_variant_type_is_dict_entry(const GVariantType *type);
extern
gboolean g_variant_type_is_variant(const GVariantType *type);
extern
guint g_variant_type_hash(gconstpointer type);
extern
gboolean g_variant_type_equal(gconstpointer type1, gconstpointer type2);
extern
gboolean g_variant_type_is_subtype_of(const GVariantType *type, const GVariantType *supertype);
extern
const GVariantType * g_variant_type_element(const GVariantType *type);
extern
const GVariantType * g_variant_type_first(const GVariantType *type);
extern
const GVariantType * g_variant_type_next(const GVariantType *type);
extern
gsize g_variant_type_n_items(const GVariantType *type);
extern
const GVariantType * g_variant_type_key(const GVariantType *type);
extern
const GVariantType * g_variant_type_value(const GVariantType *type);
extern
GVariantType * g_variant_type_new_array(const GVariantType *element);
extern
GVariantType * g_variant_type_new_maybe(const GVariantType *element);
extern
GVariantType * g_variant_type_new_tuple(const GVariantType * const *items, gint length);
extern
GVariantType * g_variant_type_new_dict_entry(const GVariantType *key, const GVariantType *value);
extern
const GVariantType * g_variant_type_checked_(const gchar *);
GLIB_AVAILABLE_IN_2_60 gsize g_variant_type_string_get_depth_(const gchar *type_string);
extern
void g_variant_unref(GVariant *value);
extern
GVariant * g_variant_ref(GVariant *value);
extern
GVariant * g_variant_ref_sink(GVariant *value);
extern
gboolean g_variant_is_floating(GVariant *value);
extern
GVariant * g_variant_take_ref(GVariant *value);
extern
const GVariantType * g_variant_get_type(GVariant *value);
extern
const gchar * g_variant_get_type_string(GVariant *value);
extern
gboolean g_variant_is_of_type(GVariant *value, const GVariantType *type);
extern
gboolean g_variant_is_container(GVariant *value);
extern
GVariantClass g_variant_classify(GVariant *value);
extern
GVariant * g_variant_new_boolean(gboolean value);
extern
GVariant * g_variant_new_byte(guint8 value);
extern
GVariant * g_variant_new_int16(gint16 value);
extern
GVariant * g_variant_new_uint16(guint16 value);
extern
GVariant * g_variant_new_int32(gint32 value);
extern
GVariant * g_variant_new_uint32(guint32 value);
extern
GVariant * g_variant_new_int64(gint64 value);
extern
GVariant * g_variant_new_uint64(guint64 value);
extern
GVariant * g_variant_new_handle(gint32 value);
extern
GVariant * g_variant_new_double(gdouble value);
extern
GVariant * g_variant_new_string(const gchar *string);
extern
GVariant * g_variant_new_take_string(gchar *string);
extern
GVariant * g_variant_new_printf(const gchar *format_string, ...);
extern
GVariant * g_variant_new_object_path(const gchar *object_path);
extern
gboolean g_variant_is_object_path(const gchar *string);
extern
GVariant * g_variant_new_signature(const gchar *signature);
extern
gboolean g_variant_is_signature(const gchar *string);
extern
GVariant * g_variant_new_variant(GVariant *value);
extern
GVariant * g_variant_new_strv(const gchar * const *strv, gssize length);
extern
GVariant * g_variant_new_objv(const gchar * const *strv, gssize length);
extern
GVariant * g_variant_new_bytestring(const gchar *string);
extern
GVariant * g_variant_new_bytestring_array(const gchar * const *strv, gssize length);
extern
GVariant * g_variant_new_fixed_array(const GVariantType *element_type, gconstpointer elements, gsize n_elements, gsize element_size);
extern
gboolean g_variant_get_boolean(GVariant *value);
extern
guint8 g_variant_get_byte(GVariant *value);
extern
gint16 g_variant_get_int16(GVariant *value);
extern
guint16 g_variant_get_uint16(GVariant *value);
extern
gint32 g_variant_get_int32(GVariant *value);
extern
guint32 g_variant_get_uint32(GVariant *value);
extern
gint64 g_variant_get_int64(GVariant *value);
extern
guint64 g_variant_get_uint64(GVariant *value);
extern
gint32 g_variant_get_handle(GVariant *value);
extern
gdouble g_variant_get_double(GVariant *value);
extern
GVariant * g_variant_get_variant(GVariant *value);
extern
const gchar * g_variant_get_string(GVariant *value, gsize *length);
extern
gchar * g_variant_dup_string(GVariant *value, gsize *length);
extern
const gchar ** g_variant_get_strv(GVariant *value, gsize *length);
extern
gchar ** g_variant_dup_strv(GVariant *value, gsize *length);
extern
const gchar ** g_variant_get_objv(GVariant *value, gsize *length);
extern
gchar ** g_variant_dup_objv(GVariant *value, gsize *length);
extern
const gchar * g_variant_get_bytestring(GVariant *value);
extern
gchar * g_variant_dup_bytestring(GVariant *value, gsize *length);
extern
const gchar ** g_variant_get_bytestring_array(GVariant *value, gsize *length);
extern
gchar ** g_variant_dup_bytestring_array(GVariant *value, gsize *length);
extern
GVariant * g_variant_new_maybe(const GVariantType *child_type, GVariant *child);
extern
GVariant * g_variant_new_array(const GVariantType *child_type, GVariant * const *children, gsize n_children);
extern
GVariant * g_variant_new_tuple(GVariant * const *children, gsize n_children);
extern
GVariant * g_variant_new_dict_entry(GVariant *key, GVariant *value);
extern
GVariant * g_variant_get_maybe(GVariant *value);
extern
gsize g_variant_n_children(GVariant *value);
extern
void g_variant_get_child(GVariant *value, gsize index_, const gchar *format_string, ...);
extern
GVariant * g_variant_get_child_value(GVariant *value, gsize index_);
extern
gboolean g_variant_lookup(GVariant *dictionary, const gchar *key, const gchar *format_string, ...);
extern
GVariant * g_variant_lookup_value(GVariant *dictionary, const gchar *key, const GVariantType *expected_type);
extern
gconstpointer g_variant_get_fixed_array(GVariant *value, gsize *n_elements, gsize element_size);
extern
gsize g_variant_get_size(GVariant *value);
extern
gconstpointer g_variant_get_data(GVariant *value);
extern
GBytes * g_variant_get_data_as_bytes(GVariant *value);
extern
void g_variant_store(GVariant *value, gpointer data);
extern
gchar * g_variant_print(GVariant *value, gboolean type_annotate);
extern
GString * g_variant_print_string(GVariant *value, GString *string, gboolean type_annotate);
extern
guint g_variant_hash(gconstpointer value);
extern
gboolean g_variant_equal(gconstpointer one, gconstpointer two);
extern
GVariant * g_variant_get_normal_form(GVariant *value);
extern
gboolean g_variant_is_normal_form(GVariant *value);
extern
GVariant * g_variant_byteswap(GVariant *value);
extern
GVariant * g_variant_new_from_bytes(const GVariantType *type, GBytes *bytes, gboolean trusted);
extern
GVariant * g_variant_new_from_data(const GVariantType *type, gconstpointer data, gsize size, gboolean trusted, GDestroyNotify notify, gpointer user_data);
extern
GVariantIter * g_variant_iter_new(GVariant *value);
extern
gsize g_variant_iter_init(GVariantIter *iter, GVariant *value);
extern
GVariantIter * g_variant_iter_copy(GVariantIter *iter);
extern
gsize g_variant_iter_n_children(GVariantIter *iter);
extern
void g_variant_iter_free(GVariantIter *iter);
extern
GVariant * g_variant_iter_next_value(GVariantIter *iter);
extern
gboolean g_variant_iter_next(GVariantIter *iter, const gchar *format_string, ...);
extern
gboolean g_variant_iter_loop(GVariantIter *iter, const gchar *format_string, ...);
extern
GQuark g_variant_parser_get_error_quark(void);
extern
GQuark g_variant_parse_error_quark(void);
extern
GVariantBuilder * g_variant_builder_new(const GVariantType *type);
extern
void g_variant_builder_unref(GVariantBuilder *builder);
extern
GVariantBuilder * g_variant_builder_ref(GVariantBuilder *builder);
extern
void g_variant_builder_init(GVariantBuilder *builder, const GVariantType *type);
extern
GVariant * g_variant_builder_end(GVariantBuilder *builder);
extern
void g_variant_builder_clear(GVariantBuilder *builder);
extern
void g_variant_builder_open(GVariantBuilder *builder, const GVariantType *type);
extern
void g_variant_builder_close(GVariantBuilder *builder);
extern
void g_variant_builder_add_value(GVariantBuilder *builder, GVariant *value);
extern
void g_variant_builder_add(GVariantBuilder *builder, const gchar *format_string, ...);
extern
void g_variant_builder_add_parsed(GVariantBuilder *builder, const gchar *format, ...);
extern
GVariant * g_variant_new(const gchar *format_string, ...);
extern
void g_variant_get(GVariant *value, const gchar *format_string, ...);
extern
GVariant * g_variant_new_va(const gchar *format_string, const gchar **endptr, va_list *app);
extern
void g_variant_get_va(GVariant *value, const gchar *format_string, const gchar **endptr, va_list *app);
extern
gboolean g_variant_check_format_string(GVariant *value, const gchar *format_string, gboolean copy_only);
extern
GVariant * g_variant_parse(const GVariantType *type, const gchar *text, const gchar *limit, const gchar **endptr, GError **error);
extern
GVariant * g_variant_new_parsed(const gchar *format, ...);
extern
GVariant * g_variant_new_parsed_va(const gchar *format, va_list *app);
extern
gchar * g_variant_parse_error_print_context(GError *error, const gchar *source_str);
extern
gint g_variant_compare(gconstpointer one, gconstpointer two);
extern
GVariantDict * g_variant_dict_new(GVariant *from_asv);
extern
void g_variant_dict_init(GVariantDict *dict, GVariant *from_asv);
extern
gboolean g_variant_dict_lookup(GVariantDict *dict, const gchar *key, const gchar *format_string, ...);
extern
GVariant * g_variant_dict_lookup_value(GVariantDict *dict, const gchar *key, const GVariantType *expected_type);
extern
gboolean g_variant_dict_contains(GVariantDict *dict, const gchar *key);
extern
void g_variant_dict_insert(GVariantDict *dict, const gchar *key, const gchar *format_string, ...);
extern
void g_variant_dict_insert_value(GVariantDict *dict, const gchar *key, GVariant *value);
extern
gboolean g_variant_dict_remove(GVariantDict *dict, const gchar *key);
extern
void g_variant_dict_clear(GVariantDict *dict);
extern
GVariant * g_variant_dict_end(GVariantDict *dict);
extern
GVariantDict * g_variant_dict_ref(GVariantDict *dict);
extern
void g_variant_dict_unref(GVariantDict *dict);
extern
gsize g_printf_string_upper_bound(const gchar* format, va_list args);
extern
guint g_log_set_handler(const gchar *log_domain, GLogLevelFlags log_levels, GLogFunc log_func, gpointer user_data);
extern
guint g_log_set_handler_full(const gchar *log_domain, GLogLevelFlags log_levels, GLogFunc log_func, gpointer user_data, GDestroyNotify destroy);
extern
void g_log_remove_handler(const gchar *log_domain, guint handler_id);
extern
void g_log_default_handler(const gchar *log_domain, GLogLevelFlags log_level, const gchar *message, gpointer unused_data);
extern
GLogFunc g_log_set_default_handler(GLogFunc log_func, gpointer user_data);
extern
void g_log(const gchar *log_domain, GLogLevelFlags log_level, const gchar *format, ...);
extern
void g_logv(const gchar *log_domain, GLogLevelFlags log_level, const gchar *format, va_list args);
extern
GLogLevelFlags g_log_set_fatal_mask(const gchar *log_domain, GLogLevelFlags fatal_mask);
extern
GLogLevelFlags g_log_set_always_fatal(GLogLevelFlags fatal_mask);
extern
void g_log_structured(const gchar *log_domain, GLogLevelFlags log_level, ...);
extern
void g_log_structured_array(GLogLevelFlags log_level, const GLogField *fields, gsize n_fields);
extern
void g_log_variant(const gchar *log_domain, GLogLevelFlags log_level, GVariant *fields);
extern
void g_log_set_writer_func(GLogWriterFunc func, gpointer user_data, GDestroyNotify user_data_free);
extern
gboolean g_log_writer_supports_color(gint output_fd);
extern
gboolean g_log_writer_is_journald(gint output_fd);
extern
gchar *g_log_writer_format_fields(GLogLevelFlags log_level, const GLogField *fields, gsize n_fields, gboolean use_color);
extern
GLogWriterOutput g_log_writer_journald(GLogLevelFlags log_level, const GLogField *fields, gsize n_fields, gpointer user_data);
extern
GLogWriterOutput g_log_writer_standard_streams(GLogLevelFlags log_level, const GLogField *fields, gsize n_fields, gpointer user_data);
extern
GLogWriterOutput g_log_writer_default(GLogLevelFlags log_level, const GLogField *fields, gsize n_fields, gpointer user_data);
extern
void g_return_if_fail_warning(const char *log_domain, const char *pretty_function, const char *expression);
extern
void g_warn_message(const char *domain, const char *file, int line, const char *func, const char *warnexpr);
extern
void g_assert_warning(const char *log_domain, const char *file, const int line, const char *pretty_function, const char *expression);
extern
void g_log_structured_standard(const gchar *log_domain, GLogLevelFlags log_level, const gchar *file, const gchar *line, const gchar *func, const gchar *message_format, ...);
extern
void g_print(const gchar *format, ...);
extern
GPrintFunc g_set_print_handler(GPrintFunc func);
extern
void g_printerr(const gchar *format, ...);
extern
GPrintFunc g_set_printerr_handler(GPrintFunc func);
extern
GQuark g_option_error_quark(void);
extern
GOptionContext *g_option_context_new(const gchar *parameter_string);
extern
void g_option_context_set_summary(GOptionContext *context, const gchar *summary);
extern
const gchar * g_option_context_get_summary(GOptionContext *context);
extern
void g_option_context_set_description(GOptionContext *context, const gchar *description);
extern
const gchar * g_option_context_get_description(GOptionContext *context);
extern
void g_option_context_free(GOptionContext *context);
extern
void g_option_context_set_help_enabled(GOptionContext *context, gboolean help_enabled);
extern
gboolean g_option_context_get_help_enabled(GOptionContext *context);
extern
void g_option_context_set_ignore_unknown_options(GOptionContext *context, gboolean ignore_unknown);
extern
gboolean g_option_context_get_ignore_unknown_options(GOptionContext *context);
extern
void g_option_context_set_strict_posix(GOptionContext *context, gboolean strict_posix);
extern
gboolean g_option_context_get_strict_posix(GOptionContext *context);
extern
void g_option_context_add_main_entries(GOptionContext *context, const GOptionEntry *entries, const gchar *translation_domain);
extern
gboolean g_option_context_parse(GOptionContext *context, gint *argc, gchar ***argv, GError **error);
extern
gboolean g_option_context_parse_strv(GOptionContext *context, gchar ***arguments, GError **error);
extern
void g_option_context_set_translate_func(GOptionContext *context, GTranslateFunc func, gpointer data, GDestroyNotify destroy_notify);
extern
void g_option_context_set_translation_domain(GOptionContext *context, const gchar *domain);
extern
void g_option_context_add_group(GOptionContext *context, GOptionGroup *group);
extern
void g_option_context_set_main_group(GOptionContext *context, GOptionGroup *group);
extern
GOptionGroup *g_option_context_get_main_group(GOptionContext *context);
extern
gchar *g_option_context_get_help(GOptionContext *context, gboolean main_help, GOptionGroup *group);
extern
GOptionGroup *g_option_group_new(const gchar *name, const gchar *description, const gchar *help_description, gpointer user_data, GDestroyNotify destroy);
extern
void g_option_group_set_parse_hooks(GOptionGroup *group, GOptionParseFunc pre_parse_func, GOptionParseFunc post_parse_func);
extern
void g_option_group_set_error_hook(GOptionGroup *group, GOptionErrorFunc error_func);
extern
void g_option_group_free(GOptionGroup *group);
extern
GOptionGroup *g_option_group_ref(GOptionGroup *group);
extern
void g_option_group_unref(GOptionGroup *group);
extern
void g_option_group_add_entries(GOptionGroup *group, const GOptionEntry *entries);
extern
void g_option_group_set_translate_func(GOptionGroup *group, GTranslateFunc func, gpointer data, GDestroyNotify destroy_notify);
extern
void g_option_group_set_translation_domain(GOptionGroup *group, const gchar *domain);
extern
GPatternSpec* g_pattern_spec_new(const gchar *pattern);
extern
void g_pattern_spec_free(GPatternSpec *pspec);
extern
gboolean g_pattern_spec_equal(GPatternSpec *pspec1, GPatternSpec *pspec2);
extern
gboolean g_pattern_match(GPatternSpec *pspec, guint string_length, const gchar *string, const gchar *string_reversed);
extern
gboolean g_pattern_match_string(GPatternSpec *pspec, const gchar *string);
extern
gboolean g_pattern_match_simple(const gchar *pattern, const gchar *string);
extern
guint g_spaced_primes_closest(guint num);
extern
void g_qsort_with_data(gconstpointer pbase, gint total_elems, gsize size, GCompareDataFunc compare_func, gpointer user_data);
extern
GQueue* g_queue_new(void);
extern
void g_queue_free(GQueue *queue);
extern
void g_queue_free_full(GQueue *queue, GDestroyNotify free_func);
extern
void g_queue_init(GQueue *queue);
extern
void g_queue_clear(GQueue *queue);
extern
gboolean g_queue_is_empty(GQueue *queue);
GLIB_AVAILABLE_IN_2_60 void g_queue_clear_full(GQueue *queue, GDestroyNotify free_func);
extern
guint g_queue_get_length(GQueue *queue);
extern
void g_queue_reverse(GQueue *queue);
extern
GQueue * g_queue_copy(GQueue *queue);
extern
void g_queue_foreach(GQueue *queue, GFunc func, gpointer user_data);
extern
GList * g_queue_find(GQueue *queue, gconstpointer data);
extern
GList * g_queue_find_custom(GQueue *queue, gconstpointer data, GCompareFunc func);
extern
void g_queue_sort(GQueue *queue, GCompareDataFunc compare_func, gpointer user_data);
extern
void g_queue_push_head(GQueue *queue, gpointer data);
extern
void g_queue_push_tail(GQueue *queue, gpointer data);
extern
void g_queue_push_nth(GQueue *queue, gpointer data, gint n);
extern
gpointer g_queue_pop_head(GQueue *queue);
extern
gpointer g_queue_pop_tail(GQueue *queue);
extern
gpointer g_queue_pop_nth(GQueue *queue, guint n);
extern
gpointer g_queue_peek_head(GQueue *queue);
extern
gpointer g_queue_peek_tail(GQueue *queue);
extern
gpointer g_queue_peek_nth(GQueue *queue, guint n);
extern
gint g_queue_index(GQueue *queue, gconstpointer data);
extern
gboolean g_queue_remove(GQueue *queue, gconstpointer data);
extern
guint g_queue_remove_all(GQueue *queue, gconstpointer data);
extern
void g_queue_insert_before(GQueue *queue, GList *sibling, gpointer data);
GLIB_AVAILABLE_IN_2_62 void g_queue_insert_before_link(GQueue *queue, GList *sibling, GList *link_);
extern
void g_queue_insert_after(GQueue *queue, GList *sibling, gpointer data);
GLIB_AVAILABLE_IN_2_62 void g_queue_insert_after_link(GQueue *queue, GList *sibling, GList *link_);
extern
void g_queue_insert_sorted(GQueue *queue, gpointer data, GCompareDataFunc func, gpointer user_data);
extern
void g_queue_push_head_link(GQueue *queue, GList *link_);
extern
void g_queue_push_tail_link(GQueue *queue, GList *link_);
extern
void g_queue_push_nth_link(GQueue *queue, gint n, GList *link_);
extern
GList* g_queue_pop_head_link(GQueue *queue);
extern
GList* g_queue_pop_tail_link(GQueue *queue);
extern
GList* g_queue_pop_nth_link(GQueue *queue, guint n);
extern
GList* g_queue_peek_head_link(GQueue *queue);
extern
GList* g_queue_peek_tail_link(GQueue *queue);
extern
GList* g_queue_peek_nth_link(GQueue *queue, guint n);
extern
gint g_queue_link_index(GQueue *queue, GList *link_);
extern
void g_queue_unlink(GQueue *queue, GList *link_);
extern
void g_queue_delete_link(GQueue *queue, GList *link_);
extern
GRand* g_rand_new_with_seed(guint32 seed);
extern
GRand* g_rand_new_with_seed_array(const guint32 *seed, guint seed_length);
extern
GRand* g_rand_new(void);
extern
void g_rand_free(GRand *rand_);
extern
GRand* g_rand_copy(GRand *rand_);
extern
void g_rand_set_seed(GRand *rand_, guint32 seed);
extern
void g_rand_set_seed_array(GRand *rand_, const guint32 *seed, guint seed_length);
extern
guint32 g_rand_int(GRand *rand_);
extern
gint32 g_rand_int_range(GRand *rand_, gint32 begin, gint32 end);
extern
gdouble g_rand_double(GRand *rand_);
extern
gdouble g_rand_double_range(GRand *rand_, gdouble begin, gdouble end);
extern
void g_random_set_seed(guint32 seed);
extern
guint32 g_random_int(void);
extern
gint32 g_random_int_range(gint32 begin, gint32 end);
extern
gdouble g_random_double(void);
extern
gdouble g_random_double_range(gdouble begin, gdouble end);
GLIB_AVAILABLE_IN_2_58 gpointer g_rc_box_alloc(gsize block_size);
GLIB_AVAILABLE_IN_2_58 gpointer g_rc_box_alloc0(gsize block_size);
GLIB_AVAILABLE_IN_2_58 gpointer g_rc_box_dup(gsize block_size, gconstpointer mem_block);
GLIB_AVAILABLE_IN_2_58 gpointer g_rc_box_acquire(gpointer mem_block);
GLIB_AVAILABLE_IN_2_58 void g_rc_box_release(gpointer mem_block);
GLIB_AVAILABLE_IN_2_58 void g_rc_box_release_full(gpointer mem_block, GDestroyNotify clear_func);
GLIB_AVAILABLE_IN_2_58 gsize g_rc_box_get_size(gpointer mem_block);
GLIB_AVAILABLE_IN_2_58 gpointer g_atomic_rc_box_alloc(gsize block_size);
GLIB_AVAILABLE_IN_2_58 gpointer g_atomic_rc_box_alloc0(gsize block_size);
GLIB_AVAILABLE_IN_2_58 gpointer g_atomic_rc_box_dup(gsize block_size, gconstpointer mem_block);
GLIB_AVAILABLE_IN_2_58 gpointer g_atomic_rc_box_acquire(gpointer mem_block);
GLIB_AVAILABLE_IN_2_58 void g_atomic_rc_box_release(gpointer mem_block);
GLIB_AVAILABLE_IN_2_58 void g_atomic_rc_box_release_full(gpointer mem_block, GDestroyNotify clear_func);
GLIB_AVAILABLE_IN_2_58 gsize g_atomic_rc_box_get_size(gpointer mem_block);
GLIB_AVAILABLE_IN_2_58 void g_ref_count_init(grefcount *rc);
GLIB_AVAILABLE_IN_2_58 void g_ref_count_inc(grefcount *rc);
GLIB_AVAILABLE_IN_2_58 gboolean g_ref_count_dec(grefcount *rc);
GLIB_AVAILABLE_IN_2_58 gboolean g_ref_count_compare(grefcount *rc, gint val);
GLIB_AVAILABLE_IN_2_58 void g_atomic_ref_count_init(gatomicrefcount *arc);
GLIB_AVAILABLE_IN_2_58 void g_atomic_ref_count_inc(gatomicrefcount *arc);
GLIB_AVAILABLE_IN_2_58 gboolean g_atomic_ref_count_dec(gatomicrefcount *arc);
GLIB_AVAILABLE_IN_2_58 gboolean g_atomic_ref_count_compare(gatomicrefcount *arc, gint val);
GLIB_AVAILABLE_IN_2_58 char * g_ref_string_new(const char *str);
GLIB_AVAILABLE_IN_2_58 char * g_ref_string_new_len(const char *str, gssize len);
GLIB_AVAILABLE_IN_2_58 char * g_ref_string_new_intern(const char *str);
GLIB_AVAILABLE_IN_2_58 char * g_ref_string_acquire(char *str);
GLIB_AVAILABLE_IN_2_58 void g_ref_string_release(char *str);
GLIB_AVAILABLE_IN_2_58 gsize g_ref_string_length(char *str);
extern
GQuark g_regex_error_quark(void);
extern
GRegex *g_regex_new(const gchar *pattern, GRegexCompileFlags compile_options, GRegexMatchFlags match_options, GError **error);
extern
GRegex *g_regex_ref(GRegex *regex);
extern
void g_regex_unref(GRegex *regex);
extern
const gchar *g_regex_get_pattern(const GRegex *regex);
extern
gint g_regex_get_max_backref(const GRegex *regex);
extern
gint g_regex_get_capture_count(const GRegex *regex);
extern
gboolean g_regex_get_has_cr_or_lf(const GRegex *regex);
extern
gint g_regex_get_max_lookbehind(const GRegex *regex);
extern
gint g_regex_get_string_number(const GRegex *regex, const gchar *name);
extern
gchar *g_regex_escape_string(const gchar *string, gint length);
extern
gchar *g_regex_escape_nul(const gchar *string, gint length);
extern
GRegexCompileFlags g_regex_get_compile_flags(const GRegex *regex);
extern
GRegexMatchFlags g_regex_get_match_flags(const GRegex *regex);
extern
gboolean g_regex_match_simple(const gchar *pattern, const gchar *string, GRegexCompileFlags compile_options, GRegexMatchFlags match_options);
extern
gboolean g_regex_match(const GRegex *regex, const gchar *string, GRegexMatchFlags match_options, GMatchInfo **match_info);
extern
gboolean g_regex_match_full(const GRegex *regex, const gchar *string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo **match_info, GError **error);
extern
gboolean g_regex_match_all(const GRegex *regex, const gchar *string, GRegexMatchFlags match_options, GMatchInfo **match_info);
extern
gboolean g_regex_match_all_full(const GRegex *regex, const gchar *string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo **match_info, GError **error);
extern
gchar **g_regex_split_simple(const gchar *pattern, const gchar *string, GRegexCompileFlags compile_options, GRegexMatchFlags match_options);
extern
gchar **g_regex_split(const GRegex *regex, const gchar *string, GRegexMatchFlags match_options);
extern
gchar **g_regex_split_full(const GRegex *regex, const gchar *string, gssize string_len, gint start_position, GRegexMatchFlags match_options, gint max_tokens, GError **error);
extern
gchar *g_regex_replace(const GRegex *regex, const gchar *string, gssize string_len, gint start_position, const gchar *replacement, GRegexMatchFlags match_options, GError **error);
extern
gchar *g_regex_replace_literal(const GRegex *regex, const gchar *string, gssize string_len, gint start_position, const gchar *replacement, GRegexMatchFlags match_options, GError **error);
extern
gchar *g_regex_replace_eval(const GRegex *regex, const gchar *string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GRegexEvalCallback eval, gpointer user_data, GError **error);
extern
gboolean g_regex_check_replacement(const gchar *replacement, gboolean *has_references, GError **error);
extern
GRegex *g_match_info_get_regex(const GMatchInfo *match_info);
extern
const gchar *g_match_info_get_string(const GMatchInfo *match_info);
extern
GMatchInfo *g_match_info_ref(GMatchInfo *match_info);
extern
void g_match_info_unref(GMatchInfo *match_info);
extern
void g_match_info_free(GMatchInfo *match_info);
extern
gboolean g_match_info_next(GMatchInfo *match_info, GError **error);
extern
gboolean g_match_info_matches(const GMatchInfo *match_info);
extern
gint g_match_info_get_match_count(const GMatchInfo *match_info);
extern
gboolean g_match_info_is_partial_match(const GMatchInfo *match_info);
extern
gchar *g_match_info_expand_references(const GMatchInfo *match_info, const gchar *string_to_expand, GError **error);
extern
gchar *g_match_info_fetch(const GMatchInfo *match_info, gint match_num);
extern
gboolean g_match_info_fetch_pos(const GMatchInfo *match_info, gint match_num, gint *start_pos, gint *end_pos);
extern
gchar *g_match_info_fetch_named(const GMatchInfo *match_info, const gchar *name);
extern
gboolean g_match_info_fetch_named_pos(const GMatchInfo *match_info, const gchar *name, gint *start_pos, gint *end_pos);
extern
gchar **g_match_info_fetch_all(const GMatchInfo *match_info);
extern
GScanner* g_scanner_new(const GScannerConfig *config_templ);
extern
void g_scanner_destroy(GScanner *scanner);
extern
void g_scanner_input_file(GScanner *scanner, gint input_fd);
extern
void g_scanner_sync_file_offset(GScanner *scanner);
extern
void g_scanner_input_text(GScanner *scanner, const gchar *text, guint text_len);
extern
GTokenType g_scanner_get_next_token(GScanner *scanner);
extern
GTokenType g_scanner_peek_next_token(GScanner *scanner);
extern
GTokenType g_scanner_cur_token(GScanner *scanner);
extern
GTokenValue g_scanner_cur_value(GScanner *scanner);
extern
guint g_scanner_cur_line(GScanner *scanner);
extern
guint g_scanner_cur_position(GScanner *scanner);
extern
gboolean g_scanner_eof(GScanner *scanner);
extern
guint g_scanner_set_scope(GScanner *scanner, guint scope_id);
extern
void g_scanner_scope_add_symbol(GScanner *scanner, guint scope_id, const gchar *symbol, gpointer value);
extern
void g_scanner_scope_remove_symbol(GScanner *scanner, guint scope_id, const gchar *symbol);
extern
gpointer g_scanner_scope_lookup_symbol(GScanner *scanner, guint scope_id, const gchar *symbol);
extern
void g_scanner_scope_foreach_symbol(GScanner *scanner, guint scope_id, GHFunc func, gpointer user_data);
extern
gpointer g_scanner_lookup_symbol(GScanner *scanner, const gchar *symbol);
extern
void g_scanner_unexp_token(GScanner *scanner, GTokenType expected_token, const gchar *identifier_spec, const gchar *symbol_spec, const gchar *symbol_name, const gchar *message, gint is_error);
extern
void g_scanner_error(GScanner *scanner, const gchar *format, ...);
extern
void g_scanner_warn(GScanner *scanner, const gchar *format, ...);
extern
GSequence * g_sequence_new(GDestroyNotify data_destroy);
extern
void g_sequence_free(GSequence *seq);
extern
gint g_sequence_get_length(GSequence *seq);
extern
void g_sequence_foreach(GSequence *seq, GFunc func, gpointer user_data);
extern
void g_sequence_foreach_range(GSequenceIter *begin, GSequenceIter *end, GFunc func, gpointer user_data);
extern
void g_sequence_sort(GSequence *seq, GCompareDataFunc cmp_func, gpointer cmp_data);
extern
void g_sequence_sort_iter(GSequence *seq, GSequenceIterCompareFunc cmp_func, gpointer cmp_data);
extern
gboolean g_sequence_is_empty(GSequence *seq);
extern
GSequenceIter *g_sequence_get_begin_iter(GSequence *seq);
extern
GSequenceIter *g_sequence_get_end_iter(GSequence *seq);
extern
GSequenceIter *g_sequence_get_iter_at_pos(GSequence *seq, gint pos);
extern
GSequenceIter *g_sequence_append(GSequence *seq, gpointer data);
extern
GSequenceIter *g_sequence_prepend(GSequence *seq, gpointer data);
extern
GSequenceIter *g_sequence_insert_before(GSequenceIter *iter, gpointer data);
extern
void g_sequence_move(GSequenceIter *src, GSequenceIter *dest);
extern
void g_sequence_swap(GSequenceIter *a, GSequenceIter *b);
extern
GSequenceIter *g_sequence_insert_sorted(GSequence *seq, gpointer data, GCompareDataFunc cmp_func, gpointer cmp_data);
extern
GSequenceIter *g_sequence_insert_sorted_iter(GSequence *seq, gpointer data, GSequenceIterCompareFunc iter_cmp, gpointer cmp_data);
extern
void g_sequence_sort_changed(GSequenceIter *iter, GCompareDataFunc cmp_func, gpointer cmp_data);
extern
void g_sequence_sort_changed_iter(GSequenceIter *iter, GSequenceIterCompareFunc iter_cmp, gpointer cmp_data);
extern
void g_sequence_remove(GSequenceIter *iter);
extern
void g_sequence_remove_range(GSequenceIter *begin, GSequenceIter *end);
extern
void g_sequence_move_range(GSequenceIter *dest, GSequenceIter *begin, GSequenceIter *end);
extern
GSequenceIter *g_sequence_search(GSequence *seq, gpointer data, GCompareDataFunc cmp_func, gpointer cmp_data);
extern
GSequenceIter *g_sequence_search_iter(GSequence *seq, gpointer data, GSequenceIterCompareFunc iter_cmp, gpointer cmp_data);
extern
GSequenceIter *g_sequence_lookup(GSequence *seq, gpointer data, GCompareDataFunc cmp_func, gpointer cmp_data);
extern
GSequenceIter *g_sequence_lookup_iter(GSequence *seq, gpointer data, GSequenceIterCompareFunc iter_cmp, gpointer cmp_data);
extern
gpointer g_sequence_get(GSequenceIter *iter);
extern
void g_sequence_set(GSequenceIter *iter, gpointer data);
extern
gboolean g_sequence_iter_is_begin(GSequenceIter *iter);
extern
gboolean g_sequence_iter_is_end(GSequenceIter *iter);
extern
GSequenceIter *g_sequence_iter_next(GSequenceIter *iter);
extern
GSequenceIter *g_sequence_iter_prev(GSequenceIter *iter);
extern
gint g_sequence_iter_get_position(GSequenceIter *iter);
extern
GSequenceIter *g_sequence_iter_move(GSequenceIter *iter, gint delta);
extern
GSequence * g_sequence_iter_get_sequence(GSequenceIter *iter);
extern
gint g_sequence_iter_compare(GSequenceIter *a, GSequenceIter *b);
extern
GSequenceIter *g_sequence_range_get_midpoint(GSequenceIter *begin, GSequenceIter *end);
extern
GQuark g_shell_error_quark(void);
extern
gchar* g_shell_quote(const gchar *unquoted_string);
extern
gchar* g_shell_unquote(const gchar *quoted_string, GError **error);
extern
gboolean g_shell_parse_argv(const gchar *command_line, gint *argcp, gchar ***argvp, GError **error);
extern
gpointer g_slice_alloc(gsize block_size);
extern
gpointer g_slice_alloc0(gsize block_size);
extern
gpointer g_slice_copy(gsize block_size, gconstpointer mem_block);
extern
void g_slice_free1(gsize block_size, gpointer mem_block);
extern
void g_slice_free_chain_with_offset(gsize block_size, gpointer mem_chain, gsize next_offset);
extern
void g_slice_set_config(GSliceConfig ckey, gint64 value);
extern
gint64 g_slice_get_config(GSliceConfig ckey);
extern
gint64* g_slice_get_config_state(GSliceConfig ckey, gint64 address, guint *n_values);
extern
GQuark g_spawn_error_quark(void);
extern
GQuark g_spawn_exit_error_quark(void);
extern
gboolean g_spawn_async(const gchar *working_directory, gchar **argv, gchar **envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid *child_pid, GError **error);
extern
gboolean g_spawn_async_with_pipes(const gchar *working_directory, gchar **argv, gchar **envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid *child_pid, gint *standard_input, gint *standard_output, gint *standard_error, GError **error);
GLIB_AVAILABLE_IN_2_58 gboolean g_spawn_async_with_fds(const gchar *working_directory, gchar **argv, gchar **envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, GPid *child_pid, gint stdin_fd, gint stdout_fd, gint stderr_fd, GError **error);
extern
gboolean g_spawn_sync(const gchar *working_directory, gchar **argv, gchar **envp, GSpawnFlags flags, GSpawnChildSetupFunc child_setup, gpointer user_data, gchar **standard_output, gchar **standard_error, gint *exit_status, GError **error);
extern
gboolean g_spawn_command_line_sync(const gchar *command_line, gchar **standard_output, gchar **standard_error, gint *exit_status, GError **error);
extern
gboolean g_spawn_command_line_async(const gchar *command_line, GError **error);
extern
gboolean g_spawn_check_exit_status(gint exit_status, GError **error);
extern
void g_spawn_close_pid(GPid pid);
extern const guint16 * const g_ascii_table;
extern
gchar g_ascii_tolower(gchar c);
extern
gchar g_ascii_toupper(gchar c);
extern
gint g_ascii_digit_value(gchar c);
extern
gint g_ascii_xdigit_value(gchar c);
extern
gchar* g_strdelimit(gchar *string, const gchar *delimiters, gchar new_delimiter);
extern
gchar* g_strcanon(gchar *string, const gchar *valid_chars, gchar substitutor);
extern
const gchar * g_strerror(gint errnum);
extern
const gchar * g_strsignal(gint signum);
extern
gchar * g_strreverse(gchar *string);
extern
gsize g_strlcpy(gchar *dest, const gchar *src, gsize dest_size);
extern
gsize g_strlcat(gchar *dest, const gchar *src, gsize dest_size);
extern
gchar * g_strstr_len(const gchar *haystack, gssize haystack_len, const gchar *needle);
extern
gchar * g_strrstr(const gchar *haystack, const gchar *needle);
extern
gchar * g_strrstr_len(const gchar *haystack, gssize haystack_len, const gchar *needle);
extern
gboolean g_str_has_suffix(const gchar *str, const gchar *suffix);
extern
gboolean g_str_has_prefix(const gchar *str, const gchar *prefix);
extern
gdouble g_strtod(const gchar *nptr, gchar **endptr);
extern
gdouble g_ascii_strtod(const gchar *nptr, gchar **endptr);
extern
guint64 g_ascii_strtoull(const gchar *nptr, gchar **endptr, guint base);
extern
gint64 g_ascii_strtoll(const gchar *nptr, gchar **endptr, guint base);
extern
gchar * g_ascii_dtostr(gchar *buffer, gint buf_len, gdouble d);
extern
gchar * g_ascii_formatd(gchar *buffer, gint buf_len, const gchar *format, gdouble d);
extern
gchar* g_strchug(gchar *string);
extern
gchar* g_strchomp(gchar *string);
extern
gint g_ascii_strcasecmp(const gchar *s1, const gchar *s2);
extern
gint g_ascii_strncasecmp(const gchar *s1, const gchar *s2, gsize n);
extern
gchar* g_ascii_strdown(const gchar *str, gssize len);
extern
gchar* g_ascii_strup(const gchar *str, gssize len);
extern
gboolean g_str_is_ascii(const gchar *str);
extern
gint g_strcasecmp(const gchar *s1, const gchar *s2);
extern
gint g_strncasecmp(const gchar *s1, const gchar *s2, guint n);
extern
gchar* g_strdown(gchar *string);
extern
gchar* g_strup(gchar *string);
extern
gchar* g_strdup(const gchar *str);
extern
gchar* g_strdup_printf(const gchar *format, ...);
extern
gchar* g_strdup_vprintf(const gchar *format, va_list args);
extern
gchar* g_strndup(const gchar *str, gsize n);
extern
gchar* g_strnfill(gsize length, gchar fill_char);
extern
gchar* g_strconcat(const gchar *string1, ...);
extern
gchar* g_strjoin(const gchar *separator, ...);
extern
gchar* g_strcompress(const gchar *source);
extern
gchar* g_strescape(const gchar *source, const gchar *exceptions);
extern
gpointer g_memdup(gconstpointer mem, guint byte_size);
extern
gchar** g_strsplit(const gchar *string, const gchar *delimiter, gint max_tokens);
extern
gchar ** g_strsplit_set(const gchar *string, const gchar *delimiters, gint max_tokens);
extern
gchar* g_strjoinv(const gchar *separator, gchar **str_array);
extern
void g_strfreev(gchar **str_array);
extern
gchar** g_strdupv(gchar **str_array);
extern
guint g_strv_length(gchar **str_array);
extern
gchar* g_stpcpy(gchar *dest, const char *src);
extern
gchar * g_str_to_ascii(const gchar *str, const gchar *from_locale);
extern
gchar ** g_str_tokenize_and_fold(const gchar *string, const gchar *translit_locale, gchar ***ascii_alternates);
extern
gboolean g_str_match_string(const gchar *search_term, const gchar *potential_hit, gboolean accept_alternates);
extern
gboolean g_strv_contains(const gchar * const *strv, const gchar *str);
GLIB_AVAILABLE_IN_2_60 gboolean g_strv_equal(const gchar * const *strv1, const gchar * const *strv2);
extern
GQuark g_number_parser_error_quark(void);
extern
gboolean g_ascii_string_to_signed(const gchar *str, guint base, gint64 min, gint64 max, gint64 *out_num, GError **error);
extern
gboolean g_ascii_string_to_unsigned(const gchar *str, guint base, guint64 min, guint64 max, guint64 *out_num, GError **error);
extern
GStringChunk* g_string_chunk_new(gsize size);
extern
void g_string_chunk_free(GStringChunk *chunk);
extern
void g_string_chunk_clear(GStringChunk *chunk);
extern
gchar* g_string_chunk_insert(GStringChunk *chunk, const gchar *string);
extern
gchar* g_string_chunk_insert_len(GStringChunk *chunk, const gchar *string, gssize len);
extern
gchar* g_string_chunk_insert_const(GStringChunk *chunk, const gchar *string);
extern
int g_strcmp0(const char *str1, const char *str2);
extern
void g_test_minimized_result(double minimized_quantity, const char *format, ...);
extern
void g_test_maximized_result(double maximized_quantity, const char *format, ...);
extern
void g_test_init(int *argc, char ***argv, ...);
extern
gboolean g_test_subprocess(void);
extern
int g_test_run(void);
extern
void g_test_add_func(const char *testpath, GTestFunc test_func);
extern
void g_test_add_data_func(const char *testpath, gconstpointer test_data, GTestDataFunc test_func);
extern
void g_test_add_data_func_full(const char *testpath, gpointer test_data, GTestDataFunc test_func, GDestroyNotify data_free_func);
extern
void g_test_fail(void);
extern
void g_test_incomplete(const gchar *msg);
extern
void g_test_skip(const gchar *msg);
extern
gboolean g_test_failed(void);
extern
void g_test_set_nonfatal_assertions(void);
extern
void g_test_message(const char *format, ...);
extern
void g_test_bug_base(const char *uri_pattern);
extern
void g_test_bug(const char *bug_uri_snippet);
GLIB_AVAILABLE_IN_2_62 void g_test_summary(const char *summary);
extern
void g_test_timer_start(void);
extern
double g_test_timer_elapsed(void);
extern
double g_test_timer_last(void);
extern
void g_test_queue_free(gpointer gfree_pointer);
extern
void g_test_queue_destroy(GDestroyNotify destroy_func, gpointer destroy_data);
extern
gboolean g_test_trap_fork(guint64 usec_timeout, GTestTrapFlags test_trap_flags);
extern
void g_test_trap_subprocess(const char *test_path, guint64 usec_timeout, GTestSubprocessFlags test_flags);
extern
gboolean g_test_trap_has_passed(void);
extern
gboolean g_test_trap_reached_timeout(void);
extern
gint32 g_test_rand_int(void);
extern
gint32 g_test_rand_int_range(gint32 begin, gint32 end);
extern
double g_test_rand_double(void);
extern
double g_test_rand_double_range(double range_start, double range_end);
extern
GTestCase* g_test_create_case(const char *test_name, gsize data_size, gconstpointer test_data, GTestFixtureFunc data_setup, GTestFixtureFunc data_test, GTestFixtureFunc data_teardown);
extern
GTestSuite* g_test_create_suite(const char *suite_name);
extern
GTestSuite* g_test_get_root(void);
extern
void g_test_suite_add(GTestSuite *suite, GTestCase *test_case);
extern
void g_test_suite_add_suite(GTestSuite *suite, GTestSuite *nestedsuite);
extern
int g_test_run_suite(GTestSuite *suite);
extern
void g_test_trap_assertions(const char *domain, const char *file, int line, const char *func, guint64 assertion_flags, const char *pattern);
extern
void g_assertion_message(const char *domain, const char *file, int line, const char *func, const char *message);
extern
void g_assertion_message_expr(const char *domain, const char *file, int line, const char *func, const char *expr);
extern
void g_assertion_message_cmpstr(const char *domain, const char *file, int line, const char *func, const char *expr, const char *arg1, const char *cmp, const char *arg2);
extern
void g_assertion_message_cmpnum(const char *domain, const char *file, int line, const char *func, const char *expr, long double arg1, const char *cmp, long double arg2, char numtype);
extern
void g_assertion_message_error(const char *domain, const char *file, int line, const char *func, const char *expr, const GError *error, GQuark error_domain, int error_code);
extern
void g_test_add_vtable(const char *testpath, gsize data_size, gconstpointer test_data, GTestFixtureFunc data_setup, GTestFixtureFunc data_test, GTestFixtureFunc data_teardown);
extern const GTestConfig * const g_test_config_vars;
extern
const char* g_test_log_type_name(GTestLogType log_type);
extern
GTestLogBuffer* g_test_log_buffer_new(void);
extern
void g_test_log_buffer_free(GTestLogBuffer *tbuffer);
extern
void g_test_log_buffer_push(GTestLogBuffer *tbuffer, guint n_bytes, const guint8 *bytes);
extern
GTestLogMsg* g_test_log_buffer_pop(GTestLogBuffer *tbuffer);
extern
void g_test_log_msg_free(GTestLogMsg *tmsg);
extern void g_test_log_set_fatal_handler(GTestLogFatalFunc log_func, gpointer user_data);
extern
void g_test_expect_message(const gchar *log_domain, GLogLevelFlags log_level, const gchar *pattern);
extern
void g_test_assert_expected_messages_internal(const char *domain, const char *file, int line, const char *func);
extern
gchar * g_test_build_filename(GTestFileType file_type, const gchar *first_path, ...);
extern
const gchar *g_test_get_dir(GTestFileType file_type);
extern
const gchar *g_test_get_filename(GTestFileType file_type, const gchar *first_path, ...);
extern
GThreadPool * g_thread_pool_new(GFunc func, gpointer user_data, gint max_threads, gboolean exclusive, GError **error);
extern
void g_thread_pool_free(GThreadPool *pool, gboolean immediate, gboolean wait_);
extern
gboolean g_thread_pool_push(GThreadPool *pool, gpointer data, GError **error);
extern
guint g_thread_pool_unprocessed(GThreadPool *pool);
extern
void g_thread_pool_set_sort_function(GThreadPool *pool, GCompareDataFunc func, gpointer user_data);
extern
gboolean g_thread_pool_move_to_front(GThreadPool *pool, gpointer data);
extern
gboolean g_thread_pool_set_max_threads(GThreadPool *pool, gint max_threads, GError **error);
extern
gint g_thread_pool_get_max_threads(GThreadPool *pool);
extern
guint g_thread_pool_get_num_threads(GThreadPool *pool);
extern
void g_thread_pool_set_max_unused_threads(gint max_threads);
extern
gint g_thread_pool_get_max_unused_threads(void);
extern
guint g_thread_pool_get_num_unused_threads(void);
extern
void g_thread_pool_stop_unused_threads(void);
extern
void g_thread_pool_set_max_idle_time(guint interval);
extern
guint g_thread_pool_get_max_idle_time(void);
extern
GTimer* g_timer_new(void);
extern
void g_timer_destroy(GTimer *timer);
extern
void g_timer_start(GTimer *timer);
extern
void g_timer_stop(GTimer *timer);
extern
void g_timer_reset(GTimer *timer);
extern
void g_timer_continue(GTimer *timer);
extern
gdouble g_timer_elapsed(GTimer *timer, gulong *microseconds);
GLIB_AVAILABLE_IN_2_62 gboolean g_timer_is_active(GTimer *timer);
extern
void g_usleep(gulong microseconds);
extern
void g_time_val_add(GTimeVal *time_, glong microseconds);
extern
gboolean g_time_val_from_iso8601(const gchar *iso_date, GTimeVal *time_);
extern
gchar* g_time_val_to_iso8601(GTimeVal *time_);
extern
void g_trash_stack_push(GTrashStack **stack_p, gpointer data_p);
extern
gpointer g_trash_stack_pop(GTrashStack **stack_p);
extern
gpointer g_trash_stack_peek(GTrashStack **stack_p);
extern
guint g_trash_stack_height(GTrashStack **stack_p);
extern
GTree* g_tree_new(GCompareFunc key_compare_func);
extern
GTree* g_tree_new_with_data(GCompareDataFunc key_compare_func, gpointer key_compare_data);
extern
GTree* g_tree_new_full(GCompareDataFunc key_compare_func, gpointer key_compare_data, GDestroyNotify key_destroy_func, GDestroyNotify value_destroy_func);
extern
GTree* g_tree_ref(GTree *tree);
extern
void g_tree_unref(GTree *tree);
extern
void g_tree_destroy(GTree *tree);
extern
void g_tree_insert(GTree *tree, gpointer key, gpointer value);
extern
void g_tree_replace(GTree *tree, gpointer key, gpointer value);
extern
gboolean g_tree_remove(GTree *tree, gconstpointer key);
extern
gboolean g_tree_steal(GTree *tree, gconstpointer key);
extern
gpointer g_tree_lookup(GTree *tree, gconstpointer key);
extern
gboolean g_tree_lookup_extended(GTree *tree, gconstpointer lookup_key, gpointer *orig_key, gpointer *value);
extern
void g_tree_foreach(GTree *tree, GTraverseFunc func, gpointer user_data);
extern
void g_tree_traverse(GTree *tree, GTraverseFunc traverse_func, GTraverseType traverse_type, gpointer user_data);
extern
gpointer g_tree_search(GTree *tree, GCompareFunc search_func, gconstpointer user_data);
extern
gint g_tree_height(GTree *tree);
extern
gint g_tree_nnodes(GTree *tree);
extern
char * g_uri_unescape_string(const char *escaped_string, const char *illegal_characters);
extern
char * g_uri_unescape_segment(const char *escaped_string, const char *escaped_string_end, const char *illegal_characters);
extern
char * g_uri_parse_scheme(const char *uri);
extern
char * g_uri_escape_string(const char *unescaped, const char *reserved_chars_allowed, gboolean allow_utf8);
extern
gboolean g_uuid_string_is_valid(const gchar *str);
extern
gchar * g_uuid_string_random(void);
extern const guint glib_major_version;
extern const guint glib_minor_version;
extern const guint glib_micro_version;
extern const guint glib_interface_age;
extern const guint glib_binary_age;
extern
const gchar * glib_check_version(guint required_major, guint required_minor, guint required_micro);
extern
GMemChunk * g_mem_chunk_new(const gchar *name, gint atom_size, gsize area_size, gint type);
extern
void g_mem_chunk_destroy(GMemChunk *mem_chunk);
extern
gpointer g_mem_chunk_alloc(GMemChunk *mem_chunk);
extern
gpointer g_mem_chunk_alloc0(GMemChunk *mem_chunk);
extern
void g_mem_chunk_free(GMemChunk *mem_chunk, gpointer mem);
extern
void g_mem_chunk_clean(GMemChunk *mem_chunk);
extern
void g_mem_chunk_reset(GMemChunk *mem_chunk);
extern
void g_mem_chunk_print(GMemChunk *mem_chunk);
extern
void g_mem_chunk_info(void);
extern
void g_blow_chunks(void);
extern
GAllocator * g_allocator_new(const gchar *name, guint n_preallocs);
extern
void g_allocator_free(GAllocator *allocator);
extern
void g_list_push_allocator(GAllocator *allocator);
extern
void g_list_pop_allocator(void);
extern
void g_slist_push_allocator(GAllocator *allocator);
extern
void g_slist_pop_allocator(void);
extern
void g_node_push_allocator(GAllocator *allocator);
extern
void g_node_pop_allocator(void);
extern
GCache* g_cache_new(GCacheNewFunc value_new_func, GCacheDestroyFunc value_destroy_func, GCacheDupFunc key_dup_func, GCacheDestroyFunc key_destroy_func, GHashFunc hash_key_func, GHashFunc hash_value_func, GEqualFunc key_equal_func);
extern
void g_cache_destroy(GCache *cache);
extern
gpointer g_cache_insert(GCache *cache, gpointer key);
extern
void g_cache_remove(GCache *cache, gconstpointer value);
extern
void g_cache_key_foreach(GCache *cache, GHFunc func, gpointer user_data);
extern
void g_cache_value_foreach(GCache *cache, GHFunc func, gpointer user_data);
extern
GCompletion* g_completion_new(GCompletionFunc func);
extern
void g_completion_add_items(GCompletion* cmp, GList* items);
extern
void g_completion_remove_items(GCompletion* cmp, GList* items);
extern
void g_completion_clear_items(GCompletion* cmp);
extern
GList* g_completion_complete(GCompletion* cmp, const gchar* prefix, gchar** new_prefix);
extern
GList* g_completion_complete_utf8(GCompletion *cmp, const gchar* prefix, gchar** new_prefix);
extern
void g_completion_set_compare(GCompletion *cmp, GCompletionStrncmpFunc strncmp_func);
extern
void g_completion_free(GCompletion* cmp);
extern
GRelation* g_relation_new(gint fields);
extern
void g_relation_destroy(GRelation *relation);
extern
void g_relation_index(GRelation *relation, gint field, GHashFunc hash_func, GEqualFunc key_equal_func);
extern
void g_relation_insert(GRelation *relation, ...);
extern
gint g_relation_delete(GRelation *relation, gconstpointer key, gint field);
extern
GTuples* g_relation_select(GRelation *relation, gconstpointer key, gint field);
extern
gint g_relation_count(GRelation *relation, gconstpointer key, gint field);
extern
gboolean g_relation_exists(GRelation *relation, ...);
extern
void g_relation_print(GRelation *relation);
extern
void g_tuples_destroy(GTuples *tuples);
extern
gpointer g_tuples_index(GTuples *tuples, gint index_, gint field);
extern GThreadFunctions g_thread_functions_for_glib_use;
extern gboolean g_thread_use_default_impl;
extern guint64(*g_thread_gettime) (void);
extern
GThread *g_thread_create(GThreadFunc func, gpointer data, gboolean joinable, GError **error);
extern
GThread *g_thread_create_full(GThreadFunc func, gpointer data, gulong stack_size, gboolean joinable, gboolean bound, GThreadPriority priority, GError **error);
extern
void g_thread_set_priority(GThread *thread, GThreadPriority priority);
extern
void g_thread_foreach(GFunc thread_func, gpointer user_data);
extern
void g_static_mutex_init(GStaticMutex *mutex);
extern
void g_static_mutex_free(GStaticMutex *mutex);
extern
GMutex *g_static_mutex_get_mutex_impl(GStaticMutex *mutex);
extern
void g_static_rec_mutex_init(GStaticRecMutex *mutex);
extern
void g_static_rec_mutex_lock(GStaticRecMutex *mutex);
extern
gboolean g_static_rec_mutex_trylock(GStaticRecMutex *mutex);
extern
void g_static_rec_mutex_unlock(GStaticRecMutex *mutex);
extern
void g_static_rec_mutex_lock_full(GStaticRecMutex *mutex, guint depth);
extern
guint g_static_rec_mutex_unlock_full(GStaticRecMutex *mutex);
extern
void g_static_rec_mutex_free(GStaticRecMutex *mutex);
extern
void g_static_rw_lock_init(GStaticRWLock *lock);
extern
void g_static_rw_lock_reader_lock(GStaticRWLock *lock);
extern
gboolean g_static_rw_lock_reader_trylock(GStaticRWLock *lock);
extern
void g_static_rw_lock_reader_unlock(GStaticRWLock *lock);
extern
void g_static_rw_lock_writer_lock(GStaticRWLock *lock);
extern
gboolean g_static_rw_lock_writer_trylock(GStaticRWLock *lock);
extern
void g_static_rw_lock_writer_unlock(GStaticRWLock *lock);
extern
void g_static_rw_lock_free(GStaticRWLock *lock);
extern
GPrivate * g_private_new(GDestroyNotify notify);
extern
void g_static_private_init(GStaticPrivate *private_key);
extern
gpointer g_static_private_get(GStaticPrivate *private_key);
extern
void g_static_private_set(GStaticPrivate *private_key, gpointer data, GDestroyNotify notify);
extern
void g_static_private_free(GStaticPrivate *private_key);
extern
gboolean g_once_init_enter_impl(volatile gsize *location);
extern
gboolean g_thread_get_initialized(void);
extern gboolean g_threads_got_initialized;
extern
GMutex * g_mutex_new(void);
extern
void g_mutex_free(GMutex *mutex);
extern
GCond * g_cond_new(void);
extern
void g_cond_free(GCond *cond);
extern
gboolean g_cond_timed_wait(GCond *cond, GMutex *mutex, GTimeVal *timeval);
