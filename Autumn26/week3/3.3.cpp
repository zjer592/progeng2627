#include <iostream>

int main() {
    //bidimensional figure with while loops
    int n,i=0;
    std::cin>>n;
    while(i<n){
        int j=0;
        while (j<n){
            std::cout<<"*";
            j++;
        }
        std::cout<<""<<std::endl;
        i++;
    }

    //multiplication table
    int n,x=0;
    std::cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            x++;
            std::cout<<x<<"\t";
        }
        std::cout<<""<<std::endl;
    }
}