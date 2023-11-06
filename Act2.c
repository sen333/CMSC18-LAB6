#include<stdio.h>

int main (){
    int i, int_arr1[10];
    int j, arr2[10];

    for (i = 0; i < 10; i++)
     {
        int_arr1[i] = i;
     }
    for (i = 0; i < 10; i++) {
        printf ("%d\n", int_arr1[i]);
    }
    for (j = 0; j < 10; j++){
        arr2[j] = int_arr1[i] + 10;
        printf ("%d\n", arr2[j]);
}
}