class Klasa{
private:
	int x;
public:
	Klasa(){
		std::cout<<"Uruchomienie konstruktora"<<std::endl;
		this->x = 2;					
	}
	friend void testowa_funkcja(Klasa* klasa);
};
