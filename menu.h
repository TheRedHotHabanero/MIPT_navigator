//
// Created by karina on 12.05.2021.
//

#ifndef MIPT_NAVIGATOR_MENU_H

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

using namespace sf;
using std::string;

class Menu
{
private:
    const static int START_INFO = 1;
    const static int EXIT = 2;
    const static int ABOUT = 3;
    const static int CHECKING_ODDS = 4;

    const static int START_INFO_BUTTON_POS_X = 235;
    const static int START_INFO_BUTTON_POS_Y = 130;
    const static int START_INFO_BUTTON_WIDTH = 350;
    const static int START_INFO_BUTTON_HEIGHT = 188;

    const static int EXIT_BUTTON_POS_X = 1110;
    const static int EXIT_BUTTON_POS_Y = 600;
    const static int EXIT_BUTTON_WIDTH = 57;
    const static int EXIT_BUTTON_HEIGHT = 51;

    const static int ABOUT_BUTTON_POS_X = 20;
    const static int ABOUT_BUTTON_POS_Y = 20;
    const static int ABOUT_BUTTON_WIDTH = 56;
    const static int ABOUT_BUTTON_HEIGHT = 55;

    const static int CHECKING_ODDS_BUTTON_POS_X = 245;
    const static int CHECKING_ODDS_BUTTON_POS_Y = 330;
    const static int CHECKING_ODDS_BUTTON_WIDTH = 332;
    const static int CHECKING_ODDS_BUTTON_HEIGHT = 164;

    const static int WINDOW_POSITION_X = 0;
    const static int WINDOW_POSITION_Y = 0;
    const static int WINDOW_WIDTH = 1200 ;
    const static int WINDOW_HEIGHT = 675;

protected:
    Image menu_background;
    Texture menu_background_texture;
    Sprite menu_background_sprite;

    Image start_info_button;
    Texture start_info_button_texture;
    Sprite start_info_button_sprite;

    Image exit_button;
    Texture exit_button_texture;
    Sprite exit_button_sprite;

    Image checking_odds_button;
    Texture checking_odds_texture;
    Sprite checking_odds_sprite;

    Image about_button;
    Texture about_button_texture;
    Sprite about_button_sprite;

    int menuNum = 0;
public:

    //---------------------------------------creating sprites for menu:
    void create_menu_background(const string& menu_background);
    void create_start_info_button(const string& start_info_button_);
    void create_checking_odds_button(const string& checking_odds_button_);
    void create_about_button(const string& about_button_);
    void create_exit_button(const string& exit_button_);
    //------------------------------------------------------------------


    //------------------------------------------------processing bottons:
    void welcome_page(const string& menu_background_,
                      const string& start_info_,
                      const string& exit_button_,
                      const string& about_button,
                      const string& checking_odds_);                //menu

    void start_info_button_pressed(RenderWindow& window);           //start info botton
    static void exit_button_pressed(RenderWindow& window);          //exit botton
    void checking_odds_button_pressed(RenderWindow& window);        //checking odds botton
    void about_button_pressed(RenderWindow& window);                //information about authors
    void processing_menu(RenderWindow& window);                     //processing keys
    //------------------------------------------------------------------
};
#define MIPT_NAVIGATOR_MENU_H

#endif //MIPT_NAVIGATOR_MENU_H
