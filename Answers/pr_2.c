#include<stdio.h>
int main (){
    int x;
    for (x=0;x<=100;x++)
    if(((x>20)&&(x<70))&&!((x>40)&&(x<60)))
    printf("\n%d",x);
    return 0;
}