#include<stdio.h>
using namespace std;

int main(){
    // freopen("input.txt","rt",stdin);
    char a[101], b[101]; //복구할때 쓰는 배열 b
    int i,p=0;
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]!=' '){ //공백이 아니라면
            if(a[i]>65 && a[i]<90){
                b[p++]=a[i]+32;
            }else b[p++]=a[i];
        }
    }
    b[p]='\0'; //마지막 지점을 알림
    printf("%s\n",b);
    return 0;
}