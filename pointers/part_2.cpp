//pointers with array and character array
/*#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,44,4};
    int *ptr=&arr[0];
    cout<<arr<<endl<<ptr<<endl;
    char ch[6]="absvd";
    char *c=&ch[0];
cout<<ch<<endl<<c<<endl;
for(int i=0;i<5;i++){
    cout<<i[arr]<<endl;
}
return 0;
}*/
//pointers with functions
#include<iostream>
using namespace std;

void updated(int *ptr){
    ptr=ptr+1;
    cout<<ptr<<endl;
    *ptr=*ptr+4;
    cout<<"inside the function "<<*ptr<<endl;


}
int main(){
    int mi=9;
    int *p=&mi;
    updated(p);
    cout<<p<<endl;
    cout<<"outside the function "<<*p<<endl;

return 0;
}



