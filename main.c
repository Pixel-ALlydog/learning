//n!(m!*(n-m)!) == n!/m!/(n-m)!
#include<stdio.h>
int main()//��������fun������ʹ�ã� 
{
	int m,n,i;
	double f,fm=1,fn=1,fc=1;
	scanf("%d%d",&n,&m);
	fun(n);//ʵ�� 
	
	f=fn/fm/fc;
	
	printf("%lf",f);
	return 0;
}

double fun(int x)//�����ײ�   ����ֵ����  ���������βζ��壩 ���� x:�β� 
{
	double y=1;
	int i;			//�����壺���ܵ�һ 
	for(i=1;i<=x;i++)
		y=y*i;
	return y;
}
