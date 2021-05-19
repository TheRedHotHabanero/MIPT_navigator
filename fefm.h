//
// Created by user on 16.05.2021.
//

#ifndef MIPT_NAVIGATOR_FEFM_H

#include "phystech_school.h"

#include "phystech_school.h"
#include <string>
using std::string;

class Fefm : public Phystech_School
{
protected:
    Image counting_points_button;
    Texture counting_points_texture;
    Sprite counting_points_sprite;

    Image exit_button;
    Texture exit_button_texture;
    Sprite exit_button_sprite;

    Image trick_button;
    Texture trick_button_texture;
    Sprite trick_button_sprite;

public:

    //---------------------------------trick button parameters:
    const static int TRICK_BUTTON_POS_X = 900;
    const static int TRICK_BUTTON_POS_Y = 100;
    const static int TRICK_BUTTON_WIDTH = 287;
    const static int TRICK_BUTTON_HEIGHT = 187;
    //--------------------------------------------------------

    // ------------------------counting point button parameters:
    const static int COUNTING_POINTS_POS_X = 770;
    const static int COUNTING_POINTS_POS_Y = 350;
    const static int COUNTING_POINTS_WIDTH = 414;
    const static int COUNTING_POINTS_HEIGHT = 208;
    //--------------------------------------------------------

    //---------------------------------------------------------page params:
    string title_text_;
    string font_for_title_;
    string text_;
    string trick_button_ = "../images/tricks/fefm_trick.png";
    string counting_points_button_ = "../images/counting_points_button.png";
    string phystech_background_ = "../images/school_backs/fefm_back.jpg";
    string exit_button_ = "../images/exit_button.png";
    //--------------------------------------------------------------------

    void trick_button_pressed(RenderWindow& window) override;
    //void counting_points_pressed(RenderWindow& window);
    //---------------------------------------------------------------------
    //void processing_keys(RenderWindow& window);
    Sprite create_counting_points_button() override;
    Sprite create_trick_button() override;
};


#define MIPT_NAVIGATOR_FEFM_H

#endif //MIPT_NAVIGATOR_FEFM_H
