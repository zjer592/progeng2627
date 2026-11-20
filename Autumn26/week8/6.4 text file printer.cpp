#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(int argc, char* argv[]){
    if(argc !=2){
        return EXIT_FAILURE;
    }

    std::ifstream infile;
    std::string tmp;
    infile.open(argv[1]);
    while(infile>>tmp){
        std::cout<<tmp<<" ";
    }

}