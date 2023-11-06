#include<stdio.h>

int main (){
    int i, int_arr1[10];

    for (i = 0; i < 10; i++) {
        int_arr1[i] = i;
    }
    for (i = 0; i < 10; i++) {
        printf ("%d\n", int_arr1[i]);
    }

}