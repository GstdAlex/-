#include <stdio.h>
int main()
{
    char a[30], b[30];
    scanf("%s %s",&a,&b);

    int suma = 0;
    for (int i = 0;; i++) {
        if (a[i] == '\0') break;
        suma += a[i];
    }
    int sumb = 0;
    for (int i = 0;; i++) {
        if (b[i] == '\0') break;
        sumb += b[i];
    }
    printf("%d", suma - sumb);

    return 0;
}
