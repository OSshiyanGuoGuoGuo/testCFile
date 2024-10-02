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

    printf("������ѧ������: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) {
        printf("\nѧ�� %d ����Ϣ:\n", i + 1);
        inputStudentData(&students[i]);
        calculateScores(&students[i]);
    }

    printf("\nѧ���ɼ�:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s ���ܳɼ�: %.2f, ƽ���ɼ�: %.2f\n", students[i].name, students[i].total, students[i].average);
    }

    return 0;
}

void inputStudentData(Student *student) {
    printf("����: ");
    scanf("%s", student->name);
    for (int i = 0; i < 3; i++) {
        printf("�γ� %d �ĳɼ�: ", i + 1);
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
