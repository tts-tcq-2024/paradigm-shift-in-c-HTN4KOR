#include <stdio.h>
#include <assert.h>
 
 
// Pure function to check temperature
int isValidTemperature(float temperature) {
    return (temperature >= 0) && (temperature <= 45);
}
