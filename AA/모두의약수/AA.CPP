#include<iostream>
using namespace std;
int i,n,j,cnt=1;

int main(){
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i/2;j++){
            if(i%j==0) cnt++;
        }
        printf("%d ",cnt);
        cnt=1;
    }
    return 0;
}