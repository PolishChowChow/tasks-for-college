#include <iostream>
#include "include/Counter.h"
// class Counter{
//     private:
//         static int widthCounter(int entry_rows_count){
//             if(entry_rows_count == 3){
//                 return 6; // edge case
//             }
//             if(entry_rows_count == 2){
//                 return 4; // edge case
//             }
//             return Counter::widthCounter(entry_rows_count - 1) + 6;
//         }
//     public:
//         static int sizeCounter(int entry_rows_count){
//             if(entry_rows_count < 2){
//                 std::__throw_invalid_argument("ilosc wierszy nie moze byc mniejsza od dwoch");
//             }
//             if(entry_rows_count == 2){
//                 return 9; // edge case
//             }
//             return widthCounter(entry_rows_count) + 7;
//         }
// };

int main() {
    int liczba_wierszy_w_pierwszym_bloku;
    std::cout<<"Podaj liczbę wierszy w pierwszym bloku choinki"<<std::endl;
    std::cin>>liczba_wierszy_w_pierwszym_bloku;
    try
    {
        std::cout<<"dla "<<liczba_wierszy_w_pierwszym_bloku<<": "<<Counter::sizeCounter(liczba_wierszy_w_pierwszym_bloku)<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    // std::cout<<"dla 2: "<<Counter::sizeCounter(1)<<std::endl;
    // std::cout<<"dla 3: "<<Counter::sizeCounter(3)<<std::endl;
    // std::cout<<"dla 4: "<<Counter::sizeCounter(4)<<std::endl;
    // std::cout<<"dla 5: "<<Counter::sizeCounter(5)<<std::endl;
    // std::cout<<"dla 6: "<<Counter::sizeCounter(6)<<std::endl;
    return 0;
}
