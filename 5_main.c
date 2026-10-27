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
        printf("除数不能为零\n");
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
    printf("运算符不合法\n");
}
   return 0; 
}