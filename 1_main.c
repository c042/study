//202610112129
//陈楠
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int main(){
float tem1;
printf("请输入摄氏温度：");
scanf("%f",&tem1);
float  tem2=tem1*9.0/5+32;
printf("华氏温度为：%.1f℉\n",tem2);

    return 0;
}