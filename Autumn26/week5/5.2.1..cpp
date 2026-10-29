#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

double sum_vector1(const std::vector<double>& vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int min_vector_element(const std::vector<double>& vin){

    if(vin.size()==0){
        return 1;
    }
    else{
        int min=vin.at(0),index=0;
        for(int i=1;i<vin.size();i++){
            if(vin.at(i)<min){
                min=vin.at(i);
                index=i;
            }
        }
        return index;
    }

}

int search_vector(int n, const std::vector<int>& vin){
    for(int i=0;i<vin.size();i++){
        if(vin.at(i)==n){
            return i;
        }
    }
    return -1;
}

int main(){
    //test passing the vector by copy
    std::vector<double> v;
    v.push_back(3);
    v.push_back(0.5);
    v.push_back(-1);
    std::cout << "the sum is: " << sum_vector(v) << std::endl;

    //test passing the vector by copy with more elements
    int n;
    std::vector<double> v1;
    std::cout<<"enter the size of the vector"<<std::endl;
    std::cin>>n;
    std::cout<<"enter each number you want to push into the vector"<<std::endl;
    for(int i=0;i<n;i++){
        int a;
        std::cin>>a;
        v1.push_back(a);}
    std::cout << "the sum is: " << sum_vector(v1) << std::endl;

    //test passing the vector by const reference
    std::vector<double> v2;

    v2.push_back(3);
    v2.push_back(0.5);
    v2.push_back(-1);

    std::cout << "the sum is: " << sum_vector1(v2) << std::endl;

    //index of minimum value in a vector
    int n;
    std::vector<double> v3;
    std::cout<<"enter the size of the vector"<<std::endl;
    std::cin>>n;
    std::cout<<"enter each number you want to push into the vector"<<std::endl;
    for(int i=0;i<n;i++){
        int a;
        std::cin>>a;
        v3.push_back(a);}
        
    //search a value in a vector
    int n,a;
    std::vector<int> v4;
    std::cout<<"enter the size of the vector"<<std::endl;
    std::cin>>n;
    std::cout<<"enter each number you want to push into the vector"<<std::endl;
    for(int i=0;i<n;i++){
        int a;
        std::cin>>a;
        v4.push_back(a);}
    std::cout<<"enter the number you want to search"<<std::endl;
    std::cin>>a;
    std::cout << "the index of minimum value is " << search_vector(a,v4) << std::endl;


}