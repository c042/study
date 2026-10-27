//202610112129
//陈楠
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int main(){
float a;
float b;
float c;
scanf("%f""%f""%f",&a,&b,&c);
if(a+b>c&&a+c>b&&b+c>a)
{
    printf("可以构成三角形\n");
}
else
{
    printf("不可以构成三角形\n");
}
return 0;
}