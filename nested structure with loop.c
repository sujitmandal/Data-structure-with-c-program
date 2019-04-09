/* write c program for nested structure */
#include<stdio.h>
#include<string.h>

/* This program created by Sujit Mandal */

typedef struct clg_add
{
	int pin = 753845;
	char state[50] = "WB";
	char city[50] = "SLG";
	char area[50]= "SUKNA";
};
typedef struct student_collage_ditals
{
	clg_add c_a;
    char name[50] = "SIT";
    char addres[50] = "SEN PARA";
};
typedef struct student_ditals
{
	student_collage_ditals scd;
    char Name[20] = "SUJIT MANDAL" ;
    char country[30] = "INDIA";
    char state[30] = "WB";
	long long int Phone = 1234567890;
	int  pin = 735101;
};
int main()
{
    student_ditals std_data, std_data2[5];
	int i;

    printf("Name is: %s",std_data.Name);
    printf("\nState is: %s",std_data.state);
    printf("\nCountry is: %s",std_data.country);
    printf("\nPin code is: %d",std_data.pin);
    printf("\nPhone number is: %lld",std_data.Phone);
    printf("\nCollage name: %s",std_data.scd.name);
    printf("\nCollage address: %s",std_data.scd.addres);
	printf("\nCollage state: %s",std_data.scd.c_a.state);
	printf("\nCollage city: %s",std_data.scd.c_a.city);
	printf("\nCollage area: %s",std_data.scd.c_a.area);
	printf("\nCollage pin: %d",std_data.scd.c_a.pin);


	for(i=0;i<5;i++)
	{
	printf("\n\nEntre full name: ");
    gets(std_data2[i].Name);
    printf("Entre state: ");
    gets(std_data2[i].state);
    printf("Entre counrty: ");
    gets(std_data2[i].country);
    printf("Entre pin code: ");
    scanf("%d",&std_data2[i].pin);
    printf("Entre phone number: ");
    scanf("%lld",&std_data2[i].Phone);
    printf("Enter collage name: ");
    scanf("%s",&std_data2[i].scd.name);
    fflush(stdin);
    printf("Enetr collage adrress: ");
    scanf("%s",&std_data2[i].scd.addres);
    printf("Collage state: ");
    scanf("%s",&std_data2[i].scd.c_a.state);
	printf("Collage city: ");
	scanf("%s",&std_data2[i].scd.c_a.city);
	printf("Collage area: ");
    scanf("%s",&std_data2[i].scd.c_a.area);
	printf("Collage pin: ");
	scanf("%d",&std_data2[i].scd.c_a.pin);


    printf("\n\nName is: %s",std_data2[i].Name);
    printf("\nState is: %s",std_data2[i].state);
    printf("\nCountry is: %s",std_data2[i].country);
    printf("\nPin code is: %d",std_data2[i].pin);
    printf("\nPhone number is: %lld",std_data2[i].Phone);
fflush(stdin);
    printf("\nCollage name: %s",std_data2[i].scd.name);
fflush(stdin);
    printf("\nCollage address: %s",std_data2[i].scd.addres);
fflush(stdin);
	printf("\nCollage state: %s",std_data2[i].scd.c_a.state);
	printf("\nCollage city: %s",std_data2[i].scd.c_a.city);
fflush(stdin);
	printf("\nCollage area: %s",std_data2[i].scd.c_a.area);
fflush(stdin);
	printf("\nCollage pin: %d",std_data2[i].scd.c_a.pin);

	}
   return 0;
}

