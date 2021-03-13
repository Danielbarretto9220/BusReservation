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
		char start[50];
		char end[50];
		char seat[5];
		int confirm;
		char name[50];
		char email[50];
		//int uid = srand(time(0));
		case 1:
		puts("----Available Location----");
		puts("1. Mumbai");
		puts("2. Nagpur");
		puts("3. Pune");
		puts("4. Nashik");
		puts("5. Goa");
		puts("---------------------------");
		puts("Leaving from: ");
		puts(">> ");
		scanf("%s", start);
		puts("Going to: ");
		puts(">> ");
		scanf("%s", end);
    puts("SEATING CHART");
		puts("---*DOOR*    *DRIVER*---");
		puts("[A1]  [B1]----[C1]  [D1]");
		puts("[A2]  [B2]----[C2]  [D2]");
		puts("[A3]  [B3]----[C3]  [D3]");
		puts("[A4]  [B4]----[C4]  [D4]");
		puts("[A5]  [B5]----[C5]  [D5]");
		puts("[A6]  [B6]----[C6]  [D6]");
		puts("[A7]  [B7]----[C7]  [D7]");
		puts("[A8]  [B8]----[C8]  [D8]");
		puts("[A9]  [B9]----[C9]  [D9]");
		puts("[A10] [B10]---[C10] [D10]");
		puts("[A11] [B11]---[C11] [D11]");
		puts("[A12] [B12]---[C12] [D12]");

		puts("Choose seat based on the chart above");
		scanf("%s", seat);

		puts("Confirm seat?\n(press 1 for yes)\n(press 2 for no)");
		scanf("%d",&confirm);
		if (confirm == 1)
		{
			puts("Great!");
		}
		else
		{
			puts("Choose alternate seat based on the chart above");
			scanf("%s", seat);
		}

		return 0;
		puts("Enter your name");
		scanf("%s",name);
		puts("Enter your email address");
		scanf("%s",email);
		puts("Your bus details have been emailed to you.");
	}
	return 0;
}
