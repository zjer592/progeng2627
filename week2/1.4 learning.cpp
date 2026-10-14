#include <iostream>

int main() {
    //multiplying two numbers
    double n1,n2,product;
    std::cout<<"please enter the first number"<<std::endl;
    std::cin>>n1;
    std::cout<<"please enter the first number"<<std::endl;
    std::cin>>n2;
    product=n1*n2;
    std::cout<<n1<<"*"<<n2<<"="<<product<<std::endl;

    //understanding =
    double a, b, c;
    a = 1;
    b = 2;
    c = a + b;
    std::cout << c << std::endl;
    // this line will print 3
    a = 2;
    std::cout << c << std::endl;
    // 3 will be printed
    c = a + b;
    std::cout << c << std::endl;
    // 4 will be printed

    //testing unexpected integers
    std::cout <<5/2<<std::endl;

    //testing the correct version
    std::cout << 5 / 2.0 << std::endl;
}  