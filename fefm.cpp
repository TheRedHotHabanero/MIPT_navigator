//
// Created by karina on 16.05.2021.
//
#include "fefm.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

void Fefm::trick_button_pressed(RenderWindow &window)
{
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "Графе́н (англ. graphene) — двумерная аллотропная модификация углерода," << std::endl;
    std::cout << "образованная слоем атомов углерода толщиной в один атом. Атомы углерода" << std::endl;
    std::cout << "находятся в sp²-гибридизации и соединены посредством σ- и π-связей в " << std::endl;
    std::cout << "гексагональную двумерную кристаллическую решётку. Его можно представить " << std::endl;
    std::cout << "как одну плоскость слоистого графита, отделённую от объёмного кристалла. " << std::endl;
    std::cout << "По оценкам, графен обладает большой механической жёсткостью[4] и " << std::endl;
    std::cout << "рекордно большой теплопроводностью[5]. Высокая подвижность носителей заряда, " << std::endl;
    std::cout << "которая оказывается максимальной среди всех известных материалов " << std::endl;
    std::cout <<  "(при той же толщине), делает его перспективным материалом для использования " << std::endl;
    std::cout << "в самых различных приложениях, в частности, как будущую основу " << std::endl;
    std::cout << "наноэлектроники и возможную замену кремния в интегральных микросхемах." << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
}

Sprite Fefm::create_trick_button()
{
    trick_button.loadFromFile(trick_button_);
    trick_button_texture.loadFromImage(trick_button);
    trick_button_sprite.setTexture(trick_button_texture);
    trick_button_sprite.setPosition(TRICK_BUTTON_POS_X, TRICK_BUTTON_POS_Y);
    return trick_button_sprite;
}

Sprite Fefm::create_counting_points_button()
{
    counting_points_button.loadFromFile(counting_points_button_);
    counting_points_texture.loadFromImage(counting_points_button);
    counting_points_sprite.setTexture(counting_points_texture);
    counting_points_sprite.setPosition(COUNTING_POINTS_POS_X, COUNTING_POINTS_POS_Y);
    return counting_points_sprite;
}
