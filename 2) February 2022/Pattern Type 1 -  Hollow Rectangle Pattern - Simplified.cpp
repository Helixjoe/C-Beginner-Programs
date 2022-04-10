#include <iostream>
using namespace std;
// Hollow Rectangle Pattern
int main() {
	
    int row,col;
    cin>>row>>col;
    
    for(int i = 1; i<=row; ++i){//Loop for rows
    
        for(int j = 1; j<=col; ++j ){     //Loop for columns
            
            if(i==1 || i==row || j==1 || j==col){ // checks for the column and row where we are allowed to print 
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
            
        }
    
    cout<<endl; // takes you to the next line
    }
    
	return 0;
}
