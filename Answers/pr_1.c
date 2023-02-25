#include<stdio.h>
main () {
    int x;
    for (x=0;x<=100;x++)
    if(((x>50)&&(x<70))||(x%2==0))
    printf("\n%d",x);
}
