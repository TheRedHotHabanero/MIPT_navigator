//
// Created by karina on 16.05.2021.
//
#include "faki.h"

void Faki::create_trick_button(const string &trick_button_)
{
    trick_button.loadFromFile(trick_button_);
    trick_button_texture.loadFromImage(trick_button);
    trick_button_sprite.setTexture(trick_button_texture);
    trick_button_sprite.setPosition(TRICK_BUTTON_POS_X, TRICK_BUTTON_POS_Y);
}

void Faki::create_text_title(const string &font_for_title_, string text_)
{
    font_for_title.loadFromFile(font_for_title_);
    title.setString(text_);
    title.setFont(font_for_title);
    title.setCharacterSize(CHARACTER_SIZE);
    title.setColor(Color::Black);
    title.setPosition(TITLE_POS_X, TITLE_POS_Y);
}

void Faki::welcome_school_page(string& trick_button_,
                               string& title_text_,
                               string& phystech_background_,
                               string& exit_button_,
                               string& counting_points_button_)
{
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Faki");
    create_text_title(title_text_);
    create_trick_button(trick_button_);
    create_exit_button(exit_button_);
    create_phystech_school_background(phystech_background_);
    create_counting_points_button(counting_points_button_);
}

