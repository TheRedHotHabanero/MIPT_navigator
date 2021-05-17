//
// Created by user on 16.05.2021.
//

#ifndef MIPT_NAVIGATOR_FRKT_H

#include "phystech_school.h"


#include "phystech_school.h"
#include <string>
using std::string;

class Frkt : public Phystech_School
{
protected:

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

    Image exit_button;
    Texture exit_button_texture;
    Sprite exit_button_sprite;

    Image trick_button;
    Texture trick_button_texture;
    Sprite trick_button_sprite;

public:
    //---------------------------------------------------------page params:
    string title_text_;
    string font_for_title_;
    string trick_button_;
    string phystech_school_background_ = "../images/frkt_background.png";
    string counting_points_button_ = "../images/";
    string text_;
    string phystech_background_;
    string exit_button_;
    //--------------------------------------------------------------------

    void welcome_school_page(string& trick_button_,
                             string& title_text_,
                             string& phystech_background_,
                             string& exit_button_,
                             string& counting_points_button_);

    void create_exit_button(const string &exit_button_);

    void create_trick_button(const string& trick_button_);
    //---------------------------------------------------------pressed keys:
    void trick_button_pressed(RenderWindow& window);
    void exit_button_pressed(RenderWindow& window);
    void counting_points_pressed(RenderWindow& window);
    //---------------------------------------------------------------------
    void processing_keys(RenderWindow& window);
};

#define MIPT_NAVIGATOR_FRKT_H

#endif //MIPT_NAVIGATOR_FRKT_H
