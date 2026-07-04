#include <stdio.h>

// Function to calculate total
int calculateTotal(int marks[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}

// Function to calculate percentage
float calculatePercentage(int total, int n) {
    return (float)total / n;
}

// Function to assign grade
char assignGrade(float percentage) {
    if(percentage >= 90)
        return 'A';
    else if(percentage >= 75)
        return 'B';
    else if(percentage >= 60)
        return 'C';
    else if(percentage >= 40)
        return 'D';
    else
        return 'F';
}

// Function to display result
void displayResult(int marks[], int n) {
    printf("\n========= MARKSHEET =========\n");
    printf("Subject\t\tMarks\n");
    printf("-------------------------\n");
    
    char *subjects[] = {"Maths", "Physics", "Chemistry", "English", "Computer"};
    
    for(int i = 0; i < n; i++) {
        printf("%s\t\t%d\n", subjects[i], marks[i]);
    }
    
    int total = calculateTotal(marks, n);
    float percentage = calculatePercentage(total, n);
    char grade = assignGrade(percentage);
    
    printf("-------------------------\n");
    printf("Total:\t\t%d\n", total);
    printf("Percentage:\t%.2f%%\n", percentage);
    printf("Grade:\t\t%c\n", grade);
    
    // Check pass/fail
    int fail = 0;
    for(int i = 0; i < n; i++) {
        if(marks[i] < 40) {
            fail = 1;
            break;
        }
    }
    
    if(fail)
        printf("Result:\t\tFAIL (Below 40 in one or more subjects)\n");
    else
        printf("Result:\t\tPASS ✅\n");
    
    printf("=============================\n");
}

int main() {
    int marks[5];
    
    printf("Enter marks for 5 subjects:\n");
    
    printf("Maths: ");
    scanf("%d", &marks[0]);
    
    printf("Physics: ");
    scanf("%d", &marks[1]);
    
    printf("Chemistry: ");
    scanf("%d", &marks[2]);
    
    printf("English: ");
    scanf("%d", &marks[3]);
    
    printf("Computer: ");
    scanf("%d", &marks[4]);
    
    displayResult(marks, 5);
    
    return 0;
}