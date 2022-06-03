#include<iostream>
using namespace std;
int test(int &num){//referencing of the memory
    num++;
   return num;
}
int main(){
    int i=5;
    cout<<test(i)<<endl;
    int *p=new int;//dynamic memory allocation
    int *arr=new int [10];//dynamic memory allocation in case of array


  
return 0;
}
