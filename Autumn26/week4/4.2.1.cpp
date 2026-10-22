#include <iostream>
#include <string>

void myswap1(int n1, int n2){
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void myswap2(double& a, double& b){
    double tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void textswap(std::string& a,std::string& b){
    std::string temp;
    temp=a;
    a=b;
    b=temp;
}

void sort_two_numbers(double& s1, double& s2){
    if(s1>s2){
        myswap2(s1,s2);
    }
}

void sort_three_numbers(double& s1,double& s2,double& s3){
    if(s1>s2){
        myswap2(s1,s2);
    }
    if(s2>s3){
        myswap2(s2,s3);
    }
    if(s1>s2){
        myswap2(s1,s2);
    }
}

int main() {
    //testing swapping values
    int n1, n2;
    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;
    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    //testing wrong versions of swapping value
    int n1, n2;
    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;
    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    n1 = n2;
    n2 = n1;
    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    //testing wrong functions
    int n1, n2;
    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;
    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    myswap1(n1, n2);
    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    //testing the correct version
    int n1, n2;
    std::cout << "please enter two values" << std::endl;
    std::cin >> n1 >> n2;
    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    myswap2(n1, n2);
    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    //swapping text
    std::string a1,b1;
    std::cout<<"enter two strings"<<std::endl;
    std::cin>>a1>>b1;
    textswap(a1,b1);
    std::cout<<a1<<" "<<b1;

    //sorting two numbers
    double n1, n2;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    sort_two_numbers(n1, n2);
    std::cout << n1 << " " << n2 << std::endl;

    //sorting three numbers
    double n1, n2,n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2>>n3;
    sort_three_numbers(n1, n2,n3);
    std::cout << n1 << " " << n2 << " "<<n3<<std::endl;
}