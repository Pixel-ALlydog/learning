//n!(m!*(n-m)!) == n!/m!/(n-m)!
#include<stdio.h>
int main()//主函数（fun函数的使用） 
{
	int m,n,i;
	double f,fm=1,fn=1,fc=1;
	scanf("%d%d",&n,&m);
	fun(n);//实参 
	
	f=fn/fm/fc;
	
	printf("%lf",f);
	return 0;
}

double fun(int x)//函数首部   返回值类型  函数名（形参定义） 其中 x:形参 
{
	double y=1;
	int i;			//函数体：功能单一 
	for(i=1;i<=x;i++)
		y=y*i;
	return y;
}
