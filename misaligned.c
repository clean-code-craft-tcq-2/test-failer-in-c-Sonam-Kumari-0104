#include <stdio.h>
#include <assert.h>
#include <string.h>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

typedef struct {
     int pairNumber;
     const char* majorColor[8];
     const char* minorColor[8];
}colorPair;

colorPair testPrintcolorMapOnConsole(int pno, const char* majorCol, const char* minorCol) {
     colorPair colorMap;
     colorMap.pairNumber = pno;
     colorMap.majorColor[pno] = majorCol;
     colorMap.minorColor[pno] = minorCol;
    return colorMap;
}

void printColorMapOnConsole(int majorColorIndex, int minorColorIndex) {
    printf("%d | %s | %s\n", majorColorIndex * 5 + minorColorIndex, majorColor[majorColorIndex], minorColor[majorColorIndex]);
}

int printColorMap() {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printColorMapOnConsole(i, j);           
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    colorPair c1;
    c1 = testPrintcolorMapOnConsole(16, "Yellow", "Orange");
    assert(c1.pairNumber[16] == 16);
    assert(strcmp(c1.majorColor[16], "Yellow")==0);
    assert(strcmp(c1.minorColor[16], "Orange")==0);    
    printf("All is well (maybe!)\n");
    return 0;
}
