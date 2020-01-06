#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int i, div_3,div_5, sum=0;
	for(i=3;i<=999;i++)
	{
		
		div_3=i%3;
		div_5=i%5;
		if (div_3==0 || div_5==0)
		{
			printf("%d",i);
			printf("\n");
			sum=i+sum;
			printf("%d \n",sum);
			
		}
		
		i=i++;
	}
	getch();
    return 0;
}

