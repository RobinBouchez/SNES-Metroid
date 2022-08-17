#include "pch.h"
#include "Screen.h"
#include "Texture.h"

Screen::Screen(const Point2f& position)
	: m_IsActive{ true }
	, m_ScreenPos{ position }
	, m_Boundaries {}
{
	m_Boundaries.left = position.x;
	m_Boundaries.bottom = position.y;
}

Screen::~Screen()
{
}

Rectf Screen::GetBoundaries() const
{
	return m_Boundaries;
}

void Screen::SetIsActive(bool value)
{
	m_IsActive = value;
}

bool Screen::IsActive()
{
	return m_IsActive;
}
