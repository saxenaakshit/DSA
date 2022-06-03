#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> v;
cout<<v.capacity()<<endl;
v.push_back(1);
v.push_back(22);
v.push_back(34);


v.front();

for(int i:v){
    cout<<i<<" ";
}cout<<endl;

v.pop_back();
for(int i:v){
    cout<<i<<" ";
}cout<<endl;

v.clear();
cout<<endl;
v.size();
for(int i:v){
    cout<<i<<" ";
}

//assign all numbers the same in all locations

vector<int> vi(5,1);

for(int i:vi)
{
    cout<<i<<" ";
}

return 0;
}