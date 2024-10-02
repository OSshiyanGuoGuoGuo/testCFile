#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("请输入一个字符串: ");
    fgets(str, sizeof(str), stdin);
    
    // 去掉换行符
    str[strcspn(str, "\n")] = 0;

    printf("你输入的字符串: %s\n", str);

    // 反转字符串
    int len = strlen(str);
    char reversed[100];
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0'; // 添加字符串结束符

    printf("反转后的字符串: %s\n", reversed);

    return 0;
}
