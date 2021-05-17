//
// Created by karina on 16.05.2021.
//
#include "fpmi.h"

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

void Fpmi::trick_button_pressed(RenderWindow &window)
{
    SoundBuffer buffer;
    Sound sound;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "---------------------GAY ROMANCE-----------------" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    buffer.loadFromFile("../Sound/fpmi.mp3");
    sound.setBuffer(buffer);
    sound.play();

}