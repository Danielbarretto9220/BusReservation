#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "myheader.h"

const char* BUS_FORMAT_OUT = "(%d, %s, %d, %d, %s, %d, %d)\n";
const char* BUS_FORMAT_IN = "(%d, %[^,], %d, %d, %[^,], %d, %d)\n";

int main(){
  bus b[30];
  b[0].id=1;
  strcpy(b[0].name,"Mumbai-pune");
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
  filew = fopen("people.dat", "a");
  if (filew==NULL){
    return 1;
  }
  fprintf(filew, BUS_FORMAT_OUT, b[0].id, b[0].name, b[0].arrival, b[0].departure, b[0].full, b[0].seat, b[0].seat_left);
  fclose(filew);



  FILE *filer;
  filer = fopen("people.dat", "r");
  fseek(filer,0,SEEK_SET);
  fscanf(filer,BUS_FORMAT_IN, &b[1].id, name, &b[1].arrival, &b[1].departure, full, &b[1].seat,&b[1].seat_left);
  fclose(filer);


  strcpy(b[1].name, name);
  strcpy(b[1].full, full);
  printf("test\n");
  printf("The Bus id is : %d\n",b[1].id);
  printf("The Bus name is : %s\n",b[1].name);
  return 0;
}
