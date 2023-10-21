/*
** Created the 02/10/2023
*/

#include "IEntity.hpp"
#include <SFML/Graphics.hpp>

class Player : public IEntity
{
public:
    Player();
    void update() override;
    void render(sf::RenderWindow &window) override;
    sf::Sprite getSprite() const override;
    // Player-specific functionalities
private:
    sf::Sprite sprite;
    sf::Texture texture;
    sf::IntRect rect;
    sf::Clock clock;
    bool moveUp;
    int currentFrame;
};
