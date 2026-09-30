// ----------- QUESTION -----------                        | ----------- SAMPLE OUTPUT -----------
// Space Mission Payload Monitoring                        |
//                                                         | Enter Payload ID: 101
// Payload contains:                                       | Enter Payload Name: ThermalCam
// - Payload ID                                            | Enter Weight (kg): 650
// - Payload Name                                          | Enter Power Consumption (watts): 1200
// - Weight                                                | Enter Sensor Type: Infrared
// - Power Consumption                                     | Enter Operating Temperature (°C): 80
//                                                         | Enter Health Status Score (0-100): 55
// Nested Structure:                                       |
// - Sensor Type                                           |
// - Operating Temperature                                 | ----- Payload Report -----
// - Health Status Score                                   |
//                                                         | Payload ID: 101
// Tasks:                                                  | Payload Name: ThermalCam
// 1. Define SensorModule structure                        | Weight: 650 kg
// 2. Define Payload with nested SensorModule              | Power Consumption: 1200 watts
// 3. Read payload details                                 | Sensor Type: Infrared
// 4. If weight > 500 → Heavy Payload                      | Operating Temperature: 80 °C
// 5. If power > 1000 → High Power Consumption             | Health Status Score: 55
// 6. If health < 60 OR temp > 75 → Maintenance Required   |
// 7. Display full report + status                         | Status:
//                                                         | Heavy Payload
//                                                         | High Power Consumption
//                                                         | Maintenance Required


#include<stdio.h>
#include<string.h>
struct SensorModule
{
    char sentype[20];
    float temp;
    int healthscore;
};
struct PayLoad
{
    int id;
    char name[20];
    float wt,power;
    struct SensorModule s;
};

int main()
{
    struct PayLoad p;
    printf("Payload ID: ");
    scanf("%d",&p.id);
    printf("PAyload name : ");
    scanf(" %[^\n]",&p.name);
    printf("Weight : ");
    scanf("%f",&p.wt);
    printf("power consumption : ");
    scanf("%f",&p.power);
    printf("Sensor Type :  ");
    scanf(" %[^\n]",&p.s.sentype);
    printf("operating temp : ");
    scanf("%f",&p.s.temp);
    printf("Health Status Score : ");
    scanf("%d",&p.s.healthscore);

    printf("\n----- Payload Report -----\n\n");
    printf("Payload ID: %d \n",p.id);
    printf("Payload Name: %s\n",p.name);
    printf("Weight: %.2f \n",p.wt);
    printf("Power Consumption: %.2f\n",p.power);
    printf("Sensor Type: %s \n",p.s.sentype);
    printf("Operating Temperature: %.2f\n",p.s.temp);
    printf("Health Status Score: %d \n",p.s.healthscore);

    printf("\nStatus : \n");

    if(p.wt>500)
        printf("heavy payload\n");
    
    if(p.power>1000)
        printf("High Power Consumption\n");

    if(p.s.healthscore<60 || p.s.temp>75)
        printf("maintenance required\n");


    return 0;
}