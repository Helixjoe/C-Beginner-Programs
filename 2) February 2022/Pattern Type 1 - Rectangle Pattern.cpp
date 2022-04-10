#include <iostream>
using namespace std;
// Rectangle Patter 
int main() {
	
    int row,col;
    cin>>row>>col;
    
    for(int i = 1; i<=row; ++i){  //Loop for rows
        for(int j = 1; j<=col; ++j ){     //Loop for columns
            cout<<"*";
            
        }
    
    cout<<endl;
    }
    
	return 0;
}
