#include <stdio.h>


int main()
{
	long long num=600851475143, factor;
	for(factor=3;factor<=num;factor++)
	{
		while(num%factor==0)
		{
			num=num/factor;
			if(num==1)
		    {
			printf("%d",factor);
		    }
	    }
	}
		
}
