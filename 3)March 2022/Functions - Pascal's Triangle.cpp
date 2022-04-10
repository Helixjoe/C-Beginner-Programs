#include <iostream>
using namespace std;
// Pascal's Triangle


int fact(int num){
    
    int fact = 1;
    
    for(int i = 2;i<=num;i++){
        fact *= i;
    }
    
    return fact;
}

int main(){
    
    int n;
    cin>>n;
    
    int elm;
    
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=i;j++){
            elm = fact(i)/(fact(i-j)*fact(j));
            cout<<elm<<" ";
        }
        cout<<endl;
    }
  
    
	return 0;
}
