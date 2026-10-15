#include <iostream>
#include <string>
int main() {
    //the maximum and the minimum so far
    int n, curmax,curmin;

    std::cout << "please enter number:" << std::endl;
    std::cin >> n;
    curmax = n;
    curmin=n;
    std::cout << "maximum so far: " << curmax << std::endl;
    std::cout << "minimum so far: " << curmin << std::endl;

    while(n != 0){

        std::cout << "please enter number:" << std::endl;
        std::cin >> n;

        if(n > curmax){
            curmax = n;
        }
        if(n<curmin){
            curmin=n;
        }
        std::cout << "maximum so far: " << curmax << std::endl;
        std::cout << "minimum so far: " << curmin << std::endl;
    }

    //guess the number
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
        int mid=(max+min)/2;
        std::cout<<"my guess is:"<<mid<<", higher or lower than actual number?"<<std::endl;
        std::cin>>ans;
    }
    std::cout<<"win!"<<std::endl;
}