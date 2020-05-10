/*
** EPITECH PROJECT, 2020
** my_runner
** File description:
** lll JÖKER lll
*/

#include "my.h"

void window(init_t *elem)
{
    elem->mode.width = 1920;
    elem->mode.height = 1080;
    elem->window = sfRenderWindow_create(elem->mode, "/*   MY RUNNER   */",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(elem->window, 60);
}

void my_background(init_t *elem)
{
    elem->texture_bg = sfTexture_createFromFile("background/blue_background.jpg", NULL);
    elem->sprite_bg = sfSprite_create();
    sfSprite_setTexture(elem->sprite_bg, elem->texture_bg, sfTrue);
}

void menu(init_t *elem)
{
    elem->texture_menu = sfTexture_createFromFile("background/menu.jpg", NULL);
    elem->sprite_menu = sfSprite_create();
    sfSprite_setTexture(elem->sprite_menu, elem->texture_menu, sfTrue);
}

void my_background1(init_t *elem)
{
    elem->texture_bg1 = sfTexture_createFromFile("background/triple.png", NULL);
    elem->sprite_bg1 = sfSprite_create();
    sfSprite_setTexture(elem->sprite_bg1, elem->texture_bg1, sfTrue);
    elem->pos_bg1.x = 0;
    elem->pos_bg1.y = 650;
    elem->size_rect1.width = 3600;
    elem->size_rect1.height = 240;
    sfSprite_setTextureRect(elem->sprite_bg1, elem->size_rect1);
}

void my_longcloud(init_t *elem)
{
    elem->texture_cloud = sfTexture_createFromFile("background/longcloud.png", NULL);
    elem->sprite_cloud = sfSprite_create();
    sfSprite_setTexture(elem->sprite_cloud, elem->texture_cloud, sfTrue);
    elem->pos_cloud.x = 0;
    elem->pos_cloud.y = 0;
    elem->size_cloud.width = 15360;
    elem->size_cloud.height = 800;
    sfSprite_setTextureRect(elem->sprite_cloud, elem->size_cloud);
}

void my_floor(init_t *elem)
{
    elem->texture_floor = sfTexture_createFromFile("background/floor.png", NULL);
    elem->sprite_floor = sfSprite_create();
    sfSprite_setTexture(elem->sprite_floor, elem->texture_floor, sfTrue);
    elem->pos_floor.x = 0;
    elem->pos_floor.y = 843;
    elem->size_floor.width = 3978;
    elem->size_floor.height = 219;
    sfSprite_setTextureRect(elem->sprite_floor, elem->size_floor);
}

void my_ninja(init_t *elem)
{
    elem->texture_ninja = sfTexture_createFromFile("images/ninja_triple.png", NULL);
    elem->sprite_ninja = sfSprite_create();
    sfSprite_setTexture(elem->sprite_ninja, elem->texture_ninja, sfTrue);
    elem->pos_ninja.x = 270;
    elem->pos_ninja.y = 700;
    elem->size_rect.width = 150;
    elem->size_rect.height = 150;
    sfSprite_setTextureRect(elem->sprite_ninja, elem->size_rect);
    elem->time2 = sfClock_create();
}

void my_fusee(init_t *elem)
{
    elem->texture_fusee = sfTexture_createFromFile("fusee+fire.png", NULL);
    elem->sprite_fusee = sfSprite_create();
    sfSprite_setTexture(elem->sprite_fusee, elem->texture_fusee, sfTrue);
    elem->pos_fusee.x = 1000;
    elem->pos_fusee.y = 730;
    elem->size_fusee.width = 200;
    elem->size_fusee.height = 84;
    sfSprite_setTextureRect(elem->sprite_fusee, elem->size_fusee);
}

void clock(init_t *elem)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(elem->time2)) >= 70){
        if (elem->dead == 1){
            elem->size_rect.top = 350;
            elem->size_rect.left += 150;
            if (elem->size_rect.left >= 1200)
                elem->size_rect.left = 900;
        }
        if (elem->dead == 0)
        elem->point++;
        if (elem->jump != 0 && elem->dead == 0) {
            elem->size_rect.top = 150;
            if (elem->size_rect.left >= 1200)
                elem->size_rect.left = 0;
            if (elem->pos_ninja.y <= 450)
                elem->pos_ninja.y = 450;
        }
        if (elem->jump == 0 && elem->dead == 0)
            elem->size_rect.top = 0;
        elem->size_rect.left += 150;
        elem->size_fusee.left += 200;
        if (elem->size_fusee.left == 1600 && elem->dead == 0)
            elem->size_fusee.left = 0;
        sfSprite_setTextureRect(elem->sprite_fusee, elem->size_fusee);
        if (elem->size_rect.left == 750 && elem->dead == 0)
            elem->size_rect.left = 0;
        sfSprite_setTextureRect(elem->sprite_ninja, elem->size_rect);
        sfClock_restart(elem->time2);
    }
}

void sound(init_t *elem)
{
    elem->sound = sfMusic_createFromFile("sound/Jill_Stark_Neon.ogg");
    sfMusic_setLoop(elem->sound, sfTrue);
    sfMusic_play(elem->sound);
}

