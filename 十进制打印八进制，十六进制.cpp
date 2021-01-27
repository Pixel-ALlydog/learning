#include<stdio.h>
int main()//十进制打印八进制（%o），十六进制 (%x)
{
	int x=100;
	printf("%d, %o, %x\n",x,x,x);
	printf("%d, %#o, %#x",x,x,x);
}
