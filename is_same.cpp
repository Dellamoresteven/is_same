#include <iostream>


template<typename T, typename U> 
constexpr bool is_same = false;

template<typename T> 
constexpr bool is_same<T, T> = true;

int main() {
    std::cout << is_same<bool, int> << std::endl;
}