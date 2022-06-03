#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num,k=0;
    
    scanf("%d",&num);
    for(int i =1;i<=num/2;i++){
        if(num%i==0){
            k=k+i;
        }
        else{
            
        }
    }
   if(num==k){
       printf("True");
       
   }
    else
        printf("False");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}