#include <stdio.h>
#include <assert.h>

float farenheitToCelcius(float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    return celcius;
}

void alertInCelcius(float farenheit, int (*fnPtrForNetworkAlert(float))) {
    float celcius = farenheitToCelcius(farenheit);
    int returnCode = (*fnPtrForNetworkAlert)(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount +=1;
    }
}

int main() {
    alertInCelcius(400.5);
    test_tempAlertImpl(400.5);
    alertInCelcius(303.6);
    alertInCelcius(600);
    assert(alertFailureCount==failureCounter);
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well (maybe!)\n");
    return 0;
}
