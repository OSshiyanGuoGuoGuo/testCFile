#include <string.h>
#include "string_utils.h"  // ����ͷ�ļ�

// ��ת�ַ����ĺ���
void reverseString(const char *str, char *reversed) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0'; // ����ַ���������
}
