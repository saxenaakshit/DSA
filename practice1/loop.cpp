#include<iostream>
using namespace std;
int main(){
//1
/*for(int i=0;i<5;i+=2){
    cout<<i<<" ";
    
    if(i&1){
        continue;
    }
    
    i++;
}
//2
for(int i=0;i<5;i++){
    for(int j=i;j<=5;j++){
        cout<<j<<" "<<endl;
    }

}*/
//3
for(int i=0;i<5;i++){
    cout<<i<<" ";
    i++;
}

return 0;
}