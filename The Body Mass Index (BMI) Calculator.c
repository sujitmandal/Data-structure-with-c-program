/* write c program for The Body Mass Index (BMI) Calculator. */
#include <stdio.h>

/* This program created by Sujit Mandal */

void height_in_inc();
void height_in_cm();
void height_in_meter();
void weight_in_kg();
void weight_in_pound();
void body_mass_index();
void body_mass_index_in_meter();

float height, weight, bmi;
int main()
{
    int choice;
    printf("The Body Mass Index (BMI) Calculator.");
    do
    {
        printf("\n1. Height in Feet And Inch(IN).");
        printf("\n2. Height in Centimeter(CM).");
        printf("\n3. Height in Meter(M).");
        printf("\n4. Exit.");

        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                height_in_inc();
                break;
            case 2:
                height_in_cm();
                break;
            case 3:
                height_in_meter();
                break;
            case 4:
                exit(1);
            default:
                printf("\nInvalid choice!\n");
        }
    }while(1);
    return(0);
}
void height_in_inc()
{
    int feet, inch;
    printf("Enter Height in Feet: ");
    scanf("%d",&feet);
    printf("Enter Height in inch: ");
    scanf("%d",&inch);

    height = ((feet * 12) + (inch * 1.2));

    printf("Height: %.3f inch\n",height);
    weight_in_pound();
    body_mass_index();
    return(height);
}
void height_in_cm()
{
    float centimeter;
    printf("Enter Height in Centimeter(CM): ");
    scanf("%f",&centimeter);

    height = (centimeter * 0.393701);
    printf("Height: %.3f inch\n",height);
    weight_in_pound();
    body_mass_index();
    return(height);
}
void height_in_meter()
{
    printf("Enter Height in Meter(M): ");
    scanf("%f",&height);

    printf("Height: %.3f Meter\n",height);
    weight_in_kg();
    body_mass_index_in_meter();
    return(height);
}
void weight_in_kg()
{
    printf("Enter Weight: ");
    scanf("%f",&weight);

    printf("Weight: %.2f kg",weight);
    return(weight);
}
void weight_in_pound()
{
    printf("Enter Weight: ");
    scanf("%f",&weight);

    weight = (weight * 2.20462);
    printf("Weight: %f pounds",weight);
    return(weight);
}
void body_mass_index()
{
    bmi = (703 * (weight / (height * height)));

    printf("\n\nThe Body Mass Index (BMI) is: %.1f kg/m^2\n",bmi);

    if(bmi < 16)
        printf("\nSevere Thinness.\n");
    else if(bmi >= 16 && bmi < 17)
        printf("\nModerate Thinness.\n");
    else if(bmi >= 17 && bmi < 18.5)
        printf("\nMild Thinness.\n");
    else if(bmi >= 18.5 && bmi < 25)
        printf("\nNormal.\n");
    else if(bmi >= 25 && bmi < 30)
        printf("\nOverweight.\n");
    else if(bmi >= 30 && bmi < 35)
        printf("\nObese Class I\n");
    else if(bmi >= 35 && bmi <= 40)
        printf("\nObese Class II\n");
    else
        printf("\nObese Class III\n");
    return(bmi);
}
void body_mass_index_in_meter()
{
    bmi = (weight / (height * height));

    printf("\n\nThe Body Mass Index (BMI) is: %.1f kg/m^2\n",bmi);

    if(bmi < 16)
        printf("\nSevere Thinness.\n");
    else if(bmi >= 16 && bmi < 17)
        printf("\nModerate Thinness.\n");
    else if(bmi >= 17 && bmi < 18.5)
        printf("\nMild Thinness.\n");
    else if(bmi >= 18.5 && bmi < 25)
        printf("\nNormal.\n");
    else if(bmi >= 25 && bmi < 30)
        printf("\nOverweight.\n");
    else if(bmi >= 30 && bmi < 35)
        printf("\nObese Class I\n");
    else if(bmi >= 35 && bmi <= 40)
        printf("\nObese Class II\n");
    else
        printf("\nObese Class III\n");
    return(bmi);
}

