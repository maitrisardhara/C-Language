#include <stdio.h>
int main()
{
    int a1size = 5, a2size = 5, a_rs, i, j;   // rs=resultsize
 
    int a[5] = { 1, 2, 3, 4, 5 };
 
    int b[5] = { 6, 7, 8, 9, 10 };
 
    a_rs = a1size + a2size;
    int c[a_rs];
 
    for (i=0; i<a1size; i++) {
        c[i] = a[i];
    }
 
    for (i=0, j=a1size; j< a_rs && i<a2size; i++, j++) {
        c[j] = b[i];
    }
 
    for (i = 0; i<a_rs; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}
