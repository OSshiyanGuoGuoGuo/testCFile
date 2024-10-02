#include <stdio.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50


typedef struct {
    char name[MAX_NAME_LENGTH];
    float scores[3];
    float total;
    float average;
} Student;


void inputStudentData(Student *student);
void calculateScores(Student *student);

int main() {
    int numStudents;
    Student students[MAX_STUDENTS];

    printf("请输入学生人数: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) {
        printf("\n学生 %d 的信息:\n", i + 1);
        inputStudentData(&students[i]);
        calculateScores(&students[i]);
    }

    printf("\n学生成绩:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s 的总成绩: %.2f, 平均成绩: %.2f\n", students[i].name, students[i].total, students[i].average);
    }

    return 0;
}

void inputStudentData(Student *student) {
    printf("姓名: ");
    scanf("%s", student->name);
    for (int i = 0; i < 3; i++) {
        printf("课程 %d 的成绩: ", i + 1);
        scanf("%f", &student->scores[i]);
    }
}

void calculateScores(Student *student) {
    student->total = 0;
    for (int i = 0; i < 3; i++) {
        student->total += student->scores[i];
    }
    student->average = student->total / 3;
}
