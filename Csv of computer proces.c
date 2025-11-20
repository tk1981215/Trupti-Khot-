#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_MAX 1024

int main() {
    FILE *fp = fopen("prices.csv", "r");
    if (!fp) {
        printf("Could not open file.
");
        return 1;
    }

    char line[LINE_MAX];
    float prev_close = 0.0, curr_close = 0.0;
    int line_no = 0;
    float cumulative_return = 1.0;

    // Read header
    if (fgets(line, LINE_MAX, fp) == NULL) {
        printf("Empty file.
");
        return 1;
    }

    printf("Day,Close,Daily Return,Cumulative Return
");

    while (fgets(line, LINE_MAX, fp)) {
        line_no++;
        char *token;
        int col = 0;
        float close_price = 0.0;

        // Split line by commas
        token = strtok(line, ",");
        while (token) {
            col++;
            // Assuming Close price is in the 5th column (adjust as needed)
            if (col == 5) {
                close_price = atof(token);
                break;
            }
            token = strtok(NULL, ",");
        }

        if (close_price == 0.0) continue; // Skip invalid data
        curr_close = close_price;
        float daily_return = 0.0;
        if (prev_close > 0.0)
            daily_return = (curr_close - prev_close) / prev_close;
        else
            daily_return = 0.0;
        cumulative_return *= (1 + daily_return);

        printf("%d,%.2f,%.4f,%.4f
", line_no, curr_close, daily_return, cumulative_return - 1);

        prev_close = curr_close;
    }

    fclose(fp);
    return 0;
}
