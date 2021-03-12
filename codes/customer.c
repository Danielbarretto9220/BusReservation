#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "myheader.h"


bus b[30];
void main();
void insert_BD();
void delete_BD();
void check_reservation();
void bus_details();
void wait();


void customer(){
  printf("\n###############################################################################################\n\n");
  printf("\t\t\tWelcome to Customer Page Please Select one option\n\n");
  printf("\t\t\t1. Customer login{Under Construction}\n");
  printf("\t\t\t2. View all buses\n");
  printf("\t\t\t3. Return to Home\n");
  printf("\t\t\t4. Exit\n");
  printf("\t\t\tEnter Your choice: ");
  char s[100];
  scanf("%s", s);
  int x=atoi(s);
  switch (x) {
    case 1:
      printf("\t\t\t\n\ncustomer_login();\n");
      wait();
      system("cls");
      customer();
      break;
    case 2:
      bus_details();
      wait();
      customer();
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


void bus_details(){
  char name[30];
  char full[30];

  FILE *fptr = fopen("database/bus.dat", "r");

  //fseek(fptr,0,SEEK_SET);
  fscanf(fptr, "(%d, %[^,], %d, %d, %[^,], %d, %d)\n", &b[1].id, name, &b[1].arrival, &b[1].departure, full, &b[1].seat, &b[1].seat_left);
  strcpy(b[1].name, name);
  strcpy(b[1].full, full);
  printf("\n###############################################################################################\n\n");
  printf("\t\t\tbus name: %s\n",name);
  printf("\t\t\tbus arrival time: %d\n",b[1].arrival);
  printf("\t\t\tbus if bus full: %s\n",full);
  printf("\t\t\tbus departure time: %d\n",b[1].departure);
  printf("\t\t\tno. of seats in bus: %d\n",b[1].seat);
  printf("\t\t\tno. of seats left: %d\n",b[1].seat_left);
  fclose(fptr);
}
