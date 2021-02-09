#include<stdio.h>

int main(){
    // freopen("input.txt","rt",stdin);
    int n,i,cnt=0,tmp;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        tmp=i; //i가 동작 하기 위해서는 임시변수를 따로 둔다.
        while(tmp>0){
            tmp = tmp/10;
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}