#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> s; //follow lifo technique

    s.push(2);
    s.push(4);
    s.push(7);

    cout<<"the top element after pushing 2 4 7 is "<<s.top()<<endl;
    s.pop();
    cout<<"the top element after poping 1 times 2 4 7 is "<<s.top()<<endl;
    s.pop();
     cout<<"the top element after poping 2 times 2 4 7 is "<<s.top()<<endl;

cout<<"tell if the stack is empty or not "<<s.empty()<<endl;

cout<<" the size of the stack is "<<s.size();
return 0;
}
