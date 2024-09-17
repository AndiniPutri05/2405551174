#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[101];  
    char str2[101];  


    scanf("%d");
    fgets(str1, sizeof(str1), stdin);
    scanf("%d");
    fgets(str2, sizeof(str2), stdin);

 
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;


    int len1 = strlen(str1);
    int len2 = strlen(str2);

  
    if (len1 != len2) {
        printf("BERBEDA\n");
    } else {

        if (strcmp(str1, str2) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }

    return 0;
}