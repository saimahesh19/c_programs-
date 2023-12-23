#include <stdio.h>

int main() {
    int marks[5];
    int maxMarksPerSubject = 100;

    // Input marks for five subjects
    printf("Enter the marks obtained in five subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Validate marks to be within the range [0, 100]
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks! Marks should be between 0 and 100.\n");
            return 1;  // Exit with an error code
        }
    }

    // Calculate aggregate marks
    int aggregateMarks = 0;
    for (int i = 0; i < 5; i++) {
        aggregateMarks += marks[i];
    }

    // Calculate percentage
    double percentage = (double)aggregateMarks / (5 * maxMarksPerSubject) * 100;

    
    printf("\nAggregate Marks: %d\n", aggregateMarks);
    printf("Percentage Marks: %.2f%%\n", percentage);

    return 0;
}
