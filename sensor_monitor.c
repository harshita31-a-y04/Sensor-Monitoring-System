#include <stdio.h>

#define TEMP_MIN 0
#define TEMP_MAX 100

#define PRESSURE_MIN 10
#define PRESSURE_MAX 200

#define VOLTAGE_MIN 3
#define VOLTAGE_MAX 5

int validateTemperature(int temp)
{
    return (temp >= TEMP_MIN && temp <= TEMP_MAX);
}

int validatePressure(int pressure)
{
    return (pressure >= PRESSURE_MIN && pressure <= PRESSURE_MAX);
}

int validateVoltage(int voltage)
{
    return (voltage >= VOLTAGE_MIN && voltage <= VOLTAGE_MAX);
}

void checkSensorStatus(int temp, int pressure, int voltage)
{
    printf("\n===== SENSOR STATUS =====\n");

    if(validateTemperature(temp))
        printf("Temperature: %d°C -> OK\n", temp);
    else
        printf("Temperature: %d°C -> ALERT! Out of Range\n", temp);

    if(validatePressure(pressure))
        printf("Pressure: %d PSI -> OK\n", pressure);
    else
        printf("Pressure: %d PSI -> ALERT! Out of Range\n", pressure);

    if(validateVoltage(voltage))
        printf("Voltage: %d V -> OK\n", voltage);
    else
        printf("Voltage: %d V -> ALERT! Out of Range\n", voltage);
}

int main()
{
    int temperature;
    int pressure;
    int voltage;

    printf("===== SENSOR MONITORING SYSTEM =====\n");

    printf("Enter Temperature (0-100): ");
    scanf("%d", &temperature);

    printf("Enter Pressure (10-200): ");
    scanf("%d", &pressure);

    printf("Enter Voltage (3-5): ");
    scanf("%d", &voltage);

    checkSensorStatus(temperature, pressure, voltage);

    return 0;
}