void put_score(init_t *elem)
{
    elem->str = "SCORE";
    elem->font = sfFont_createFromFile("police/E-Muse-Bold.otf");
    elem->text = sfText_create();
    sfText_setCharacterSize(elem->text, 40);
    sfText_setString(elem->text, elem->str);
    sfText_setFont(elem->text, elem->font);
    elem->pos_text.x = 1700;
    elem->pos_text.y = 860;
    sfText_setPosition(elem->text, elem->pos_text);
    elem->point = 0;
}

void win(init_t *elem)
{
    elem->strw = "You Win my friiiiend !";
    elem->font_win = sfFont_createFromFile("police/E-Muse-Bold.otf");
    elem->text_win = sfText_create();
    sfText_setCharacterSize(elem->text_win, 40);
    sfText_setString(elem->text_win, elem->strw);
    sfText_setColor(elem->text_win, sfGreen);
    sfText_setFont(elem->text_win, elem->font_win);
    elem->pos_win.x = 680;
    elem->pos_win.y = 500;
    sfText_setPosition(elem->text_win, elem->pos_win);
}

void lose(init_t *elem)
{
    elem->strl = "You Lose my niggaeee !";
    elem->font_lose = sfFont_createFromFile("police/E-Muse-Bold.otf");
    elem->text_lose = sfText_create();
    sfText_setCharacterSize(elem->text_lose, 40);
    sfText_setString(elem->text_lose, elem->strl);
    sfText_setColor(elem->text_lose, sfRed);
    sfText_setFont(elem->text_lose, elem->font_lose);
    elem->pos_lose.x = 680;
    elem->pos_lose.y = 500;
    sfText_setPosition(elem->text_lose, elem->pos_lose);
}

void text_menu(init_t *elem)
{
    elem->strm = "Press 'Enter' to Start";
    elem->font_menu = sfFont_createFromFile("police/E-Muse-Bold.otf");
    elem->text_menu = sfText_create();
    sfText_setCharacterSize(elem->text_menu, 40);
    sfText_setString(elem->text_menu, elem->strm);
    sfText_setFont(elem->text_menu, elem->font_menu);
    elem->pos_menu.x = 600;
    elem->pos_menu.y = 500;
    sfText_setPosition(elem->text_menu, elem->pos_menu);
}

void poz(init_t *elem)
{
    elem->stre = "'Enter' to play\n\n\n  'R' to restart\n\n\n    'Q' to quit";
    elem->font_pause = sfFont_createFromFile("police/E-Muse-Bold.otf");
    elem->text_pause = sfText_create();
    sfText_setCharacterSize(elem->text_pause, 40);
    sfText_setString(elem->text_pause, elem->stre);
    sfText_setFont(elem->text_pause, elem->font_pause);
    elem->pos_pause.x = 700;
    elem->pos_pause.y = 400;
    sfText_setPosition(elem->text_pause, elem->pos_pause);
}

char *int_tochar(int i)
{
    int len = 0;
    int neg = 0;
    if (i == 0)
        len++;
    for (int k = i; k != 0; k = k/10, len++);
    if (i < 0) {
        len++;
        neg = 1;
        i = i * -1;
    }
    char *c = malloc(sizeof(char) * (len + 1));
    c[len] = '\0';
    len--;
    for (; len >= 0; len--) {
        c[len] = i % 10 + 48;
        i = i / 10;
    }
    if (neg)
        c[0] = '-';
    return (c);
}

void display_nb(init_t *elem)
{
    elem->s = int_tochar(elem->point);
    elem->font_nb = sfFont_createFromFile("police/E-Muse-Bold.otf");
    elem->text_nb = sfText_create();
    sfText_setCharacterSize(elem->text_nb, 50);
    sfText_setColor(elem->text_nb, sfWhite);
    sfText_setString(elem->text_nb, elem->s);
    sfText_setFont(elem->text_nb, elem->font_nb);
    elem->pos_nb.x = 1750;
    elem->pos_nb.y = 930;
    sfText_setPosition(elem->text_nb, elem->pos_nb);
}

