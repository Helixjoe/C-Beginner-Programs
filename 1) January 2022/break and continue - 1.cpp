#include <iostream>
using namespace std;

int main() {
    int Pocketmoney = 3000;
	for(int date=1;date<=31;date++){ // Changes the date
	    
	    if(date%2==0){ // Checks if date is odd or even
	        cout<<"Nope Abba Nhi Maanenge"<<endl;
	        continue;
	    }
	    
	    if(Pocketmoney==0){
	        break;
	    }
	    
	    
	    
	    cout<<"Go out today -"; // Output
	    cout<<Pocketmoney<<endl;
	    Pocketmoney = Pocketmoney - 300;//deducts money
	}
	return 0;
}
