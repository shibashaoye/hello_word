#include <stdio.h>
#include <sys/time.h>

int main()
{
	int t;
	struct tm tm;
	
	scanf("%d", &t);
	gmtime_r(&t, &tm);
	
	printf("%d-%d-%d %d:%d:%d.\n", tm.tm_year, tm.tm_month, tm.tm_day, tm.tm_hour, tm.tm_min, tm.tm_sec);
	
	return 0;
}
