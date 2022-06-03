//condition questions
//1.to find even or odd
/*
#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a number you wanna check";
    cin>>a;
    if(a%2==0){
        cout<<"even number\n";

    }
    else 
    cout<<"odd number\n";
    return 0;
}
//2. max of two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the two numbers\n";
    cin>>a>>b;
    a>b?cout<<"a is bigger":cout<<"a is smaller than b";
return 0;
}
//3. max of three numbers

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter the values";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"a is biggest";
        }
        else 
        cout<<"c is biggest";
    }
    if(b>c){
        if(b>a)
        cout<<"b is biggest";
    }
        else
        cout<<"c is biggest";
        return 0;
}
//4.triangle check
#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"enter the sides\n";
    cin>>side1>>side2>>side3;
    if(side1==side2==side3){
        cout<<"equilateral\n";
    }
    else if(side1!=side2!=side3){
        cout<<"scalar";
    }
    else if(side1==side2!=side3){
        if(side1!=side2==side3){
            cout<<"isoscles";
        }
    }
    return 0;
}
//5.lower or upper
#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter any alphabatic character";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        cout<<"vowel";
    }
    else 
    cout<<"consonent";
    return 0;
}
//loops questions
//1.sum of natural number till n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n upto whih you want to add\n";
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"the value of sum till n is "<<sum;
    return 0;


}

//2.display table of 10
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"enter the value of the number of which you want integer of ";
    cin>>n;
    for(int i=0;i<=10;i++){
        k=n*i;
        cout<<n<<"*"<<i<<"="<<k<<endl;
    }
    return 0;
}*/
//3. add only positive number
#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
     sum=sum+n;
     cin>>n;
     
    }
    cout<<sum;
    return 0;
}
