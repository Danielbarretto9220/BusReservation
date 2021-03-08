#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

extern bool isHome;

void main();
void admin_login();
void insert_BD();
void delete_BD();
void check_reservation();

void admin(){
  printf("\n###############################################################################################\n\n");
  printf("\t\t\t1. Enter username and passowrd to login\n");
  printf("\t\t\t2. Return to Home page\n");
  printf("\t\t\t3. Exit\n");
  char s[100];
  scanf("%s", s);
  int x=atoi(s);
  switch (x) {
    case 1:
      printf("\t\t\tadmin_login();\n");
      break;
    case 2:
      printf("\t\t\tReturning to Home\n");
      system("cls");
      main();
      break;
    case 3:
      system("cls");
      isHome=false;
      main();
      break;
    default:
      printf("\t\t\tPlease Enter a number as a choice.\n");
      admin();
  }
};
