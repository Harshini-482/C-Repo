#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m;
    scanf("%d%d%d",&x,&y,&m);
    int z=pow(x,y);
    int r=z%m;
    printf("%d",r);
}