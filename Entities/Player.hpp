/*
**       ::::::::   ::::::::  :::        ::::::::   ::::::::
**     :+:    :+: :+:    :+: :+:       :+:    :+: :+:    :+:
**    +:+    +:+ +:+        +:+       +:+    +:+ +:+
**    +#++:++#  +#+        +#+       +#+    +:+ +#++:++#++
**  +#+    +#+ +#+        +#+       +#+    +#+        +#+
** #+#    #+# #+#    #+# #+#       #+#    #+# #+#    #+#
** ########   ########  ########## ########   ########
**
** Created the 02/10/2019
*/

#include "IEntity.hpp"

class Player : public IEntity
{
public:
    Player();
    void update() override;
    void render(sf::RenderWindow &window) override;
    sf::Sprite getSprite() const override;
    // Player-specific functionalities
};
