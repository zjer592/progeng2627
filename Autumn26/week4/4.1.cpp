#include <iostream>
#include <cmath>

double myabs(double in);

//our own simplified std::pow also with negative exponent
double mypow(double base, int exp){
    double result=1; 
    if(exp<0){
        base=1/base;
        exp=-exp;
    }
    for(int i=0;i<exp;i++){
        result=result*base;
    }
    return result;
}

int myfactorial(int in){
    int fact=1;
    for(int i=in;i>=1;i--){
        fact=fact*i;
    }
    return fact;
}

bool leap_year(int year){
    bool ly;
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                ly=true;
            }
            else{
                ly=false;
            }
        }
        else{
            ly=true;
        }
    }
    else{
        ly=false;
    }
    return ly;
}

double maxtwo(double a,double b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

double maxthree(double a,double b,double c){
    if(a>b&&a>c){
        return a;
    }
    else if(b>c){
        return b;
    }
    else{        return c;}

}

int powersum(int x,int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+mypow(x,i);
    } 
}

int main(){
    //test the absolute value program
    double n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << std::abs(n) << std::endl;

    //test the absolute value program with our own function
    std::cout<<"absolute value is: "<<myabs(n)<<std::endl;

    //testing std::pow
    std::cout << "2^3: " << std::pow(2, 3) << std::endl;//8
    std::cout << "0.5^2: " << std::pow(0.5, 2) << std::endl;//0.25
    std::cout << "1^0: " << std::pow(1, 0) << std::endl;//1
    std::cout << "4^0.5: " << std::pow(4, 0.5) << std::endl;//2
    std::cout << "4^(-0.5): " << std::pow(4, -0.5) << std::endl; //0.5

    //sum of powers
    int x,n,sum=0;
    std::cout<<"enter the base number and the power you wanna add to:"<<std::endl;
    std::cin>>x>>n;
    for(int i=1;i<=n;i++){
        sum=sum+std::pow(x,i);
    }  
    std::cout<<"the result is: "<<sum;

    //sum of powers with mypow
    int x,n,sum=0;
    std::cout<<"enter the base number and the power you wanna add to:"<<std::endl;
    std::cin>>x>>n;
    for(int i=1;i<=n;i++){
        sum=sum+mypow(x,i);
    }  
    std::cout<<"the result is: "<<sum;

    //factorial
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;

    //leap year
    int input_year;
    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;
    if(leap_year(input_year)){
        std::cout << "it's a leap year" << std::endl;
    }
    else{
        std::cout << "it's not a leap year" << std::endl;
    }

    //leap year with test cases in main
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;

    //the maximum of two numbers
    double a,b;
    std::cout<<"enter two numbers:"<<std::endl;
    std::cin>>a>>b;
    std::cout<<maxtwo(a,b);

    //the maximum of three numbers
    double a,b,c;
    std::cout<<"enter three numbers:"<<std::endl;
    std::cin>>a>>b>>c;
    std::cout<<maxthree(a,b,c);

    //sum of power as function
    int x,n;
    std::cout<<"enter the base number and the power you wanna add to:"<<std::endl;
    std::cin>>x>>n;
    std::cout<<"the result is: "<<powersum(x,n);
}

//function declaration and function definition
double myabs(double in){
    double abs;
    if(in < 0){ 
        abs = -in;
    }
    else{
        abs = in;
    }
    return abs;
}