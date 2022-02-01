#define TEMP_THRESHOLD 200
int alertFailureCount = 0;
static int failureCounter = 0;

int networkAlertStub(float celcius);
float farenheitToCelcius(float farenheit);
void alertInCelcius(float farenheit, int (*fnPtrForNetworkAlert(float)));
void test_tempAlertImpl(float fahrenheit);
