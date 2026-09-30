#include <stdio.h>

struct Student {
    char usn[20];
    char name[50];
    int m1, m2, m3;
    float attendance;
    int total;
    float average;
    int is_pass;
    char grade;
    int is_eligible;
    float scholarship;
};

int main() {
    int n, i;
    int passed = 0, failed = 0, not_eligible = 0;
    int top_index = -1;
    float highest_avg = -1.0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[100];

    for (i = 0; i < n; i++) {
        printf("Enter details of student %d\n", i + 1);
        printf("Enter USN: ");
        scanf(" %s", s[i].usn);
        printf("Enter Name: ");
        scanf(" %[^\n]s", s[i].name);
        printf("Enter marks in 3 subjects: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);
        printf("Enter attendance percentage: ");
        scanf("%f", &s[i].attendance);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].average = s[i].total / 3.0;

        if (s[i].m1 < 35 || s[i].m2 < 35 || s[i].m3 < 35) 
        {
            s[i].is_pass = 0;
            failed++;
            s[i].grade = '-';
        } 
        else 
        {
            s[i].is_pass = 1;
            passed++;
            if (s[i].average >= 85) 
                s[i].grade = 'A';
            else if (s[i].average >= 70) 
                s[i].grade = 'B';
            else if (s[i].average >= 50) 
                s[i].grade = 'C';
            else 
                s[i].grade = 'D';
        }

        if (s[i].attendance < 75) {
            s[i].is_eligible = 0;
            not_eligible++;
        } else {
            s[i].is_eligible = 1;
        }

        s[i].scholarship = 0;
        if (s[i].is_pass == 1 && s[i].is_eligible == 1) {
            if (s[i].average >= 90 && s[i].attendance >= 90) {
                s[i].scholarship = 10000;
            } else if (s[i].average >= 80 && s[i].attendance >= 85) {
                s[i].scholarship = 5000;
            }
           
            if (s[i].average > highest_avg) {
                highest_avg = s[i].average;
                top_index = i;
            }
        }
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("Student %d\n", i + 1);
        printf("USN: %s\n", s[i].usn);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %d, %d, %d\n", s[i].m1, s[i].m2, s[i].m3);
        printf("Attendance: %.2f%%\n", s[i].attendance);
        printf("Total: %d\n", s[i].total);
        printf("Average: %.2f\n", s[i].average);
       
        if (s[i].is_pass == 1) {
            printf("Result: Pass\nGrade: %c\n", s[i].grade);
        } else {
            printf("Result: Fail\nGrade: -\n");
        }

        if (s[i].is_eligible == 1) {
            printf("Eligibility: Eligible\n");
        } else {
            printf("Eligibility: Not Eligible\n");
        }

        printf("Scholarship: Rs. %.2f\n\n", s[i].scholarship);
    }

    printf("--- Summary ---\n");
    printf("Passed Students: %d\n", passed);
    printf("Failed Students: %d\n", failed);
    printf("Students Not Eligible by Attendance: %d\n", not_eligible);

    if (top_index != -1) {
        printf("\n--- Top Eligible Student ---\n");
        printf("USN: %s\n", s[top_index].usn);
        printf("Name: %s\n", s[top_index].name);
        printf("Average: %.2f\n", s[top_index].average);
        printf("Attendance: %.2f%%\n", s[top_index].attendance);
    }

    return 0;
}