//202610112129
//陈楠
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int main(){
printf("请依次输入三角形三边的长度：");
float a;
float b;
float c;
scanf("%f""%f""%f",&a,&b,&c);
if(a+b>c&&a+c>b&&b+c>a)
{
    printf("%f,%f,%f 可以构成三角形\n",a,b,c);
}
else
{
    printf("%f,%f,%f 不可以构成三角形\n",a,b,c);
}
return 0;
}