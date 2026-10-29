#include <iostream>
#include <vector>
// this header is needed to use vectors

int main(){
    //testing the basic operations on vectors
    std::vector<int> v; 
    v.push_back(10);
    v.push_back(20);
    std::cout << v[0] << std::endl;
    std::cout << v[1] << std::endl;
    v[0] = 15;
    std::cout << v[0] << std::endl;
    v.push_back(30);
    std::cout << v.size() << std::endl;

    //testing that some basic operations don't work
    std::cout << v << std::endl;

    //Exersice
    std::vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    std::cout<<v1[0]*(v1[2]+v1[1])<<std::endl;

    //test the code
    std::vector<int> v2; 
    v2.push_back(10);
    v2.push_back(20);
    std::cout << v2.at(0) << std::endl; 
    std::cout << v2.at(1) << std::endl;
    v2.at(1) = 15;
    std::cout << v2.at(1) << std::endl;
    v2.at(2) = 2;
    std::cout << v2.at(2) << std::endl;

    //filtering values
    std::vector<int> v3; 
    int n,t;
    std::cout<<"enter the size of the vector"<<std::endl;
    std::cin>>n;
    std::cout<<"enter each number you want to push into the vector"<<std::endl;
    for(int i=0;i<n;i++){
        int a;
        std::cin>>a;
        v3.push_back(a);
    }
    std::cout<<"enter another number"<<std::endl;
    std::cin>>t;
    std::cout<<"numbers in the vector that is smaller than this number is:"<<std::endl;
    for(int i=0;i<n;i++){
        if(v3.at(i)<t){
            std::cout<<v3.at(i)<<std::endl;
        }
    }

    //occurrences
    std::vector<int> v4; 
    int n,s,o=0;
    std::cout<<"enter the size of the vector"<<std::endl;
    std::cin>>n;
    std::cout<<"enter each number you want to push into the vector"<<std::endl;
    for(int i=0;i<n;i++){
        int a;
        std::cin>>a;
        v4.push_back(a);
    }
    std::cout<<"enter another number"<<std::endl;
    std::cin>>s;
    for(int i=0;i<n;i++){
        if(v4.at(i)==s){
            o++;
        }
    }
    std::cout<<"there are "<<o<<" occurrences of "<<s<<std::endl;

    //occurrences and indices
    std::vector<int> v5; 
    int n,s,o=0;
    std::cout<<"enter the size of the vector"<<std::endl;
    std::cin>>n;
    std::cout<<"enter each number you want to push into the vector"<<std::endl;
    for(int i=0;i<n;i++){
        int a;
        std::cin>>a;
        v5.push_back(a);
    }
    std::cout<<"enter another number"<<std::endl;
    std::cin>>s;
    std::vector<int> occ;
    for(int i=0;i<n;i++){
        if(v5.at(i)==s){
            o++;
            occ.push_back(i);
        }
    }
    if(occ.size()==0){
        std::cout<<"there are no occurrences of "<<s<<std::endl;
    }
    else{
        std::cout<<"there are "<<o<<" occurrences of "<<s<<" at indices:"<<std::endl;
        for(int i=0;i<occ.size();i++){
            std::cout<<occ.at(i)<<std::endl;
        }
    }
}