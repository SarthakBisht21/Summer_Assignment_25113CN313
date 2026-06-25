#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("Q1: Capital of India?\n1. Mumbai  2. Delhi  3. Kolkata\n");
    scanf("%d", &answer);
    if(answer == 2) score++;

    printf("Q2: 5 + 3 = ?\n1. 5  2. 8  3. 10\n");
    scanf("%d", &answer);
    if(answer == 2) score++;

    printf("Q3: C language developed by?\n1. Dennis Ritchie  2. Elon Musk  3. Bill Gates\n");
    scanf("%d", &answer);
    if(answer == 1) score++;

    printf("Your score: %d/3\n", score);

    return 0;
}