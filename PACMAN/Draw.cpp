#include "Engine.h"
#include <ctime>

void Engine::Draw()
{

    m_Window.clear();
    /*
    //Draws Map

    for (int counter = 0; counter < m_Map.size(); counter++)
    {
        if (counter < 2)
        {
            cout << "0" << endl;
            m_Map.at(counter).setSize(sf::Vector2f(500, 50));
        }
        else if (counter > 2 && counter < 4) { m_Map.at(counter).setSize(sf::Vector2f(50, 500)); }

        m_Map.at(counter).setPosition(0.0, 0.0);
        m_Map.at(counter).setFillColor(Color::White);
        m_Window.draw(m_Map.at(counter));
    }
    */

    //NO BOARDER (window will be boarder)
    //m_Window.draw(m_Map); //
    // 
    //Draws "Player"
    RectangleShape d_player(Vector2f(40, 40));
    Sprite dd_player;
    dd_player.setPosition(d_player.getPosition());
    Texture text;
    text.loadFromFile("Textures/BluePacmanGhost.png");
    dd_player.setTexture(text);
    
    if (m_Player->GetLocation().y <= 0.0 || m_Player->GetLocation().y >= 1080.0)
    {
        m_Player->SetLocation(m_Player->GetLocation());
        //playerDirection = Direction::NONE;
    }
    dd_player.setPosition(m_Player->GetLocation());
    
    m_Window.draw(dd_player);
    //m_Window.draw();
	m_Window.draw(feed);
	m_Window.display();


}

