//
// Created by karina on 16.05.2021.
//
#include "faki.h"

void Faki::create_exit_button(const string &exit_button_) {
    exit_button.loadFromFile(exit_button_);
    exit_button_texture.loadFromImage(exit_button);
    exit_button_sprite.setTexture(exit_button_texture);
    exit_button_sprite.setPosition(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y);
}

void Faki::create_trick_button(const string &trick_button_) {
    trick_button.loadFromFile(trick_button_);
    trick_button_texture.loadFromImage(trick_button);
    trick_button_sprite.setTexture(trick_button_texture);
    trick_button_sprite.setPosition(TRICK_BUTTON_POS_X, TRICK_BUTTON_POS_Y);
}

void Faki::create_text_title(const string &font_for_title_) {
    font_for_title.loadFromFile(font_for_title_);
    title.setString("Физтех-школа аэрокосмических технологий");
    title.setFont(font_for_title);
    title.setCharacterSize(CHARACTER_SIZE);
    title.setColor(Color::Black);
    title.setPosition(TITLE_POS_X, TITLE_POS_Y);
}

void Faki::exit_button_pressed(RenderWindow &window) { window.close(); }

void Faki::welcome_school_page(const string &font_for_title_, const string &trick_button_, const string &exit_button_) {
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Faki");
    create_text_title(font_for_title_);
    create_trick_button(trick_button_);
    create_exit_button(exit_button_);

}

void Faki::processing_keys(RenderWindow& window){
    while (window.isOpen())
    {
        Event event;

        if (event.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
            exit_button_pressed(window);

        if (IntRect(COUNTING_POINTS_POS_X, COUNTING_POINTS_POS_Y,
                    COUNTING_POINTS_WIDTH, COUNTING_POINTS_HEIGHT).contains(Mouse::getPosition(window)))
            FakiNum = COUNTINGPOINTS;

        if (IntRect(TRICK_BUTTON_POS_X, TRICK_BUTTON_POS_Y,
                    TRICK_BUTTON_WIDTH, TRICK_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            FakiNum = TRICK;

        if (IntRect(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y,
                    EXIT_BUTTON_WIDTH, EXIT_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            FakiNum = EXIT;


        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (FakiNum == TRICK)
                trick_button_pressed(window);
            else if (FakiNum == EXIT)
                exit_button_pressed(window);
            else if (FakiNum == COUNTINGPOINTS)
                counting_points_pressed(window);
        }
    }
}