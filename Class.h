//
// Created by user on 17.05.2021.
//
#ifndef NEW_CLASS_H

#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include "TextBar.h"
#include <map>
#include <vector>

using namespace sf;
using std::string;
using std::multimap;
using std::vector;
using std::ofstream;

class Check {
private:

    const static int CHECK = 1;
    const static int EXIT = 2;
    //---------------------------------exit button parameters:
    const static int EXIT_BUTTON_POS_X = 1110;
    const static int EXIT_BUTTON_POS_Y = 600;
    const static int EXIT_BUTTON_WIDTH = 57;
    const static int EXIT_BUTTON_HEIGHT = 51;
    //--------------------------------------------------------

    //---------------------------------exit button parameters:
    const static int CHECK_BUTTON_POS_X = 800;
    const static int CHECK_BUTTON_POS_Y = 50;
    const static int CHECK_BUTTON_WIDTH = 350;
    const static int CHECK_BUTTON_HEIGHT = 188;
    //--------------------------------------------------------

    //------------------window (background picture) parameters:
    const static int WINDOW_POSITION_X = 0;
    const static int WINDOW_POSITION_Y = 0;
    const static int WINDOW_WIDTH = 1200;
    const static int WINDOW_HEIGHT = 675;
    //---------------------------------------------------------

    const static int TEXT_BAR_POS_Y = 50;
    const static int TEXT_BAR_DELTA_Y = 80;
    string TEXT_BAR_INIT = "0";


    const static int TEXT_CHARACTER_SIZE = 30;
    const static int TEXT_POS_X = 100;
    const static int TEXT_POS_Y = 50;
    const static int TEXT_DELTA_Y = 80;

    const static int CELL_WIDTH = 11;

    int Yours_Points;

    Image exit_button;
    Texture exit_button_texture;
    Sprite exit_button_sprite;


    TextBar physics;
    TextBar math;
    TextBar russian;
    TextBar informatics;
    TextBar biology;
    TextBar chemistry;

    Image check_button;
    Texture check_button_texture;
    Sprite check_button_sprite;

    vector<Text> text;
    Font font;

    int check_num = 0;

    multimap<int, string> physics_budget;
    multimap<int, string> informatics_budget;
    multimap<int, string> chemistry_budget;
    multimap<int, string> biology_budget;
    multimap<int, string> physics_contract;
    multimap<int, string> informatics_contract;
    multimap<int, string> chemistry_contract;
    multimap<int, string> biology_contrat;

//    0 - phys
//    1 - inf
//    2 - chem
//    3 - bio

public:
    void main_window(const string &exit_button_, const string &check_button_, const string &text_, const string &font_,
                     const string &phys_budget_, const string &chem_budget_,
                     const string &inf_budget_, const string &bio_budget_,
                     const string &phys_contract_, const string &chem_contract_,
                     const string &inf_contract_, const string &bio_contract_);

    void filling_storage(const string &phys_budget_, const string &chem_budget_,
                         const string &inf_budget_, const string &bio_budget_,
                         const string &phys_contract_, const string &chem_contract_,
                         const string &inf_contract_, const string &bio_contract_);

    void create_exit_button(const string &exit_button_);

    void create_check_button(const string &check_button_);

    void create_textbox();

    void create_text(const string &text_, const string &font_);

    void reading_from_file(const string &points_, multimap<int, string> &storage);

    void entering_points();

    void entering_points1();

    void snap();

    void output(ofstream &Table_, multimap<int, string> &budget_, multimap<int, string> &contract_);

    void exit_button_pressed(RenderWindow &window);

    void check_button_pressed(RenderWindow &window);

    void processing_keys(RenderWindow &window);
};

#define NEW_CLASS_H

#endif //NEW_CLASS_H
