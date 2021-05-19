//
// Created by karina on 16.05.2021.
//
#include "inbicst.h"

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

void Inbicst::trick_button_pressed(RenderWindow &window)
{
    SoundBuffer buffer;
    Sound sound;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-----Why you babysitting only two or three shots?----" << std::endl;
    std::cout << "-----I'ma show you how to turn it up a notch---------" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    buffer.loadFromFile("../sound/inbicst.wav");
    sound.setBuffer(buffer);
    sound.play();
}

void Inbicst::create_trick_button()
{
    trick_button.loadFromFile(trick_button_);
    trick_button_texture.loadFromImage(trick_button);
    trick_button_sprite.setTexture(trick_button_texture);
    trick_button_sprite.setPosition(TRICK_BUTTON_POS_X, TRICK_BUTTON_POS_Y);
}

void Inbicst::create_counting_points_button()
{
    counting_points_button.loadFromFile(counting_points_button_);
    counting_points_texture.loadFromImage(counting_points_button);
    counting_points_sprite.setTexture(counting_points_texture);
    counting_points_sprite.setPosition(COUNTING_POINTS_POS_X, COUNTING_POINTS_POS_Y);
}