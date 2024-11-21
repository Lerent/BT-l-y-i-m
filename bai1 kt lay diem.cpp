#include <stdio.h>
#include <ctype.h>
#include <string.h>

void chuanHoaXau(char s[]) 
{
    int n = strlen(s);
    
       // Loai bo khoang trong thua o dau va cuoi xau
    int i = 0, j = n - 1;
    while (isspace(s[i])) i++;
    while (isspace(s[j])) j--;
    s[j + 1] = '\0';
    
       // Chuan hoa cac tu trong xau
    int flag = 1;
    for (int k = i; k <= j; k++) {
        if (isspace(s[k])) {
            flag = 1;
        } else {
            if (flag) {
                s[k] = toupper(s[k]);
                flag = 0;
            } else {
                s[k] = tolower(s[k]);
            }
        }
    }
    
        // Loai bo khoang trong thua giua cac tu
    int index = 0;
    for (int k = i; k <= j; k++) {
        if (!isspace(s[k]) || (k > i && !isspace(s[k - 1]))) {
            s[index++] = s[k];
        }
    }
    s[index] = '\0';
}
int main() 
{
    int t;
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++) {
        char s[100];
        fgets(s, 100, stdin);
        s[strcspn(s, "\n")] = '\0';
        chuanHoaXau(s);
        printf("%s\n", s);
    }
    
    return 0;
}
