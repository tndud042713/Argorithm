#include<stdio.h>
using namespace std;

int main(){
    // freopen("input.txt" ,"rt" , stdin);
    char a[20]; // 주민등록번호를 받을 char형 배열 선언
    int year, age;
    scanf("%s", &a); //주민등록 번호를 문자열 전체로 가져옴
    /*
    */
    if(a[7]=='1' || a[7]=='2') year= 1900+((a[0]-48)*10+(a[1]-48));
    else year = 2000+((a[0]-48)*10+(a[1]-48));
    age=2019-year+1;
    printf("%d ", age);
    if(a[7]=='1' || a[7]=='3') printf("M\n");
    else printf("W\n");

    return 0;
}
