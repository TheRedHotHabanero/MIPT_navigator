//
// Created by karina on 16.05.2021.
//
#include "phystech_menu.h"

void Phystech_Menu::create_phystech_background(const string& phystech_background_)
{
    phystech_background.loadFromFile(phystech_background_);
    phystech_background_texture.loadFromImage(phystech_background);
    phystech_background_sprite.setTexture(phystech_background_texture);
    phystech_background_sprite.setPosition(WINDOW_POSITION_X, WINDOW_POSITION_Y);
}

void Phystech_Menu::create_frkt_button(const string& frkt_button_)
{
    frkt_button.loadFromFile(frkt_button_);
    frkt_texture.loadFromImage(frkt_button);
    frkt_sprite.setTexture(frkt_texture);
    frkt_sprite.setPosition(FRKT_BUTTON_POS_X, FRKT_BUTTON_POS_Y);
}

void Phystech_Menu::create_lfi_button(const string& lfi_button_)
{
    lfi_button.loadFromFile(lfi_button_);
    lfi_texture.loadFromImage(lfi_button);
    lfi_sprite.setTexture(lfi_texture);
    lfi_sprite.setPosition(LFI_BUTTON_POS_X, LFI_BUTTON_POS_Y);
}

void Phystech_Menu::create_faki_button(const string& faki_button_)
{
    faki_button.loadFromFile(faki_button_);
    faki_texture.loadFromImage(faki_button);
    faki_sprite.setTexture(faki_texture);
    faki_sprite.setPosition(FAKI_BUTTON_POS_X, FAKI_BUTTON_POS_Y);
}

void Phystech_Menu::create_fefm_button(const string& fefm_button_)
{
    fefm_button.loadFromFile(fefm_button_);
    fefm_texture.loadFromImage(fefm_button);
    fefm_sprite.setTexture(fefm_texture);
    fefm_sprite.setPosition(FEFM_BUTTON_POS_X, FEFM_BUTTON_POS_Y);
}

void Phystech_Menu::create_fpmi_button(const string& fpmi_button_)
{
    fpmi_button.loadFromFile(fpmi_button_);
    fpmi_texture.loadFromImage(fpmi_button);
    fpmi_sprite.setTexture(fpmi_texture);
    fpmi_sprite.setPosition(FPMI_BUTTON_POS_X, FPMI_BUTTON_POS_Y);
}

void Phystech_Menu::create_fbmf_button(const string& fbmf_button_)
{
    fbmf_button.loadFromFile(fbmf_button_);
    fbmf_texture.loadFromImage(fbmf_button);
    fbmf_sprite.setTexture(fbmf_texture);
    fbmf_sprite.setPosition(FBMF_BUTTON_POS_X, FBMF_BUTTON_POS_Y);
}

void Phystech_Menu::create_inbicst_button(const string& inbicst_button_)
{
    inbicst_button.loadFromFile(inbicst_button_);
    inbicst_texture.loadFromImage(inbicst_button);
    inbicst_sprite.setTexture(inbicst_texture);
    inbicst_sprite.setPosition(INBICST_BUTTON_POS_X, INBICST_BUTTON_POS_Y);
}

void Phystech_Menu::create_exit_button(const string& exit_button_)
{
    exit_button.loadFromFile(exit_button_);
    exit_button_texture.loadFromImage(exit_button);
    exit_button_sprite.setTexture(exit_button_texture);
    exit_button_sprite.setPosition(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y);
}

void Phystech_Menu::phystech_page()                    //phystech menu
{
    RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
                        "MIPT UNIVERSITY");

    string phystech_background_ = "../images/phystech_background.jpg";
    string exit_button_ = "../images/exit_button.png";
    string frkt_button_ = "../images/frkt.png";
    string lfi_button_ = "../images/lfi.png";
    string faki_button_ = "../images/fakt.png";
    string fefm_button_ = "../images/fefm.png";
    string fpmi_button_ = "../images/fpmi.png";
    string fbmf_button_ = "../images/fbmf.png";
    string inbicst_button_ = "../images/inbicst.png";

    create_phystech_background(phystech_background_);
    create_frkt_button(frkt_button_);
    create_lfi_button(lfi_button_);
    create_faki_button(faki_button_);
    create_fefm_button(fefm_button_);
    create_fpmi_button(fpmi_button_);
    create_fbmf_button(fbmf_button_);
    create_inbicst_button(inbicst_button_);
    create_exit_button(exit_button_);


    window.clear();

    window.draw(phystech_background_sprite);
    window.draw(exit_button_sprite);
    window.draw(frkt_sprite);
    window.draw(lfi_sprite);
    window.draw(faki_sprite);
    window.draw(fefm_sprite);
    window.draw(fpmi_sprite);
    window.draw(fbmf_sprite);
    window.draw(inbicst_sprite);

    window.display();
    processing_phystech_menu(window);
}

void Phystech_Menu::frkt_pressed(RenderWindow& window)
{
    window.close();
    Frkt frkt;
    frkt.welcome_school_page(frkt.trick_button_,
                             frkt.title_text_,
                             frkt.phystech_background_,
                             frkt.exit_button_,
                             frkt.counting_points_button_);

}

