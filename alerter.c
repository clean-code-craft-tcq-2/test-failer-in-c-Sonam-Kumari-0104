#include <stdio.h>
#include <assert.h>

#define TEMP_THRESHOLD 200
int alertFailureCount = 0;
int alertCounter = 0;

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
        return 500;
        alertCounter += 1;
    }
}

float farenheitToCelcius(float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    return celcius;
}

void alertInCelcius(float farenheit) {
    float celcius = farenheitToCelcius(farenheit);
    int returnCode = networkAlertStub(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
    }
}

int main() {
    alertInCelcius(400.5);
    alertInCelcius(303.6);
    alertInCelcius(600);
    assert(alertFailureCount==alertCounter);
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well (maybe!)\n");
    return 0;
}
