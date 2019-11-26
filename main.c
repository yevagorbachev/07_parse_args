#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void split(char ** dest, int len, char * src, char * delim) {
    for (int i = 0; i < len; i++) {
        dest[i] = strsep(&src, delim);
    }
}


int main() {
    char * argv[3];
    char cli[] = "ls -a -l";
    split(argv, sizeof(argv), cli, " ");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", argv[i]);
    }
}