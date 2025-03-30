class Kolo;
class Punkt{
public:
	int x, y;
	Punkt(int x, int y){
		this->x = x;
		this->y = y;
	}
	~Punkt(){
		std::cout<<"destruktor dla obiektu punkt o parametrach x: "<<x<<", y:"<<y<<std::endl;
	}
	friend bool isPunktWKole(Punkt &punkt, Kolo &kolo);
};
