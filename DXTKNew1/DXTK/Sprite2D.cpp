#include "pch.h"
#include "Sprite2D.h"
#include "Sprite.h"
#include "Tile.h"


Sprite2D::Sprite2D(const wchar_t* _file_name, ID3D11Device* device)
{
	m_sprite = new Sprite(_file_name, device);
}

Sprite2D::Sprite2D()
{
}


Sprite2D::~Sprite2D()
{
}

const DirectX::SimpleMath::Vector2 Sprite2D::GetPos()
{
	return m_pos;
}

void Sprite2D::SetPos(DirectX::SimpleMath::Vector2 pos)
{
	m_pos = pos;
}

Sprite* Sprite2D::GetSprite()
{
	return m_sprite;
}


