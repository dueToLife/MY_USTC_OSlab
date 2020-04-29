/*
*   kernel/lab_two.c
*
*   2020 Wu kepeng USTC PB18151858
*/


#include <asm/segment.h>

#define MY_TEN 10

int sys_print_val(int a){
    printk("in sys_print_val: %d\n", a);
    return 0;
}

int sys_str2num(char *str, int str_len, long *ret){
    int i;
    long sum = 0, interval = 1;
    if(str_len > 9){
        printk("in sys_str2num: overflow!\n");
        *ret = 0;
        return 0;
    }
    for(i = str_len - 1; i >= 0; i--){
        char c = get_fs_byte((const char *)&str[i]);
        sum = sum + (c - '0')* interval;
        interval = interval * MY_TEN;
    }
    put_fs_long((unsigned long)sum, (unsigned long *)ret);
    return 0;
}