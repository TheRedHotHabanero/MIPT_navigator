//
// Created by user on 16.05.2021.
//

#ifndef MIPT_NAVIGATOR_FAKI_H

#include "phystech_school.h"
#include <string>
using std::string;

class Faki : public Phystech_School
{
protected:
    string title_text_;
    string font_for_title_;
    string trick_button_;
    string phystech_school_background_ = "../images/fakt_background.png";
    string counting_points_button_ = "../images/";

    //----------------------------------------button`s number:
    const static int TRICK = 1;
    const static int EXIT = 2;
    const static int COUNTINGPOINTS = 3;
    //--------------------------------------------------------

    //---------------------------------exit button parameters:
    const static int EXIT_BUTTON_POS_X = 1110;
    const static int EXIT_BUTTON_POS_Y = 600;
    const static int EXIT_BUTTON_WIDTH = 57;
    const static int EXIT_BUTTON_HEIGHT = 51;
    //--------------------------------------------------------

    const static int WINDOW_WIDTH = 1200;
    const static int WINDOW_HEIGHT = 675;

    //-----------------------------------------text parameters:
    const static int CHARACTER_SIZE = 40;
    const static int TITLE_POS_X = 350;
    const static int TITLE_POS_Y = 20;
    //--------------------------------------------------------

    //---------------------------------trick button parameters:
    const static int TRICK_BUTTON_POS_X = 235;
    const static int TRICK_BUTTON_POS_Y = 130;
    const static int TRICK_BUTTON_WIDTH = 350;
    const static int TRICK_BUTTON_HEIGHT = 188;
    //--------------------------------------------------------

    // ------------------------counting point button parameters:
    const static int COUNTING_POINTS_POS_X = 100;
    const static int COUNTING_POINTS_POS_Y = 100;
    const static int COUNTING_POINTS_WIDTH = 350;
    const static int COUNTING_POINTS_HEIGHT = 188;
    //--------------------------------------------------------

    int FakiNum = 0;

    Image exit_button;
    Texture exit_button_texture;
    Sprite exit_button_sprite;

    Image trick_button;
    Texture trick_button_texture;
    Sprite trick_button_sprite;

    Text title;
    Font font_for_title;

public:
    void welcome_school_page(string& trick_button_,
                             string& title_text_,
                             string& phystech_background_,
                             string& exit_button_,
                             string& counting_points_button_);

    void create_exit_button(const string &exit_button_);

    void create_text_title(const string &font_for_title_);

    void create_trick_button(const string& trick_button_);
    //---------------------------------------------------------pressed keys:
    virtual void trick_button_pressed(RenderWindow& window);
    virtual void exit_button_pressed(RenderWindow& window);
    virtual void counting_points_pressed(RenderWindow& window);
    //---------------------------------------------------------------------
    virtual void processing_keys(RenderWindow& window);
};

#define MIPT_NAVIGATOR_FAKI_H

#endif //MIPT_NAVIGATOR_FAKI_H
