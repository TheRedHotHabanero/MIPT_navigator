//
// Created by karina on 12.05.2021.
//

#ifndef MIPT_NAVIGATOR_PHYSTECH_SCHOOL_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <string>
#include <iostream>
#include <fstream>
#include "Counting_Points.h"

using namespace sf;
using std::string;
using std::ifstream;

class Phystech_School {
protected:
    //---------------------------------exit button parameters:
    const static int EXIT_BUTTON_POS_X = 1110;
    const static int EXIT_BUTTON_POS_Y = 600;
    const static int EXIT_BUTTON_WIDTH = 57;
    const static int EXIT_BUTTON_HEIGHT = 51;
    //--------------------------------------------------------

    //------------------window (background picture) parameters:
    const static int WINDOW_POSITION_X = 0;
    const static int WINDOW_POSITION_Y = 0;
    const static int WINDOW_WIDTH = 1200;
    const static int WINDOW_HEIGHT = 675;
    //---------------------------------------------------------

    //------------------------------for future phystech-schools:
    int COUNTING_POINTS_POS_X;
    int COUNTING_POINTS_POS_Y;
    int COUNTING_POINTS_WIDTH;
    int COUNTING_POINTS_HEIGHT;

    int TRICK_BUTTON_POS_X;
    int TRICK_BUTTON_POS_Y;
    int TRICK_BUTTON_WIDTH;
    int TRICK_BUTTON_HEIGHT;
    //---------------------------------------------------------

    //------------------------------------------text parameters:
    const static int TEXT_CHARACTER_SIZE = 20;
    const static int BORING_TEXT_POS_X = 36;
    const static int BORING_TEXT_POS_Y = 130;
    Font font;
    Text title;
    Text boring_text;
    //---------------------------------------------------------

    //--------------------------------------presets for sprites:
    Image exit_button;
    Texture exit_button_texture;
    Sprite exit_button_sprite;

    Image trick_button;
    Texture trick_button_texture;
    Sprite trick_button_sprite;

    Image counting_points_button;
    Texture counting_points_texture;
    Sprite counting_points_sprite;

    Image phystech_school_background;
    Texture phystech_school_background_texture;
    Sprite phystech_school_background_sprite;
    //---------------------------------------------------------

    Check Chek_Points;

public:

    //------------------------------------------------------creating bottons and background:
    void create_exit_button(string &exit_button_);

    void create_phystech_school_background(string &phystech_school_background_);

    virtual Sprite create_counting_points_button() = 0;

    virtual Sprite create_trick_button() = 0;

    void show_school_information(string &font_, string &text_);
    //-------------------------------------------------------------------------------------

    void welcome_school_page(string &trick_button_,
                             string &title_text_,
                             string &text_,
                             string &font_,
                             string &phystech_background_,
                             string &exit_button_,
                             string &counting_points_button_);

    //---------------------------------------------------------pressed keys:
    virtual void trick_button_pressed() = 0;

    static void exit_button_pressed(RenderWindow &window);

    void counting_points_pressed(RenderWindow &window);
    //---------------------------------------------------------------------

    virtual void processing_keys(RenderWindow &window) = 0;

};

#define MIPT_NAVIGATOR_PHYSTECH_SCHOOL_H

#endif //MIPT_NAVIGATOR_PHYSTECH_SCHOOL_H
