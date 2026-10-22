#include <iostream>
#include <cmath>
// for the square root

bool quadsolve(double a, double b, double c, double& x1, double& x2){

    bool realsol;
    double delta = b*b - 4 * a * c;

    if(delta < 0){
        realsol = false;
    }
    else{
        realsol = true;
        x1 = (-b + std::sqrt(delta)) / (2 * a);
        x2 = (-b - std::sqrt(delta)) / (2 * a);
    }

    return realsol;
}

void perimeter_and_area(double a,double b,double& perimeter,double& area){
    perimeter=2*(a+b);
    area=a*b;
}

void integer_division(int a,int b,int& c,int& d){
    c=a/b;
    d=a%b;
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

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    if((m1==1||3||5||7||8||10)&&d1==31||(m1==4||6||9||11)&&d1==30||m1==2&&d1==29){
        m2=m1+1;
        d2=1;
        y2=y1;
    }
    else if(m1==12&&d1==31){
        d2=1;
        m2=1;
        y2=y1+1;
    }
    else if(!leap_year(y1)&&m1==2&&d1==28){
        m2=m1+1;
        d2=1;
        y2=y1;
    }
    else{
        d2=d1+1;
        m2=m1;
        y2=y1;
    }
}

int main(){
    //test the quadratic equation solver
    double a, b, c;
 
    std::cout << "this program finds the real solutions" << std::endl;
    std::cout << "of an equation of the form ax^2 + bx + c = 0" << std::endl;
    std::cout << "please enter the coefficients a, b, c:" << std::endl;

    std::cin >> a >> b >> c;

    double s1, s2;

    if(quadsolve(a, b, c, s1, s2)){
        std::cout << "the solutions are:" << std::endl;
        std::cout << s1 << std::endl;
        std::cout << s2 << std::endl;
    }
    else{
        std::cout << "there are no real solutions" << std::endl;
    }

    //perimeter and area
    double a,b,c,d;
    std::cout<<"enter two side lengths for rectangle:"<<std::endl;
    std::cin>>a>>b;
    perimeter_and_area(a,b,c,d);
    std::cout<<"perimeter is "<<c<<" and area is "<<d<<std::endl;

    //integer division
    int a,b,e,f;
    std::cout<<"enter two intgers:"<<std::endl;
    std::cin>>a>>b;
    integer_division(a,b,e,f);
    std::cout<<"quotient is "<<e<<" and remainder is "<<f<<std::endl;

    //next date
    int d1,m1,y1,d2,m2,y2;
    std::cout<<"enter today's date:(d/m/y)"<<std::endl;
    std::cin>>d1>>m1>>y1;
    next_date(d1,m1,y1,d2,m2,y2);
    std::cout<<"next date is: "<<d2<<" "<<m2<<" "<<y2;
}