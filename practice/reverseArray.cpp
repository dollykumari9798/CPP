#include<iostream>
using namespace std;

int rev(int arr[],int start, int end){
int temp;
if(start<end){
    temp =arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    rev(arr, start+1,end-1);   
}
return 0;

}

int main(){
int n ,arr[n],i;
// int start,end =0;
cout<<"Enter size"<<endl;
cin>>n;
for(int i =0;i<n ; i++){
    cin>>arr[i];
}
rev(arr,0,n-1);
cout<<"Reversed Array is :- "<<endl;
for(int i =0;i<n ;i++){
    cout<<arr[i]<<endl;
}
    return 0;
}