#include <stdio.h>
#include <assert.h>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

typedef Struct {
     int pairNumber;
     char majorColor;
     char minorColor;
}colorPair;

colorPair testPrintcolorMapOnConsole() {
     for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
             pairNumber = i * 5 + j;
             colorPair.majorColor[i * 5 + j] = majorColor[i];
             colorPair.majorColor[i * 5 + j] = minorColor[j];
        }
    }
    return colorPair;
}

void printColorMapOnConsole(int majorColorIndex, int minorColorIndex) {
    printf("%d | %s | %s\n", majorColorIndex * 5 + minorColorIndex, majorColor[majorColorIndex], minorColor[majorColorIndex]);
}

int printColorMap() {
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printOnConsole(i, j);           
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
    assert
    printf("All is well (maybe!)\n");
    return 0;
}
