#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
bool temperratureIsOk(float temperature){
  if(temperature < 0 || temperature > 45){
    printf("Temperature out of range!\n");
    return 0;
  }
  return 1;
}
bool SocIsOk(float soc){
if(soc < 20 || soc > 80) {
    printf("State of Charge out of range!\n");
    return 0;
  }
  return 1;
}
bool ChargeRateIsOk(float chargeRate){
if(chargeRate > 0.8) {
    printf("Charge Rate out of range!\n");
    return 0;
  }
  return 1;
}

bool batteryIsOk(float temperature, float soc, float chargeRate) {
  return temperratureIsOk(temperature) && SocIsOk(soc) && ChargeRateIsOk(chargeRate);
}
int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
