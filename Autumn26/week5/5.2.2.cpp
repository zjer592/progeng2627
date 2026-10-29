#include <iostream>
#include <vector>

std::vector<int> from_1_to_n(int n){

    std::vector<int> vout;

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

    return vout;

}

void from_1_to_n1(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

void from_1_to_n2(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    for(int i=0;i<vin1.size();i++){
        vout.push_back(vin1.at(i));
    }
    for(int i=0;i<vin2.size();i++){
        vout.push_back(vin2.at(i));
    }
}

void filter_v(const std::vector<int>& vin, double t, std::vector<int>& vout){
    for(int i=0;i<vin.size();i++){
        if(vin.at(i)<t){
            vout.push_back(vin.at(i));
        }
    }
}

int main(){
    //test returning the vector
    std::vector<int> v;
    v = from_1_to_n(5);
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }

    //test vector in output using passing by reference
    std::vector<int> v1;
    from_1_to_n1(5, v1);
    for(int i = 0; i < v1.size(); i++){
        std::cout << v1[i] << std::endl;
    }

    //test vector in output using passing by reference(wrong version)
    std::vector<int> v2;
    for(int n = 3; n < 7; n++){
        from_1_to_n2(n, v2);
        std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < v2.size(); i++){
            std::cout << v2[i] << std::endl;
        }
    }

    //test vector in output using passing by reference(amended version)
    for(int n = 3; n < 7; n++){
        v2.clear();
        from_1_to_n2(n, v2);
        std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < v2.size(); i++){
            std::cout << v2[i] << std::endl;
        }
    }

    //appending vectors
    std::vector<int> v3; 
    std::vector<int> v4; 
    std::vector<int> v5;
    int n3,n4;
    std::cout<<"enter the size of the first vector"<<std::endl;
    std::cin>>n3;
    std::cout<<"enter each number you want to push into the vector"<<std::endl;
    for(int i=0;i<n3;i++){
        int a;
        std::cin>>a;
        v3.push_back(a);
    }
    std::cout<<"enter the size of the second vector"<<std::endl;
    std::cin>>n4;
    std::cout<<"enter each number you want to push into the vector"<<std::endl;
    for(int i=0;i<n4;i++){
        int a;
        std::cin>>a;
        v4.push_back(a);
    }
    append_vectors(v3,v4,v5);
    for(int i=0;i<v5.size();i++){
        std::cout<<v5.at(i)<<" ";
    }

    //filtering values
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
    }    std::vector<int> v6; 
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