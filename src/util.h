#ifndef __UTIL_H__
#define __UTIL_H__

char * yed_word_under_cursor(void);                           /* DO free result. */
char * yed_word_at_point(yed_frame *frame, int row, int col); /* DO free result. */

char * abs_path(const char *path, char *buff);
char * relative_path_if_subtree(const char *path, char *buff);
char * homeify_path(const char *path, char *buff);
const char * get_path_ext(const char *path);      /* Don't free result. */
const char * get_path_basename(const char *path); /* Don't free result. */
char * path_without_ext(const char *path);  /* DO free result. */

const char * get_config_path(void); /* Don't free result. */
char * get_config_item_path(const char *item); /* DO free result. */

char *exe_path(const char *prg); /* Free the result. */

int perc_subst(char *pattern, char *subst, char *buff, int buff_len);

void expand_path(const char *path, char *buff);

int file_exists_in_path(const char *path, const char *name);
int file_exists_in_PATH(const char *name);

array_t sh_split(const char *s);

void free_string_array(array_t array);
array_t copy_string_array(array_t array);

char *last_strstr(const char *haystack, const char *needle);
char *last_strnstr(const char *haystack, const char *needle, size_t len);

#ifdef NEED_STRNSTR
char *strnstr(const char *haystack, const char *needle, size_t len);
#endif

int rect_intersect(int top_a, int bottom_a, int left_a, int right_a,
                   int top_b, int bottom_b, int left_b, int right_b);

#endif
