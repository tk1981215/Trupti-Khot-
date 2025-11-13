#include <stdio.h>

#define N 9

// Bitmasks for each row/column/box
int row[N], col[N], box[N];
int seted = 0;

// Finds the box index for grid[i][j]
int getBox(int i, int j) {
    return i / 3 * 3 + j / 3;
}

// Checks if a number can be safely placed
int isSafe(int i, int j, int number) {
    return !(row[i] & (1 << number))
        && !(col[j] & (1 << number))
        && !(box[getBox(i, j)] & (1 << number));
}

// Sets the initial bitmasks for filled values
void setInitialValues(int grid[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j]) {
                row[i] |= 1 << grid[i][j];
                col[j] |= 1 << grid[i][j];
                box[getBox(i, j)] |= 1 << grid[i][j];
            }
        }
    }
}

// Backtracking solve function
int SolveSudoku(int grid[N][N], int i, int j) {
    if (!seted) seted = 1, setInitialValues(grid);
    if (i == N - 1 && j == N) return 1;
    if (j == N) j = 0, i++;
    if (i >= N) return 1;

    if (grid[i][j]) return SolveSudoku(grid, i, j + 1);

    for (int nr = 1; nr <= N; nr++) {
        if (isSafe(i, j, nr)) {
            grid[i][j] = nr;
            row[i] |= 1 << nr;
            col[j] |= 1 << nr;
            box[getBox(i, j)] |= 1 << nr;

            if (SolveSudoku(grid, i, j + 1))
                return 1;

            // Undo assignment
            row[i] &= ~(1 << nr);
            col[j] &= ~(1 << nr);
            box[getBox(i, j)] &= ~(1 << nr);
        }
        grid[i][j] = 0;
    }
    return 0;
}

// Print Sudoku
void print(int grid[N][N]) {
    for (int i = 0; i < N; i++, printf("
"))
        for (int j = 0; j < N; j++)
            printf("%d ", grid[i][j]);
}

int main() {
    int grid[N][N] = {
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
    if (SolveSudoku(grid, 0, 0))
        print(grid);
    else
        printf("No solution exists
");
    return 0;
}
