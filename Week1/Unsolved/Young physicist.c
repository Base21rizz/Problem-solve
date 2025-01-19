#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,vector_force_x,vector_force_y;
    scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);
    vector_force_x=x1+x2+x3;
    vector_force_y=y1+y2+y3;
    printf("%d %d",vector_force_x,vector_force_y);
    return 0;

}
