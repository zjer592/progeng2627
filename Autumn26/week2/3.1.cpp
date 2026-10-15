#include <iostream>
#include <string>

int main() {
    //rename counter
    int n, i = 0;
    std::cin >> n;
    while(i < n){

        std::cout << "hello" << std::endl;

        i=i + 1;
    }

    //print counter
    int n=4, counter = 0;

    while(counter < n){
        std::cout << counter << std::endl;
        counter = counter + 1;
    }

    //infinite loop
    int n, counter = 0;

    std::cin >> n;

    while(counter < n){
        std::cout << "hello" << std::endl;
    }

    //multiplication as repeated sum
    double x, acc =0;
    int n, counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        acc = acc + x;
        counter = counter + 1;
    }
    std::cout << x << "*" << n <<  " = " << acc << std::endl;

    //echo within range
    int n;

    std::cin >> n;

    while((-11<n)&&(n>11)){
        std::cout << n << std::endl;
        std::cin >> n;
    }

    //echo with text&echo with several stops
    std::string word;
    std::cin>>word;
    while(word!="STOP"||word!="stop"||word!="Stop"){
        std::cout<<word<<std::endl;
        std::cin>>word;
    }

    //The sum so far
    int n=1, sum=0;
    while(n!=0){
        std::cout<<"enter a number:"<<std::endl;
        std::cin>>n;
        sum=sum+n;
        std::cout<<"the sum so far is:"<<sum<<std::endl;
    }

    //The average so far
    int n=1,count=0;
    double sum=0,average;
    while(n!=0){
        count++;
        std::cout<<"enter a number:"<<std::endl;
        std::cin>>n;
        sum=sum+n;
        average=sum/count;
        std::cout<<"the average so far is:"<<average<<std::endl;
    }

    //Division as repeated subtraction
    int a,b,n=0;
    std::cin>>a>>b;
    while(a-b>=0){
        a=a-b;
        n++;
    }
    std::cout<<"quotient="<<n<<" and remainder="<<a;
}