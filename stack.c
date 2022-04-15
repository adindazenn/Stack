/************************************/
/* Program   : tstack.c */
/* Deskripsi : realisasi body modul stack */
/* NIM/Nama  : 24060120120012/Adinda Destifany Zenniar*/
/* Tanggal   : 16 September 2021*/
/***********************************/
#include <stdio.h>
#include "stack.h"
#include "boolean.h"

/*procedure createStack( output T: Tstack)
	{I.S.: -}
	{F.S.: T terdefinisi, semua nilai elemen T.wadah = '#' }
	{Proses: menginisialisasi T} */
void createStack (Tstack *T){
    //kamus lokal
    int i;

    //algoritma
    (*T).top = 0;
    for(i=1; i<=10; i++){
        (*T).wadah[i]='#';
    }
}

/*function isEmptyStack( T: Tstack) -> boolean
	{mengembalikan True jika T kosong } */
boolean isEmptyStack (Tstack T){
    //kamus lokal

    //algoritma
    if(T.top==0){
        return true;
    }
    else{
        return false;
    }
}

/*function isFullStack( T: Tstack) -> boolean
	{mengembalikan True jika T penuh } */
boolean isFullStack (Tstack T){
    //kamus lokal

    //algoritma
    if(T.top==10){
        return true;
    }
    else{
        return false;
    }
}

/*procedure push ( input/output T:Tstack, input E: character )
	{I.S.: T,E terdefinisi}
	{F.S.: infotop tetap, atau berisi nilai E }
	{Proses: mengisi elemen top baru, bila belum penuh }*/
void push (Tstack *T, char E){
    //kamus lokal

    //algoritma
    if((*T).top==10){
        printf("stack terisi penuh");
    }
    else{
        (*T).top=(*T).top+1;
        (*T).wadah[(*T).top]=E;
    }
}

/*procedure pop ( input/output T:Tstack, output X: character )
	{I.S.: T terdefinisi}
	{F.S.: X= infotop stack lama, atau '#' }
	{Proses: mengambil elemen top, bila belum kosong }*/
void pop (Tstack *T, char *X){
    //kamus lokal

    //algoritma
    if(!isEmptyStack(*T)){
        (*X)=(*T).wadah[(*T).top];
        (*T).wadah[(*T).top]="#";
        (*T).top=(*T).top-1;
    }
    else{
        printf("stack kosong");
    }
}

/*procedure prinTstack ( input T:Tstack )
	{I.S.: T terdefinisi}
	{F.S.: -}
	{Proses: menampilkan kondisi wadah T ke layar}
	{setiap elemen dipisah tanda titik koma } */
void prinTstack (Tstack T){
    //kamus lokal
    int i;

    //algoritma
    for(i=1; i<=10; i++){
        printf("%c; ", T.wadah[i]);
    }
}

/*procedure viewStack ( input T:Tstack )
	{I.S.: T terdefinisi}
	{F.S.: -}
	{Proses: menampilkan elemen tak kosong T ke layar}
	{setiap elemen dipisah tanda titik koma } */
void viewStack (Tstack T){
    //kamus lokal
    int i;

    //algoritma
    for(i=1; i<=T.top; i++){
        printf("%c; ", T.wadah[i]);
    }
}

/*procedure pushBabel1 ( input/output T:Tstack, input E: character )
	{I.S.: T terdefinisi, E terdefinisi }
	{F.S.: T bertambah 1 elemen (E) atau menjadi kosong bila penuh }
	{Proses: menumpuk top atau menghapus semua elemen }*/
void pushBabel1 (Tstack *T, char E){
    //kamus lokal
    int i;

    //algoritma
    if(!isFullStack(*T)){
        push(T,E);
    }
    else{
        createStack(T);
    }
}

