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
private:
    int number_of_subjects = 3;         //number of subjects for summ of points, change if necessary
    bool computer_science == false;     // if this subject is in summ for points, set it true.
    bool math = true;
    bool physics = false;
    bool russian_language = true;
    bool biology = false;
    bool chemistry = false;
protected:
    //creating sprites for all buttons, etc. (like menu.h and menu.cpp)
public:
    //calculation of receipts
    virtual void counting_points(int number_of_subjects, int summ);

    //creating exit button (like menu.h and menu.cpp)
    virtual void create_exit_button(const string& exit_button_);

    //creating a trick button (like menu.h and menu.cpp)
    virtual void create_trick_button(const string& trick_button_);

    //the first window of the Phystech School (like welcome_page from menu)
    virtual void welcome_school_page();

    //sound playback, but her znaet if I need a function to play sound
    virtual void make_sound(const string& sound_)

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
