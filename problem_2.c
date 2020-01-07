#include <stdio.h>
#include <stdlib.h>

int main()
{
	int term_1=1,term_2=2,e_sum=2,sum=0;
    while(sum<4000000)
	{
		sum=term_1 + term_2;
		term_1=term_2;
		term_2=sum;
		if(sum%2==0)
		{
			e_sum=sum+ e_sum;
			printf(" The sum is %d \n",e_sum);
		}
		
	}
}

