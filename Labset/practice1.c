#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char *dayname;
    int date;
    char *activity;
}week;

void create(week *day)
{
    day->dayname=(char *)malloc(sizeof(char) *20);
    day->activity=(char *)malloc(sizeof(char)*100);

    printf("\n Enter The day Name");
    scanf("%s",day->dayname);

    printf("\n Enter the date:");
    scanf("%d",&day->date);

    printf("\n Enter the activity for the day:");
    scanf(" %[^\n]s",day->activity);
}

void read(week *calendar,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("\n Enter the details for day %d",i+1);
        create(&calendar[i]);
    }
}

void display(week *calendar,int size)
{
    int i;
    printf("\n Week activity details:\n");
    printf("-------------------------");
    printf("Dayno\t\t Dayname\t\t date\t\t activity");
    printf("----------------------");
    for(i=0;i<size;i++)
    {
        printf("%d\t\t",i+1);
        printf(" | %s |\t\t",calendar[i].dayname);
        printf(" | %d |\t\t",calendar[i].date);
        printf(" | %s |\t\t",calendar[i].activity);
        printf("\n");

    }
}

int main()
{
    int size;
    week *calendar;
    printf("\n Enter the number of days :");
    scanf("%d",&size);
    calendar=(week *)malloc(sizeof(week));
    if (calendar==NULL)
    {
        printf("\n Memoery allocation failed.Exiting program");
        return 1;

    }
    read(calendar,size);
    display(calendar,size);
    free(calendar);
    return 0;
}