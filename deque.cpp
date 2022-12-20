#include <iostream>
#include<deque>
using namespace std;
int main(){
deque<int >d;
d.push_back(2);
d.push_front(1);
d.push_back(3);
d.push_back(4);
d.push_back(5);
d.push_back(6);
for(int i :d){
    cout<<i<<" ";
}
cout<<endl;
cout<<"front"<<" "<<d.front()<<endl;
cout<<"back"<<" "<<d.back()<<endl;

           //empty h ya nhi?

           cout<<"empty or not"<<"  " <<d.empty()<<endl;
           

           //erase....
           cout<<"size before erased"<<endl;
           cout<<d.size()<<endl;


                cout<<"erased  item "<<endl;
           d.erase(d.begin(),d.begin()+1);
            for(int i:d){
                cout<<i<<endl;
            }
            cout<<endl;
                       cout<<"size After erased"<<endl;

             cout<<d.size()<<endl;

    return 0;
}
