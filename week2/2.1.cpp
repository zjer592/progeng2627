#include <iostream>

int main() {
    //multiple of 3 or not
    int n;
    std::cout<<"please enter a number"<<std::endl;
    std::cin>>n;
    if(n%3==0){
        std::cout<<"the number is a multiple of 3";
    }
    else{
        std::cout<<"the number is not multiple of 3";
    }

    //Absolute Value
    double n, absv;
    std::cout<<"Please enter a number"<<std::endl;
    std::cin>>n;

    if(n < 0){ // yes/no question: is n less than 0?
        // if yes, its absolute value is the number changing the sign
        absv = -n;
    }
    else{
        absv=n;
    }

    std::cout << "|" << n << "| = " << absv << std::endl;

    

}