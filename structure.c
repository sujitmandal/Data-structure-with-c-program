/* write c program structure*/
#include<stdio.h>

/* This program created by Sujit Mandal */

struct student
{
	char Name[20],country[30],state[30],city[30],gender[5];
	long long int Phone;
	int day, month, year, pin;
};

int main()
{
   struct student std;

    printf("Entre full name: ");
    gets(std.Name);
    printf("Entre counrty: ");
    gets(std.country);
    printf("Entre state: ");
    gets(std.state);
    printf("Entre city: ");
    gets(std.city);
    printf("Entre pin code: ");
    scanf("%d",&std.pin);
    printf("Entre phone number: ");
    scanf("%lld",&std.Phone);
    printf("Entre date of day: ");
    scanf("%d",&std.day);
    printf("Enter date of month: ");
    scanf("%d",&std.month);
    printf("Entre date of year: ");
    scanf("%d",&std.year);
    printf("Entre gender: ");
    scanf("%s",&std.gender);


    printf("\n\nName is: %s",std.Name);
     printf("\nCountry is: %s",std.country);
    printf("\nState is: %s",std.state);
    printf("\nCity is: %s",std.city);
    printf("\nPin code is: %d",std.pin);
    printf("\nPhone number is: %lld",std.Phone);
    printf("\nDate of birth: %d-%d-%d",std.day,std.month,std.year);
    printf("\nGender is: %s",std.gender);


    printf("\n\n------------------------------------------");
   return 0;

}

