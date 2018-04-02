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
	
	

	direction = rand() % 4 + 1;

	check = direction;

	switch (direction)
	{
		case 1:			//right
		{
			if (check != 3)
			{
				SetPos(pos + Vector2(m_sprite->getWidth(), 0));
				
				return GetPos();
			}
			else
			{
				DrunkWalk(pos);
			}
			
		}
		case 2:			//down
		{
			if (check != 4)
			{
				SetPos(pos + Vector2(0, m_sprite->getWidth()));
				
				return GetPos();
			}
			else
			{
				DrunkWalk(pos);
			}
			
		}
		case 3:			//left
		{
			if (check != 1)
			{
				SetPos(pos + (Vector2(m_sprite->getWidth() * -1, 0)));
				
				return GetPos();
			}
			else
			{
				DrunkWalk(pos);
			}
			
		}
		case 4:			//up
		{ 
			if (check != 2)
			{
				SetPos(pos + Vector2(0, (m_sprite->getWidth() * -1)));
				
				return GetPos();
			}
			else
			{
				DrunkWalk(pos);
			}
			
		}
	}

}
