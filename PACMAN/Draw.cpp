#include "Engine.h"
#include <ctime>

void Engine::Draw()
{   
    m_Window.clear();

    //DrawWalls(m_wallsMap);
    //DrawItems(m_dotsMap, m_fruitMap);

    //Draws "Player"
    Sprite dd_player;
    Texture text;
    text.loadFromFile("Textures/BluePacmanGhost.png");
    dd_player.setTexture(text);
    
    /*if (m_Player->GetLocation().y <= 0.0 || m_Player->GetLocation().y >= 1080.0)
    {
        m_Player->SetLocation(m_Player->GetLocation());
        //playerDirection = Direction::NONE;
    }*/
    dd_player.setPosition(m_Player->GetLocation());

    m_Window.draw(dd_player);
    for (int counter = 0; counter < 5; counter++)
    {
        Sprite new_Enemy;
        new_Enemy.setTexture(text);
        new_Enemy.setPosition(m_Enemies.at(counter).GetLocation());
        m_Window.draw(new_Enemy);
    }
    //m_Window.draw();
    m_Window.draw(feed);
    m_Window.display();
    

}

