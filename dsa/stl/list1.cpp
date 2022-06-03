#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(4);
    l.push_back(5);
    l.push_front(3);
    l.push_front(2);

    for(int i:l)
    cout<<i<<" ";



   cout<<l.empty();

    l.erase(l.begin(),l.end());


    cout<<endl;

   cout<< l.size();

return 0;
}
