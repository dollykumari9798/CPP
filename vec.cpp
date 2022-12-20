#include<iostream>
#include<vector>
 using namespace std ;
 int main(){
     vector<int> v(5,8);
     v.push_back(4);
     v.push_back(3);
      for(int i:v){
        cout<<i<<"  ";
     }
     cout<<endl;
     v.pop_back();
     
     for(int i:v){
        cout<<i<<"  ";
     }
     cout<<endl;

     cout<<"copying element from another array"<<endl;
    vector<int>d(v);
   for(int i:d){
        cout<<i<<"  ";
     }

 }