#include<stdio.h>
int main (){
    int x;
    for (x=0;x<100;x++)
    if((((x/10)%3==1)||((x/10)%3==2))&&(x%2==0))
    printf("\n%d",x);
    return 0;
}