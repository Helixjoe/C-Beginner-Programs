#include <iostream>
using namespace std;
// Palindromic Pattern
int main(){
    
    int n;
    cin>>n;
    
    for(int i = 1;i<=n;i++){ //print the upper part
        for(int j = 1;j<=n-i;j++){ //spaces
            cout<<" ";
        }
        for(int j = 1; j<= (2*i-1) ;j++){ //stars
            cout<<"*";
        }
        cout<<endl;
    }
        
    for(int i = n;1<=i;i--){ //prints the lower part
        for(int j = 1;j<=n-i;j++){ // spaces
            cout<<" ";
        }
        for(int j = 1; j<= (2*i-1) ;j++){ // stars
            cout<<"*";
        }    
        cout<<endl;
    }
	return 0;
}
