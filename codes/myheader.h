// Header file created primaraliy for testing purposes
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>



// Structure to store Bus Details
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
extern void admin_page();
extern void admin();
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
  printf("Enter Bus Details below:\n");
  printf("Enter bus id: "); scanf("%d", &bd.id);
  printf("Enter bus name: "); scanf("%s", bd.name);
  printf("Enter bus arrival time: "); scanf("%d", &bd.arrival);
  printf("Enter bus departure time: "); scanf("%d", &bd.departure);
  printf("Enter bus if bus full: "); scanf("%s", bd.full);
  printf("Enter no. of seats in bus: "); scanf("%d", &bd.seat);
  printf("Enter no. of seats left: "); scanf("%d", &bd.seat_left);
  printf("\n###############################################################################################\n\n");
  //printf("Enter bus id: %d\n",bd[0].id);
  //printf("Enter bus name: %s\n",bd[0].name);
  //printf("Enter bus arrival time: %d\n",bd[0].arrival);
  //printf("Enter bus departure time: %d\n",bd[0].departure);
  //printf("Enter bus if bus full: %s\n",bd[0].full);
  //printf("Enter no. of seats in bus: %d\n",bd[0].id);
  //printf("Enter no. of seats left: %d\n",bd[0].id);
  FILE* filea;
  filea=fopen("database/bus.dat","a");
  fprintf(filea, "(%d, %s, %d, %d, %s, %d, %d)\n", bd.id,  bd.name, bd.arrival,
  bd.departure, bd.full, bd.seat, bd.seat_left);
  fclose(filea);
};

// Function to validate the admin
int admin_login(){
  char username[30];
  char password[30];
  char username_sys[30];
  char password_sys[30];
  printf("\n###############################################################################################\n\n");
  printf("\t\t\tEnter username: \n"); scanf("%s\n", username);
  printf("\t\t\tEnter password: \n"); scanf("%s\n", password);
  FILE* usrchk;
  usrchk=fopen("database/login.dat", "r");
  if(usrchk == NULL){
    printf("Record not found");
    return 1;
  }
  fscanf(usrchk,"%s, %s", username_sys, password_sys);
  if (username == username_sys & password == password_sys){
    printf("\t\t\tUser verifed Routing to Admin Page");
    printf("\n###############################################################################################\n\n");
    wait();
    admin_page();
    return 0;
  }
  else{
    printf("\t\t\tUsername or password Incorrect! Try again!! \n");
    wait();
    admin();
  }

}