void render(init_t *elem)
{
    sfRenderWindow_display(elem->window);
    sfRenderWindow_clear(elem->window, sfBlack);
    sfRenderWindow_drawSprite(elem->window, elem->sprite_bg, NULL);
    sfSprite_setTexture(elem->sprite_bg, elem->texture_bg, sfTrue);


    sfSprite_setPosition(elem->sprite_cloud, elem->pos_cloud);
    sfRenderWindow_drawSprite(elem->window, elem->sprite_cloud, NULL);

    sfSprite_setPosition(elem->sprite_bg1, elem->pos_bg1);
    sfRenderWindow_drawSprite(elem->window, elem->sprite_bg1, NULL);

    sfSprite_setPosition(elem->sprite_fusee, elem->pos_fusee);
    sfRenderWindow_drawSprite(elem->window, elem->sprite_fusee, NULL);

    sfSprite_setPosition(elem->sprite_ninja, elem->pos_ninja);
    sfRenderWindow_drawSprite(elem->window, elem->sprite_ninja, NULL);

    sfSprite_setPosition(elem->sprite_floor, elem->pos_floor);
    sfRenderWindow_drawSprite(elem->window, elem->sprite_floor, NULL);

    if (elem->step == 2) {
        sfRenderWindow_drawSprite(elem->window, elem->sprite_menu, NULL);
        sfSprite_setTexture(elem->sprite_menu, elem->texture_menu, sfTrue);
        sfRenderWindow_drawText(elem->window, elem->text_pause, NULL);
    }
    if (elem->step == 0) {
        sfRenderWindow_drawText(elem->window, elem->text, NULL);
        sfRenderWindow_drawText(elem->window, elem->text_nb, NULL);
    }
    if (elem->success == 3 && elem->dead == 0) {
        sfRenderWindow_drawText(elem->window, elem->text_win, NULL);
        elem->step = 2;
    }
    if (elem->dead == 1)
        sfRenderWindow_drawText(elem->window, elem->text_lose, NULL);
    if (elem->step == 1) {
        sfRenderWindow_drawSprite(elem->window, elem->sprite_menu, NULL);
        sfSprite_setTexture(elem->sprite_menu, elem->texture_menu, sfTrue);
        sfRenderWindow_drawText(elem->window, elem->text_menu, NULL);
    }
}

int main(int ac, char **av)
{
    init_t *elem = malloc(sizeof(init_t));
    elem->dead = 0;
    elem->jump = 0;
    elem->step = 1;
    elem->success = 0;

    admin(ac, av);
    my_background(elem);
    win(elem);
    lose(elem);
    put_score(elem);
    text_menu(elem);
    my_background1(elem);
    my_floor(elem);
    my_longcloud(elem);
    my_ninja(elem);
    my_fusee(elem);
    window(elem);
    sound(elem);

    while(sfRenderWindow_isOpen(elem->window)){
        if (elem->success == 3) {
            win(elem);
            elem->step = 6;
        }
        if (elem->dead == 1) {
            lose(elem);
            elem->step = 0;
        }
        if (elem->step == 1)
            menu(elem);
        if (sfKeyboard_isKeyPressed(sfKeyEnter) == sfTrue) {
            elem->step = 0;
            if (elem->success == 3)
                elem->step = 6;
        }
        while (sfRenderWindow_pollEvent(elem->window, &elem->event)){
            if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue &&
                elem->pos_ninja.y == 700 && elem->dead == 0) {
                elem->jump = 1;
            }
            if (sfKeyboard_isKeyPressed(sfKeyR) == sfTrue) {
                elem->success = 0;
                elem->nb = 0;
                elem->step = 1;
                elem->jump = 0;
                elem->dead = 0;
                elem->point = 0;
                elem->pos_ninja.x = 270;
                elem->pos_ninja.y = 700;
                elem->pos_fusee.x = 1920;
            }
            if (elem->step == 2) {
                if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue)
                    elem->step = 0;
            }
            if (elem->step == 0) {
                if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
                    poz(elem);
                    elem->step = 2;
                }
            }
            if (elem->event.type == sfEvtClosed ||
                sfKeyboard_isKeyPressed(sfKeyQ))
                sfRenderWindow_close(elem->window);
        }
        display_nb(elem);
        if ((elem->pos_fusee.x == 400 || elem->pos_fusee.x == 100)
        && (elem->pos_ninja.y == 700 || elem->pos_ninja.y == 650) && elem->dead == 0) {
                elem->dead = 1;
                elem->pos_fusee.x = -201;
        }
        if (elem->pos_fusee.x <= -190)
            elem->success++;
        if (elem->step == 0) {
            elem->pos_fusee.x -= 10;
            if (elem->pos_fusee.x <= -200)
                elem->pos_fusee.x = 1920;
            elem->pos_bg1.x -= 1;
            if (elem->pos_bg1.x <= -1200)
                elem->pos_bg1.x = 0;
            if (elem->dead == 0) {
            elem->pos_floor.x -= 12;
                if (elem->pos_floor.x <= -663)
                    elem->pos_floor.x = 0;
            }
            elem->pos_cloud.x -= 2;
            if (elem->pos_cloud.x <= -7680)
                elem->pos_cloud.x = 0;
            if (elem->jump == 1 && elem->pos_ninja.y > 600)
                elem->pos_ninja.y -= 6;
            if (elem->jump == 1 && elem->pos_ninja.y > 520)
                elem->pos_ninja.y -= 5.3;
            if (elem->jump == 1 && elem->pos_ninja.y > 450) {
                elem->pos_ninja.y -= 4;
                if (elem->pos_ninja.y <= 450)
                    elem->jump = 2;
            }
            if (elem->jump == 2 && elem->pos_ninja.y <= 610)
                elem->pos_ninja.y += 5;
            if (elem->jump == 2 && elem->pos_ninja.y < 700 && elem->pos_ninja.y > 600) {
                elem->pos_ninja.y += 6;
                if (elem->pos_ninja.y >= 700) {
                    elem->pos_ninja.y = 700;
                    elem->jump = 0;
                }
            }
            clock(elem);
        }
        render(elem);
    }
    destroy(elem);
}