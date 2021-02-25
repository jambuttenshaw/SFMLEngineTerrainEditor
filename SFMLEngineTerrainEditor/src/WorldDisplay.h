#pragma once

#include "Display.h"


class WorldDisplay : public Display
{
public:
	WorldDisplay(sf::RenderWindow* window);

	void Update() override;
	void Render() override;


private:
	sf::RectangleShape m_Background;
};
