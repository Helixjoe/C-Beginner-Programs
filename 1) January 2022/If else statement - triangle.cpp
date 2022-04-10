#include <iostream>
using namespace std;
// Program to check if a triangle is scalene, isosceles or equilateral.
int main() {
    
    int side1,side2,side3;
    cout<<"Enter Sides of Triangle"<<endl;
    cin>>side1>>side2>>side3;
    
    if (side1 == side2 && side2==side3){ // uses the AND operator
        
        cout<<"Triangle is Equilateral"<<endl;
        
    }
    
    else if(side1 == side2 || side2==side3 || side3==side1){ // uses the OR operator
        
            cout<<"Triangle is Isosceles"<<endl;
    }
    
    
    
    else{
        cout<<"Triangle is Scalene"<<endl;
    }
    
        
	return 0;
}
