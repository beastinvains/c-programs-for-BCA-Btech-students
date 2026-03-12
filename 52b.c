#include <stdio.h>

struct student {
    int id;
    char name[20];
};

int main() {
    struct student students[3] = {
        {1, "punit"},
        {2, "rahul"},
        {3, "sachin"}
    };

    for (int i = 0; i < 3; i++) {
        printf("ID: %d\nName: %s\n", students[i].id, students[i].name);
    }

    return 0;
}

