//202610112129
//陈楠
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int main(){
float num;
printf("请输入一个实数：");
scanf("%f",&num);
if(num>0)
{
    printf("正数\n");
}
else if(num<0)
{
    printf("负数\n");
}
else
{
    printf("零\n");
}
return 0;
}