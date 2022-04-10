#include <iostream>
using namespace std;
// add only pisitive numbers
int main() {
    
   int number;
   cout<<"Enter number"<<endl;
   cin>>number;
   
   int sum=0;
   
   while (number>=0){
       sum = sum + number;
       cout<<"Enter number"<<endl;
       cin>>number;
   }
   
   cout<<"Sum is"<<sum<<endl;
   
   return 0;
}
