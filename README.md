# beecrowd_1046_Problem_Solution_With_C

Here's a line-by-line explanation of the provided C code:

1. `#include <stdio.h>`: This line includes the standard input-output library, which provides functions for input and output operations.

2. `int main() {`: This line starts the `main` function, which is the entry point of the program.

3. `int startTime, endTime, duration;`: This declares three integer variables: `startTime`, `endTime`, and `duration`. These variables will be used to store the input start time, end time, and the calculated game duration, respectively.

4. `scanf("%d %d", &startTime, &endTime);`: This line uses the `scanf` function to read two integer values from the user input. The format specifier `%d` is used to specify that two integers are expected, and the values are stored in the `startTime` and `endTime` variables.

5. `if (startTime < endTime) {`: This line starts an `if` statement to compare the start time with the end time.

6. `duration = endTime - startTime;`: If the start time is less than the end time, this line calculates the duration of the game by subtracting the start time from the end time and stores it in the `duration` variable.

7. `else {`: If the start time is not less than the end time (i.e., the game crosses midnight), this line indicates the start of the `else` block.

8. `duration = 24 - startTime + endTime;`: In this case, when the game starts on one day and ends on another, the duration is calculated by subtracting the start time from 24 (representing the number of hours in a day) and then adding the end time. The result is stored in the `duration` variable.

9. `printf("O JOGO DUROU %d HORA(S)\n", duration);`: This line uses the `printf` function to print the calculated duration in the desired format. The `%d` format specifier is used to insert the value of the `duration` variable into the output string.

10. `return 0;`: This line indicates the end of the `main` function and returns an exit status of 0, indicating successful program execution.
