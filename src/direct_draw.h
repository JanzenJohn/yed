#ifndef __DIRECT_DRAW_H__
#define __DIRECT_DRAW_H__

typedef struct {
    int        row;
    int        col;
    int        len;
    int        scomp;
    yed_attrs  attrs;
    int        additional_attr_flags;
    char      *string;
    int        live;
    int        dirty;
} yed_direct_draw_t;

void yed_init_direct_draw(void);
yed_direct_draw_t * yed_direct_draw(int row, int col, yed_attrs attrs, char *string);
yed_direct_draw_t * yed_direct_draw_style(int row, int col, int scomp, char *string);
void yed_do_direct_draws(void);
void yed_kill_direct_draw(yed_direct_draw_t *dd);
void yed_mark_dirty_direct_draws(int top, int bottom, int left, int right);
void yed_mark_direct_draws_as_dirty(void);

#endif
