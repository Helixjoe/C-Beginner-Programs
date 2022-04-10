#include <iostream>
using namespace std;
// Rectangle Patter 
int main() {
	
    int row,col;
    cin>>row>>col;
    
    for(int i = 1; i<=row; ++i){//Loop for rows
    
        for(int j = 1; j<=col; ++j ){     //Loop for columns
            
            if (i>1 & i<row){ // checks from the second row
                if(j>1 & j<col){   // checks from the second column
                   cout<<" "; 
                }
                else{
                    cout<<"*";
                }
                
            }
            else{
              cout<<"*";  
            }
            
            
        }
    
    cout<<endl; // takes you to the next line
    }
    
	return 0;
}
