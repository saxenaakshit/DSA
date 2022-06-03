#include<iostream>
#include<deque>
using namespace std;
int main(){

deque<int> d;

d.push_front(1);
d.push_front(3);
d.push_back(4);
d.push_back(6);
d.push_back(23);
d.push_back(8);
d.pop_back();
//print index at 0
deque<int> m(d);
for(int i:m){
    cout<< i << " ";

}cout<<endl;
cout<<"index at 0 "<<d.at(0);
cout<<endl;
cout<<"front element is "<<d.front()<<endl;
cout<<"last element is "<<d.back()<<endl;


for(int i:d){
    cout<< i << " ";

}cout<<endl;



//d.begin() --> first indexl
//d.end() --> last element 

d.erase(d.begin(),d.begin()+1);
cout<<"is element is empty or not after using erase function 0/1  "<<d.empty();
cout<<"capacity is "<<d.max_size();
d.clear();
return 0;
}
