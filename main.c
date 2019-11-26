#include<stdio.h>
#include<stdlib.h>
// #include<unistd.h>
#include<string.h>

char * DELIMITER = " ";

char ** parse_args(char * line) {
    char ** argv = calloc(sizeof(char *), 6);
    int i = 0;
    while ((argv[i++] = strsep(&line, DELIMITER)) != NULL) {}
    return argv;
}


int main() {
    char line[] = "ls -a -l -f -n";
    char ** argv = parse_args(line);
    int i = 0;
    while(argv[i] != NULL) {
        printf("token: \"%s\"\n", argv[i++]);
    }
    free(argv);
}