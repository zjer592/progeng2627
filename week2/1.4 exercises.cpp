#include <iostream>

int main() {
    //Rectangles
    double n1,n2,p,a;
    std::cout<<"Type in the length of two sides of a rectangle"<<std::endl;
    std::cin>>n1;
    std::cin>>n2;
    p=2*(n1+n2);
    a=n1*n2;
    std::cout<<"The perimeter is "<<p<<" and the area is "<<a<<std::endl;

    //Currency Conversion
    double bp,er,e;
    std::cout<<"Enter the number of British pounds"<<std::endl;
    std::cin>>bp;
    std::cout<<"Enter the current exchange rate to Euros"<<std::endl;
    std::cin>>er;
    e=bp*er;
    std::cout<<"The equivalent amount in Euros is"<<e;

    //Temperature Conversion
    double C,F;
    std::cout<<"Enter the temperature in Celsius degrees"<<std::endl;
    std::cin>>C;
    F=1.8*C+32;
    std::cout<<"The equivalent temperature in Fahrenheit degrees is "<<F;

    //BMI calculator
    double w,h,BMI;
    std::cout<<"Enter your weight:"<<std::endl;
    std::cin>>w;
    std::cout<<"Enter your height:"<<std::endl;
    std::cin>>h;
    BMI=w/(h*h);
    std::cout<<"Your BMI is "<<BMI;

}