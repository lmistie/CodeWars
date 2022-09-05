#include <stdio.h>
#include <time.h>

char *count_days (char *output, const struct tm *date) {
    time_t now = time(NULL);
    time_t then = mktime(date);
    double diff = difftime(then, now);
    int days = (int)diff / (60 * 60 * 24);
    sprintf(output, "%d days", days);
    if (days < 0) {
        sprintf(output, "The day is in the past!");
    } 
    if (days == 0) {
        sprintf(output, "Today is the day!");
    }
    if (days == 1) {
        sprintf(output, "Tomorrow is the day!");
    }
    if (days == -1) {
        sprintf(output, "The day is in the past!");
    }
    return output;
}

int main()
{
    struct tm date;
    char output[100];
    date.tm_year = 2000 - 1900;
    date.tm_mon = 3;
    date.tm_mday = 15;
    date.tm_hour = 17;
    date.tm_wday = 6;
    printf("%s", "Test = ");
    printf("%s\n", count_days(output, &date));
}