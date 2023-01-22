#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char frase[100];
    int key;

    system("cls");

    printf("enter the phrase to decrypt: ");
    gets(frase);

    printf("\nEnter the numeric key: ");
    scanf("%d", &key);

    printf("\n");
    for(int i = 0; i < strlen(frase); i++){
        if(i % 2 == 0){
            frase[i] -= key;
        }
        else{
            frase[i] += key;
        }
        printf("%c", frase[i]);
    }
    printf("\n");
}
