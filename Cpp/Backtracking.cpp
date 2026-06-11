#include <iostream>
using namespace std;

bool isSafe(int grid[9][9], int row, int col, int num)
{
    for (int x = 0; x < 9; x++)
    {
        if (grid[row][x] == num || grid[x][col] == num)
            return false;
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[startRow + i][startCol + j] == num)
                return false;
        }
    }

    return true;
}

bool solveSudoku(int grid[9][9])
{
    int row, col;
    bool empty = false;

    for (row = 0; row < 9; row++)
    {
        for (col = 0; col < 9; col++)
        {
            if (grid[row][col] == 0)
            {
                empty = true;
                goto findEmpty;
            }
        }
    }

findEmpty:

    if (!empty)
        return true;

    for (int num = 1; num <= 9; num++)
    {
        if (isSafe(grid, row, col, num))
        {
            grid[row][col] = num;

            if (solveSudoku(grid))
                return true;

            grid[row][col] = 0; // Backtrack
        }
    }

    return false;
}

void printGrid(int grid[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int grid[9][9] = {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    if (solveSudoku(grid))
    {
        cout << "Solved Sudoku:\n";
        printGrid(grid);
    }
    else
    {
        cout << "No solution exists";
    }

    return 0;
}
