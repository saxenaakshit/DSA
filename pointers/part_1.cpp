#include<iostream>
using namespace std;
int main(){
   int num=100;
    int *ptr=&num;
    char ch='f';
    char *chr=&ch;

    cout<<"before increasing"<<num<<endl;
    (*ptr)++;
    cout<<"after increasing"<<num<<endl;
    ptr=ptr+1;
    //chr=chr+1;
    cout<<"address after increasing "<<ptr<<"  "<<*chr<<endl;

    int n=56;
    int *point=0;
    point=&n;
    cout<<*point;

return 0;
}
