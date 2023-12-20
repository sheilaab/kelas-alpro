#include<stdio.h>
#define SIZE 100

size_t linearSearch(const int array[], int key, size_t size);

int main(void){
    int a[SIZE];

    for (size_t x = 0; x < SIZE; ++x){
        a[x] = 2 * x + 1;
    }

    printf("Enter integer search key: ");
    int searchKEy;
    scanf("%d", &searchKEy);

    size_t index = linearSearch(a, searchKEy, SIZE);

    if (index != -1){
        printf("Found value at index %d\n", index);
    }
    else{
        puts("Value not found");
    }

}

    size_t linearSearch(const int array[], int key, size_t size){
        for (size_t n = 0; n < size; ++n){
            if (array[n] == key){
                return n;
            }
        }
        return -1;
    }