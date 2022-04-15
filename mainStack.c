/************************************/
/* Program   : maintstack.c */
/* Deskripsi : driver main modul stack */
/* NIM/Nama  : 24060120120012/Adinda Destifany Zenniar*/
/* Tanggal   : 16 September 2021*/
/***********************************/
#include <stdio.h>
#include "stack.h"
#include "boolean.h"

int main(){
    //kamus main
    Tstack A;
    Tstack T;
    Tstack S;
    char d;
    char c;
    char kata[5]="malam";
    int p;
    int i;

    //algoritma
    createStack(&A);
    if(isEmptyStack(A)){
        printf("stack kosong\n");
    }
    else{
        printf("stack tidak kosong\n");
    }
    push(&A, 'd');
    printf("===printStack===\n");
    prinTstack(A);
    printf("\n===viewStack===\n");
    viewStack(A);
    pushBabel1(&A, 'e');
    printf("\n===viewStack (setelah pushBabell A)===\n");
    viewStack(A);
    push(&A, 'i');
    push(&A, 'n');
    push(&A, 'd');
    push(&A, 'a');
    push(&A, 'd');
    push(&A, 'e');
    push(&A, 's');
    push(&A, 't');
    pushBabel1(&A, 'e');
    printf("\n===viewStack (setelah pushBabell A)===\n");

    p=strlen(kata);
    createStack(&S);
    for(i=0; i<p/2; i++){ //looping dimulai dari 0 sampai kurang dari setengah panjang kata
        push(&S, kata[i]);
    }
    if(p%2==1){
        i=i+1;
    }
    pop(&S,&c);
    while(i==p){
        i=i+1;
        pop(&S,&c);
    }

    if(c==kata[i]){
        printf("\nkata malam merupakan palindrom");
    }
    else{
        printf("\nkata malam bukan palindrom");
    }

    return 0;
}
