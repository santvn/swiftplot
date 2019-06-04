namespace CPPAGGRenderer{

  const void * initializePlot(float w, float h, float subW, float subH);

  void draw_rect(const float *x, const float *y, float thickness, float r, float g, float b, float a, bool is_origin_shifted, const void *object);

  void draw_solid_rect(const float *x, const float *y, float r, float g, float b, float a, int hatch_pattern, bool is_origin_shifted, const void *object);

  void draw_line(const float *x, const float *y, float thickness, float r, float g, float b, float a, bool is_dashed, bool is_origin_shifted, const void *object);

  void draw_plot_lines(const float *x, const float *y, int size, float thickness, float r, float g, float b, float a, bool isDashed, const void *object);

  void draw_text(const char *s, float x, float y, float size, float thickness, float angle, bool is_origin_shifted, const void *object);

  float get_text_width(const char *s, float size, const void *object);

  void save_image(const char *s, const void *object);

  const unsigned char* get_png_buffer(const void *object);

  int get_png_buffer_size(const void *object);

}