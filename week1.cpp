
#include<iostream>
using namespace std;

void Binarysearch(int arr[], int low, int high, int key){
    int count = 0 ;
    while(low<=high){
    count++ ;    
    int mid = (high+low)/2;
    if(arr[mid]==key){
        cout<<mid<<" "<<count;
        break; 
    }
    if(arr[mid]<key){
        low = mid +1;
    }
    else{
        high = mid-1;
    }
    }
}

int main(){
   int n ;
   cin>>n;
   int arr[n];

   for(int i =0; i<n; i++){
       cin>>arr[i];
   }
   int key;
   cin>>key;
   Binarysearch(arr,0,n-1,key);

    
 }