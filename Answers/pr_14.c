#include<stdio.h>
int main (){
    int x,n;
    printf("Enter the last number");
    scanf("%d",&n);
    for (x=0;x<=n;x++)
    if (((x%10)>=5) && ((x%10)<=8))
    printf("\n%d",x);
    return 0;
}