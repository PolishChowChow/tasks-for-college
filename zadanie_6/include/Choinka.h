#include<iostream>

class Choinka{
    int rows, start;
    public:
        Choinka(int rows, int start = 1){
            this->rows = rows;
            this->start = start;
        }
        void wyswietlamy(){
            for(int i = 1; i < this->rows; i++){
                if(i < this->start){
                    continue;
                }
                for(int j = 0; j < this->rows - i; j++){
                    std::cout<<" ";
                }
                for(int k = 1; k < 2 * i; k++){
                    std::cout<<"*";
                }
                std::cout<<std::endl;
            }
        }
};