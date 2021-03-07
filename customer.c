#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

extern bool isHome;

void main();
void admin_login();
void insert_BD();
void delete_BD();
void check_reservation();

void customer(){
  printf("\n###############################################################################################\n\n");
  printf("\t\t\tWelcome to Customer Page Please Select one option\n");
  printf("\t\t\t1. Customer login");
  printf("\t\t\t2. View all buses\n");
  printf("\t\t\t3. Return to Home\n");
  printf("\t\t\t4. Exit\n");
  char s[100];
  scanf("%s", s);
  int x=atoi(s);
  switch (x) {
    case 1:
      printf("\t\t\tcustomer_login();\n");
      break;
    case 2:
      printf("\t\t\tView buses\n");
      main();
      break;
    case 3:
      printf("\t\t\tReturning to Home\n");
      system("cls");
      main();
      break;
    case 4:
      system("cls");
      isHome=false;
      main();
      break;
    default:
      printf("\t\t\tPlease Enter a number as a choice.\n");
      customer();
  }
}
