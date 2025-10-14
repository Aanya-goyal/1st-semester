#include <stdio.h>
    int findmax(int a[], int n) {
        int max = a[0];
        for (int i = 0; i < n; i++) {
            if (a[i] > max)
                max = a[i];
        }
        return max;
    }
    
    int findmin(int a[], int n) {
        int min = a[0];
        for (int i = 0; i < n; i++) {
            if (a[i] < min)
                min = a[i];
        }
        return min;
    }
    
    int main()
    {
        int a[10] = {10, 20, 30, 198, 40, 60, 70, 771, 80, 89};
        int n = 10, max, min;
        max = findmax(a, n);
        min = findmin(a, n);
        printf("max=%d\n", max);
        printf("min=%d\n", min);
        return 0;
    }
    
