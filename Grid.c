#include "Grid.h"

/// <summary>
/// Initialises a SIZE by SIZE grid of Slots
/// </summary>
/// <param name="grid"></param>
void initialiseGrid(Slot grid[ARRAY_SIZE])
{/* TODO: DO */}

/// <summary>
/// Assigns number to slot in X Y of grid, and sets isValid if valid!
/// </summary>
/// <param name="grid"></param>
/// <param name="x"></param>
/// <param name="y"></param>
/// <param name="number"></param>
void assignNumber(Slot grid[ARRAY_SIZE], int x, int y, int number)
{/* TODO: DO */}


// Various validators
int isValidLine(Slot grid[ARRAY_SIZE], int x, int y)
{/* TODO: DO */}
int isValidCol(Slot grid[ARRAY_SIZE], int x, int y)
{/* TODO: DO */}
int isValidChunk(Slot grid[ARRAY_SIZE], int x, int y)
{/* TODO: DO */}

/// <summary>
/// Checks whether or not slot at X and Y is valid or not
/// </summary>
/// <param name="grid"></param>
/// <param name="x"></param>
/// <param name="y"></param>
/// <returns>If the slot is valid, 1, else 0</returns>
int isValid(Slot grid[ARRAY_SIZE], int x, int y)
{/* TODO: DO */}

/// <summary>
/// Checks if all of the Slots in grid has the isValid attribute set to 1
/// </summary>
/// <param name="grid"></param>
/// <returns>result</returns>
int hasWon(Slot grid[ARRAY_SIZE])
{/* TODO: DO */}

/// <summary>
/// Displays grid to console
/// </summary>
/// <param name="grid"></param>
void displayGrid(Slot grid[ARRAY_SIZE])
{/* TODO: DO */}
