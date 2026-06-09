#include <iostream>
using namespace std;

int board[4][4] = {0};

bool isSafe(int row, int col)
{
    // Check left side of row
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return false;

    // Check upper diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // Check lower diagonal
    for (int i = row, j = col; i < 4 && j >= 0; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

bool solveQueen(int col)
{
    if (col >= 4)
        return true;

    for (int row = 0; row < 4; row++)
    {
        if (isSafe(row, col))
        {
            board[row][col] = 1;

            if (solveQueen(col + 1))
                return true;

            board[row][col] = 0; // Backtrack
        }
    }
    return false;
}

int main()
{
    if (solveQueen(0))
    {
        cout << "Solution:\n";
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
                cout << board[i][j] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "No Solution";
    }

    return 0;
}
