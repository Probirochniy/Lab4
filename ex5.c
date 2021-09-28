#include <stdio.h>

int main()
{
	struct cookbook{
		
		struct recipe1{
			char r1ing1[100];
			char r1ing2[100];
			char r1ing3[100];
		}r1;
		
		struct recipe2{
			char r2ing1[100];
			char r2ing2[100]; 
			char r2ing3[100];
			char r2ing4[100];
		}r2;
		
		struct recipe3{
			char r3ing1[100];
			char r3ing2[100];
			char r3ing3[100];
		}r3;
	}cb;
	
	strcpy(cb.r1.r1ing1, "1 liter of milk");
	strcpy(cb.r1.r1ing2, "10 tons of flour");
	strcpy(cb.r1.r1ing3, "1 chocolate bar");
	
	strcpy(cb.r2.r2ing1, "15 kilotons of salt");
	strcpy(cb.r2.r2ing2, "1 apple");	
	strcpy(cb.r2.r2ing3, "2 pears");
	strcpy(cb.r2.r2ing4, "159 bananas");
	
	strcpy(cb.r3.r3ing1, "15 boeing 737 airbuses");
	strcpy(cb.r3.r3ing2, "1 Tiger II tank");	
	strcpy(cb.r3.r3ing3, "1 pineapple");

	
	printf("Cookbook:\n\nRecipe1:\n%s\n%s\n%s\n\nRecipe2:\n%s\n%s\n%s\n%s\n\nRecipe3:\n%s\n%s\n%s",cb.r1.r1ing1,cb.r1.r1ing2,cb.r1.r1ing3,cb.r2.r2ing1,cb.r2.r2ing2,cb.r2.r2ing3,cb.r2.r2ing4,cb.r3.r3ing1,cb.r3.r3ing2,cb.r3.r3ing3);
	
}
