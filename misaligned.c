#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "misaligned.h"

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

colorPair testPrintcolorMapOnConsole(int pno, const char *majorCol, const char *minorCol) {
     colorPair colorMap;
     colorMap.pairNumber = pno;
     strcpy(colorMap.majorColor, majorCol);
     strcpy(colorMap.minorColor, minorCol);
    return colorMap;
}

void printColorMapOnConsole(int majorColorIndex, int minorColorIndex) {
    printf("%d | %s | %s\n", majorColorIndex * 5 + minorColorIndex, majorColor[majorColorIndex], minorColor[minorColorIndex]);
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
    int majorColorIdx = 3;
    int minorColorIdx = 4;
    assert(result == 25);
    colorPair c1;
    c1 = testPrintcolorMapOnConsole(majorColorIdx * 5 + minorColorIdx, majorColor[majorColorIdx], minorColor[minorColorIdx]);
    assert(c1.pairNumber == 19);
    assert(strcmp(c1.majorColor, "Yellow")==0);
    assert(strcmp(c1.minorColor, "Slate")==0);    
    printf("All is well (maybe!)\n");
    return 0;
}
