#include <stdlib.h>
#include <stdio.h>
//回调函数
void populate_array(int *array, size_t size, int (*getNextValue)(void)){
    for(int i = 0; i < size; i++) {
        array[i] = getNextValue();
    }
}

int getNextValue(void) {
    return rand();
}

int main() {

    int myarray[10];
    populate_array(myarray, 10, getNextValue);
    for(int i = 0; i < 10; i++) {
        printf("%d \n", myarray[i]);
    }
    return 0;
}
