typedef struct {
     int pairNumber;
     char majorColor[8];
     char minorColor[8];
}colorPair;

colorPair testPrintcolorMapOnConsole(int pno, const char *majorCol, const char *minorCol);
void printColorMapOnConsole(int majorColorIndex, int minorColorIndex);
int printColorMap();
