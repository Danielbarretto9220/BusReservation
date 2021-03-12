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
extern void insert_BD();
