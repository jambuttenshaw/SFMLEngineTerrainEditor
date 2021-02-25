#include "PaletteDisplay.h"

#include <iostream>

PaletteDisplay::PaletteDisplay(sf::RenderWindow* window)
	: Display(window, sf::FloatRect(0.66f, 0.0f, 0.34f, 1.0f))
{
	m_Background.setFillColor(sf::Color(45, 45, 45));

	auto const& size = m_View.getSize();
	m_Background.setSize(size);
	m_Background.setPosition(-0.5f * size);
}

void PaletteDisplay::Update()
{

}


void PaletteDisplay::Render()
{
	m_Window->setView(m_View);

	m_Window->draw(m_Background);
}