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

void Tile::DrunkWalk()
{
	srand(time(NULL));

	direction = rand() % 1 + 4;

}
