#include<stdio.h>
#include<string>
using namespace std;

int main(){
    // freopen("input.txt","rt",stdin);
    char a[30];
    int i,cnt=0;
    string b;
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==40) cnt+=1;
        else if(a[i]==41) cnt-=1;
    }
    b=a;
    // printf("%d",cnt);   
    if(cnt!=0){
        printf("NO");
    }else{
        if(a[b.length()-1]==40){
            printf("NO");
        }else{
            printf("YES");
        }
    }
    return 0;
}