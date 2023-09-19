#include <stdio.h>
#include <string.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    char snum[10];
    sprintf(snum, "%d", n);
    int lim = strlen(snum) - 1;
    printf("%c %c", snum[0], snum[lim]);
}
