#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int>maxi;
    priority_queue<int,vector<int>,greater<int> > min;

    maxi.push(5);
    maxi.push(10);
    maxi.push(35);
    maxi.push(89);

int n=maxi.size();
cout<<" printing maximum queue "<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<maxi.top()<<" ";
    maxi.pop();}
    cout<<endl;

    min.push(5);
    min.push(10);
    min.push(35);
    min.push(89);

int l=min.size();
cout<<" printing mnnimum queue "<<endl;
    for(int i=0;i<l;i++){
    
    cout<<min.top()<<" ";
    min.pop();}
    cout<<endl;


    cout<<"do maxi is empty or not "<<maxi.empty();




return 0;
}
