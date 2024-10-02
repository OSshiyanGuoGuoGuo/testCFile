#include <string.h>
#include "string_utils.h"  // 引入头文件

// 反转字符串的函数
void reverseString(const char *str, char *reversed) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0'; // 添加字符串结束符
}
