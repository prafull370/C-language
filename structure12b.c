#include <stdio.h>
#include <string.h>
struct student
{
    char name[10];
    int marks[3];
};
int main()
{
    struct student s[3];
    int max_marks = -1, idx = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter student detail:%d\n", i + 1);
        printf("Enter student name: ");
        scanf("%s", &s[i].name);
        int marks = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("%d. subject marks enter:", j + 1);
            scanf("%d", &s[i].marks[j]);
            marks += s[i].marks[j];
            if (marks > max_marks)
            {
                max_marks = marks;
                idx = i;
            }
        }
    }

    printf("maximum marks ortained by %s", s[idx].name);

    return 0;
}