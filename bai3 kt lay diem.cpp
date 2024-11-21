#include <stdio.h>


void nhapMaTran(int a[][100], int n, int m) 
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}
void inMaTran(int a[][100], int n, int m) 
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void chuyenViMaTran(int a[][100], int at[][100], int n, int m) 
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            at[j][i] = a[i][j];
        }
    }
}
void nhanMaTran(int a[][100], int b[][100], int c[][100], int n, int m) 
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main() 
{
    int t;
    scanf("%d", &t);
    for (int test = 1; test <= t; test++) {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[100][100], at[100][100], c[100][100]; 
        nhapMaTran(a, n, m);
        chuyenViMaTran(a, at, n, m);
        nhanMaTran(a, at, c, n, m);
        printf("Test %d:\n", test);
        inMaTran(c, n, n);
    }
    
    return 0;
}

