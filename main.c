#include <stdlib.h>

int main (void) {
    HugeInsignedInt* hugeNumber = createHugeUnsignedFromString("123456789012345678901234567890");
    printHugeUnsignedInt(hugeNumber);
    hugeNumber = createHugeUnsignedIntFro├▒String("000000012345678901234567890");
    printHugeUnsignedInt(hugeNumber);
}
