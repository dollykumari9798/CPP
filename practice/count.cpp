#include <iostream>
using namespace std;

int num(int n ){
if (n==0){
    return 0;
    }
 
  cout<<n<<" "<<endl;
   num(n-1);
}


int main(){
int n;

 num(10);
 return 0;   
}
