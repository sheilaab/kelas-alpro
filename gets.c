#include<stdio.h>
int main(){
    char nama[50], email[50];
    printf("Nama: ");
    gets("nama");
    printf("Email: ");
    gets("email");
    printf("You entered: %s\n", nama);
    printf("Email: %s\n", email);
    return 0;
}
