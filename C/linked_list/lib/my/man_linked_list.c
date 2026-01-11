/*
** EPITECH PROJECT, 2024
** lid linked list
** File description:
** function for manipulation of linked list
*/

#include "my.h"

//don't forget to adapt for void *
node_t *get_node(gll_t *list, int id)
{
    node_t *tmp = FST;

    for (int i = 0; i < list->size; i++) {
        if (tmp->id == id)
            return tmp;
        tmp = tmp->next;
    }
    return NULL;
}

void clear_node(node_t *node)
{
    if (!node)
        return;
    free(node->type);
    free(node->name);
    free(node);
}

gll_t *del_node(gll_t *list, node_t *node)
{
    if (!node)
        return list;
    if (node == FST && node == LST) {
        gll_clear(list);
        return list;
    }
    if (node == FST) {
        FST = node->next;
        node->next->prev = NULL;
    } else if (node == LST) {
        LST = node->prev;
        node->prev->next = NULL;
    } else {
        node->next->prev = node->prev;
        node->prev->next = node->next;
    }
    clear_node(node);
    list->size--;
    return list;
}

static node_t *chg_node(node_t *dst, node_t *src)
{
    dst->type = malloc(sizeof(char) * my_strlen(src->type) + 1);
    if (!dst->type)
        return NULL;
    my_strcpy(dst->type, src->type);
    dst->name = malloc(sizeof(char) * my_strlen(src->name) + 1);
    if (!dst->name)
        return NULL;
    my_strcpy(dst->name, src->name);
    dst->id = src->id;
    return dst;
}

void node_swap(node_t *a, node_t *b)
{
    node_t *tmp = create_node(a->type, a->name, a->id);

    a = chg_node(a, b);
    b = chg_node(b, tmp);
}
