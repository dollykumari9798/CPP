#include<iostream>
#include<list>
using namespace std;
int main(){
list <int>l (5,100);
cout<<"print list "<<endl;

for(int i:l){
    cout<<i<<endl;
}
 cout<<"print pushed element............."<<endl;
    l.push_back(1);
    l.push_back(3);
    l.push_front(2);

    for(int i:l){
        cout<<i<<endl;
    }
    
    l.erase(l.begin());
    cout<<"erased element"<<endl;

        for(int i:l){
        cout<<i<<endl;
    }

    
    return 0;
}