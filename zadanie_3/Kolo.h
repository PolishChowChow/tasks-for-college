class Kolo{
public:
	int x, y, r;
	Kolo(int x, int y, int r){
		this->x = x;
		this->y = y;
		this->r = r;
	}
	~Kolo(){
	std::cout<<"destruktor dla obiektu kolo o parametrach x: "<<x<<", y: "<<y<<", r: "<<r<<std::endl;
	}
	friend bool isPunktWKole(Punkt& punkt, Kolo &kolo);
};
