#include<stdio.h>

int main(){
    int n,i,j,cnt=0,k=1;
    scanf("%d",&n);
    for(i=1 ; i<=n; i++){
        j=i;
        cnt++;
        while (j>=10)
        {
           cnt++;
           j/=10; 
        }              
    }
    printf("%d",cnt);
    return 0;
}