void Phystech_Menu::lfi_pressed(RenderWindow& window)
{
    window.close();
    Lfi lfi;
    lfi.welcome_school_page(lfi.trick_button_,
                            lfi.title_text_,
                            lfi.phystech_background_,
                            lfi.exit_button_,
                            lfi.counting_points_button_);
}

void Phystech_Menu::faki_pressed(RenderWindow& window)
{
    window.close();
    Faki faki;
    faki.welcome_school_page(faki.trick_button_,
                             faki.title_text_,
                             faki.phystech_background_,
                             faki.exit_button_,
                             faki.counting_points_button_);
}

void Phystech_Menu::fefm_pressed(RenderWindow& window)
{
    window.close();
    Fefm fefm;
    fefm.welcome_school_page(fefm.trick_button_,
                             fefm.title_text_,
                             fefm.phystech_background_,
                             fefm.exit_button_,
                             fefm.counting_points_button_);
}

void Phystech_Menu::fpmi_pressed(RenderWindow& window)
{
    window.close();
    Fpmi fpmi;
    fpmi.welcome_school_page(fpmi.trick_button_,
                             fpmi.title_text_,
                             fpmi.phystech_background_,
                             fpmi.exit_button_,
                             fpmi.counting_points_button_);
}

void Phystech_Menu::fbmf_pressed(RenderWindow& window)
{
    window.close();
    Fbmf fbmf;
    fbmf.welcome_school_page(fbmf.trick_button_,
                             fbmf.title_text_,
                             fbmf.phystech_background_,
                             fbmf.exit_button_,
                             fbmf.counting_points_button_);

}

void Phystech_Menu::inbicst_pressed(RenderWindow& window)
{
    window.close();
    Inbicst inbicst;
    inbicst.welcome_school_page(inbicst.trick_button_,
                                inbicst.title_text_,
                                inbicst.phystech_background_,
                                inbicst.exit_button_,
                                inbicst.counting_points_button_);
}

void Phystech_Menu::exit_button_pressed(RenderWindow& window)
{
    window.close();
    Menu new_menu;
    new_menu.welcome_page("../images/menu_background.jpg",
                          "../images/start_info_button.png",
                          "../images/exit_button.png",
                          "../images/checking_odds_button.png");
}

void Phystech_Menu::processing_phystech_menu(RenderWindow& window)
{
    while (window.isOpen())
    {
        Event event;

        if (event.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
            exit_button_pressed(window);

        if (IntRect(FRKT_BUTTON_POS_X, FRKT_BUTTON_POS_Y,
                    SCHOOL_INFO_BUTTON_WIDTH, SCHOOL_INFO_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            phystechNum = FRKT;

        if (IntRect(LFI_BUTTON_POS_X, LFI_BUTTON_POS_Y,
                    SCHOOL_INFO_BUTTON_WIDTH, SCHOOL_INFO_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            phystechNum = LFI;

        if (IntRect(FAKI_BUTTON_POS_X, FAKI_BUTTON_POS_Y,
                    SCHOOL_INFO_BUTTON_WIDTH, SCHOOL_INFO_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            phystechNum = FAKI;

        if (IntRect(FEFM_BUTTON_POS_X, FEFM_BUTTON_POS_Y,
                    SCHOOL_INFO_BUTTON_WIDTH, SCHOOL_INFO_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            phystechNum = FEFM;

        if (IntRect(FPMI_BUTTON_POS_X, FPMI_BUTTON_POS_Y,
                    SCHOOL_INFO_BUTTON_WIDTH, SCHOOL_INFO_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            phystechNum = FPMI;

        if (IntRect(FBMF_BUTTON_POS_X, FBMF_BUTTON_POS_Y,
                    SCHOOL_INFO_BUTTON_WIDTH, SCHOOL_INFO_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            phystechNum = FBMF;

        if (IntRect(INBICST_BUTTON_POS_X, INBICST_BUTTON_POS_Y,
                    SCHOOL_INFO_BUTTON_WIDTH, SCHOOL_INFO_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            phystechNum = INBICST;

        if (IntRect(EXIT_BUTTON_POS_X, EXIT_BUTTON_POS_Y,
                    EXIT_BUTTON_WIDTH, EXIT_BUTTON_HEIGHT).contains(Mouse::getPosition(window)))
            phystechNum = EXIT;


        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (phystechNum == FRKT)
                frkt_pressed(window);
            else if (phystechNum == LFI)
                lfi_pressed(window);
            else if (phystechNum == FAKI)
                faki_pressed(window);
            else if (phystechNum == FEFM)
                fefm_pressed(window);
            else if (phystechNum == FPMI)
                fpmi_pressed(window);
            else if (phystechNum == FBMF)
                fbmf_pressed(window);
            else if (phystechNum == INBICST)
                inbicst_pressed(window);
            else if (phystechNum == EXIT)
                exit_button_pressed(window);
        }
    }
}

