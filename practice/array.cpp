#include<iostream>
using namespace std;

bool rev(int arr[], int size){
    if(size==1)
    return true;

     bool restArr = rev(arr+1,size-1);
    return arr[0]<arr[1]&& restArr;
}

int main(){
int size;
cin>>size;
int arr[size];
for(int i =0;i<size;i++){
    cin>>arr[i];
}
cout<< rev(arr, 5);
    return 0;
}