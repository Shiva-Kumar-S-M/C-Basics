#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
    char *dayName;
    int date;
    char *activity;
}week;
void create (week *day)
{
    day->dayName = (char *)malloc(sizeof(char)*20);
    day->activity=(char *)malloc(sizeof(char)*100);

    printf("Enter the day name:");
    scanf("%s",day->dayName);

    printf("Enter the Date:");
    scanf("%d",&day->date);

    printf("Enter the activity for the Day :");
    scanf(" %[^\n]",day->activity);
}

void read(week *calendar, int size)
{
    int i;
    for(i-=0;i<size;i++){
        printf("Enter details for the day %d:\n",i+1);
        create(&calendar[i]);
    }
}

void display(week *calendar , int size)
{
    int i;
    printf("\n Weeks Activity details:\n");
    printf("--------------------------\n");
    printf("Dayno\t \t Dayname\t\tDate\t\tActivity\n");
    printf("--------------------------\n");
    for(i=0;i<size;i++)
    {
        
    }


}