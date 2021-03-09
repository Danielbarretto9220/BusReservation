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
