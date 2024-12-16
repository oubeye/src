/*
** EPITECH PROJECT, 2024
** lib
** File description:
** linked list related function
** !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
** !!!DO NOT FORGET TO ADAPT TO!!!
** !!!!!! CURRENT PROJECT !!!!!!!!
** !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
** maintenance code explaine what must
** be done for every new project
** maintenance code:
** 1: change prm and init
** 2:
*/

#include "my.h"

gll_t *create_list(void)
{
    gll_t *list = malloc(sizeof(gll_t *));

    list->first = NULL;
    list->last = NULL;
    list->size = 0;
    return list;
}

//1
node_t *create_node(char *type, char *name, int nbr)
{
    node_t *nw_node = (node_t *)malloc(sizeof(struct info_s));

    nw_node->type = malloc(sizeof(char) * my_strlen(type) + 1);
    if (!nw_node->type)
        return NULL;
    my_strcpy(nw_node->type, type);
    nw_node->name = malloc(sizeof(char) * my_strlen(name) + 1);
    if (!nw_node->name)
        return NULL;
    my_strcpy(nw_node->name, name);
    nw_node->id = nbr;
    nw_node->next = NULL;
    nw_node->prev = NULL;
    return nw_node;
}

gll_t *add_list(node_t *nw_node, gll_t *list)
{
    if (list->first == NULL) {
        list->first = nw_node;
        list->last = nw_node;
    } else {
        list->first->prev = nw_node;
        nw_node->next = list->first;
        list->first = nw_node;
    }
    list->size++;
    return list;
}

void gll_clear(gll_t *list)
{
    for (node_t *tmp = FST; tmp != LST; tmp = FST) {
        list->first = tmp->next;
        clear_node(tmp);
    }
        clear_node(LST);
        list->size = 0;
        LST = NULL;
        FST = NULL;
}

void gll_destroy(gll_t *list)
{
    if (NOT_EMPTY)
        gll_clear(list);
    free(list);
}
