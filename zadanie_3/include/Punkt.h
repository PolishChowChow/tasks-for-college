class Kolo;
class Punkt{
public:
	int x, y;
	Punkt(int x, int y);
	~Punkt();
	friend bool isPunktWKole(Punkt &punkt, Kolo &kolo);
};
