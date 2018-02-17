#include "pch.h"
#include "Sprite2D.h"
#include "Sprite.h"


Sprite2D::Sprite2D(const wchar_t* _file_name, ID3D11Device* device)
{
	m_sprite = new Sprite(_file_name, device);
}


Sprite2D::~Sprite2D()
{
}

Sprite* Sprite2D::GetSprite()
{
	return m_sprite;
}



