#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include "myheader.h"

typedef struct bus {
  int id;
  char name[50];
  int arrival;
  int departure;
  char full[50];
  int seat;
  int seat_left;
}bus;

extern bool isHome;
bus b[30];
void main();
void admin_login();
void insert_BD();
void delete_BD();
void check_reservation();
void bus_details();

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

/*
void bus_details(){
  FILE *fptr;
  fptr = fopen("database\busdetails.csv","r");
  fscanf(fptr, "%d %s %d %d %s %d %d", &b[0].id, &b[0].name, &b[0].arrival, &b[0].departure, &b[0].full, &b[0].seat, &b[0].seat_left);
  fclose(fptr);
  printf("Bus Name:\t%s\n",b.id[0]);
}
*/
