#include <iostream>
#include<cmath>

using namespace std ;

int print(int a){
//base case
 string str[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
     

if(a==0){
    return 0;
}
      print(a/10);
      
      cout<<str[a%10]<<endl;
   }
   
int main(){
    cout<<"enter a number " ;
   int a;
   cin>>a;
   
    print(a);
          
    
}