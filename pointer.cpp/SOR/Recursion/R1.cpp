#include <iostream>
using namespace std;

int fact(int a){
if(a==0)
    return 1;

    int small= fact(a-1);
    int big = a*small;
   
    return big;


}

int main(){
int a;
cout<<"Enter the no.";
cin>>a;
int ans = fact(a);

cout<<ans<<endl;
    return 0;
}