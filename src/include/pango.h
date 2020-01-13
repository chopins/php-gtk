extern
GType pango_coverage_get_type (void);
extern
PangoCoverage * pango_coverage_new (void);
extern
PangoCoverage * pango_coverage_ref (PangoCoverage *coverage);
extern
void pango_coverage_unref (PangoCoverage *coverage);
extern
PangoCoverage * pango_coverage_copy (PangoCoverage *coverage);
extern
PangoCoverageLevel pango_coverage_get (PangoCoverage *coverage,externint index_);
extern
void pango_coverage_set (PangoCoverage *coverage,externint index_,externPangoCoverageLevel level);
extern
void pango_coverage_max (PangoCoverage *coverage,externPangoCoverage *other);
extern
void pango_coverage_to_bytes (PangoCoverage *coverage,externguchar **bytes,externint *n_bytes);
extern
PangoCoverage *pango_coverage_from_bytes (guchar *bytes,externint n_bytes);
extern
int pango_units_from_double (double d);
extern
double pango_units_to_double (int i);
extern
void pango_extents_to_pixels (PangoRectangle *inclusive,externPangoRectangle *nearest);
extern
GType pango_matrix_get_type (void);
extern
PangoMatrix *pango_matrix_copy (const PangoMatrix *matrix);
extern
void pango_matrix_free (PangoMatrix *matrix);
extern
void pango_matrix_translate (PangoMatrix *matrix,externdouble tx,externdouble ty);
extern
void pango_matrix_scale (PangoMatrix *matrix,externdouble scale_x,externdouble scale_y);
extern
void pango_matrix_rotate (PangoMatrix *matrix,externdouble degrees);
extern
void pango_matrix_concat (PangoMatrix *matrix,externconst PangoMatrix *new_matrix);
extern
void pango_matrix_transform_point (const PangoMatrix *matrix,externdouble *x,externdouble *y);
extern
void pango_matrix_transform_distance (const PangoMatrix *matrix,externdouble *dx,externdouble *dy);
extern
void pango_matrix_transform_rectangle (const PangoMatrix *matrix,externPangoRectangle *rect);
extern
void pango_matrix_transform_pixel_rectangle (const PangoMatrix *matrix,externPangoRectangle *rect);
extern
double pango_matrix_get_font_scale_factor (const PangoMatrix *matrix);
extern
void pango_matrix_get_font_scale_factors (const PangoMatrix *matrix,externdouble *xscale, double *yscale);
extern
PangoScript pango_script_for_unichar (gunichar ch);
extern
GType pango_script_iter_get_type (void);
extern
PangoScriptIter *pango_script_iter_new (const char *text,externint length);
extern
void pango_script_iter_get_range (PangoScriptIter *iter,externconst char **start,externconst char **end,externPangoScript *script);
extern
gboolean pango_script_iter_next (PangoScriptIter *iter);
extern
void pango_script_iter_free (PangoScriptIter *iter);
extern
GType pango_language_get_type (void);
extern
PangoLanguage *pango_language_from_string (const char *language);
extern
const char *pango_language_to_string (PangoLanguage *language);
extern
const char *pango_language_get_sample_string (PangoLanguage *language);
extern
PangoLanguage *pango_language_get_default (void);
extern
gboolean pango_language_matches (PangoLanguage *language,externconst char *range_list);
extern
gboolean pango_language_includes_script (PangoLanguage *language,externPangoScript script);
extern
const PangoScript *pango_language_get_scripts (PangoLanguage *language,externint *num_scripts);externextern
PangoLanguage *pango_script_get_sample_language (PangoScript script);externextern
double pango_gravity_to_rotation (PangoGravity gravity);
extern
PangoGravity pango_gravity_get_for_matrix (const PangoMatrix *matrix);
extern
PangoGravity pango_gravity_get_for_script (PangoScript script,externPangoGravity base_gravity,externPangoGravityHint hint);
extern PangoGravity pango_gravity_get_for_script_and_width(PangoScript script,externgboolean wide,externPangoGravity base_gravity,externPangoGravityHint hint);
extern
PangoBidiType pango_bidi_type_for_unichar (gunichar ch);
extern
PangoDirection pango_unichar_direction (gunichar ch);
extern
PangoDirection pango_find_base_dir (const gchar *text,externgint length);
extern
gboolean pango_get_mirror_char (gunichar ch,externgunichar *mirrored_ch);
extern
GType pango_font_description_get_type (void);
extern
PangoFontDescription *pango_font_description_new (void);
extern
PangoFontDescription *pango_font_description_copy (const PangoFontDescription *desc);
extern
PangoFontDescription *pango_font_description_copy_static (const PangoFontDescription *desc);
extern
guint pango_font_description_hash (const PangoFontDescription *desc);
extern
gboolean pango_font_description_equal (const PangoFontDescription *desc1,externconst PangoFontDescription *desc2);
extern
void pango_font_description_free (PangoFontDescription *desc);
extern
void pango_font_descriptions_free (PangoFontDescription **descs,externint n_descs);
extern
void pango_font_description_set_family (PangoFontDescription *desc,externconst char *family);
extern
void pango_font_description_set_family_static (PangoFontDescription *desc,externconst char *family);
extern
const char *pango_font_description_get_family (const PangoFontDescription *desc);
extern
void pango_font_description_set_style (PangoFontDescription *desc,externPangoStyle style);
extern
PangoStyle pango_font_description_get_style (const PangoFontDescription *desc);
extern
void pango_font_description_set_variant (PangoFontDescription *desc,externPangoVariant variant);
extern
PangoVariant pango_font_description_get_variant (const PangoFontDescription *desc);
extern
void pango_font_description_set_weight (PangoFontDescription *desc,externPangoWeight weight);
extern
PangoWeight pango_font_description_get_weight (const PangoFontDescription *desc);
extern
void pango_font_description_set_stretch (PangoFontDescription *desc,externPangoStretch stretch);
extern
PangoStretch pango_font_description_get_stretch (const PangoFontDescription *desc);
extern
void pango_font_description_set_size (PangoFontDescription *desc,externgint size);
extern
gint pango_font_description_get_size (const PangoFontDescription *desc);
extern
void pango_font_description_set_absolute_size (PangoFontDescription *desc,externdouble size);
extern
gboolean pango_font_description_get_size_is_absolute (const PangoFontDescription *desc);
extern
void pango_font_description_set_gravity (PangoFontDescription *desc,externPangoGravity gravity);
extern
PangoGravity pango_font_description_get_gravity (const PangoFontDescription *desc);
extern
void pango_font_description_set_variations_static (PangoFontDescription *desc,externconst char *variations);
extern
void pango_font_description_set_variations (PangoFontDescription *desc,externconst char *variations);
extern
const char *pango_font_description_get_variations (const PangoFontDescription *desc);
extern
PangoFontMask pango_font_description_get_set_fields (const PangoFontDescription *desc);
extern
void pango_font_description_unset_fields (PangoFontDescription *desc,externPangoFontMask to_unset);
extern
void pango_font_description_merge (PangoFontDescription *desc,externconst PangoFontDescription *desc_to_merge,externgboolean replace_existing);
extern
void pango_font_description_merge_static (PangoFontDescription *desc,externconst PangoFontDescription *desc_to_merge,externgboolean replace_existing);
extern
gboolean pango_font_description_better_match (const PangoFontDescription *desc,externconst PangoFontDescription *old_match,externconst PangoFontDescription *new_match);
extern
PangoFontDescription *pango_font_description_from_string (const char *str);
extern
char * pango_font_description_to_string (const PangoFontDescription *desc);
extern
char * pango_font_description_to_filename (const PangoFontDescription *desc);
extern
GType pango_font_metrics_get_type (void);
extern
PangoFontMetrics *pango_font_metrics_ref (PangoFontMetrics *metrics);
extern
void pango_font_metrics_unref (PangoFontMetrics *metrics);
extern
int pango_font_metrics_get_ascent (PangoFontMetrics *metrics);
extern
int pango_font_metrics_get_descent (PangoFontMetrics *metrics);
extern
int pango_font_metrics_get_height (PangoFontMetrics *metrics);
extern
int pango_font_metrics_get_approximate_char_width (PangoFontMetrics *metrics);
extern
int pango_font_metrics_get_approximate_digit_width (PangoFontMetrics *metrics);
extern
int pango_font_metrics_get_underline_position (PangoFontMetrics *metrics);
extern
int pango_font_metrics_get_underline_thickness (PangoFontMetrics *metrics);
extern
int pango_font_metrics_get_strikethrough_position (PangoFontMetrics *metrics);
extern
int pango_font_metrics_get_strikethrough_thickness (PangoFontMetrics *metrics);
extern
GType pango_font_family_get_type (void);
extern
void pango_font_family_list_faces (PangoFontFamily *family,externPangoFontFace ***faces,externint *n_faces);
extern
const char *pango_font_family_get_name (PangoFontFamily *family);
extern
gboolean pango_font_family_is_monospace (PangoFontFamily *family);
extern
gboolean pango_font_family_is_variable (PangoFontFamily *family);
extern
GType pango_font_face_get_type (void);
extern
PangoFontDescription *pango_font_face_describe (PangoFontFace *face);
extern
const char *pango_font_face_get_face_name (PangoFontFace *face);
extern
void pango_font_face_list_sizes (PangoFontFace *face,externint **sizes,externint *n_sizes);
extern
gboolean pango_font_face_is_synthesized (PangoFontFace *face);
extern
GType pango_font_get_type (void);
extern
PangoFontDescription *pango_font_describe (PangoFont *font);
extern
PangoFontDescription *pango_font_describe_with_absolute_size (PangoFont *font);
extern
PangoCoverage * pango_font_get_coverage (PangoFont *font,externPangoLanguage *language);
extern
PangoEngineShape * pango_font_find_shaper (PangoFont *font,externPangoLanguage *language,externguint32 ch);
extern
PangoFontMetrics * pango_font_get_metrics (PangoFont *font,externPangoLanguage *language);
extern
void pango_font_get_glyph_extents (PangoFont *font,externPangoGlyph glyph,externPangoRectangle *ink_rect,externPangoRectangle *logical_rect);
extern
PangoFontMap *pango_font_get_font_map (PangoFont *font);
extern
gboolean pango_font_has_char (PangoFont *font,externgunichar wc);
extern
void pango_font_get_features (PangoFont *font,externhb_feature_t *features,externguint len,externguint *num_features);
extern
hb_font_t * pango_font_get_hb_font (PangoFont *font);
extern
GType pango_color_get_type (void);
extern
GType pango_attribute_get_type (void);
extern
PangoColor *pango_color_copy (const PangoColor *src);
extern
void pango_color_free (PangoColor *color);
extern
gboolean pango_color_parse (PangoColor *color,externconst char *spec);
extern
gchar *pango_color_to_string(const PangoColor *color);
extern
PangoAttrType pango_attr_type_register (const gchar *name);
extern
const char * pango_attr_type_get_name (PangoAttrType type);
extern
void pango_attribute_init (PangoAttribute *attr,externconst PangoAttrClass *klass);
extern
PangoAttribute * pango_attribute_copy (const PangoAttribute *attr);
extern
void pango_attribute_destroy (PangoAttribute *attr);
extern
gboolean pango_attribute_equal (const PangoAttribute *attr1,externconst PangoAttribute *attr2);
extern
PangoAttribute *pango_attr_language_new (PangoLanguage *language);
extern
PangoAttribute *pango_attr_family_new (const char *family);
extern
PangoAttribute *pango_attr_foreground_new (guint16 red,externguint16 green,externguint16 blue);
extern
PangoAttribute *pango_attr_background_new (guint16 red,externguint16 green,externguint16 blue);
extern
PangoAttribute *pango_attr_size_new (int size);
extern
PangoAttribute *pango_attr_size_new_absolute (int size);
extern
PangoAttribute *pango_attr_style_new (PangoStyle style);
extern
PangoAttribute *pango_attr_weight_new (PangoWeight weight);
extern
PangoAttribute *pango_attr_variant_new (PangoVariant variant);
extern
PangoAttribute *pango_attr_stretch_new (PangoStretch stretch);
extern
PangoAttribute *pango_attr_font_desc_new (const PangoFontDescription *desc);
extern
PangoAttribute *pango_attr_underline_new (PangoUnderline underline);
extern
PangoAttribute *pango_attr_underline_color_new (guint16 red,externguint16 green,externguint16 blue);
extern
PangoAttribute *pango_attr_strikethrough_new (gboolean strikethrough);
extern
PangoAttribute *pango_attr_strikethrough_color_new (guint16 red,externguint16 green,externguint16 blue);
extern
PangoAttribute *pango_attr_rise_new (int rise);
extern
PangoAttribute *pango_attr_scale_new (double scale_factor);
extern
PangoAttribute *pango_attr_fallback_new (gboolean enable_fallback);
extern
PangoAttribute *pango_attr_letter_spacing_new (int letter_spacing);
extern
PangoAttribute *pango_attr_shape_new (const PangoRectangle *ink_rect,externconst PangoRectangle *logical_rect);
extern
PangoAttribute *pango_attr_shape_new_with_data (const PangoRectangle *ink_rect,externconst PangoRectangle *logical_rect,externgpointer data,externPangoAttrDataCopyFunc copy_func,externGDestroyNotify destroy_func);
extern
PangoAttribute *pango_attr_gravity_new (PangoGravity gravity);
extern
PangoAttribute *pango_attr_gravity_hint_new (PangoGravityHint hint);
extern
PangoAttribute *pango_attr_font_features_new (const gchar *features);
extern
PangoAttribute *pango_attr_foreground_alpha_new (guint16 alpha);
extern
PangoAttribute *pango_attr_background_alpha_new (guint16 alpha);
extern
PangoAttribute *pango_attr_allow_breaks_new (gboolean allow_breaks);
extern
PangoAttribute *pango_attr_insert_hyphens_new (gboolean insert_hyphens);
extern
PangoAttribute *pango_attr_show_new (PangoShowFlags flags);
extern
GType pango_attr_list_get_type (void);
extern
PangoAttrList * pango_attr_list_new (void);
extern
PangoAttrList * pango_attr_list_ref (PangoAttrList *list);
extern
void pango_attr_list_unref (PangoAttrList *list);
extern
PangoAttrList * pango_attr_list_copy (PangoAttrList *list);
extern
void pango_attr_list_insert (PangoAttrList *list,externPangoAttribute *attr);
extern
void pango_attr_list_insert_before (PangoAttrList *list,externPangoAttribute *attr);
extern
void pango_attr_list_change (PangoAttrList *list,externPangoAttribute *attr);
extern
void pango_attr_list_splice (PangoAttrList *list,externPangoAttrList *other,externgint pos,externgint len);
extern
void pango_attr_list_update (PangoAttrList *list,externint pos,externint remove,externint add);
extern
PangoAttrList *pango_attr_list_filter (PangoAttrList *list,externPangoAttrFilterFunc func,externgpointer data);
extern
GSList *pango_attr_list_get_attributes (PangoAttrList *list);
extern
GType pango_attr_iterator_get_type (void);
extern
PangoAttrIterator *pango_attr_list_get_iterator (PangoAttrList *list);
extern
void pango_attr_iterator_range (PangoAttrIterator *iterator,externgint *start,externgint *end);
extern
gboolean pango_attr_iterator_next (PangoAttrIterator *iterator);
extern
PangoAttrIterator *pango_attr_iterator_copy (PangoAttrIterator *iterator);
extern
void pango_attr_iterator_destroy (PangoAttrIterator *iterator);
extern
PangoAttribute * pango_attr_iterator_get (PangoAttrIterator *iterator,externPangoAttrType type);
extern
void pango_attr_iterator_get_font (PangoAttrIterator *iterator,externPangoFontDescription *desc,externPangoLanguage **language,externGSList **extra_attrs);
extern
GSList * pango_attr_iterator_get_attrs (PangoAttrIterator *iterator);
extern
gboolean pango_parse_markup (const char *markup_text,externint length,externgunichar accel_marker,externPangoAttrList **attr_list,externchar **text,externgunichar *accel_char,externGError **error);
extern
GMarkupParseContext * pango_markup_parser_new (gunichar accel_marker);
extern
gboolean pango_markup_parser_finish (GMarkupParseContext *context,externPangoAttrList **attr_list,externchar **text,externgunichar *accel_char,externGError **error);externextern
GType pango_item_get_type (void);
extern
PangoItem *pango_item_new (void);
extern
PangoItem *pango_item_copy (PangoItem *item);
extern
void pango_item_free (PangoItem *item);
extern
PangoItem *pango_item_split (PangoItem *orig,externint split_index,externint split_offset);
extern
void pango_item_apply_attrs (PangoItem *item,externPangoAttrIterator *iter);externvoid pango_break (const gchar *text,externint length,externPangoAnalysis *analysis,externPangoLogAttr *attrs,externint attrs_len);
extern
void pango_find_paragraph_boundary (const gchar *text,externgint length,externgint *paragraph_delimiter_index,externgint *next_paragraph_start);
extern
void pango_get_log_attrs (const char *text,externint length,externint level,externPangoLanguage *language,externPangoLogAttr *log_attrs,externint attrs_len);
extern
void pango_default_break (const gchar *text,externint length,externPangoAnalysis *analysis,externPangoLogAttr *attrs,externint attrs_len);
extern
void pango_tailor_break (const char *text,externint length,externPangoAnalysis *analysis,externint offset,externPangoLogAttr *log_attrs,externint log_attrs_len);externextern
GType pango_fontset_get_type (void);
extern
GType pango_fontset_simple_get_type (void);
extern
PangoFontsetSimple * pango_fontset_simple_new (PangoLanguage *language);
extern
void pango_fontset_simple_append (PangoFontsetSimple *fontset,externPangoFont *font);
extern
int pango_fontset_simple_size (PangoFontsetSimple *fontset);
extern
PangoFont * pango_fontset_get_font (PangoFontset *fontset,externguint wc);
extern
PangoFontMetrics *pango_fontset_get_metrics (PangoFontset *fontset);
extern
void pango_fontset_foreach (PangoFontset *fontset,externPangoFontsetForeachFunc func,externgpointer data);
extern
GType pango_font_map_get_type (void);
extern
PangoContext * pango_font_map_create_context (PangoFontMap *fontmap);
extern
PangoFont * pango_font_map_load_font (PangoFontMap *fontmap,externPangoContext *context,externconst PangoFontDescription *desc);
extern
PangoFontset *pango_font_map_load_fontset (PangoFontMap *fontmap,externPangoContext *context,externconst PangoFontDescription *desc,externPangoLanguage *language);
extern
void pango_font_map_list_families (PangoFontMap *fontmap,externPangoFontFamily ***families,externint *n_families);
extern
guint pango_font_map_get_serial (PangoFontMap *fontmap);
extern
void pango_font_map_changed (PangoFontMap *fontmap);
extern
GType pango_context_get_type (void);
extern
PangoContext *pango_context_new (void);
extern
void pango_context_changed (PangoContext *context);
extern
void pango_context_set_font_map (PangoContext *context,externPangoFontMap *font_map);
extern
PangoFontMap *pango_context_get_font_map (PangoContext *context);
extern
guint pango_context_get_serial (PangoContext *context);
extern
void pango_context_list_families (PangoContext *context,externPangoFontFamily ***families,externint *n_families);
extern
PangoFont * pango_context_load_font (PangoContext *context,externconst PangoFontDescription *desc);
extern
PangoFontset *pango_context_load_fontset (PangoContext *context,externconst PangoFontDescription *desc,externPangoLanguage *language);
extern
PangoFontMetrics *pango_context_get_metrics (PangoContext *context,externconst PangoFontDescription *desc,externPangoLanguage *language);
extern
void pango_context_set_font_description (PangoContext *context,externconst PangoFontDescription *desc);
extern
PangoFontDescription * pango_context_get_font_description (PangoContext *context);
extern
PangoLanguage *pango_context_get_language (PangoContext *context);
extern
void pango_context_set_language (PangoContext *context,externPangoLanguage *language);
extern
void pango_context_set_base_dir (PangoContext *context,externPangoDirection direction);
extern
PangoDirection pango_context_get_base_dir (PangoContext *context);
extern
void pango_context_set_base_gravity (PangoContext *context,externPangoGravity gravity);
extern
PangoGravity pango_context_get_base_gravity (PangoContext *context);
extern
PangoGravity pango_context_get_gravity (PangoContext *context);
extern
void pango_context_set_gravity_hint (PangoContext *context,externPangoGravityHint hint);
extern
PangoGravityHint pango_context_get_gravity_hint (PangoContext *context);
extern
void pango_context_set_matrix (PangoContext *context,externconst PangoMatrix *matrix);
extern
const PangoMatrix * pango_context_get_matrix (PangoContext *context);
extern
void pango_context_set_round_glyph_positions (PangoContext *context,externgboolean round_positions);
extern
gboolean pango_context_get_round_glyph_positions (PangoContext *context);
extern
GList *pango_itemize (PangoContext *context,externconst char *text,externint start_index,externint length,externPangoAttrList *attrs,externPangoAttrIterator *cached_iter);
extern
GList *pango_itemize_with_base_dir (PangoContext *context,externPangoDirection base_dir,externconst char *text,externint start_index,externint length,externPangoAttrList *attrs,externPangoAttrIterator *cached_iter);
extern
PangoGlyphString *pango_glyph_string_new (void);
extern
void pango_glyph_string_set_size (PangoGlyphString *string,externgint new_len);
extern
GType pango_glyph_string_get_type (void);
extern
PangoGlyphString *pango_glyph_string_copy (PangoGlyphString *string);
extern
void pango_glyph_string_free (PangoGlyphString *string);
extern
void pango_glyph_string_extents (PangoGlyphString *glyphs,externPangoFont *font,externPangoRectangle *ink_rect,externPangoRectangle *logical_rect);
extern
int pango_glyph_string_get_width(PangoGlyphString *glyphs);
extern
void pango_glyph_string_extents_range (PangoGlyphString *glyphs,externint start,externint end,externPangoFont *font,externPangoRectangle *ink_rect,externPangoRectangle *logical_rect);
extern
void pango_glyph_string_get_logical_widths (PangoGlyphString *glyphs,externconst char *text,externint length,externint embedding_level,externint *logical_widths);
extern
void pango_glyph_string_index_to_x (PangoGlyphString *glyphs,externchar *text,externint length,externPangoAnalysis *analysis,externint index_,externgboolean trailing,externint *x_pos);
extern
void pango_glyph_string_x_to_index (PangoGlyphString *glyphs,externchar *text,externint length,externPangoAnalysis *analysis,externint x_pos,externint *index_,externint *trailing);
extern
void pango_shape (const char *text,externint length,externconst PangoAnalysis *analysis,externPangoGlyphString *glyphs);
extern
void pango_shape_full (const char *item_text,externint item_length,externconst char *paragraph_text,externint paragraph_length,externconst PangoAnalysis *analysis,externPangoGlyphString *glyphs);
extern
void pango_shape_with_flags (const char *item_text,externint item_length,externconst char *paragraph_text,externint paragraph_length,externconst PangoAnalysis *analysis,externPangoGlyphString *glyphs,externPangoShapeFlags flags);
extern
GList *pango_reorder_items (GList *logical_items);
extern
GType pango_engine_get_type (void);
extern
GType pango_engine_lang_get_type (void);
extern
GType pango_engine_shape_get_type (void);
extern
void script_engine_list (PangoEngineInfo **engines,externint *n_engines);
extern
void script_engine_init (GTypeModule *module);
extern
void script_engine_exit (void);
extern
PangoEngine *script_engine_create (const char *id);externextern
GType pango_attr_type_get_type (void);
extern
GType pango_underline_get_type (void);
extern
GType pango_show_flags_get_type (void);
extern
GType pango_bidi_type_get_type (void);
extern
GType pango_coverage_level_get_type (void);
extern
GType pango_direction_get_type (void);
extern
GType pango_style_get_type (void);
extern
GType pango_variant_get_type (void);
extern
GType pango_weight_get_type (void);
extern
GType pango_stretch_get_type (void);
extern
GType pango_font_mask_get_type (void);
extern
GType pango_shape_flags_get_type (void);
extern
GType pango_gravity_get_type (void);
extern
GType pango_gravity_hint_get_type (void);
extern
GType pango_alignment_get_type (void);
extern
GType pango_wrap_mode_get_type (void);
extern
GType pango_ellipsize_mode_get_type (void);
extern
GType pango_render_part_get_type (void);
extern
GType pango_script_get_type (void);
extern
GType pango_tab_align_get_type (void);
extern
GType pango_glyph_item_get_type (void);
extern
PangoGlyphItem *pango_glyph_item_split (PangoGlyphItem *orig,externconst char *text,externint split_index);
extern
PangoGlyphItem *pango_glyph_item_copy (PangoGlyphItem *orig);
extern
void pango_glyph_item_free (PangoGlyphItem *glyph_item);
extern
GSList * pango_glyph_item_apply_attrs (PangoGlyphItem *glyph_item,externconst char *text,externPangoAttrList *list);
extern
void pango_glyph_item_letter_space (PangoGlyphItem *glyph_item,externconst char *text,externPangoLogAttr *log_attrs,externint letter_spacing);
extern
void pango_glyph_item_get_logical_widths (PangoGlyphItem *glyph_item,externconst char *text,externint *logical_widths);
extern
GType pango_glyph_item_iter_get_type (void);
extern
PangoGlyphItemIter *pango_glyph_item_iter_copy (PangoGlyphItemIter *orig);
extern
void pango_glyph_item_iter_free (PangoGlyphItemIter *iter);
extern
gboolean pango_glyph_item_iter_init_start (PangoGlyphItemIter *iter,externPangoGlyphItem *glyph_item,externconst char *text);
extern
gboolean pango_glyph_item_iter_init_end (PangoGlyphItemIter *iter,externPangoGlyphItem *glyph_item,externconst char *text);
extern
gboolean pango_glyph_item_iter_next_cluster (PangoGlyphItemIter *iter);
extern
gboolean pango_glyph_item_iter_prev_cluster (PangoGlyphItemIter *iter);
extern
PangoTabArray *pango_tab_array_new (gint initial_size,externgboolean positions_in_pixels);
extern
PangoTabArray *pango_tab_array_new_with_positions (gint size,externgboolean positions_in_pixels,externPangoTabAlign first_alignment,externgint first_position,extern...);
extern
GType pango_tab_array_get_type (void);
extern
PangoTabArray *pango_tab_array_copy (PangoTabArray *src);
extern
void pango_tab_array_free (PangoTabArray *tab_array);
extern
gint pango_tab_array_get_size (PangoTabArray *tab_array);
extern
void pango_tab_array_resize (PangoTabArray *tab_array,externgint new_size);
extern
void pango_tab_array_set_tab (PangoTabArray *tab_array,externgint tab_index,externPangoTabAlign alignment,externgint location);
extern
void pango_tab_array_get_tab (PangoTabArray *tab_array,externgint tab_index,externPangoTabAlign *alignment,externgint *location);
extern
void pango_tab_array_get_tabs (PangoTabArray *tab_array,externPangoTabAlign **alignments,externgint **locations);
extern
gboolean pango_tab_array_get_positions_in_pixels (PangoTabArray *tab_array);
extern
GType pango_layout_get_type (void);
extern
PangoLayout *pango_layout_new (PangoContext *context);
extern
PangoLayout *pango_layout_copy (PangoLayout *src);
extern
PangoContext *pango_layout_get_context (PangoLayout *layout);
extern
void pango_layout_set_attributes (PangoLayout *layout,externPangoAttrList *attrs);
extern
PangoAttrList *pango_layout_get_attributes (PangoLayout *layout);
extern
void pango_layout_set_text (PangoLayout *layout,externconst char *text,externint length);
extern
const char *pango_layout_get_text (PangoLayout *layout);
extern
gint pango_layout_get_character_count (PangoLayout *layout);
extern
void pango_layout_set_markup (PangoLayout *layout,externconst char *markup,externint length);
extern
void pango_layout_set_markup_with_accel (PangoLayout *layout,externconst char *markup,externint length,externgunichar accel_marker,externgunichar *accel_char);
extern
void pango_layout_set_font_description (PangoLayout *layout,externconst PangoFontDescription *desc);
extern
const PangoFontDescription *pango_layout_get_font_description (PangoLayout *layout);
extern
void pango_layout_set_width (PangoLayout *layout,externint width);
extern
int pango_layout_get_width (PangoLayout *layout);
extern
void pango_layout_set_height (PangoLayout *layout,externint height);
extern
int pango_layout_get_height (PangoLayout *layout);
extern
void pango_layout_set_wrap (PangoLayout *layout,externPangoWrapMode wrap);
extern
PangoWrapMode pango_layout_get_wrap (PangoLayout *layout);
extern
gboolean pango_layout_is_wrapped (PangoLayout *layout);
extern
void pango_layout_set_indent (PangoLayout *layout,externint indent);
extern
int pango_layout_get_indent (PangoLayout *layout);
extern
void pango_layout_set_spacing (PangoLayout *layout,externint spacing);
extern
int pango_layout_get_spacing (PangoLayout *layout);
extern
void pango_layout_set_line_spacing (PangoLayout *layout,externfloat factor);
extern
float pango_layout_get_line_spacing (PangoLayout *layout);
extern
void pango_layout_set_justify (PangoLayout *layout,externgboolean justify);
extern
gboolean pango_layout_get_justify (PangoLayout *layout);
extern
void pango_layout_set_auto_dir (PangoLayout *layout,externgboolean auto_dir);
extern
gboolean pango_layout_get_auto_dir (PangoLayout *layout);
extern
void pango_layout_set_alignment (PangoLayout *layout,externPangoAlignment alignment);
extern
PangoAlignment pango_layout_get_alignment (PangoLayout *layout);
extern
void pango_layout_set_tabs (PangoLayout *layout,externPangoTabArray *tabs);
extern
PangoTabArray* pango_layout_get_tabs (PangoLayout *layout);
extern
void pango_layout_set_single_paragraph_mode (PangoLayout *layout,externgboolean setting);
extern
gboolean pango_layout_get_single_paragraph_mode (PangoLayout *layout);
extern
void pango_layout_set_ellipsize (PangoLayout *layout,externPangoEllipsizeMode ellipsize);
extern
PangoEllipsizeMode pango_layout_get_ellipsize (PangoLayout *layout);
extern
gboolean pango_layout_is_ellipsized (PangoLayout *layout);
extern
int pango_layout_get_unknown_glyphs_count (PangoLayout *layout);
extern
void pango_layout_context_changed (PangoLayout *layout);
extern
guint pango_layout_get_serial (PangoLayout *layout);
extern
void pango_layout_get_log_attrs (PangoLayout *layout,externPangoLogAttr **attrs,externgint *n_attrs);
extern
const PangoLogAttr *pango_layout_get_log_attrs_readonly (PangoLayout *layout,externgint *n_attrs);
extern
void pango_layout_index_to_pos (PangoLayout *layout,externint index_,externPangoRectangle *pos);
extern
void pango_layout_index_to_line_x (PangoLayout *layout,externint index_,externgboolean trailing,externint *line,externint *x_pos);
extern
void pango_layout_get_cursor_pos (PangoLayout *layout,externint index_,externPangoRectangle *strong_pos,externPangoRectangle *weak_pos);
extern
void pango_layout_move_cursor_visually (PangoLayout *layout,externgboolean strong,externint old_index,externint old_trailing,externint direction,externint *new_index,externint *new_trailing);
extern
gboolean pango_layout_xy_to_index (PangoLayout *layout,externint x,externint y,externint *index_,externint *trailing);
extern
void pango_layout_get_extents (PangoLayout *layout,externPangoRectangle *ink_rect,externPangoRectangle *logical_rect);
extern
void pango_layout_get_pixel_extents (PangoLayout *layout,externPangoRectangle *ink_rect,externPangoRectangle *logical_rect);
extern
void pango_layout_get_size (PangoLayout *layout,externint *width,externint *height);
extern
void pango_layout_get_pixel_size (PangoLayout *layout,externint *width,externint *height);
extern
int pango_layout_get_baseline (PangoLayout *layout);
extern
int pango_layout_get_line_count (PangoLayout *layout);
extern
PangoLayoutLine *pango_layout_get_line (PangoLayout *layout,externint line);
extern
PangoLayoutLine *pango_layout_get_line_readonly (PangoLayout *layout,externint line);
extern
GSList * pango_layout_get_lines (PangoLayout *layout);
extern
GSList * pango_layout_get_lines_readonly (PangoLayout *layout);
extern
GType pango_layout_line_get_type (void);
extern
PangoLayoutLine *pango_layout_line_ref (PangoLayoutLine *line);
extern
void pango_layout_line_unref (PangoLayoutLine *line);
extern
gboolean pango_layout_line_x_to_index (PangoLayoutLine *line,externint x_pos,externint *index_,externint *trailing);
extern
void pango_layout_line_index_to_x (PangoLayoutLine *line,externint index_,externgboolean trailing,externint *x_pos);
extern
void pango_layout_line_get_x_ranges (PangoLayoutLine *line,externint start_index,externint end_index,externint **ranges,externint *n_ranges);
extern
void pango_layout_line_get_extents (PangoLayoutLine *line,externPangoRectangle *ink_rect,externPangoRectangle *logical_rect);
extern
void pango_layout_line_get_height (PangoLayoutLine *line,externint *height);
extern
void pango_layout_line_get_pixel_extents (PangoLayoutLine *layout_line,externPangoRectangle *ink_rect,externPangoRectangle *logical_rect);
extern
GType pango_layout_iter_get_type (void);
extern
PangoLayoutIter *pango_layout_get_iter (PangoLayout *layout);
extern
PangoLayoutIter *pango_layout_iter_copy (PangoLayoutIter *iter);
extern
void pango_layout_iter_free (PangoLayoutIter *iter);
extern
int pango_layout_iter_get_index (PangoLayoutIter *iter);
extern
PangoLayoutRun *pango_layout_iter_get_run (PangoLayoutIter *iter);
extern
PangoLayoutRun *pango_layout_iter_get_run_readonly (PangoLayoutIter *iter);
extern
PangoLayoutLine *pango_layout_iter_get_line (PangoLayoutIter *iter);
extern
PangoLayoutLine *pango_layout_iter_get_line_readonly (PangoLayoutIter *iter);
extern
gboolean pango_layout_iter_at_last_line (PangoLayoutIter *iter);
extern
PangoLayout *pango_layout_iter_get_layout (PangoLayoutIter *iter);
extern
gboolean pango_layout_iter_next_char (PangoLayoutIter *iter);
extern
gboolean pango_layout_iter_next_cluster (PangoLayoutIter *iter);
extern
gboolean pango_layout_iter_next_run (PangoLayoutIter *iter);
extern
gboolean pango_layout_iter_next_line (PangoLayoutIter *iter);
extern
void pango_layout_iter_get_char_extents (PangoLayoutIter *iter,externPangoRectangle *logical_rect);
extern
void pango_layout_iter_get_cluster_extents (PangoLayoutIter *iter,externPangoRectangle *ink_rect,externPangoRectangle *logical_rect);
extern
void pango_layout_iter_get_run_extents (PangoLayoutIter *iter,externPangoRectangle *ink_rect,externPangoRectangle *logical_rect);
extern
void pango_layout_iter_get_line_extents (PangoLayoutIter *iter,externPangoRectangle *ink_rect,externPangoRectangle *logical_rect);
extern
void pango_layout_iter_get_line_yrange (PangoLayoutIter *iter,externint *y0_,externint *y1_);
extern
void pango_layout_iter_get_layout_extents (PangoLayoutIter *iter,externPangoRectangle *ink_rect,externPangoRectangle *logical_rect);
extern
int pango_layout_iter_get_baseline (PangoLayoutIter *iter);externextern
GType pango_renderer_get_type (void);
extern
void pango_renderer_draw_layout (PangoRenderer *renderer,externPangoLayout *layout,externint x,externint y);
extern
void pango_renderer_draw_layout_line (PangoRenderer *renderer,externPangoLayoutLine *line,externint x,externint y);
extern
void pango_renderer_draw_glyphs (PangoRenderer *renderer,externPangoFont *font,externPangoGlyphString *glyphs,externint x,externint y);
extern
void pango_renderer_draw_glyph_item (PangoRenderer *renderer,externconst char *text,externPangoGlyphItem *glyph_item,externint x,externint y);
extern
void pango_renderer_draw_rectangle (PangoRenderer *renderer,externPangoRenderPart part,externint x,externint y,externint width,externint height);
extern
void pango_renderer_draw_error_underline (PangoRenderer *renderer,externint x,externint y,externint width,externint height);
extern
void pango_renderer_draw_trapezoid (PangoRenderer *renderer,externPangoRenderPart part,externdouble y1_,externdouble x11,externdouble x21,externdouble y2,externdouble x12,externdouble x22);
extern
void pango_renderer_draw_glyph (PangoRenderer *renderer,externPangoFont *font,externPangoGlyph glyph,externdouble x,externdouble y);
extern
void pango_renderer_activate (PangoRenderer *renderer);
extern
void pango_renderer_deactivate (PangoRenderer *renderer);
extern
void pango_renderer_part_changed (PangoRenderer *renderer,externPangoRenderPart part);
extern
void pango_renderer_set_color (PangoRenderer *renderer,externPangoRenderPart part,externconst PangoColor *color);
extern
PangoColor *pango_renderer_get_color (PangoRenderer *renderer,externPangoRenderPart part);
extern
void pango_renderer_set_alpha (PangoRenderer *renderer,externPangoRenderPart part,externguint16 alpha);
extern
guint16 pango_renderer_get_alpha (PangoRenderer *renderer,externPangoRenderPart part);
extern
void pango_renderer_set_matrix (PangoRenderer *renderer,externconst PangoMatrix *matrix);
extern
const PangoMatrix *pango_renderer_get_matrix (PangoRenderer *renderer);
extern
PangoLayout *pango_renderer_get_layout (PangoRenderer *renderer);
extern
PangoLayoutLine *pango_renderer_get_layout_line (PangoRenderer *renderer);
extern
char ** pango_split_file_list (const char *str);
extern
char *pango_trim_string (const char *str);
extern
gint pango_read_line (FILE *stream,externGString *str);
extern
gboolean pango_skip_space (const char **pos);
extern
gboolean pango_scan_word (const char **pos,externGString *out);
extern
gboolean pango_scan_string (const char **pos,externGString *out);
extern
gboolean pango_scan_int (const char **pos,externint *out);
extern
gboolean pango_parse_enum (GType type,externconst char *str,externint *value,externgboolean warn,externchar **possible_values);
extern
gboolean pango_parse_style (const char *str,externPangoStyle *style,externgboolean warn);
extern
gboolean pango_parse_variant (const char *str,externPangoVariant *variant,externgboolean warn);
extern
gboolean pango_parse_weight (const char *str,externPangoWeight *weight,externgboolean warn);
extern
gboolean pango_parse_stretch (const char *str,externPangoStretch *stretch,externgboolean warn);
extern
void pango_quantize_line_geometry (int *thickness,externint *position);
extern
guint8 * pango_log2vis_get_embedding_levels (const gchar *text,externint length,externPangoDirection *pbase_dir);
extern
gboolean pango_is_zero_width (gunichar ch);
extern
int pango_version (void);
extern
const char * pango_version_string (void);
extern
const char * pango_version_check (int required_major,externint required_minor,externint required_micro);extern