//202610112129
//陈楠
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int main(){
float score;
printf("请输入分数：");
scanf("%f",&score);
if(score>100||score<0)
{
    printf("无效输入\n");
}

 else if(score>=90)
{
    printf("A\n");
}
else if(score>=80)
{
    printf("B\n");
}
else if(score>=70)
{
    printf("C\n");
}
else if(score>=60)
{
    printf("D\n");
}
else
{
    printf("E\n");
}
   return 0; 
}