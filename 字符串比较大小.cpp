#include <stdio.h>
int main()
{
    //请在此添加‘字符串大小比较’的代码
    /********** Begin **********/
    char a[30], b[30];
    scanf_s("%s %s", a, (unsigned int)sizeof(a), b, (unsigned int)sizeof(b));

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

    /********** End **********/
    return 0;
}
