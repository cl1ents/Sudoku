#pragma once
#include "Structs.h"

// Grid definition
#define SIZE 3
#define ARRAY_SIZE SIZE*SIZE

void initialiseGrid(Slot grid[ARRAY_SIZE]);
void assignNumber(Slot grid[ARRAY_SIZE], int x, int y, int number);
int isValid(Slot grid[ARRAY_SIZE], int x, int y);
int hasWon(Slot grid[ARRAY_SIZE]);

void displayGrid(Slot grid[ARRAY_SIZE]);
