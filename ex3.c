#include <stdio.h>
#include <math.h>
union byte
	{
		unsigned long long int number;
		unsigned long long int *pointer;
	};
	
	int encrypt(int a)
	{
		int count = 0;
		int a1=a;
		while(a1>0)
		{
			a1=a1/10;
			count++;
		}
		a1=0;
		int p = 1, k = 0;
		while(a>0)
		{
			if(p==count)
			{
				a1 = a1 = a1+(a%10)*pow(10,p-1);
				break;
			}
			a1 = a1+(a%10)*pow(10,p);
			a=a/10;
			a1 = a1+(a%10)*pow(10,p-1);
			p=p+2;
			a=a/10;
		}
		return a1;
	}

int main()
{
	union byte b;
	printf("Enter number: ");
	scanf("%d",&b.number);
	b.pointer = &b.number;
	int i;
	int c = b.pointer;
	i = encrypt(c);
	
	printf("Pointer for a value: %d\n",b.pointer);
	b.pointer = i;
	printf("Encrypted pointer: %d",b.pointer);
}
