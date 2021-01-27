#include<stdio.h>
void br();//声明函数 
int main(void)//主函数 （实现依次换行递减输出） 
{
	int n,i,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)//打印第一个字符串 
	{
		br();
		for(m=1;m<=n-i;m++)//二重循环打印之后的字符串 
		{
			br();
		}
		printf("\n");//换行 
	}	
	
	return 0;
}
void br()//定义函数 
{
	printf("Smile!");
}

