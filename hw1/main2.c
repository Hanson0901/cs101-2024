#include<stdio.h>

int main(){
    char a[]="A4B1C3f3";
    
    int alength=sizeof(a)-1;
    for(int i=0;i<=alength;i++){
        char temp;
        if(a[i]>57){
            temp=a[i];
        }
        else{
            for(int j=0;j<(a[i]-48);j++){
                printf("%c",temp);
            }
        }
    }
}
