#include "Display.h"


Display::Display(sf::RenderWindow* window)
	: m_Window(window)
{
	m_View = m_Window->getDefaultView();
	m_View.setCenter(0, 0);
}

Display::Display(sf::RenderWindow* window, const sf::FloatRect& viewport)
	: m_Window(window)
{
	m_View.setViewport(viewport);
	m_View.setCenter(0, 0);
	auto const& dims = m_Window->getSize();
	m_View.setSize(dims.x * viewport.width, dims.y * viewport.height);
}


bool Display::MouseOver()
{
	auto const& mouse = sf::Mouse::getPosition(*m_Window);
	auto const& pos = m_Window->mapPixelToCoords(mouse, m_View);

	auto const& size = m_View.getSize();
	sf::FloatRect viewBounds{ m_View.getCenter() - 0.5f * size, size };

	return viewBounds.contains(pos);
}
