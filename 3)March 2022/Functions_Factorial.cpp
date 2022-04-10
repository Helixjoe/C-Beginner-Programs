#include<iostream>
using namespace std;

int Factorial(int num){
    int fact = 1;
    for(int i = 1; i<=num;i++){
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cin>> n;

    Factorial(n);   
    
    return 0;
}