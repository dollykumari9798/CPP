#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    array<int,5>arr={5, 2 , 6 , 8 ,10};
    int n = arr.size();
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
cout<<"Minimum Element "<<*min_element(arr.begin(),arr.end())<<endl<<"Maximum Element "<<*max_element(arr.begin(),arr.end());
    return 0;
}