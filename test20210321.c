#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct student {
    int id;
    int score[5];
    struct student* next;
} Student;

Student* creatStudent() {
    Student* p = NULL;
    Student* h = NULL;
    Student* t = NULL;
    int sid;
    int i = 0;

    p = h = t = (Student*)malloc(sizeof(Student));
    t->next = NULL;

    /*printf("����ѧ����ѧ�ţ���-1����\n");
    scanf("%d", &sid);

    while (sid != -1) {
        p = (Student*)malloc(sizeof(Student));
        p->id = sid;
        printf("����ѧ������ѧ������Ӣ����ġ������ɼ�,ÿ����һ�ƻس�ȷ��\n");
        for (i = 0; i < 5; i++) {
            scanf("%d", &p->score[i]);
        }
        p->next = NULL;
        t = t->next = p;
        printf("����ѧ����ѧ�ţ���-1����\n");
        scanf("%d", &sid);
    }*/
    return h;
}

void showStudentList(Student* p) {
    p = p->next;
    if (p != NULL)
        printf("ѧ�� ��ѧ ���� Ӣ�� ���� ����\n");
    while (p != NULL) {
        printf("%04d %4d %4d %4d %4d %4d\n", p->id, p->score[0], p->score[1], p->score[2], p->score[3], p->score[4]);
        p = p->next;
    }
}

void addStudent(Student* h, int sid, int* S) {
    Student* p = (Student*)malloc(sizeof(Student));
    int i = 0;
    p->id = sid;
    for (i = 0; i < 5; i++) {
        p->score[i] = S[i];
    }
    p->next = NULL;
    while (h->next != NULL)
        h = h->next;
    h->next = p;
}

double average(Student* h, int i) {
    Student* p = h->next;
    int sum = 0;
    int num = 0;
    double ave = 0;
    while (p != NULL) {
        sum += p->score[i];
        num++;
        p = p->next;
    }
    ave = sum * 1.0 / num;
    return ave;
}

void downave(Student* h) {
    Student* p = h->next;
    int i, down = 0, sum = 0;
    while (p != NULL) {
        sum = 0;
        down = 0;
        for (i = 0; i < 5; i++) {
            if (p->score[i] < 60)
                down++;
        }
        if (down > 2) {
            printf("ѧ��:%d  ", p->id);
            for (i = 0; i < 5; i++) {
                printf("%d ", p->score[i]);
                sum += p->score[i];
            }
            printf("ƽ����:%.2lf\n", sum / 5.0);
        }
        p = p->next;
    }
}

void upave(Student* h) {
    Student* p = h->next;
    int i, up = 0, sum = 0;
    while (p != NULL) {
        sum = 0;
        up = 0;
        for (i = 0; i < 5; i++) {
            if (p->score[i] > 74)
                up++;
            sum += p->score[i];
        }
        //printf("%d��ƽ��,%.2lf\n",p->id,sum/5.0);
        if (up == 5 || (sum / 5.0) > 85) {
            printf("����ѧ��:%d  ", p->id);
            for (i = 0; i < 5; i++)
                printf("%d ", p->score[i]);
            printf("ƽ����:%.2lf\n", sum / 5.0);
        }
        p = p->next;
    }
}

void main() {
    Student* stu = creatStudent();
    int score[][5] = { {55,90,98,81,52},{96,90,83,77,89},{86,86,92,80,75},{82,84,94,66,68},{82,81,90,74,75},{84,88,92,72,71},{80,84,86,66,76},{76,89,89,74,75},{84,88,87,66,77},{72,88,90,68,72} };
    int i;
    for (i = 0; i < sizeof(score) / sizeof(score[0]); i++) {
        addStudent(stu, i + 1, score[i]);
    }
    //addStudent(stu,02,score[0][1]);
    /*addStudent(stu,01,70,90,98,81,78);
    addStudent(stu,02,96,90,83,77,89);
    addStudent(stu,03,86,86,92,80,75);
    addStudent(stu,04,82,84,94,66,68);
    addStudent(stu,05,82,81,90,74,75);
    addStudent(stu,06,84,88,92,72,71);
    addStudent(stu,07,80,84,86,66,76);
    addStudent(stu,8,76,89,89,74,75);
    addStudent(stu,9,84,88,87,66,77);
    addStudent(stu,10,72,88,90,68,72);*/
    showStudentList(stu);
    printf("%.2lf\n", average(stu, 0));
    downave(stu);
    upave(stu);
}