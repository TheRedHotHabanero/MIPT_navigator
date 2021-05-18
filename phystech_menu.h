//
// Created by karina on 16.05.2021.
//

#ifndef MIPT_NAVIGATOR_PHYSTECH_MENU_H

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

#include "phystech_school.h"
#include "frkt.h"
#include "lfi.h"
#include "faki.h"
#include "fefm.h"
#include "fpmi.h"
#include "fbmf.h"
#include "inbicst.h"
#include "menu.h"

using namespace sf;
using std::string;

class Phystech_Menu//: public Phystech_School
{
private:
    //----------------------------------------button`s number:
    const static int FRKT = 1;
    const static int LFI = 2;
    const static int FAKI = 3;
    const static int FEFM = 4;
    const static int FPMI = 5;
    const static int FBMF = 6;
    const static int INBICST = 7;
    const static int EXIT = 8;
    //--------------------------------------------------------

    //---------------------------start info button parameters:
    const static int SCHOOL_INFO_BUTTON_WIDTH = 355;
    const static int SCHOOL_INFO_BUTTON_HEIGHT = 190;
    //--------------------------------------------------------

    //------------------------------------------------------------------
    const static int FRKT_BUTTON_POS_X = 235;
    const static int FRKT_BUTTON_POS_Y = 130;

    const static int LFI_BUTTON_POS_X = 235;
    const static int LFI_BUTTON_POS_Y = 130;

    const static int FAKI_BUTTON_POS_X = 235;
    const static int FAKI_BUTTON_POS_Y = 130;

    const static int FEFM_BUTTON_POS_X = 235;
    const static int FEFM_BUTTON_POS_Y = 130;

    const static int FPMI_BUTTON_POS_X = 235;
    const static int FPMI_BUTTON_POS_Y = 130;

    const static int FBMF_BUTTON_POS_X = 235;
    const static int FBMF_BUTTON_POS_Y = 130;

    const static int INBICST_BUTTON_POS_X = 235;
    const static int INBICST_BUTTON_POS_Y = 130;
    //------------------------------------------------------------------

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

protected:

    Image phystech_background;
    Texture phystech_background_texture;
    Sprite phystech_background_sprite;

    Image frkt_button;
    Texture frkt_texture;
    Sprite frkt_sprite;

    Image lfi_button;
    Texture lfi_texture;
    Sprite lfi_sprite;

    Image faki_button;
    Texture faki_texture;
    Sprite faki_sprite;

    Image fefm_button;
    Texture fefm_texture;
    Sprite fefm_sprite;

    Image fpmi_button;
    Texture fpmi_texture;
    Sprite fpmi_sprite;

    Image fbmf_button;
    Texture fbmf_texture;
    Sprite fbmf_sprite;

    Image inbicst_button;
    Texture inbicst_texture;
    Sprite inbicst_sprite;

    Image exit_button;
    Texture exit_button_texture;
    Sprite exit_button_sprite;

    int phystechNum = 0;
public:

    //---------------------------------------creating sprites for menu:
    void create_phystech_background(const string& phystech_background_);
    void create_frkt_button(const string& frkt_button_);
    void create_lfi_button(const string& lfi_button_);
    void create_faki_button(const string& faki_button_);
    void create_fefm_button(const string& fefm_button_);
    void create_fpmi_button(const string& fpmi_button_);
    void create_fbmf_button(const string& fbmf_button_);
    void create_inbicst_button(const string& inbicst_button_);
    void create_exit_button(const string& exit_button_);
    //------------------------------------------------------------------

    //------------------------------------------------processing bottons:
    void phystech_page();                                                   //phystech menu

    static void frkt_pressed(RenderWindow& window);
    static void lfi_pressed(RenderWindow& window);
    static void faki_pressed(RenderWindow& window);
    static void fefm_pressed(RenderWindow& window);
    static void fpmi_pressed(RenderWindow& window);
    static void fbmf_pressed(RenderWindow& window);
    static void inbicst_pressed(RenderWindow& window);
    static void exit_button_pressed(RenderWindow& window);                 //exit botton
    void processing_phystech_menu(RenderWindow& window);                   //processing keys
    //------------------------------------------------------------------
};
#define MIPT_NAVIGATOR_PHYSTECH_MENU_H

#endif //MIPT_NAVIGATOR_PHYSTECH_MENU_H
