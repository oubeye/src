/*
** EPITECH PROJECT, 2024
** graphic header
** File description:
** header for graphical programing
*/

#ifndef M_GRAPH
    #define M_GRAPH
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <stdlib.h>

typedef struct sprite_s {
    sfTexture texture;
    sfSprite spr;
} spr_t

typedef struct window_s {
    sfRenderWindow *window;
    sfVideoMode mode;
    char *title;
    spr_t *sprite;
} win_t;


sfCircleShape *create_circle(sfVector2f position, float radius);
int create_renderwindow(win_t *w);
#endif
