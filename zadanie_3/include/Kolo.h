class Punkt;
class Kolo{
public:
	int x, y, r;
	Kolo(int x, int y, int r);
	~Kolo();
	friend bool isPunktWKole(Punkt& punkt, Kolo &kolo);
};
