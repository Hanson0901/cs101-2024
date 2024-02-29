#include<stdio.h>

void prt_space(int n,int m){
    for(int i=0;i<m-n;i++){
        printf(" ");
    }
}
void Prt_num(int n) {
    for(int i=0;i<n;i++){
        printf("%d ",n);
    }
    printf("\n");
}

int main(){
    int rowhigh =6;
    for(int i=0;i<=rowhigh;i++){
        prt_space(i,rowhigh);
        Prt_num(i);
    }
    return 0;
}
