#include "WorldDisplay.h"


WorldDisplay::WorldDisplay(sf::RenderWindow* window)
	: Display(window, sf::FloatRect(0.0f, 0.0f, 0.66f, 1.0f))
{
	m_Background.setFillColor(sf::Color(210, 210, 255));

	auto const& size = m_View.getSize();
	m_Background.setSize(size);
	m_Background.setPosition(-0.5f * size);
}

void WorldDisplay::Update()
{

}


void WorldDisplay::Render()
{
	m_Window->setView(m_View);

	m_Window->draw(m_Background);
}