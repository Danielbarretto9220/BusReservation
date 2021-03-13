#include <stdio.h>
#include <stdlib.h>
/*ASSUMPTIONS
1. Operates only between three cities with limited number of buses
2. Payment done at pickup location
*/
int main()
{
	int choice;
	puts("************WELCOME TO XYZ TRAVELS************/");
	puts("/=============================================/");
    puts("                    MENU                       ");
	puts("/=============================================/");
	puts("1. Reserve seats");
	puts("2. View information about available buses");
	puts("3. Contact us");
	puts("4. Exit");
	puts(">> ");
	scanf("%d", &choice);
	


	switch (choice){
		int start;
		int end;
		char seat[5];
		int confirm;
		char name[50];
		char email[50];
		int re_main;
		int final_exit;
		//int uid = srand(time(0));
		case 1:
		//Contact info
		puts("Enter your name");
		scanf("%s",name);
		puts("Enter your email address");
		scanf("%s",email);
		puts("Your bus details will be emailed to you.");
		puts("----Available Locations----");
		puts("1. Mumbai");
		puts("2. Nagpur");
		puts("3. Pune");
		puts("---------------------------");
        //Using if else ladder so we can eliminate other replies
        puts("Please enter the number corresponding to the city!");
		puts("Leaving from: ");
		puts(">> ");
		scanf("%d", &start);
		puts("Going to: ");
		puts(">> ");
		scanf("%d", &end);
		if (start == 1){
			if (end == 3){
				puts("Mumbai ===> Pune");}
			else if ( end == 2) {
				puts("Mumbai ===> Nagpur");}
			else {
				puts("Not a valid location please choose again");
				main(); }
		}
		else if (start == 2){
			if (end == 1){
				puts("Nagpur ===> Mumbai");}
			else if (end == 3) {
				puts("Nagpur ===> Pune");}
			else {
				puts("Not a valid location please choose again");
				main();}
		}
		else if (start == 3){
			if (end == 1){
				puts("Pune ===> Mumbai");}
			else if (end == 2){
			puts("Pune ==> Nagpur");}
			else {
				puts("Not a valid location please choose again");
				main();}
		}
		else {
			puts("Not a valid location please choose again");
			main();
		}

		
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
			puts("Return to menu?\nPress 1 for yes\nPress 2 for no");
			scanf("%d", &re_main);
			if (re_main == 1){
				main();
			}
			else{
				exit(0);
			}
		}
		else
		{
			puts("Choose alternate seat based on the chart above");
			scanf("%s", seat);
		}

		//case 2-Bus info
		case 2:
		puts("*******************************************************");
		puts("MUMBAI ----> PUNE");
		puts("Approx. travel time: 05H 30M ");
		puts("Bus code number: MPA1");
		puts("Bus type: AC Sleeper");
		puts("Bus fare: Rs. 611");
		puts("*******************************************************");
		puts("MUMBAI ----> NAGPUR");
		puts("Approx. travel time: 19H 20M ");
		puts("Bus code number: MNA1");
		puts("Bus type: AC Sleeper");
		puts("Bus fare: Rs. 1160");
		puts("*******************************************************");
		puts("PUNE ----> NAGPUR");
		puts("Approx. travel time: 14H 00M ");
		puts("Bus code number: PNA1");
		puts("Bus type: AC Sleeper");
		puts("Bus fare: Rs. 1220");
		puts("*******************************************************");
		puts("PUNE ----> NAGPUR");
		puts("Approx. travel time: 15H 30M ");
		puts("Bus code number: PNN1");
		puts("Bus type: NON-AC Sleeper");
		puts("Bus fare: Rs. 700");
		puts("*******************************************************");
		puts("PUNE ----> MUMBAI");
		puts("Approx. travel time: 04H 45M ");
		puts("Bus code number: PMN1");
		puts("Bus type: NON-AC Sleeper");
		puts("Bus fare: Rs. 600");
		puts("*******************************************************");
		puts("NAGPUR ----> MUMBAI");
		puts("Approx. travel time: 16H 10M ");
		puts("Bus code number: NMA1");
		puts("Bus type: NON-AC Sleeper");
		puts("Bus fare: Rs. 900");
		puts("*******************************************************");
		puts("Return to menu?\nPress 1 for yes\nPress 2 for no");
		scanf("%d", &re_main);
		if (re_main == 1){
			main();
		}
		else{
			exit(0);
		}
		//Business' contact info 
		case 3:
		puts("In case of any queries feel free to contact us!");
		puts("Mobile no: 564986231");
		puts("Email id: customer.service@xtztravels.com");
		puts("Return to menu?\nPress 1 for yes\nPress 2 for no");
		scanf("%d", &re_main);
		if (re_main == 1){
			main();
		}
		else{
			exit(0);
		}
		//Final exit
		case 4:
		puts("Are you sure you want to exit?\nPress 1 for yes\nPress 2 for no");
		scanf("%d", &final_exit);
		if (final_exit == 1){
			exit(0);
		}
		else{
			main();
		}
	}
	return 0;
}