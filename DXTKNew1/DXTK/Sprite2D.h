#pragma once
#include "pch.h"

class Sprite;
class Tile;

class Sprite2D
{
public:
	Sprite2D(const wchar_t* _file_name, ID3D11Device* device);
	Sprite2D();
	~Sprite2D();

public:

	const DirectX::SimpleMath::Vector2 GetPos();
	void SetPos(DirectX::SimpleMath::Vector2 pos);

	const float GetRot() { return m_rot; }
	void SetRot(float rot) { m_rot = rot; }

	const float GetScale() { return m_scale; }
	void SetScale(float scale) { m_scale = scale; }

	Sprite* GetSprite();

	void Tick();
	void Draw();

protected:

	Sprite* m_sprite;

	DirectX::SimpleMath::Vector2 m_pos;
	float m_rot;
	float m_scale;

};

