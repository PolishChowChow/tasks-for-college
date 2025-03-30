class Klasa{
	public:
	Klasa(){
		std::cout<<"Konstruktor bezparametryczny"<<std::endl;
	}
	Klasa(int a, int b){
		std::cout<<"Konatruktor parametryczny z parametrami: a"<<a<<", b:"<<b<<std::endl;
	}
	~Klasa(){
		std::cout<<"Destruktor!"<<std::endl;
	}
};
