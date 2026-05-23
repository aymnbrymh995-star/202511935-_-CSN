#include<iostream>

int main(){
    const int rows = 6;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 0; j <i; ++j) {
           std::cout << "*";

             std::cout <<'\n';

            return 0;
        }
    }
}