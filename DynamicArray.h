#include "number.h"

class DynamicArray {
    number* innerarray = new number[4];
    int filledlength = 0;
    int allocatedlength = 4;

    void PushBack(number n) {
        if (filledlength < allocatedlength) {
            innerarray[filledlength] = n;
        } else {

        }
    }
}