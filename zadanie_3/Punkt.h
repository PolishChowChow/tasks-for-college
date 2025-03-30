class Kolo;
class Punkt{
public:
	int x, y;
	Punkt(int x, int y){
		this->x = x;
		this->y = y;
	}
	friend bool isPunktWKole(Punkt &punkt, Kolo &kolo);
};
