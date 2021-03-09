#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "myheader.h"

bus bd[40];

int main();
void delete_BD();
void check_reservation();

void admin(){
  printf("\n###############################################################################################\n\n");
  printf("\t\t\t1. Enter username and passowrd to login\n");
  printf("\t\t\t2. Return to Home page\n");
  printf("\t\t\t3. Exit\n");
  printf("\n\t\t\tEnter your choice: ");
  char s[100];
  scanf("%s", s);
  int x=atoi(s);
  switch (x) {
    case 1:
      printf("\t\t\tadmin_login();\n");
      insert_BD();
      printf("Record Inserted\n");
      printf("\n###############################################################################################\n\n");
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

void admin_page(){
  printf("\n###############################################################################################\n\n");
  printf("\t\t\t1. Insert Bus Details\n");
  printf("\t\t\t3. Exit\n");
  printf("\n\t\t\tEnter your choice: ");
  char s[100];
  scanf("%s", s);
  int x=atoi(s);
  switch (x) {
    case 1:
    insert_BD();
    case 2:
      printf("\t\t\tReturning to Home\n");
      system("cls");
      main();
      break;
    default:
      printf("\t\t\tPlease Enter a number as a choice.\n");
      admin_page();
  }
}
