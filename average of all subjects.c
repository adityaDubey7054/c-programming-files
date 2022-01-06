#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter marks of all subjects\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("total marks of all subjects = %d \n",a+b+c+d+e);
    printf("average = %d \n",(a+b+c+d+e)/5);
    printf("percentage = %d \n",(a+b+c+d+e)/5);
    return 0;
}
