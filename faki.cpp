//
// Created by karina on 16.05.2021.
//
#include "faki.h"

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

void Faki::trick_button_pressed(RenderWindow &window)
{
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "--------------------------ZZZZZZZZZZZZZZZZZZZZZ---------------------------" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    SoundBuffer buffer;
    Sound sound;
    buffer.loadFromFile("../sound/fakt.wav");
    sound.setBuffer(buffer);
    sound.play();
}

void Faki::create_trick_button()
{
    trick_button.loadFromFile(trick_button_);
    trick_button_texture.loadFromImage(trick_button);
    trick_button_sprite.setTexture(trick_button_texture);
    trick_button_sprite.setPosition(TRICK_BUTTON_POS_X, TRICK_BUTTON_POS_Y);
}

void Faki::create_counting_points_button()
{
    counting_points_button.loadFromFile(counting_points_button_);
    counting_points_texture.loadFromImage(counting_points_button);
    counting_points_sprite.setTexture(counting_points_texture);
    counting_points_sprite.setPosition(COUNTING_POINTS_POS_X, COUNTING_POINTS_POS_Y);
}

