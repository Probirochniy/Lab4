#include <stdio.h>

int main()
{
	struct birth
	{
		int day : 6;
		int month : 5;
		int year : 12;
	}b;
	int da,mont,yea;
	printf("Input day: ");
	scanf("%d", &da);
	b.day = da;
	printf("Input month: ");
	scanf("%d", &mont);
	b.month = mont;
	printf("Input year: ");
	scanf("%d", &yea);
	b.year = yea;
	
	printf("\n\nDay of birth: %d\nMonth of birth: %d\n Year of birth: %d\n\nSize of structure: 23 bit", b.day,b.month,b.year);
}
