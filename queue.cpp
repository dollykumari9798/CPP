#include <iostream>
#include <queue>
using namespace std;
int main(){
queue <string> q;
q.push("Happy");
q.push("new ");
q.push("year");
cout<<"size--->"<<q.size()<<endl;
cout<<"first element------>"<<q.front()<<endl;
q.pop();
cout<<"first element------>"<<q.front()<<endl;
cout<<"size After pop operation --->"<<q.size()<<endl;
int size =q.size();
for(int i=0;i<size;i++){
    cout<<"hola..."<<i<<endl;
}
cout<<endl;
    return 0;
}