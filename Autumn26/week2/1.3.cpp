#include <iostream>
#include <string>

int main(){
    //lack of newline
    std::cout << "hello";
    std::cout << "goodbye";

    //blank line
    std::cout << "hello";
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "goodbye";

    //test the program
    std::cout << "hello" << std::endl;
    std::cout << "goodbye" << std :: endl;

    //Fix Hello
    std::cout << "hello";

    //Name and Surname
    std::string user_name;
    std::cout<< "what is your name" <<std::endl;
    std::cin >> user_name;

    std::string user_surname;
    std::cout<< "what is your surname" <<std::endl;
    std::cin >> user_surname;

    std::cout<<"hello"<<std::endl;
    std::cout<<user_name<<" "<<user_surname;

}