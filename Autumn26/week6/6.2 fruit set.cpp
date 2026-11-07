#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s,const std::vector<std::string>& vin){
    for(int i=0;i<vin.size();i++){
        if(vin.at(i)==s){
            return i;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0;i<vin1.size();i++){
        vout.push_back(vin1.at(i));
    }
    for(int i=0;i<vin2.size();i++){
        if(search_vector(vin2.at(i),vin1)==-1){
            vout.push_back(vin2.at(i));
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0;i<vin1.size();i++){
        if(search_vector(vin1.at(i),vin2)!=-1){
            vout.push_back(vin1.at(i));
        }
    }
}

int main(){
    std::ifstream w1,w2;
    w1.open("warehouse1.txt");
    w2.open("warehouse2.txt");
    std::vector<std::string> v1,v2,vu,vi;
    if(!w1.is_open()||!w2.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(w1>>tmp){
        v1.push_back(tmp);
    }
    while(w2>>tmp){
        v2.push_back(tmp);
    }
    w1.close();
    w2.close();
    union_vector(v1,v2,vu);
    intersection_vector(v1,v2,vi);
    std::ofstream u,i;
    u.open("union.txt");
    i.open("intersection.txt");
    if(!u.is_open()||!i.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int j=0;j<vu.size();j++){
        u<<vu.at(j)<<std::endl;
    }
    for(int j=0;j<vi.size();j++){
        i<<vi.at(j)<<std::endl;
    }
    u.close();
    i.close();
}