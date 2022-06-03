/*#include <iostream>
using namespace std;
int main(){
    cout<<"hello"<<endl;
    cout<<"placement toh pakka hai"<<endl;
    int a=5;
    cout<<"value of a is "<<a<<endl;

    bool b=0;
    cout<<"value of b is "<<b;

    float f=1.23;
    cout<<"value of f is \n"<<f<<endl;

    cout<<"printing the sizes "<<endl;
    sizeof(a);
    sizeof(b);
    sizeof(f);

    cout<<"divide operator "<<endl;
float val1=4.2;
int val2=9;
    int ans=val1/val2;
    cout<<"with the operator" << ans<<endl;

    cout<<"without any data type "<<(4.2/9)<<endl;

cout<<"trying out some typecasting "<<endl;
    char c='a';
    int num=(int)c;
    cout<<num<<endl;
}*/
/*datatypes and variables

int a=5 
int is type of datatype
a is name of the variable
size of int is 4 bytes
in memory it is stored in 32 bits
00000000 00000000 00000000 00000101

how negative number is stored in the memory
2's compliment = 1's compliment +1

1st bit in 32 bit represent the sign of the number


bool b=true
size of the  bool =1 byte

float ff=1.3
size 4 byte

double d=1.23
size 8 byte

double is more precise than float

OPERATORS:-
a.arithmetic operator
+,-,/,%,*
b.Relational operator
=,>,<,>=,<=,!=
c.Logical operators
&&,||--> if first condition is true it will return (atleast 1 true),!-->(true to false,false to true)
d.Bitwise operator
&,|,~(tilda),^(when same gives 0,when different gives 1),<<(left shift the binary code,1.double the number OR get multiplies by 2 but not always if the number is so big it will shift and will become a negative number),>>(right shift the binary code,the number get halved with every right shift OR it gets diivided by 2 every time BUT not always )

TYPECASTING-
a.) implicit(compiler do this)
b.) explicit(when the user is trying to force the thing to the machine)-

int num=(int)char
*/

//practice on bitwise operators

#include<iostream>
using namespace std;
int main(){
    int a=-5;
    cout<<a<<endl;
    int b=a<<1;//(*2)
    int c=a>>1;//(/2)
cout<<b<<" "<<c<<endl;;
char h='a';
int k=(int)h;
cout<<k<<endl;
return 0;
}
