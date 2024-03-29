//
// Created by karina on 12.05.2021.
//

#include "menu.h"
#include "phystech_menu.h"
#include "phystech_school.h"

void Menu::create_menu_background(const string &menu_background_)
{
    menu_background.loadFromFile(menu_background_);
    menu_background_texture.loadFromImage(menu_background);
    menu_background_sprite.setTexture(menu_background_texture);
    menu_background_sprite.setPosition(WINDOW_POSITION_X, WINDOW_POSITION_Y);
}

void Menu::create_exit_button(const string &exit_button_)
{
    exit_button.loadFromFile(exit_button_);
    exit_button_texture.loadFromImage(exit_button);
    exit_button_sprite.setTexture(exit_button_texture);
    exit_button_sprite.setPosition(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y);
}

void Menu::create_start_info_button(const string &start_info_button_)
{
    start_info_button.loadFromFile(start_info_button_);
    start_info_button_texture.loadFromImage(start_info_button);
    start_info_button_sprite.setTexture(start_info_button_texture);
    start_info_button_sprite.setPosition(START_INFO_BUTTON_POS_X, START_INFO_BUTTON_POS_Y);
}

void Menu::create_checking_odds_button(const string &checking_odds_button_)
{
    checking_odds_button.loadFromFile(checking_odds_button_);
    checking_odds_texture.loadFromImage(checking_odds_button);
    checking_odds_sprite.setTexture(checking_odds_texture);
    checking_odds_sprite.setPosition(CHECKING_ODDS_BUTTON_POS_X, CHECKING_ODDS_BUTTON_POS_Y);

}

void Menu::welcome_page(const string& menu_background_,
                        const string& start_info_button_,
                        const string& exit_button_,
                        const string& checking_odds_button_)
{
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
                        "MIPT UNIVERSITY");

    create_menu_background(menu_background_);
    create_exit_button(exit_button_);
    create_start_info_button(start_info_button_);
    create_checking_odds_button(checking_odds_button_);

    window.clear();

    window.draw(menu_background_sprite);
    window.draw(exit_button_sprite);
    window.draw(start_info_button_sprite);
    window.draw(checking_odds_sprite);

    window.display();
    processing_menu(window);
}

void Menu::start_info_button_pressed(RenderWindow &window)
{
    window.close();
    Phystech_Menu phystech_menu;
    phystech_menu.phystech_page();
}

void Menu::checking_odds_button_pressed(RenderWindow &window)
{
    window.close();
    Game_Menu game_menu;
    game_menu.game_welcome_page("../game_images/game_menu_background.jpg",
                                "../images/exit_button.png",
                                "../images/kvm.png",
                                "../images/kof.png");
}

void Menu::exit_button_pressed(RenderWindow& window)
{ window.close(); }

void Menu::processing_menu(RenderWindow& window)
{
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
                exit_button_pressed(window);

            if (IntRect(START_INFO_BUTTON_POS_X, START_INFO_BUTTON_POS_Y,
                        START_INFO_BUTTON_WIDTH, START_INFO_BUTTON_HEIGHT).contains(Mouse::getPosition(window))
                        & Mouse::isButtonPressed(Mouse::Left))
                start_info_button_pressed(window);

            if (IntRect(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y,
                        EXIT_BUTTON_WIDTH, EXIT_BUTTON_HEIGHT).contains(Mouse::getPosition(window))
                        & Mouse::isButtonPressed(Mouse::Left))
                exit_button_pressed(window);

            if (IntRect(CHECKING_ODDS_BUTTON_POS_X, CHECKING_ODDS_BUTTON_POS_Y,
                        CHECKING_ODDS_BUTTON_WIDTH, CHECKING_ODDS_BUTTON_HEIGHT).contains(Mouse::getPosition(window))
                        & Mouse::isButtonPressed(Mouse::Left))
                checking_odds_button_pressed(window);

        }

    }
}