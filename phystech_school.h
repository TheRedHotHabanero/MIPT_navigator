//
// Created by karina on 12.05.2021.
//

#ifndef MIPT_NAVIGATOR_PHYSTECH_SCHOOL_H

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

using namespace sf;
using std::string;

class Phystech_School
{
protected:
    //----------------------------------------button`s number:
    const static int TRICK = 1;
    const static int EXIT = 2;
    const static int COUNTING_POINTS = 3;
    //--------------------------------------------------------

    //--------------------------parameters for counting points:
    int number_of_subjects = 3;         //number of subjects for summ of points, change if necessary
    bool computer_science = false;     // if this subject is in summ for points, set it true.
    bool math = true;
    bool physics = false;
    bool russian_language = true;
    bool biology = false;
    bool chemistry = false;
    //-------------------------------------------------------

    //-------------------------------------------------------
    string title_text;
    string phystech_school_background_;
    string font_for_title_;
    string trick_button_;
    string counting_points_button_ ;
    string text_;
    //-------------------------------------------------------

    //---------------------------------exit button parameters:
    const static int EXIT_BUTTON_POS_X = 1110;
    const static int EXIT_BUTTON_POS_Y = 600;
    const static int EXIT_BUTTON_WIDTH = 57;
    const static int EXIT_BUTTON_HEIGHT = 51;
    //--------------------------------------------------------

    //------------------window (background picture) parameters:
    const static int WINDOW_POSITION_X = 0;
    const static int WINDOW_POSITION_Y = 0;
    const static int WINDOW_WIDTH = 1200 ;
    const static int WINDOW_HEIGHT = 675;
    //---------------------------------------------------------

    //---------------------------------trick button parameters:
    const static int TRICK_BUTTON_POS_X = 1000;
    const static int TRICK_BUTTON_POS_Y = 400;
    const static int TRICK_BUTTON_WIDTH = 350;
    const static int TRICK_BUTTON_HEIGHT = 150;
    //---------------------------------------------------------

    //------------------counting points button parameters:
    const static int COUNTING_POINTS_POS_X = 300;
    const static int COUNTING_POINTS_POS_Y = 400;
    const static int COUNTING_POINTS_WIDTH = 350;
    const static int COUNTING_POINTS_HEIGHT = 200;
    //---------------------------------------------------------

    //----------------------------------------title parameters:
    Font font_for_title;
    const static int CHARACTER_SIZE = 20;
    const static int TITLE_POS_X = 500;
    const static int TITLE_POS_Y = 20;
    Text title;
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

    int phystech_school_menu_num = 0;

public:
    //calculation of receipts
    virtual void counting_points(int number_of_subjects, int summ);

    //------------------------------------------------------creating bottons and background:
    void create_exit_button();
    virtual void create_phystech_school_background(string& phystech_school_background_);
    void create_counting_points_button(string& counting_points_button_);
    virtual void create_trick_button(string& trick_button_);
    virtual void create_text_title(string& title_text_);
    //-------------------------------------------------------------------------------------

    //the first window of the Phystech School (like welcome_page from menu)
    virtual void welcome_school_page(string& trick_button_,
                                     string& title_text_,
                                     string& phystech_background_,
                                     string& exit_button_,
                                     string& counting_points_button_); // virtual because different titles


    //sound playback, but her znaet if I need a function to play sound
    virtual void make_sound(const string& sound_);

    //part of the window with boring information, but also her znaet if i need this function
    virtual void show_school_information();

    //---------------------------------------------------------pressed keys:
    virtual void trick_button_pressed(RenderWindow& window);
    virtual void exit_button_pressed(RenderWindow& window);
    virtual void counting_points_pressed(RenderWindow& window);
    //---------------------------------------------------------------------

    //processing keys
    virtual void processing_keys(RenderWindow& window);

};

#define MIPT_NAVIGATOR_PHYSTECH_SCHOOL_H

#endif //MIPT_NAVIGATOR_PHYSTECH_SCHOOL_H
