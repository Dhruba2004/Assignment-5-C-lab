#include<stdio.h>
int main (){
    int x,n;
    printf("Enter the last number");
    scanf("%d",&n);
    for (x=0;x<=n;x++)
    if (((x%3==0)&&(x%5==0))&&(!(x%3==0)&&(x%5==0)))
    printf("%d",x);
    return 0;
}