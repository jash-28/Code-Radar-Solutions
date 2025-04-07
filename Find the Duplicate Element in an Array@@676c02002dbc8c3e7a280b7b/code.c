#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int count[n];
    for(int i = 0; i < n; i++)
     count[i] = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
        if(count[a[i]] == 2) {
            printf("%d\n", a[i]);
            break;
        }
    }
    return 0;
}