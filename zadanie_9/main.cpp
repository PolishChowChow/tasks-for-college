#include<iostream>
#include<type_traits>
template <typename T, typename std::enable_if<std::is_arithmetic<T>::value, int>::type = 0>
T max(T arg1, T arg2){
    return arg1 > arg2 ? arg1 : arg2;
}

template <typename T, typename std::enable_if<std::is_arithmetic<T>::value, int>::type = 0>
T max_for_3(T arg1, T arg2, T arg3){
    if(arg1 > arg2 && arg1 > arg3){
        return arg1;
    }
    if(arg2 > arg1 && arg2 > arg3){
        return arg2;
    }
    return arg3;
}

template <typename T, typename std::enable_if<std::is_arithmetic<T>::value, int>::type = 0>
class Walec{
    T promien;
    T wysokosc;
    public:
        Walec(T promien, T wysokosc): promien(promien), wysokosc(wysokosc) {}
    template <typename U = double, typename std::enable_if<std::is_arithmetic<U>::value, int>::type = 0>
    U poleWalca(){
        return static_cast<double>((promien * promien * M_1_PI * 2) + (wysokosc * 2 * M_1_PI * promien));
    }
};

int main(){
    int maximum1 = max(4,3);
    int maximum = max_for_3(5,4,3);
    Walec<double> walec(3.00,3.43);

    std::cout<<maximum<<std::endl;
    std::cout<<maximum1<<std::endl;
    std::cout<<"Walec (domyslnie): "<<walec.poleWalca()<<std::endl;
    std::cout<<"Walec (domyslnie): "<<walec.poleWalca<int>()<<std::endl;
    return 0;
}