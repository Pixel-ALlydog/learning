#include<stdio.h>
void br();//�������� 
int main(void)//������ ��ʵ�����λ��еݼ������ 
{
	int n,i,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)//��ӡ��һ���ַ��� 
	{
		br();
		for(m=1;m<=n-i;m++)//����ѭ����ӡ֮����ַ��� 
		{
			br();
		}
		printf("\n");//���� 
	}	
	
	return 0;
}
void br()//���庯�� 
{
	printf("Smile!");
}

