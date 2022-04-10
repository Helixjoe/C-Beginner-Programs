#include <iostream>
using namespace std;

int main() {
	
	int savings;
	cin>>savings;
	
	if (savings>7000){
	    cout<<"Reshma\n";
	    if (savings>12000){
	        cout<<"Roadtrip";
	    } else {
	        cout<<"Mall Trip";
	    }
	} else if(savings >5000){
	    cout<<"Neha\n";
	} else {
	    cout<<"Friends\n";
	}    
	return 0;   
}


    