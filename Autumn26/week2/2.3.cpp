#include <iostream>
#include <string>

int main() {
    //restructure temperature conversion
    double t_in,t_out;
    std::string unit_in,unit_out;
    bool valid_unit=true;
    std::cin>>t_in>>unit_in;
    if(unit_in=="C"){
        unit_out="F";
        t_out=t_in*9/5+32;
    }
    else if(unit_in=="F"){
        unit_out="C";
        t_out=(t_in-32)*5/9;
    }
    else{
        valid_unit=false;
    }

    if(valid_unit){    
        std::cout << t_out << " " << unit_out << std::endl;
    }
    else{
        std::cout<<"error,unit not recognised"<<std::endl;
    }

    //temperature conversion with boolean operators
    double t_in,t_out;
    std::string unit_in,unit_out;
    bool valid_unit=true;
    std::cin>>t_in>>unit_in;
    if(unit_in=="C"||unit_in=="c"){
        unit_out="F";
        t_out=t_in*9/5+32;
    }
    else if(unit_in=="F"||unit_in=="f"){
        unit_out="C";
        t_out=(t_in-32)*5/9;
    }
    else{
        valid_unit=false;
    }

    if(valid_unit){    
        std::cout << t_out << " " << unit_out << std::endl;
    }
    else{
        std::cout<<"error,unit not recognised"<<std::endl;
    }
}