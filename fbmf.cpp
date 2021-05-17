//
// Created by karina on 16.05.2021.
//
#include "fbmf.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

void Fbmf::trick_button_pressed(RenderWindow &window)
{
    SoundBuffer buffer;
    Sound sound;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "...............................pain.................................." << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    buffer.loadFromFile("../Sound/fbmf.mp3");
    sound.setBuffer(buffer);
    sound.play();
}