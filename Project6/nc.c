#include <stdio.h>
int main()
{
    int c;
    while ((c = getchar()) != EOF) {                      /*判断输入字符是否为文件结束符*/
        if (c == '\t')                                 /*如果输入字符为制表符*/
            printf("\\t");                           /*打印输出\t */
        if (c == '\b')                                 /*如果输入字符为退格符*/
            printf("\\b");                           /*打印输出\b */
        if (c == '\\')                                 /*如果输入字符为反斜杠*/
            printf("\\\\");                          /*打印输出\\ */
        else
            putchar(c);
    }
}
