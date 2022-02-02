#include <stdio.h>
#include <assert.h>
#include "tshirts_size.h"

char size(int cms) {
    char sizeName = '\0';
    if(cms > S_MINLIMIT && cms <= S_MAXLIMIT) {
        sizeName = 'S';
    } else if(cms > M_MINLIMIT && cms <= M_MAXLIMIT) {
        sizeName = 'M';
    } else if(cms > L_MINLIMIT && cms <= L_MINLIMIT) {
        sizeName = 'L';
    }
    return sizeName;
}

void testTshirtsSize(int sizeInCms, char sizeInChar) {
    assert(size(sizeInCms)==sizeInChar);
}

int main() {
    testTshirtsSize(37, 'S');
    testTshirtsSize(38, 'S');
    testTshirtsSize(40, 'M');
    testTshirtsSize(42, 'M');
    testTshirtsSize(43, 'L');
    printf("All is well (maybe!)\n");
    return 0;
}
