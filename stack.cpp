#include<iostream>
#include <stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("Dolly");
    s.push("Hello");
    s.push("World");
    cout<<"top element ------>>>  "<<" "<<s.top()<<endl;
    cout<<"size before pop operation------> "<< s.size()<<endl;
    s.pop();
    cout<<"size After pop operation ------> "<< s.size()<<endl;
    cout<<"top element----->"<<" "<<s.top()<<endl;
    cout << "Empty or -----> "<< s.empty()<<endl;

}