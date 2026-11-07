#include <iostream>
#include <fstream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    int x1=0,x2=0;
    while(x1!=v1.size()&&x2!=v2.size()){
        if(v1.at(x1)<=v2.at(x2)){
            merged.push_back(v1.at(x1));
            x1++;
        }
        else{
            merged.push_back(v2.at(x2));
            x2++;
        }
    }
    if(x1==v1.size()){
        for(int i=x2;i<v2.size();i++){
            merged.push_back(v2.at(i));
        }
    }
    else{
        for(int i=x1;i<v1.size();i++){
            merged.push_back(v1.at(i));
        }
    }
}

std::string char_to_string(char c){
    std::string s;
    s.push_back(c);
    return s;
}

//palindromes
bool is_palindrome(std::string s){
    int m=0,n=s.size()-1;
    bool is=true;
    while(m<n){
        std::string first=char_to_string(s[m]),last=char_to_string(s[n]);
        if(first==" "){
            m++;
        }
        else if(last==" "){
            n--;
        }
        else{
            if(first!=last){
                is=false;
                return is;
            }
            m++;
            n--;
        }
    }
    return is;
}


int count_occurrences(std::string s, std::string letter){
    int out = 0;
    for(int i = 0; i < s.size(); i++){
        if(char_to_string(s[i]) == letter){
            out++;
        }
    }
    return out;
}

int main(){
    //merging
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;
    std::vector<int> expected_output;
    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    //counting occurrences
    std::ifstream t,in;
    std::ofstream out1;
    in.open("input.txt");
    out1.open("output.txt");
    std::string tmp,tmp2;
    while(in>>tmp){
        int n=0;
        t.open("text.txt");
        while(t>>tmp2){
            if(tmp2==tmp){
                n++;
            }
        }
        t.close();
        out1<<tmp<<": "<<n<<std::endl;
    }
    in.close();
    out1.close();

    //translating
    std::ifstream ad,real;
    std::ofstream tr;
    ad.open("ad.txt");
    tr.open("translated.txt");
    std::string tmp3,tmp4;
    while(ad>>tmp3){
        bool found=false;
        real.open("real meaning.txt");
        while(real>>tmp4){
            if(tmp4==tmp3){
                real>>tmp4;
                tr<<tmp4<<" ";
                found=true;
            }
        }
        if(!found){
            tr<<tmp3<<" ";
        }
        real.close();
    }
    ad.close();
    tr.close();

    //indexing strings
    std::string s = "hello";
    std::string letter = "l";
    std::cout << "there are " << count_occurrences(s, letter) << " occurrences of " << letter << " in " << s << std::endl;

    
}