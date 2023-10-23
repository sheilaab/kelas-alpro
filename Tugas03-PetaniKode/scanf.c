#include<stdio.h>
int main(){
    char nama[20], email[20];

    printf("Nama: ");
    scanf("%s", &nama);
    printf("Email: ");
    scanf("%s", &email);

    printf("\n_____________________________\n");
    printf("Nama yang diinputkan: %s\n", nama);
    printf("Email yang diinputkan: %s\n", email);
    return 0;
}
