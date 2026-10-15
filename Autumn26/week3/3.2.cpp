#include <iostream>

int main() {
    //print i
    for(int i = 0; i < 7; i++){
        std::cout << i << std::endl;
    }
    //expected output:
    //0
    //1
    //2
    //3
    //4
    //5
    //6

    //x^n using a for loop
    int result=1,x,n;
    std::cin>>x>>n;
    for(int i=0;i<n;i++){
        result=result*x;
    }
    std::cout <<"the result is "<<result;

    //factorial
    int n,result=1;
    std::cin>>n;
    for(int i=n;i>=1;i--){
            result=result*i;
    }
    std::cout <<"the result is "<<result;
}