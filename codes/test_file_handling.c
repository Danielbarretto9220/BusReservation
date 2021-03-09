#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "myheader.h"

const char* BUS_FORMAT_OUT = "(%d, %s, %d, %d, %s, %d, %d)\n";
const char* BUS_FORMAT_IN = "(%d, %[^,], %d, %d, %[^,], %d, %d)\n";

int main(){

  bus b[30];
/*
  printf("\n###############################################################################################\n\n");
  printf("Enter Bus Details below:\n");
  printf("Enter bus id: ");
  scanf("%d", &b[0].id);
  printf("\nThe Id u entered : %d",b[0].id);

  printf("\nEnter bus name: ");
  scanf("%s", b[0].name);
  printf("\nThe Id u entered : %d",b[0].name);
  printf("\n###############################################################################################\n\n");

  //strcpy(b[0].name,"Mumbai-pune");
  b[0].arrival=7000;
  b[0].departure=8000;
  strcpy(b[0].full,"True");
  b[0].seat=30;
  b[0].seat_left=25;
  printf("The Bus name is : %s\n",b[0].name);


  char name[30];
  //name = b[0].name;
  char full[30];
  //full = b[0].full;


  FILE *filew;
  filew = fopen("database/bus.dat", "a");
  if (filew==NULL){
    return 1;
  }
  fprintf(filew, BUS_FORMAT_OUT, b[0].id, b[0].name, b[0].arrival, b[0].departure, b[0].full, b[0].seat, b[0].seat_left);
  fclose(filew);
*/

/*
  char name[30];
  char full[30];

  FILE *filer;
  filer = fopen("database/bus.dat", "r");
  fseek(filer,0,SEEK_SET);
  fscanf(filer,BUS_FORMAT_IN, &b[1].id, name, &b[1].arrival, &b[1].departure, full, &b[1].seat,&b[1].seat_left);
  fclose(filer);

  strcpy(b[1].name, name);
  strcpy(b[1].full, full);

  printf("\n###############################################################################################\n\n");
  printf("Enter bus name: %s\n",b[1].name);
  printf("Enter bus arrival time: %d\n",b[1].arrival);
  printf("Enter bus departure time: %d\n",b[1].departure);
  printf("Enter bus if bus full: %s\n",b[1].full);
  printf("Enter no. of seats in bus: %d\n",b[1].seat);
  printf("Enter no. of seats left: %d\n",b[1].seat_left);


char name[30];
char full[30];
int c;
int cnt=0;

FILE *filer;
filer = fopen("database/bus.dat", "r");

c = getc(filer);
while (c!=EOF){
  fscanf(filer,BUS_FORMAT_IN, &b[cnt].id, name, &b[cnt].arrival, &b[cnt].departure, full, &b[cnt].seat,&b[cnt].seat_left);
  putchar(c);
	c = getc(filer);
  cnt = cnt + 1;
}
fclose(filer);
printf("\n###############################################################################################\n\n");
printf("Enter bus name: %s\n",b[1].name);
printf("Enter bus arrival time: %d\n",b[1].arrival);
printf("Enter bus departure time: %d\n",b[1].departure);
printf("Enter bus if bus full: %s\n",b[1].full);
printf("Enter no. of seats in bus: %d\n",b[1].seat);
printf("Enter no. of seats left: %d\n",b[1].seat_left);

*/


// Testing file reading again
int c;
char line[255]; //variable to store the line
FILE* fptr; //pointer to hold file location

fptr = fopen("database/bus.dat", "r");
/*
if(fptr = NULL){
  printf("Database Not Found !\n");
}
c = getc(fptr);
printf("\nThe value in c is :%d\n",c);*/

fgets(line,255,fptr);
fgets(line,255,fptr); //Code to read first line from the file bus.dat



fclose(fptr);


printf("%s\n",line);








  return 0;
}
