//
// Created by karina on 16.05.2021.
//
#include "frkt.h"

void Frkt::create_trick_button(const string &trick_button_)
{
    trick_button.loadFromFile(trick_button_);
    trick_button_texture.loadFromImage(trick_button);
    trick_button_sprite.setTexture(trick_button_texture);
    trick_button_sprite.setPosition(TRICK_BUTTON_POS_X, TRICK_BUTTON_POS_Y);
}