#include <stdio.h>
#include <string.h>
#include "string_utils.h"  // 引入头文件

int main() {
    char str[100];
    
    printf("请输入一个字符串: ");
    fgets(str, sizeof(str), stdin);
    
    // 去掉换行符
    str[strcspn(str, "\n")] = 0;

    printf("你输入的字符串: %s\n", str);

    char reversed[100];
    reverseString(str, reversed);  // 调用反转字符串的函数

    printf("反转后的字符串: %s\n", reversed);

    return 0;
}
