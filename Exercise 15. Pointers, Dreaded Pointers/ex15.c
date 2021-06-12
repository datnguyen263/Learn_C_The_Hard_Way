#include <stdio.h>

int main(int argc, char *argv[]){
    // create two arr we care about
    int ages[] = {23, 43, 12,89, 2};
    char *names[] = {
        "Alan", "Frank", "Marry", "John", "Lisa"
    };

    // safely get the size of ages
    int count = sizeof(ages)/sizeof(int);

    // first way using indexing
    for (int i = 0; i < count; i++){
        printf("%s has %d years alive. \n", names[i], ages[i]);
    }

    printf("---------\n");

    // set up the pointers to the start of the arr
    int *cur_age = ages;
    char **cur_name = names;

    // second way using pointers
    for (int i = 0; i < count; i++){
        printf("%s has %d years old. \n", *(cur_name + i), *(cur_age + i));
    }
    printf("---------\n");

    // third way, pointers are just arr
    for (int i = 0; i < count; i++){
        printf("%s has %d years old again. \n",cur_name[i] ,cur_age[i]);
    }
    printf("---------\n");
    return 0;
}