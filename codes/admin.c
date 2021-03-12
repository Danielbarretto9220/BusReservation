#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>
#include "myheader.h"

bus bd[40];

void wait();
int main();
void delete_BD();
void check_reservation();
extern bool isHome;
int admin_login();

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
      admin_login();
      printf("\n###############################################################################################\n\n");
      printf("\t\t\tAdministration Services\n\n");
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
  printf("\t\t\tAdministration Services\n\n");
  printf("\t\t\t1. Insert Bus Details\n");
  printf("\t\t\t2. Return to Home\n");
  printf("\t\t\t3. Exit\n");
  printf("\n\t\t\tEnter your choice: ");
  char s[100];
  scanf("%s", s);
  int x=atoi(s);
  switch (x) {
    case 1:
    insert_BD();
    admin_page();
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
      admin_page();
  }
}


// Function to validate the admin
int admin_login(){
  char username[30];
  char password[30];
  char username_sys[30];
  char password_sys[30];
  printf("\n###############################################################################################\n\n");
  printf("\t\t\tAdministration Services\n\n");
  printf("\t\t\tEnter username: "); scanf("%s", username);
  printf("\t\t\tEnter password: "); scanf("%s", password);
  FILE* usrchk;
  usrchk=fopen("database/login.dat", "r");
  if(usrchk == NULL){
    printf("Record not found");
    return 1;
  }
  fscanf(usrchk,"%[^,], %[^,]", username_sys, password_sys);
    //Temporary fix
  int x=atoi(password_sys);
  int y=atoi(password);

/*
  if(strcmp(password , password_sys) == 0){
    printf("True\n");
  }*/
  if (strcmp(username , username_sys) == 0){
    if(x == y){
      printf("\t\t\tUser verifed Routing to Admin Page");
      printf("\n###############################################################################################\n\n");
      wait();
      wait();
      system("cls");
      admin_page();

      return 0;
    }

  }else{
    printf("\t\t\tUsername or password Incorrect! Try again!! \n");
    wait();
    wait();
    system("cls");
    admin();}

}
