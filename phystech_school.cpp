//
// Created by karina on 12.05.2021.
//
#include "phystech_school.h"

void Phystech_School::create_exit_button()
{
    string exit_button_ = "../images/exit_button.png";

    exit_button.loadFromFile(exit_button_);
    exit_button_texture.loadFromImage(exit_button);
    exit_button_sprite.setTexture(exit_button_texture);
    exit_button_sprite.setPosition(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y);
}

void Phystech_School::create_counting_points_button()
{
    counting_points_button.loadFromFile(counting_points_button_);
    counting_points_texture.loadFromImage(counting_points_button);
    counting_points_sprite.setTexture(counting_points_texture);
    counting_points_sprite.setPosition(COUNTING_POINTS_POS_X, COUNTING_POINTS_POS_Y);
}

void Phystech_School::create_phystech_school_background(const string& phystech_school_background_)
{
    phystech_school_background.loadFromFile(phystech_school_background_);
    phystech_school_background_texture.loadFromImage(phystech_school_background);
    phystech_school_background_sprite.setTexture(phystech_school_background_texture);
    phystech_school_background_sprite.setPosition(WINDOW_POSITION_X, WINDOW_POSITION_Y);
}

void Phystech_School::processing_keys(RenderWindow& window)
{
    while (window.isOpen())
    {
        Event event;

        if (event.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
            exit_button_pressed(window);

        if (IntRect(COUNTING_POINTS_POS_X, COUNTING_POINTS_POS_Y,
                    COUNTING_POINTS_WIDTH, COUNTING_POINTS_HEIGHT).contains(Mouse::getPosition(window)))
            phystech_school_menu_num = COUNTING_POINTS;

        if (IntRect(TRICK_BUTTON_POS_X, TRICK_BUTTON_POS_Y,
                    TRICK_BUTTON_WIDTH, TRICK_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            phystech_school_menu_num = TRICK;

        if (IntRect(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y,
                    EXIT_BUTTON_WIDTH, EXIT_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            phystech_school_menu_num = EXIT;


        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (phystech_school_menu_num == TRICK)
                trick_button_pressed(window);
            else if (phystech_school_menu_num == EXIT)
                exit_button_pressed(window);
            else if (phystech_school_menu_num == COUNTING_POINTS)
                counting_points_pressed(window);
        }
    }
}