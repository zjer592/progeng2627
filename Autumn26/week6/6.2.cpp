#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    //read the content of a text file and print it on another file in reversed order
    std::ifstream infile;
    infile.open("input.txt");
    std::vector<int> v;
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    int tmp;
    while(infile>>tmp){
        v.push_back(tmp);
    }
    infile.close();
    std::ofstream outfile;
    outfile.open("output.txt");
    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i=v.size()-1;i>=0;i--){
        outfile<<v.at(i)<<std::endl;
    }
    outfile.close();

    //read the names of the files for the input and the output
    std::string inputfilename,outputfilename;
    std::cout << "enter name of input file" << std::endl;
    std::cin >> inputfilename;
    std::cout << "enter name of output file" << std::endl;
    std::cin >> outputfilename;
    std::ifstream infile1; 
    infile1.open(inputfilename);
    std::vector<int> v1;
    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    int tmp1;
    while(infile>>tmp1){
        v1.push_back(tmp1);
    }
    infile1.close();
    std::ofstream outfile1;
    outfile1.open(outputfilename);
    if(!outfile1.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for(int i=v1.size()-1;i>=0;i--){
        outfile1<<v1.at(i)<<std::endl;
    }
    outfile1.close();
}