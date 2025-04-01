#include <iostream>
#include "../include/Counter.h"
int Counter::widthCounter(int entry_rows_count){
    if(entry_rows_count == 3){
        return 6; // edge case
    }
    if(entry_rows_count == 2){
        return 4; // edge case
    }
    return Counter::widthCounter(entry_rows_count - 1) + 6;
}
int Counter::sizeCounter(int entry_rows_count){
    if(entry_rows_count < 2){
        std::__throw_invalid_argument("ilosc wierszy nie moze byc mniejsza od dwoch");
    }
    if(entry_rows_count == 2){
        return 9; // edge case
    }
    return widthCounter(entry_rows_count) + 7;
}