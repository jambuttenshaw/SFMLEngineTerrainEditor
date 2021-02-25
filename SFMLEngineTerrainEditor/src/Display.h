#pragma once

#include <SFML/Graphics.hpp>


class Display
{
public:
	Display(sf::RenderWindow* window);
	Display(sf::RenderWindow* window, const sf::FloatRect& viewport);

	const sf::View& GetView() { return m_View; }

	virtual void Update() = 0;
	virtual void Render() = 0;

	bool MouseOver();

protected:
	sf::RenderWindow* m_Window;
	sf::View m_View;

};
