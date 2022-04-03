#ifndef SPACE_INVADERS_ENEMY_H
#define SPACE_INVADERS_ENEMY_H

#include <SFML/Graphics.hpp>
#include "Ship.h"
class Enemy 
{
protected:
    sf::Vector2u m_size;
    sf::Vector2u m_windowSize;
    Direction m_direction;
    sf::Sprite m_enemySprite;
    sf::Texture m_enemyTexture;
    bool m_isAlive;
public:
    Enemy(sf::Vector2u windowSize);
    ~Enemy()=default;
    void setPosition(sf::Vector2f &position);
    void setPosition(unsigned int x,unsigned int y);
    void setDirection(Direction);

    virtual void spriteInit(int index);
    void die();
    void move(const Direction &direction);
    void fire();
    void reset();
    void render(sf::RenderWindow &renderWindow);

    sf::Vector2f getPosition();
    Direction getDirection();
    sf::Sprite *getSprite();
    sf::Vector2u getSize();

};


#endif