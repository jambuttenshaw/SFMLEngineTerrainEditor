#pragma once

#include "Display.h"


class PaletteDisplay : public Display
{
public:
	PaletteDisplay(sf::RenderWindow* window);

	void Update() override;
	void Render() override;


private:
	sf::RectangleShape m_Background;
};
