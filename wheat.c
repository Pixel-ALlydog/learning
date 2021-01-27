#include<stdio.h>
#define QIPAN 64
int main(void)
{
	const double CROP = 2E16;
	double current, total;
	int count = 1;
	printf("square      grains      total      ");
	printf("frction of \n");
	printf("            added       grains     ");
	printf("world total\n");
	total = current = 1.0;
	
	printf("%4d %13.2e %12.2 %12.2e\n" ,count ,current ,total ,total/CROP);
	while(count<QIPAN)
	{
		count = count + 1;
		current = 2.0*current;
		total = total + current;
		printf("%4d %13.2e %12.2 %12.2e\n" ,count ,current ,total ,total/CROP);
	}
	printf("That's all.\n");
	return 0;
} 
