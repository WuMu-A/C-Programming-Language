#include <stdio.h>
int main()
{
    int c;
    while ((c = getchar()) != EOF) {                      /*�ж������ַ��Ƿ�Ϊ�ļ�������*/
        if (c == '\t')                                 /*��������ַ�Ϊ�Ʊ��*/
            printf("\\t");                           /*��ӡ���\t */
        if (c == '\b')                                 /*��������ַ�Ϊ�˸��*/
            printf("\\b");                           /*��ӡ���\b */
        if (c == '\\')                                 /*��������ַ�Ϊ��б��*/
            printf("\\\\");                          /*��ӡ���\\ */
        else
            putchar(c);
    }
}
