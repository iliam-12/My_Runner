/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** destroy_motherfuker
*/

#include "my.h"

void destroy(init_t *elem)
{
    sfSprite_destroy(elem->sprite_menu);
    sfSprite_destroy(elem->sprite_bg);
    sfSprite_destroy(elem->sprite_bg1);
    sfSprite_destroy(elem->sprite_floor);
    sfSprite_destroy(elem->sprite_cloud);
    sfSprite_destroy(elem->sprite_ninja);
    sfSprite_destroy(elem->sprite_fusee);
    sfTexture_destroy(elem->texture_menu);
    sfTexture_destroy(elem->texture_bg);
    sfTexture_destroy(elem->texture_bg1);
    sfTexture_destroy(elem->texture_floor);
    sfTexture_destroy(elem->texture_cloud);
    sfTexture_destroy(elem->texture_ninja);
    sfTexture_destroy(elem->texture_fusee);
    sfFont_destroy(elem->font_win);
    sfFont_destroy(elem->font_lose);
    sfFont_destroy(elem->font_pause);
    sfFont_destroy(elem->font);
    sfFont_destroy(elem->font_nb);
    sfText_destroy(elem->text_win);
    sfText_destroy(elem->text_lose);
    sfText_destroy(elem->text_pause);
    sfText_destroy(elem->text);
    sfText_destroy(elem->text_nb);
    sfMusic_destroy(elem->sound);
    sfMusic_destroy(elem->sound2);
    sfRenderWindow_destroy(elem->window);
}