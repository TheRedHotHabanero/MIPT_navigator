//
// Created by karina on 16.05.2021.
//
#include "fbmf.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

void Fbmf::trick_button_pressed()
{
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "...............................pain.................................." << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    buffer.loadFromFile("../sound/fbmf.ogg");
    sound.setBuffer(buffer);
    sound.play();

}

Sprite Fbmf::create_trick_button()
{
    trick_button.loadFromFile(trick_button_);
    trick_button_texture.loadFromImage(trick_button);
    trick_button_sprite.setTexture(trick_button_texture);
    trick_button_sprite.setPosition(TRICK_BUTTON_POS_X, TRICK_BUTTON_POS_Y);
    return trick_button_sprite;
}

Sprite Fbmf::create_counting_points_button()
{
    counting_points_button.loadFromFile(counting_points_button_);
    counting_points_texture.loadFromImage(counting_points_button);
    counting_points_sprite.setTexture(counting_points_texture);
    counting_points_sprite.setPosition(COUNTING_POINTS_POS_X, COUNTING_POINTS_POS_Y);
    return counting_points_sprite;
}

void Fbmf::processing_keys(RenderWindow &window)
{
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
                exit_button_pressed(window);

            if (IntRect(COUNTING_POINTS_POS_X, COUNTING_POINTS_POS_Y,
                        COUNTING_POINTS_WIDTH, COUNTING_POINTS_HEIGHT).contains(Mouse::getPosition(window))
                & Mouse::isButtonPressed(Mouse::Left))
                counting_points_pressed(window);

            if (IntRect(TRICK_BUTTON_POS_X, TRICK_BUTTON_POS_Y,
                        TRICK_BUTTON_WIDTH, TRICK_BUTTON_HEIGHT).contains(Mouse::getPosition(window))
                & Mouse::isButtonPressed(Mouse::Left))
                trick_button_pressed();

            if (IntRect(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y,
                        EXIT_BUTTON_WIDTH, EXIT_BUTTON_HEIGHT).contains(Mouse::getPosition(window))
                & Mouse::isButtonPressed(Mouse::Left))
                exit_button_pressed(window);
        }
    }
}