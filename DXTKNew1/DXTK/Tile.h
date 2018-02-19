
#include "Sprite2D.h"
class Tile :
	public Sprite2D
{
public:
	Tile(const wchar_t* _file_name, ID3D11Device* device);
	~Tile();

	Vector2 DrunkWalk(Vector2 pos);

protected:

	Vector2 tileGoal = Vector2(760, 540);
	int check = 0;
	int direction = 0;
};
