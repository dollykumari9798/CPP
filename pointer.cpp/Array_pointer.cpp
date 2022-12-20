#include <iostream>
using namespace std;
int main(){
int arr[]={10,20,30};
cout<<*arr<<endl;

int *ptr=arr;
for(int i =0;i<3;i++){
    cout<<*ptr<<endl;
    ptr++;
}

//another way
cout<<"diff way......................."<<endl;
for(int i =0;i<3;i++){
    cout<<*(arr+i)<<endl;

}
  return 0;
}