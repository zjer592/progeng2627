#include <iostream>

int main() {
    //leap year exercise
    int year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> year;

    if( (year % 4) == 0){ 

        if( (year % 100) == 0){ 
            if(year%400==0){
                std::cout<<"it's a leap year";
            }
            else{
                std::cout<<"not a leap year";
            }
        }
        else{ 
            std::cout<<"it's a leap year";

        }
    }
    else{
        // if not multiple of 4
        std::cout << "not a leap year" << std::endl;
    }
}