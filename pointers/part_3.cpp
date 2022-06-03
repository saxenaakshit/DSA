#include<iostream>
using namespace std;
int main(){

int i=6;
int *ptr=&i;
int **ptr2=&ptr;
cout<<ptr<<endl<<&i<<endl;
cout<<i<<endl<<*ptr<<endl<<**ptr2<<endl;
cout<<ptr2<<endl<<&ptr<<endl;

return 0;
}
