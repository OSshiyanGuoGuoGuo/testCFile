#include <stdio.h>
#include <string.h>
#include "string_utils.h"  // ����ͷ�ļ�

int main() {
    char str[100];
    
    printf("������һ���ַ���: ");
    fgets(str, sizeof(str), stdin);
    
    // ȥ�����з�
    str[strcspn(str, "\n")] = 0;

    printf("��������ַ���: %s\n", str);

    char reversed[100];
    reverseString(str, reversed);  // ���÷�ת�ַ����ĺ���

    printf("��ת����ַ���: %s\n", reversed);

    return 0;
}
