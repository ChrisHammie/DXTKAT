
#include "Sprite2D.h"
class Tile :
	public Sprite2D
{
public:
	Tile(const wchar_t* _file_name, ID3D11Device* device);
	~Tile();

private:

	void DrunkWalk();

	int direction = 0;
};
