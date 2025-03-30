class Kolo{
public:
	int x, y, r;
	Kolo(int x, int y, int r){
		this->x = x;
		this->y = y;
		this->r = r;
	}
	friend bool isPunktWKole(Punkt& punkt, Kolo &kolo);
};
