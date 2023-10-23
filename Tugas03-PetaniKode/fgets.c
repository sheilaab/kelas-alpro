#include<stdio.h>
int main(){
    char nama[50], email[50];

    printf("Nama: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Email: ");
    fgets(email, sizeof(email), stdin);

    printf("\n__________________\n");
    printf("Nama anda: %s", nama);
    printf("Alamat email: %s", email);
    return 0;
}
