//
// Created by karina on 16.05.2021.
//
#include "inbicst.h"

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

void Inbicst::trick_button_pressed(RenderWindow &window)
{
    SoundBuffer buffer;
    Sound sound;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-----Why you babysitting only two or three shots?----" << std::endl;
    std::cout << "-----I'ma show you how to turn it uo a notch---------" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "-" << std::endl;
    buffer.loadFromFile("../Sound/inbicst.mp3");
    sound.setBuffer(buffer);
    sound.play();
}