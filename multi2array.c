#include <stdio.h>

int main() {
    int a[2][2][2];
    
    // Input array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                scanf("%d", &a[i][j][k]); // Removed the space after %d reason below
            }
        }
    }
    printf("\n \n \n");
    // Output array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n\n");
    }
    
    return 0;
}
/*
In C, scanf with a "%d" format specifier reads an integer from the input stream. 
However, scanf also skips whitespace characters (such as spaces, tabs, and newlines) before
 trying to read the next non-whitespace character. So when you use "%d " as the format specifier,
  scanf expects to find an integer followed by a space. If the user inputs an integer followed by
   a space, it works fine because scanf reads the integer and then consumes the space.
    But if the user simply inputs an integer without a space, scanf waits,
     expecting the space character to be entered.

By removing the space after "%d", scanf will correctly read an integer regardless
 of whether it's followed by a space or not, because scanf will automatically 
 skip any leading whitespace characters before reading the integer. 
 This makes the program more flexible in terms of input format.
*/