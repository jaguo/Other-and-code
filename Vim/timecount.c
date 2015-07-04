#include <stdio.h>
#include <time.h>

int leapyear(int year);

int main()
{
	int month[2][12]={
		{31,28,31,30,31,30,31,31,30,31,30,31},
		{31,29,31,30,31,30,31,31,30,31,30,31}
	};
	struct tm *ptr;
	time_t t;
	int N_year,N_month,N_day,S_year,S_month,S_day;
	int Countday,i,ok;
	t=time(NULL);
	ptr=localtime(&t);
	S_year=2014;
	S_month=11;
	S_day=1;
	N_year=ptr->tm_year+1900;
	N_month=ptr->tm_mon+1;
	N_day=ptr->tm_mday;
	ok=leapyear(S_year);
	Countday=0;
	for(i=S_day;i<=month[ok][S_month-1];i++)
		Countday++;
	for(i=S_month;i<12;i++)
		Countday+=month[ok][i];
	for(i=S_year+1;i<N_year;i++)
		if(leapyear(i))
			Countday+=366;
		else
			Countday+=365;
	ok=leapyear(N_year);
	for(i=0;i<N_month-1;i++)
		Countday+=month[ok][i];
	Countday+=N_day;
	printf("%d\n",Countday);
	return 0;
}

int leapyear(int year)
{
	if((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))
		return 1;
	else 
		return 0;
}
