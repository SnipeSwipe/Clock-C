#include <stdio.h>
#include <time.h>

int hr, mn, b=0;

void showtime()
{

    time_t rawtime;
    struct tm* time_;

    time(&rawtime);
    time_=localtime(&rawtime);
	if(b==1)
	{
		if(hr==time_->tm_hour && mn==time_->tm_min)
		{
			printf("ALARM");
			system("open -a VOX Alarm_Tune.mp3"); //This line works for MAC OS only. Check the line how to run a mp3 file in your OS and replace it
			exit(0);
		}
	}
	printf("%d/%d/%d %d:%d:%d\n", time_->tm_mday, time_->tm_mon+1, time_->tm_year+1900, time_->tm_hour, time_->tm_min, time_->tm_sec);
}


int main(int argc, char *argv[])
{
	int a;
	printf("Do you want to add an alarm? ");
	scanf("%d", &b);
	if(b==1)
	{
		printf("Enter the Hour and Minutes\n");
		scanf("%d:%d", &hr, &mn);
	}

	a=0;
	while(a!=1)
	{
		showtime();
		sleep(1);
		system("clear"); //This command is system("cls"); for Windows
	}
}
