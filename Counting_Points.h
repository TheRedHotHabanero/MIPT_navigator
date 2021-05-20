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
    const static int CHECK_BUTTON_POS_X = 50;
    const static int CHECK_BUTTON_POS_Y = 458;
    const static int CHECK_BUTTON_WIDTH = 213;
    const static int CHECK_BUTTON_HEIGHT = 167;
    //--------------------------------------------------------

    //------------------window (background picture) parameters:
    const static int WINDOW_POSITION_X = 0;
    const static int WINDOW_POSITION_Y = 0;
    const static int WINDOW_WIDTH = 1200;
    const static int WINDOW_HEIGHT = 675;
    //---------------------------------------------------------

    //-------------------------------------Text bar parameters:
    const static int TEXT_BAR_POS_Y = 80;
    const static int TEXT_BAR_POS_X = 250;
    const static int TEXT_BAR_DELTA_Y = 100;
    //--------------------------------------------------------

    //-------------------------------------Text parameters:
    const static int TEXT_POS_X = 500;
    const static int TEXT_POS_Y = 75;
    const static int ADD_TEXT_POS_X = 80;
    const static int ADD_TEXT_POS_Y = 130;
    const static int TEXT_DELTA_Y = 100;
    const static int CELL_WIDTH = 11;
    const int TEXT_CHARACTER_SIZE = 30;
    //--------------------------------------------------------
    int Yours_Points = 0;
    int check_num = 0;

    Image exit_button;
    Texture exit_button_texture;
    Sprite exit_button_sprite;

    Image background;
    Texture background_texture;
    Sprite background_sprite;


    TextBar physics;
    TextBar math;
    TextBar russian;
    TextBar informatics;
    TextBar biology;
    TextBar chemistry;
    TextBar additional_points;

    Image check_button;
    Texture check_button_texture;
    Sprite check_button_sprite;

    Text add_text;
    vector<Text> text;
    Font font;

    multimap<int, string> physics_budget;
    multimap<int, string> informatics_budget;
    multimap<int, string> chemistry_budget;
    multimap<int, string> biology_budget;
    multimap<int, string> physics_contract;
    multimap<int, string> informatics_contract;
    multimap<int, string> chemistry_contract;
    multimap<int, string> biology_contract;

public:
    void main_window(const string &exit_button_, const string &check_button_,
                     const string &font_, const string& background_,
                     const string &phys_budget_, const string &chem_budget_,
                     const string &inf_budget_, const string &bio_budget_,
                     const string &phys_contract_, const string &chem_contract_,
                     const string &inf_contract_, const string &bio_contract_,
                     const string &Table_);

    void filling_storage(const string &phys_budget_, const string &chem_budget_,
                         const string &inf_budget_, const string &bio_budget_,
                         const string &phys_contract_, const string &chem_contract_,
                         const string &inf_contract_, const string &bio_contract_);

    void create_exit_button(const string &exit_button_);

    void create_check_button(const string &check_button_);

    void create_textbox();

    void create_background(const string &background_);

    void create_text(const string &font_);

    void reading_from_file(const string &points_, multimap<int, string> &storage);

    void entering_points();

    void snap(const string &Table_);

    void output(ofstream &Table_, multimap<int, string> &budget_, multimap<int, string> &contract_) const;

    void exit_button_pressed(RenderWindow &window);

    void check_button_pressed(RenderWindow &window, const string &Table_);

    void processing_keys(RenderWindow &window, const string &Table_);

    string Table_ = "../table.csv";
    string exit_button_ = "../images/exit_button.png";
    string check_button_ = "../images/csv_button.png";
    string font_ = "../texts/Font.ttf";

    string phys_budget_ = "../Budget/phys_budget.txt";
    string chem_budget_ = "../Budget/chem_budget.txt";
    string inf_budget_ = "../Budget/inf_budget.txt";
    string bio_budget_ = "../Budget/bio_budget.txt";

    string phys_contract_ = "../Contract/phys_contract.txt";
    string chem_contract_ = "../Contract/chem_contract.txt";
    string inf_contract_ = "../Contract/inf_contract.txt";
    string bio_contract_ = "../Contract/bio_contract.txt";
    string background_ = "../images/phystech_background.jpg";
};

#define NEW_CLASS_H

#endif //NEW_CLASS_H
