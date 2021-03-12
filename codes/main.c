#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>
#include "myheader.h"

bool isHome=true;

void admin();
void customer();
void cust_login();
void delete_BD();
void check_reservation();
void wait();



// Home page
int main(){
  if(isHome == true){
    printf("\n###############################################################################################\n\n");
    printf("\t\t\tWelcome to StarLine Bus Services!\n\n");
    printf("\t\t\tSelect one \n\t\t\t1. Administrative Services\n\t\t\t2. Customer Services\n\t\t\t3. Exit\n");
    printf("\n\t\t\tEnter your choice: ");
    char s[100];
    scanf("%s", s);
    //printf("\t\t\tOption selected\n");
    int x=atoi(s);
    switch (x) {
      case 1 :
        system("cls"); // to clear screen!
        admin();
        break;
      case 2 :
        system("cls");
        customer();
        break;
      case 3 :
        isHome=false;
        main();
        break;
      default :

        printf("\n###############################################################################################\n\n");
        printf("\t\t\tPlease enter a number from 1 to 3\n");
        //errortxt("Please enter a number from 1 to 3");
        wait();
        system("cls");
        main();
    }
  }else{
    system("cls");
    printf("\n###############################################################################################\n\n");
    printf("\t\t\tThank You for using StarLine Bus Services\n");
    printf("\n###############################################################################################\n\n");
  }
  return  0;
}

/* CODE TO COLOR THE TEXT
void errortxt(char s[]){
printf("\033[1;31m");
printf("\t\t\t%s\n",s);
printf("\033[0m");
}
*/

// Function to make the program wait for sometime before calling another function.
void wait(){
  int c, d;

   for (c = 1; c <= 37767; c++)
       for (d = 1; d <= 37767; d++)
       {}
}

// Function to Insert Bus Details into file
void insert_BD(){
  bus bd;
  printf("\n###############################################################################################\n\n");
  printf("\t\t\tAdministration Services\n\n");
  printf("\t\t\tEnter Bus Details below:\n");
  printf("\t\t\tEnter bus id: "); scanf("%d", &bd.id);
  printf("\t\t\tEnter bus name: "); scanf("%s", bd.name);
  printf("\t\t\tEnter bus arrival time: "); scanf("%d", &bd.arrival);
  printf("\t\t\tEnter bus departure time: "); scanf("%d", &bd.departure);
  printf("\t\t\tEnter bus if bus full: "); scanf("%s", bd.full);
  printf("\t\t\tEnter no. of seats in bus: "); scanf("%d", &bd.seat);
  printf("\t\t\tEnter no. of seats left: "); scanf("%d", &bd.seat_left);
  printf("\n###############################################################################################\n\n");
  FILE* filea;
  filea=fopen("database/bus.dat","a");
  fprintf(filea, "(%d, %s, %d, %d, %s, %d, %d)\n", bd.id,  bd.name, bd.arrival,
  bd.departure, bd.full, bd.seat, bd.seat_left);
  fclose(filea);
  printf("\n\t\t\tRecords Updated\n");
  wait();
  wait();
};
