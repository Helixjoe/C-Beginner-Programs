#include <iostream>
using namespace std;
// Check if number is prime or not
int main() {
    
    int n;
    cin>>n; //taking input
    
    for(int i=2;i<n;i++){ //changes the divsor
        
        if(n%i==0){ //divides n to find factor
            cout<<"Non-Prime"<<endl;
            break;
        }
        
        if(n==i){  // checks if break statement exexuted before or after end of loop
            cout<<"Prime"<<endl;
        }
    }
    
        
	return 0;
}
