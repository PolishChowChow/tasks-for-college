#include<iostream>

int dzielenie(int a ,int b){
    if(b == 0){
        throw std::runtime_error("Nie mozna dzielic przez 0");
    }
    return a / b;
}

int modulo(int a, int b){
    if(a == b || a%b == 0 || b%a == 0){
        throw std::logic_error("Nie wolno podawać tych samych liczb bądź swoich wieloktrotności");
    }
    return a%b;
}

int main(){
    try{
        std::cout<<dzielenie(2,0)<<std::endl;
    }
    catch(const std::runtime_error& e){
        std::cerr<<"wyjatek zero: "<<e.what()<<std::endl;
    }
    try{
        std::cout<<dzielenie(2,1)<<std::endl;
    } 
    catch(const std::runtime_error& e){
        std::cerr<<"wyjatek zero: "<<e.what()<<std::endl;
    }
    try{
        std::cout<<modulo(2,2)<<std::endl;
    }
    catch(const std::logic_error& e){
        std::cerr<<"wielokrotnosci: "<<e.what()<<std::endl;
    }
    try{
        std::cout<<modulo(3,2)<<std::endl;
    }
    catch(const std::logic_error& e){
        std::cerr<<"wielokrotnosci: "<<e.what()<<std::endl;
    }

    std::cout<<"Dziala dalej"<<std::endl;
    return 0;
}