#include <iostream>
using namespace std;
// Simple Calculator
int main() {
    
    float n1,n2;
    cin>>n1>>n2;
    
    char OP;
    cout<<"Enter Operator"<<endl;
    cin>>OP;
    
    switch(OP){
        
        case'+':
        cout<<n1+n2<<endl;
        break;
        
        case'-':
        cout<<n1-n2<<endl;
        break;
        
        case'/':
        cout<<n1/n2<<endl;
        break;
        
        case'*':
        cout<<n1*n2<<endl;
        break;
        
        default:
        cout<<" Go Buy a scientific Calculator"<<endl;
        break;
    }

    
    
    
    
        
	return 0;
}
