/*
** EPITECH PROJECT, 2024
** include
** File description:
** include for linked list lib
*/

#ifndef GLL_H
    #define GLL_H
    #define FST list->first
    #define LST list->last
    #define NOT_EMPTY FST != NULL || LST != NULL

typedef struct info_s {
    void *data;
    struct info_s *next;
    struct info_s *prev;
} node_t;

typedef struct gll_s {
    int size;
    node_t *first;
    node_t *last;
} gll_t;

node_t *create_node(void *);
gll_t *create_list(void);

gll_t *add_list(node_t *, gll_t *);
gll_t *del_node(gll_t *, node_t *);
void node_swap(node_t *, node_t *);

node_t *get_node(gll_t *, int);

void clear_node(node_t *);
void gll_clear(gll_t *);
void gll_destroy(gll_t *);
#endif /*GLL_H*/
