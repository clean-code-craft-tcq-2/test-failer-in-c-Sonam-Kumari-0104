#define TEMP_THRESHOLD 200

int networkAlertStub(float celcius);
float farenheitToCelcius(float farenheit);
void alertInCelcius(float farenheit, int (*fnPtrForNetworkAlert)(float));
void test_tempAlertImpl(float fahrenheit);
