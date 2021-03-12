#include <stdio.h>
int main()
{
	int choice;
	puts("/=============================================/");
  puts("                    MENU                       ");
	puts("/=============================================/");
	puts("1. Reserve seats");
	puts("2. Search your ticket");
	puts("3. Check bus fare");
	puts("4. Contact us");
	puts("5. Exit");
	printf(">> ");
	scanf("%d", &choice);

  switch (choice){
		case 1:
		char start[10];
		char end[10];
		puts("   ----Choose Location----   ");
		puts("Mumbai");
		puts("Nagpur");
		puts("Pune");
		puts("Nashik");
		puts("Goa");
		puts("-------------------");;
		puts("Leaving from: ");
		scanf("%s", &start);
		puts("Going to: ");
		scanf("%s", &end);
	}
  return 0;
}
