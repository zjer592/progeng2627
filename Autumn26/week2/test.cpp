#include <iostream>
#include <vector>


void filter_v(const std::vector<int>& vin, double t, std::vector<int>& vout){
    for(int i=0;i<vin.size();i++){
        if(vin.at(i)<t){
            vout.push_back(vin.at(i));
        }
    }
}

int main(){
    std::vector<int> v6; 
    std::vector<int> v7; 
    int n6;
    double x;
    std::cout<<"enter the size of the vector"<<std::endl;
    std::cin>>n6;
    std::cout<<"enter each number you want to push into the vector"<<std::endl;
    for(int i=0;i<n6;i++){
        int a;
        std::cin>>a;
        v6.push_back(a);
    }
    std::cout<<"enter a number"<<std::endl;
    std::cin>>x;
    filter_v(v6,x,v7);
    for(int i=0;i<v7.size();i++){
        std::cout<<v7.at(i)<<" ";
    }
}