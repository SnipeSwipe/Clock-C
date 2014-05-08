#include <stdio.h>
#include <time.h>

void showtime()
{
    time_t rawtim;
    struct tm*  time_;

    time(&rawtim);
    time_ = localtime(&rawtim);

    printf("%i/%i/%i %i:%i:%i\n", time_->tm_mday, time_->tm_mon+1, time_->tm_year+1900, time_->tm_hour, time_->tm_min, time_->tm_sec);
}


int main(int argc, char *argv[])
{
	int a;
	a=0;
	while(a!=1)
	{
		showtime();
		sleep(1);
		system("clear"); //This command is system("cls"); for Windows
	}
}