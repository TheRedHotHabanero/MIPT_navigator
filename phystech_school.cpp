//
// Created by karina on 12.05.2021.
//
#include "phystech_school.h"

void Phystech_School::create_exit_button(string &exit_button_)
{
    exit_button.loadFromFile(exit_button_);
    exit_button_texture.loadFromImage(exit_button);
    exit_button_sprite.setTexture(exit_button_texture);
    exit_button_sprite.setPosition(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y);
}

void Phystech_School::create_phystech_school_background(string &phystech_school_background_)
{
    phystech_school_background.loadFromFile(phystech_school_background_);
    phystech_school_background_texture.loadFromImage(phystech_school_background);
    phystech_school_background_sprite.setTexture(phystech_school_background_texture);
    phystech_school_background_sprite.setPosition(WINDOW_POSITION_X, WINDOW_POSITION_Y);
}

void Phystech_School::create_text_title(string &text_) {
    title.setString(text_);
    title.setFont(font);
    title.setCharacterSize(TITLE_CHARACTER_SIZE);
    title.setColor(Color::Black);
    title.setPosition(TITLE_POS_X, TITLE_POS_Y);
}

void Phystech_School::show_school_information(string &font_, string &text_)
{
    font.loadFromFile(font_);
    create_text_title(text_);
    //--------------------------------------reading text from file
    string text;
    ifstream reception;
    reception.open("../input.txt");
    getline(reception, text, '\0');
    reception.close();
    //----------------------------------------creating boring text
    boring_text.setString(String::fromUtf8(text.begin(), text.end()));
    boring_text.setCharacterSize(TEXT_CHARACTER_SIZE);
    boring_text.setFont(font);
    boring_text.setFillColor(Color::Black);
    boring_text.setPosition(BORING_TEXT_POS_X, BORING_TEXT_POS_Y);
}

void Phystech_School::welcome_school_page(string &trick_button_,
                                          string &title_text_,
                                          string &phystech_background_,
                                          string &exit_button_,
                                          string &counting_points_button_)
{
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
                        text_);

    create_phystech_school_background(phystech_background_);
    create_exit_button(exit_button_);
    create_counting_points_button(counting_points_button_);
    create_text_title(title_text_, text_);
    create_trick_button(trick_button_);

    window.clear();

    window.draw(phystech_school_background_sprite);
    window.draw(exit_button_sprite);
    window.draw(trick_button_sprite);
    window.draw(counting_points_sprite);
    window.draw(title);

    window.display();
    processing_keys(window,
                    COUNTING_POINTS_POS_X,
                    COUNTING_POINTS_POS_Y,
                    COUNTING_POINTS_WIDTH,
                    COUNTING_POINTS_HEIGHT,
                    TRICK_BUTTON_POS_X,
                    TRICK_BUTTON_POS_Y,
                    TRICK_BUTTON_WIDTH,
                    TRICK_BUTTON_HEIGHT);
}

void Phystech_School::exit_button_pressed(RenderWindow &window)
{

}

void Phystech_School::counting_points_pressed(RenderWindow &window){}

void Phystech_School::processing_keys(RenderWindow &window,
                                      int COUNTING_POINTS_POS_X,
                                      int COUNTING_POINTS_POS_Y,
                                      int COUNTING_POINTS_WIDTH,
                                      int COUNTING_POINTS_HEIGHT,
                                      int TRICK_BUTTON_POS_X,
                                      int TRICK_BUTTON_POS_Y,
                                      int TRICK_BUTTON_WIDTH,
                                      int TRICK_BUTTON_HEIGHT)
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