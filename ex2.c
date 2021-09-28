#include <stdio.h>

int main()
{
	struct student
	{
		char name[20];
		char surname[20];
		int groupNo;
		struct exam_day
		{
			int day;
			int year;
			char month[20];
		}ex;
	}p;
	printf("Input name: ");
	scanf("%s",&p.name);
	printf("Input surname: ");
	scanf("%s",&p.surname);
	printf("Input groupNo: ");
	scanf("%d",&p.groupNo);
	printf("Input day of exam: ");
	scanf("%d",&p.ex.day);
	printf("Input year of exam: ");
	scanf("%d",&p.ex.year);
	printf("Input month of exam: ");
	scanf("%s",&p.ex.month);
	
	
	printf("\n\n\n");
	printf("Name: %s\n", p.name);
	
	printf("Surname: %s\n", p.surname);
	
	printf("GroupNo: %d\n", p.groupNo);
	
	printf("Day of exam: %d\n", p.ex.day);
	
	printf("Year of exam: %d\n",p.ex.year);
	
	printf("Month of exam: %s\n",p.ex.month);
}
