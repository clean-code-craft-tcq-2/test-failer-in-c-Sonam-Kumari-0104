#define TEMP_THRESHOLD 200

extern int alertFailureCount;
int networkAlertStub(float celcius);
float farenheitToCelcius(float farenheit);
void alertInCelcius(float farenheit, int (*fnPtrForNetworkAlert)(float));
extern void test_tempAlertImpl(float fahrenheit);
