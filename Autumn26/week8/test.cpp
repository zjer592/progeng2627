#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

std::vector<double> extracts(std::vector<std::vector<double>> x,int n){
    std::vector<double> out;
    for(int i=0;i<x.size();i++){
        out.push_back(x[i][n]);
    }
    return out;
}

double scalar_product(std::vector<double> v1,std::vector<double> v2){
    double sum=0;
    for(int i=0;i<v1.size();i++){
        sum=sum+v1[i]*v2[i];
    }
    return sum;
}

std::vector<std::vector<double>> matrix_multiplication(std::vector<std::vector<double>> m1,std::vector<std::vector<double>>m2){
    std::vector<std::vector<double>> out;
    for(int i=0;i<m1.size();i++){
        std::vector<double> tmp;
        for(int j=0;j<m2[0].size();j++){
            std::vector<double> row=m1[i];
            std::vector<double> column=extracts(m2,j);
            double tmp1=scalar_product(row,column);
            tmp.push_back(tmp1);
        }
        out.push_back(tmp);
    }
    return out;
}

int main(){
    std::vector<std::vector<double>> m1={{1,2},{3,4}};
    std::vector<std::vector<double>> m2={{5,6},{7,8}};
    std::vector<std::vector<double>> out=matrix_multiplication(m1,m2);
    for(int i=0;i<out.size();i++){
        for(int j=0;j<out[0].size();j++){
            std::cout<<out[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

}