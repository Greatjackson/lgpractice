#include <stdio.h>
int main(int argc, const char *argv[])
{
    int hour = 7;
    int minute = 45;
//    int total_minute; 
//    total_minute = hour * 60 + minute;
//    printf("%d:%d is %d minute after 00:00\n",hour, minute, total_minute);
    printf("%d:%d is %d minute after 00:00\n",hour, minute, hour * 60 + minute);
    return 0;
}
