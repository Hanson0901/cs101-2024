#include<stdio.h>
#include<math.h>
int main(){
    char a[]="10001111";
    int sum;
    int alength=sizeof(a)-1;
    for(int i=0;i<=alength;i++){

        if(a[i]=='1'){
            sum=sum+pow(2,alength-i-1);
        }
    }
    printf("%x",sum);
}
