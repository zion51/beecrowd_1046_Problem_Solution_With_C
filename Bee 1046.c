#include <stdio.h>

int main() {
    int startTime, endTime, duration;

    // Input start and end time
    scanf("%d %d", &startTime, &endTime);

    // Calculate the duration of the game
    if (startTime < endTime) {
        duration = endTime - startTime;
    } else {
        duration = 24 - startTime + endTime;
    }

    // Print the duration in Portuguese
    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}
