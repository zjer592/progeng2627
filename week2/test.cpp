#include <iostream>
#include <string>
// this includes the header for text variables

int main(){
    double n, rem;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 2;
    // the operator % is not a percentage (bad choice of symbol, I know)
    // it computes the remainder of the integer division
    // between n and 2, which will be 
    // 0 if the number is even and
    // 1 if the number is odd

    std::cout << "in the following line 0 means even and 1 means odd" << std::endl;
    std::cout << rem << std::endl;
}