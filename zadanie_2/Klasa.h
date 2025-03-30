class Klasa{
public:
	int* wsk;
	int liczba;
	Klasa(int val){
		liczba = val;
		wsk = new int(val);
		std::cout<<"Adres: "<<wsk<<", liczba: "<<liczba<<std::endl;
	}
	~Klasa(){
		std::cout<<"Konstruktor_niekopiujacy Destrukcja obiketu o adresie: "<<wsk<<std::endl;

	}
};
