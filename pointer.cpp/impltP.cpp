#include <iostream>
using namespace std;

void swap(int *a,int *b){
int temp =*a;
*a= *b;
*b= temp;

}


int main(){
int a =5;
int b=4;

int *aptr=&a;
int *bptr=&b;
swap(*aptr,*bptr);
cout<<a<<"  "<<b;
return 0;
}