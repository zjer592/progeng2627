#include <iostream>
#include <string>
// this includes the header for text variables

int main(){
    int max,min;
    std::string ans;
    std::cout<<"enter the higher bound and lower bound:"<<std::endl;
    std::cin>>max>>min;
    std::cout<<"Im gonna guess a number, answer higher, lower or same"<<std::endl;
    int mid=(max+min)/2;
    std::cout<<"my guess is:"<<mid<<", higher or lower than actual number?"<<std::endl;
    std::cin>>ans;
    while(ans!="same"){
        if(ans=="higher"){
            max=mid-1;
        }
        if(ans=="lower"){
            min=mid+1;
        }
        mid=(max+min)/2;
        std::cout<<"my guess is:"<<mid<<", higher or lower than actual number?"<<std::endl;
        std::cin>>ans;
    }
    std::cout<<"win!"<<std::endl;
}