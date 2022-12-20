#include <iostream>
#include <array>
using namespace std;
int main(){
array <int, 5>a={1,2,3,4,5};
cout<<"print all element"<<endl;
int size =a.size();

for(int i =0;i<size;i++){
    cout<<a[i]<<endl;
}
cout<<"element at 3rd position"<<" "<< a.at(3)<<endl;
cout<<"starting element"<<" "<<a.front();
cout<<"last element"<<" "<<a.back();


    return 0;
}