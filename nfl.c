#include <stdio.h>

int main(void) {
    printf("Enter 0 or 1 to STOP\n");
    
    int score;

    printf("Enter the NFL score: ");
    scanf("%d", &score);
    printf("\nYou just inputted %d.\n", score);

    int td = 6;
    int fg = 3;
    int safety = 2;
    int tdConverg = 8;
    int tdFG = 7;

    printf("Possible combinations of scoring plays:\n");
    for (int tdNum = 0; tdNum <= score / td; tdNum++) {
        for (int fgNum = 0; fgNum <= score / fg; fgNum++) {
            for (int safetyNum = 0; safetyNum <= score / safety; safetyNum++) {
                for (int tdConvergNum = 0; tdConvergNum <= score / tdConverg; tdConvergNum++) {
                    for (int tdFGNum = 0; tdFGNum <= score / tdFG; tdFGNum++) {
                        if (tdNum * td + fgNum * fg + safetyNum * safety + tdConvergNum * tdConverg + tdFGNum * tdFG == score) {
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", tdNum, tdFGNum, tdConvergNum, fgNum, safetyNum);
                        }
                    }
                }
            }
        }
    }

    return 0;
}