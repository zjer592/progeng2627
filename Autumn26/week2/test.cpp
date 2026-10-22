#include <iostream>
#include <cmath>
#include <string>

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

int smallest_factor(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return i;
        }
    }
    return 0;
}

void primes(int a,int b){
    std::cout<<"All the primes in this range are: "<<std::endl;
    for(int i=a;i<=b;i++){
        if(smallest_factor(i)==0){
            std::cout<<i<<" ";
        }
    }
}

int main(){
    int b,c;
    std::cout<<"enter two integers(the second one should be larger):"<<std::endl;
    std::cin>>b>>c;
    primes(b,c);
}
