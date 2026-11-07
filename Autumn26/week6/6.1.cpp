#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <String>

int main(){
    //testing basic readding from text files
    std::ifstream infile;
    infile.open("input.txt");
    if(infile.is_open()){
        int tmp;
        infile>>tmp;
        std::cout<<tmp<<std::endl;
        infile>>tmp;
        std::cout<<tmp<<std::endl;
        infile.close();
    }
    else{
        std::cout<<"error opening file"<<std::endl;
    }

    //whitespace separation
    std::ifstream infile;
    infile.open("input1.txt");
    if(infile.is_open()){
        int tmp;
        infile>>tmp;
        std::cout<<tmp<<std::endl;
        infile>>tmp;
        std::cout<<tmp<<std::endl;
        infile.close();
    }
    else{
        std::cout<<"error opening file"<<std::endl;
    }

    //testing reading from text files using a loop
    infile.open("input1.txt");
    if(infile.is_open()){
        int tmp;
        while(infile>>tmp){
            std::cout<<tmp<<std::endl;
        }
        infile.close();
    }
    else{
        std::cout<<"error opening file"<<std::endl;
    }

    //reading from text files using a loop and printing the sum
    infile.open("input1.txt");
    int sum=0;
    if(infile.is_open()){
        int tmp;
        while(infile>>tmp){
            std::cout<<tmp<<std::endl;
            sum=sum+tmp;
        }
        infile.close();
        std::cout<<sum<<std::endl;
    }
    else{
        std::cout<<"error opening file"<<std::endl;
    }

    //testing using an early return when the file can't be opened
    infile.open("inpu.txt");
    if(!infile.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }
    int tmp;
    while(infile>>tmp){
        std::cout<<tmp<<std::endl;
    }
    infile.close();

    //our intended input will probably not always be named input.txt: have already done by adding input1.txt
    //print the content of a text file in reversed order
    std::vector<int> v;
    infile.open("input.txt");
    if(!infile.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }
    int tmp;
    while(infile>>tmp){
        v.push_back(tmp);
    }
    infile.close();
    for(int i=v.size()-1;i>=0;i--){
        std::cout<<v.at(i)<<" "<<std::endl;
    }

    //Print the content of a text file with words in reversed order
    std::vector<std::string> v1;
    infile.open("input2.txt");
    if(!infile.is_open()){
        std::cout<<"error opening file"<<std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp1;
    while(infile>>tmp1){
        v1.push_back(tmp1);
    }
    infile.close();
    for(int i=v1.size()-1;i>=0;i--){
        std::cout<<v1.at(i)<<" "<<std::endl;
    }
}