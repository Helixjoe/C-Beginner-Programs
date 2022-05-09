#include<iostream>
using namespace std;

int Linearsearch( int arr[], int n, int key){

    for (int i=1;i<n;i++){
        if(arr[i]==key){
            return i;
    }

    

}
return -1;
}

int main(){

    int n;
    cin>>n;
    
    


    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int key1;
    cin>>key1;

    cout<<Linearsearch(arr,n,key1);
}