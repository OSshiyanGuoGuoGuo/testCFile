#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("������һ���ַ���: ");
    fgets(str, sizeof(str), stdin);
    
    // ȥ�����з�
    str[strcspn(str, "\n")] = 0;

    printf("��������ַ���: %s\n", str);

    // ��ת�ַ���
    int len = strlen(str);
    char reversed[100];
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0'; // ����ַ���������

    printf("��ת����ַ���: %s\n", reversed);

    return 0;
}
