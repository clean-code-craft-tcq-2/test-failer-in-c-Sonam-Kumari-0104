#include <stdio.h>
#include <assert.h>
#include "tempAlerter.h"

static int failureCounter = 0;

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

int main() {
    test_tempAlertImpl(400.5);
    test_tempAlertImpl(303.6);
    test_tempAlertImpl(600);
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well (maybe!)\n");
    return 0;
}
