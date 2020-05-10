/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** lll JÖKER lll
*/

#ifndef MY_H_
#define MY_H_

/* _____ INCLUDE _____ */

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/Text.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* _______ STRUCT _______ */

struct init
{
    int success;
    int nb;
    int step;
    int jump;
    int dead;
    int point;
    char *s;
    char *str;
    char *stre;
    char *strm;
    char *strw;
    char *strl;

    sfRenderWindow *window;
    sfVideoMode mode;
    sfTexture *texture_menu;
    sfTexture *texture_bg;
    sfSprite *sprite_menu;
    sfSprite *sprite_bg;
    sfTexture *texture_bg1;
    sfSprite *sprite_bg1;
    sfTexture *texture_ninja;
    sfSprite *sprite_ninja;
    sfTexture *texture_floor;
    sfSprite *sprite_floor;
    sfTexture *texture_cloud;
    sfSprite *sprite_cloud;
    sfTexture *texture_fusee;
    sfSprite *sprite_fusee;
    sfVector2f pos_fusee;
    sfVector2f pos_menu;
    sfVector2f pos_win;
    sfVector2f pos_lose;
    sfVector2f pos_ninja;
    sfVector2f pos_bg1;
    sfVector2f pos_floor;
    sfVector2f pos_cloud;
    sfVector2f pos_pause;
    sfVector2f pos_text;
    sfVector2f pos_nb;
    sfIntRect size_fusee;
    sfIntRect size_rect;
    sfIntRect size_rect1;
    sfIntRect size_floor;
    sfIntRect size_cloud;
    sfClock *time2;
    sfVector2i windob;
    sfMusic *sound;
    sfMusic *sound2;
    sfFont *font_win;
    sfFont *font_lose;
    sfFont *font_menu;
    sfFont *font_pause;
    sfFont *font_nb;
    sfText *text_win;
    sfText *text_lose;
    sfText *text_menu;
    sfText *text_pause;
    sfText *text_nb;
    sfEvent event;
    sfFont *font;
    sfText *text;
};

typedef struct init init_t;

/* ________ PROTOTYPE _________ */

int main(int ac, char **av);
void law(void);
void my_putchar(char c);
int my_putstr(char const *str);
int admin(int ac, char **av);
void destroy(init_t *elem);

#endif /* !MY_H_ */