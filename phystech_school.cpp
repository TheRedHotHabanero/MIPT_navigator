//
// Created by karina on 12.05.2021.
//
#include "phystech_school.h"
#include "phystech_menu.h"
#include "menu.h"

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


void Phystech_School::show_school_information(string &font_, string &text_)
{
    font.loadFromFile(font_);
    //--------------------------------------reading text from file
    string text;
    ifstream reception;
    reception.open(text_);
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
                                          string &text_,
                                          string &font_,
                                          string &phystech_background_,
                                          string &exit_button_,
                                          string &counting_points_button_)
{
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
                        String::fromUtf8(title_text_.begin(), title_text_.end()));

    create_phystech_school_background(phystech_background_);
    create_exit_button(exit_button_);
    show_school_information(font_, text_);

    window.draw(phystech_school_background_sprite);
    window.draw(exit_button_sprite);
    window.draw(create_trick_button());
    window.draw(create_counting_points_button());
    window.draw(title);
    window.draw(boring_text);

    window.display();
    processing_keys(window);
}

void Phystech_School::exit_button_pressed(RenderWindow &window)
{
    window.close();
    Phystech_Menu menu;
    menu.phystech_page();
}

void Phystech_School::counting_points_pressed(RenderWindow &window)
{
    window.close();
    Chek_Points.main_window(Chek_Points.exit_button_, Chek_Points.check_button_,
                            Chek_Points.text_, Chek_Points.font_,
                            Chek_Points.phys_budget_,Chek_Points.chem_budget_,
                            Chek_Points.inf_budget_,Chek_Points.bio_budget_,
                            Chek_Points.phys_contract_, Chek_Points.chem_contract_,
                            Chek_Points.inf_contract_, Chek_Points.bio_contract_,
                            Chek_Points.Table_);

}

