#include "tempAlerter.h"

int networkAlertStub(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    if ( celcius <= TEMP_THRESHOLD )
    {
        return 200;
    }
    else 
    {
        failureCounter++;
        return 500;
    }
}

void test_tempAlertImpl(float fahrenheit) {
  alertInCelcius(fahrenheit, networkAlertStub);
  assert(alertFailureCount==failureCounter);
}
