#define __LIBRARY__

#include <unistd.h>
#include <stdio.h>
#include <string.h>

_syscall1(int, print_val, int, a);
_syscall3(int, str2num, char*, str, int, str_len, long*, ret);

#define MAX_LEN 9
int main(){
    char str[MAX_LEN] = {};
    long ret;
    int str_len;
    printf("Give me a string:\n");
    scanf("%s", str);
    str_len = strlen(str);
    printf("str_len = %d\n", str_len);
    str2num(str, str_len, &ret);
    printf("str2num finish!\n ret = %ld\n", ret);
    print_val((int)ret);
    return 0;
}


