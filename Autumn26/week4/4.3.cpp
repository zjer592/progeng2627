#include <iostream>

int f(){
    std::cout << "this is function f" << std::endl;
    return 1;
    std::cout << "printing after the first return statement" << std::endl;
    return 2;
    std::cout << "printing after the second return statement" << std::endl;
}

bool even_or_odd(int n){

    bool out; 

    if( (n % 2) == 0){
        out = true;
    }
    else{
        out = false;
    }

    return out;
}


bool even_or_odd_two_ret(int n){

    if( (n % 2) == 0){
        return true;
    }
    else{
        return false;
    }
}

bool even_or_odd_two_ret_wrong(int n){
    if( (n % 2) == 0){
        return true;
    }
}

bool even_or_odd_wrong(int n){
    bool out;

    if( (n % 2) == 0){
        out = true;
    }
    else{
        out = false;
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
    //testing that the return statement terminates function execution
    int n = 0;
    n = f();
    std::cout << "n is: " << n << std::endl; 

    //testing the undefined behaviour
    std::cout << even_or_odd(2) << std::endl;
    std::cout << even_or_odd(3) << std::endl;

    std::cout << even_or_odd_two_ret(2) << std::endl;
    std::cout << even_or_odd_two_ret(3) << std::endl;

    std::cout << even_or_odd_two_ret_wrong(2) << std::endl;
    std::cout << even_or_odd_two_ret_wrong(3) << std::endl;

    std::cout << even_or_odd_wrong(2) << std::endl;
    std::cout << even_or_odd_wrong(3) << std::endl;

    //smallest factor
    int a;
    std::cout<<"enter an integer:"<<std::endl;
    std::cin>>a;
    std::cout<<"the smallest factor is: "<<smallest_factor(a)<<std::endl;

    //primes in a range
    int b,c;
    std::cout<<"enter two integers(the second one should be larger):"<<std::endl;
    std::cin>>b>>c;
    primes(b,c);
}