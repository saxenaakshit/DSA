#include<iostream>
#include<queue>
using namespace std;



int main(){
    queue<string> q; //follow fifo technique

q.push("akshit");
q.push("prashant");
q.push("akash");

cout<<"top element before poping "<<q.front()<<endl;;

q.pop();
cout<<"top element after poping "<<q.front()<<endl;;
q.pop();
cout<<"top element after poping 2nd tim2 "<<q.front()<<endl;

cout<<"is queue is empty ?? "<<q.empty()<<endl;
cout<<"size of queue is "<<q.size();


return 0;
}
