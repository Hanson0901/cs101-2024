#include<stdio.h>

int main(){
    char a[]="AABBBCCCCddd";
    int count=1;
    int alength=sizeof(a);
    printf("%d\n",alength);
    for(int i=0;i<alength;i++){
        char temp;
       
        if(temp!=a[i]){
            if(i!=0){
                printf("%d",count);
            }
            printf("%c",a[i]);
            temp=a[i];
            count=1;
        }
        else count++;
    }
}
