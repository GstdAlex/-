#include<stdio.h>
#include<string.h>
int main() {
	int n;
	scanf_s("%d", &n);
	int arr[20][20];
	memset(arr, 0, sizeof(arr)); //memset只能初始化数组为零
    for (int i = 0; i <= n - 1; i++) {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }
  
for (int i = 2; i <= n - 1; i++) {
    for (int j = 1; j <= i - 1; j++) {
        arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
    }
}
int a = 0;
for (int i = 0; i <= n - 1; i++) {
    for (int j = 0; j <= n - 1; j++) {
        a++;
        printf("%d ", arr[i][j]);
        if ((a-1) == i) {
            printf("\n");
			a = 0;
            break;
        }
    }
}

return 0;
}
