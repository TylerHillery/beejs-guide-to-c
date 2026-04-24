#include <stdio.h> 

int main(void) {
    // fprintf(stdout, "Hello stdout!");
    // fprintf(stderr, "Hello stderr!");

    FILE *fp;
    int c;

    fp = fopen("ch-09/hello.txt", "r");

    if (fp == NULL) {
        fprintf(stderr, "error opening file\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    fclose(fp);
    printf("\n");

    // fgets example
    char s[1024]; // buffer to put line into, means we can only read max 1024 char line
    int linecount = 0;

    fp = fopen("ch-09/quote.txt", "r");

    if (fp == NULL) {
        fprintf(stderr, "error opening file\n");
        return 1;
    }

    while (fgets(s, sizeof s, fp) != NULL) {
        printf("%d: %s", linecount++, s);
    }
    printf("\n");
}