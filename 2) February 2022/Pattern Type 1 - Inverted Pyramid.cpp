#include <iostream>
using namespace std;
// Inverted Pyramid
int main() {
	
    int row;
    cin>>row;
    
    for(int i=row;i>=1;i--){ // loop to go from row to 1
        for(int j = 1; j<=i;++j){ // loop to go from 1 to i
            cout<<"*";
        }
        cout<<endl;
    }
    
	return 0;
}
