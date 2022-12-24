#include<iostream>
using namespace std;

int mul(int n){
if(n==0){
    return 0;
}
    mul(n-1);
    cout<<2*n<<endl;

}

int main(){
int n;
 mul(10);

    return 0;
}