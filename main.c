//
// Created by Administrator on 2020/12/03.
//
// !!!charset encoding == "GBK";(sorry about that "UTF-8" made console Garbled code)
//
// C99 ��׼;
// ���뻷�� mingw-w64-8.1.0 i686 x86_64 posix dwarf
//


#include <stdio.h>
#include <windows.h>


/**
 * ����String����;
 * @param _String
 * @return
 */
int mystrlen(const char *_String);


/**
 * ����String����;
 * @param _String
 * @return
 */
int mystrlen(const char *_String)
{
    int i = 0;
    while ((*_String++) != '\0')
    {
        //�����ַ���������־'\0����ֹͣ����;
        i++;
    }
    return i;
}


int main()
{
    char* string = "Hello";
    int length = mystrlen(string);
    printf("\"%s\"\'s length is %d\n\n", string, length);
    system("pause");
    return 0;
}
