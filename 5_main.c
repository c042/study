//202610112129
//陈楠
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int main(){
float num1,num2,result;
char op;
scanf("%f %c %f",&num1,&op,&num2);
if(op=='+')
{
    result=num1+num2;
    printf("%.2f",result);
}
else if(op=='/')
{
    if(num2==0)
    {
        printf("错误：除数不能为 0\n");
    }
    else
    {
    result=num1/num2;
    printf("%.2f\n",result);
    }
}
else if(op=='-')
{
    result=num1-num2;
    printf("%.2f\n",result);

}
else if(op=='*')
{
    result=num1*num2;
    printf("%.2f\n",result);

}
else
{
    printf("错误：不支持的运算符\n");
}
   return 0; 
}