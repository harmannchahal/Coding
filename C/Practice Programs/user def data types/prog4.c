// ----------- QUESTION -----------                        | ----------- SAMPLE OUTPUT -----------
// Medical Equipment Risk Analysis                         |
//                                                         | Enter Device ID: 101
// Device contains:                                        | Enter Device Name: Portable ECG
// - Device ID                                             | Enter Battery Level (%): 15
// - Device Name                                           | Enter Usage Hours: 1200
// - Battery Level                                         | Enter Calibration Error (%): 6
// - Usage Hours                                           |
// - Calibration Error (%)                                 | ----- Device Analysis Report -----
//                                                         |
// Tasks:                                                  | Device ID: 101
// 1. Define structure Device                              | Device Name: Portable ECG
// 2. Read device details                                  | Battery Level: 15%
// 3. Pass structure to function                           | Usage Hours: 1200
// 4. If battery < 20 → Low Battery                        | Calibration Error: 6.00%
// 5. If usage > 1000 → Service Due                        |
// 6. If calibration > 5 → Calibration Required            | Risk Score: 235.00
// 7. If none true → Device Safe                           |
// 8. Compute:                                             | Status:
//    risk = (100 - battery) + (usage/10) + (calib×5)      | - Low Battery
// 9. Display details + risk + status                      | - Service Due
//                                                         | - Calibration Required


#include<stdio.h>
#include<string.h>

struct device
{
    int id,level;
    float calib,hours;
    char  name[20];
};

void analyzeDevice(struct device d)
{
    float risk_score;

    risk_score = (100 - d.level) + (d.hours / 10) + (d.calib * 5) ;
    printf("\nRisk Score: %.2f\n",risk_score);

    printf("\nStatus : \n");
    if(d.level<20)
        printf("Low Battery\n");
    
    if(d.hours>1000)
        printf("Service due\n");
    
    if(d.calib>5)
        printf("Calibration required\n");

    if(d.level>=20 && d.hours<=1000 && d.calib<=5)
        printf("Device Safe");

};

int main()
{
    struct device d;
    printf("Enter Device ID: ");
    scanf("%d",&d.id);
    printf("Enter Device Name: ");
    scanf(" %[^\n]",&d.name);
    printf("Enter Battery Level (%%): ");
    scanf("%d",&d.level);
    printf("Enter Usage Hours: ");
    scanf("%f",&d.hours);
    printf("Enter Calibration Error (%%): ");
    scanf("%f",&d.calib);

    printf("\n----- Device Analysis Report -----\n");

    printf("Device ID: %d\n",d.id);
    printf("Device Name:  %s\n",d.name);
    printf("Battery Level: %d%%\n",d.level);
    printf("Usage Hours: %.2f\n",d.hours);
    printf("Calibration Error: %.2f%%\n",d.calib);

    analyzeDevice(d);

    return 0;
}