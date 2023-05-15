#include "Player.h"






void Player::loadTexture(std::string path, sf::Texture& textureName, sf::Sprite& spriteName)
{
    if (!textureName.loadFromFile(path)) {
        std::cerr << "Could not load texture" << std::endl;
    }
    spriteName.setTexture(textureName);
}

Player::Player()
{
	

}

Player::~Player()
{



}

void Player::render(sf::RenderTarget& target)
{


}

void Player::update()
{


}

void Player::animateBreath()
{
//breath

}

void Player::animateWalk()
{

//walk left
	

//walk right

//walk down-left-rigt

//walk up-left right


}

void Player::animateAttackMele()
{
//attack left

//attack right

//attack down-left-rigt

//attack up-left-rigt

}

void Player::animateAttackDistance()
{
//attack left

//attack right

//attack down-left-rigt

//attack up-left-rigt

}

void Player::animateDeath()
{
}
