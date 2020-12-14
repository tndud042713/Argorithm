#include <stdio.h>
using namespace std;

int main()
{
    // freopen("input.txt", "rt", stdin);
    char a[100];
    int cnt = 0, i, k;
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if(a[i]==' '){
        	for(k=i;a[k]!='\0';k++){
        		a[k]=a[k+1];
			}
		} 
    }
    for (i = 0; a[i] != '\0'; i++)
    {
        if(a[i]>=65 && a[i]<=90){
        	a[i]=a[i]+32;
		} 
    }    
    puts(a);
    
    return 0;
}
