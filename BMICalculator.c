#include <stdio.h>
#include <math.h>

int main()
{
    printf("Choose your measurement system (Imperial =  I, Metric = M): ");
    char Answer;
    double HeightFeet, HeightInches, WeightPounds, HeightTotalInches, HeightCentimeters, HeightMeters, WeightKilograms, BMI;
    scanf("%c", &Answer);
    if(Answer == 'M'||Answer =='m')
    {
        printf("Enter the following Metrics (Height in cm, Weight in kg):\n");
        printf("Height (cm):");
        scanf("%lf", &HeightCentimeters);
        printf("Weight (kg):");
        scanf("%lf", &WeightKilograms);
	HeightMeters = HeightCentimeters/100;
        BMI = WeightKilograms/pow(HeightMeters,2);
        printf("\nYour BMI: %.1f\n", BMI);
    }
    else if(Answer == 'I'||Answer == 'i')
    {
        printf("Enter the following Metrics (Height in ft/in, Weight in lbs):\n");
	printf("Height (ft):");
        scanf("%lf", &HeightFeet);
        printf("Height (in):");
        scanf("%lf", &HeightInches);
	printf("Weight (lb):");
	scanf("%lf", &WeightPounds);
	HeightTotalInches = (HeightFeet*12)+HeightInches;
	BMI = 703*(WeightPounds/pow(HeightTotalInches,2));
        printf("\nYour BMI: %.1f\n", BMI);
	
    }
    else
    {
	printf("Invalid Response.\n");
    }
}

