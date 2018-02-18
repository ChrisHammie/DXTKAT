#include "Tile.h"
#include "Sprite.h"
#include <time.h>



Tile::Tile(const wchar_t* _file_name, ID3D11Device* device)
{
	m_sprite = new Sprite(_file_name, device);
	
}


Tile::~Tile()
{
}

Vector2 Tile::DrunkWalk(Vector2 pos)
{
	
	

	direction = rand() % 4;

	check = direction;

	switch (direction)
	{
		case 1:
		{
			if (check != 3)
			{
				SetPos(pos + Vector2(100, 0));
				return GetPos();
			}
			else
			{
				break;
			}
			
		}
		case 2:
		{
			if (check != 4)
			{
				SetPos(pos + Vector2(0, 100));
				return GetPos();
			}
			else
			{
				break;
			}
			
		}
		case 3:
		{
			if (check != 1)
			{
				SetPos(pos + Vector2(-100, 0));
				return GetPos();
			}
			
		}
		case 4:
		{ 
			if (check != 2)
			{
				SetPos(pos + Vector2(0, -100));
				return GetPos();
			}
			else
			{
				break;
			}
			
		}
	}

}
