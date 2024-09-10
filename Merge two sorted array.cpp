#include <stdio.h>

int main() {

    int arr1[] = {1, 3, 5, 7}; 
    int arr2[] = {2, 4, 6, 8};

    int size1 =4 ;
    int size2 = 4;
    int result[size1 + size2]; 

    int i = 0; 
    int j = 0; 
    int k = 0; 

    
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        result[k++] = arr1[i++];
    }

    while (j < size2) {
        result[k++] = arr2[j++];
    }

     printf("Merged sorted array:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
