#pragma once


#pragma once
#include<SFML/Window.hpp>
#include<iostream>
#include<vector>
#include<SFML/Graphics.hpp>

//niesamowite!!!!!!
//jest swietnie
//kocham gitHub!
//dodaje komentarz :D
//pelna kultura
// wypychanie github
class Player
{
	// #region textures_and_intrects
	sf::Texture breath_texture;
	sf::Texture walk_up_texture;
	sf::Texture walk_down_texture;
	sf::Texture walk_right_texture;
	sf::Texture walk_left_texture;
	sf::Texture attack_mele_up_texture;
	sf::Texture attack_mele_down_texture;
	sf::Texture attack_mele_right_texture;
	sf::Texture attack_mele_left_texture;
	sf::Texture attack_distance_up_texture;
	sf::Texture attack_distance_down_texture;
	sf::Texture attack_distance_right_texture;
	sf::Texture attack_distance_left_texture;
	sf::Texture death;
	std::vector<sf::IntRect> breath;
	std::vector<sf::IntRect> walkUp;
	std::vector<sf::IntRect> walkDown;
	std::vector<sf::IntRect> walkRight;
	std::vector<sf::IntRect> walkLeft;
	std::vector<sf::IntRect> meleAttackUP;
	std::vector<sf::IntRect> meleAttackDOWN;
	std::vector<sf::IntRect> meleAttackRIGHT;
	std::vector<sf::IntRect> meleAttackLEFT;
	std::vector<sf::IntRect> distanceAttackUP;
	std::vector<sf::IntRect> distanceAttackDOWN;
	std::vector<sf::IntRect> distanceAttackRIGHT;
	std::vector<sf::IntRect> distanceAttackLEFT;
	std::vector<sf::IntRect> death;
	// #endregion 


	sf::Clock clock;

	sf::Sprite hero;
	sf::Event ev;



	
	float hero_speed;

	
	void loadTexture(std::string, sf::Texture, sf::Sprite);
public:
	//constructors-------------------------------------
	Player();
	~Player();
	//end-constructors---------------------------------

	// render/update-----------------------------------
	void render(sf::RenderTarget& target);
	void update();
	//end render/update---------------------------------


	//public functions----------------------------------

	void animateBreath();
	void animateWalk();
	void animateAttackMele();
	void animateAttackDistance();
	void animateDeath();

};

