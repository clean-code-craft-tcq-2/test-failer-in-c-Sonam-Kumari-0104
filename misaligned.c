#include <stdio.h>
#include <assert.h>
#include <string.h>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

typedef struct {
     int pairNumber;
     char majorColor[8];
     char minorColor[8];
}colorPair;

colorPair testPrintcolorMapOnConsole() {
     colorPair colorMap;
     for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
             colorMap.pairNumber = i * 5 + j;
             colorMap.majorColor[i * 5 + j] = majorColor[i];
             colorMap.majorColor[i * 5 + j] = minorColor[j];
        }
    }
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
    colorPair c1[25];
    c1 = testPrintcolorMapOnConsole();
    assert(c1.pairNumber == 25);
    assert(strcmp(c1.majorColor[4], majorColor[4]));
    assert(strcmp(c1.minorColor[4], minorColor[4]));
    printf("All is well (maybe!)\n");
    return 0;
}
