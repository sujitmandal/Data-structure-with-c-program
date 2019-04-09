/* write c program nested structure*/
#include<stdio.h>

/* This program created by Sujit Mandal */

struct student_collage_ditals
{
    char name[50], addres[50];

};
struct student_ditals
{
    char Name[20],country[30],state[30],city[30],gender[5];
	long long int Phone;
	int day, month, year, pin;
};
int main()
{
   struct student_collage_ditals clg_data;
   struct student_ditals std_data;
    printf("Entre full name: ");
    gets(std_data.Name);
    printf("Entre counrty: ");
    gets(std_data.country);
    printf("Entre state: ");
    gets(std_data.state);
    printf("Entre city: ");
    gets(std_data.city);
    printf("Entre pin code: ");
    scanf("%d",&std_data.pin);
    printf("Entre phone number: ");
    scanf("%lld",&std_data.Phone);
    printf("Entre date of day: ");
    scanf("%d",&std_data.day);
    printf("Enter date of month: ");
    scanf("%d",&std_data.month);
    printf("Entre date of year: ");
    scanf("%d",&std_data.year);
    printf("Entre gender: ");
    scanf("%s",&std_data.gender);
    printf("Enter collage name: ");
    scanf("%s",&clg_data.name);
    printf("Enetr collage adrress: ");
    scanf("%s",&clg_data.addres);


    printf("\n\nName is: %s",std_data.Name);
    printf("\nCountry is: %s",std_data.country);
    printf("\nState is: %s",std_data.state);
    printf("\nCity is: %s",std_data.city);
    printf("\nPin code is: %d",std_data.pin);
    printf("\nPhone number is: %lld",std_data.Phone);
    printf("\nDate of birth: %d-%d-%d",std_data.day,std_data.month,std_data.year);
    printf("\nGender is: %s",std_data.gender);
    printf("\nCollage name: %s",clg_data.name);
    printf("\nCollage address: %s",clg_data.addres);


    printf("\n\n------------------------------------------");
   return 0;
}

