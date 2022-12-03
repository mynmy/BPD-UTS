#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),11);
	float nilai_akhir;
    char nim[10], nama[30];
    
    printf("\n");
    printf("===== Maulana Yusuf - UTS =====\n");
    printf("===============================\n");
    printf("  PROGRAM GRADE NILAI AKHIR   \n");
    printf("===============================\n\n");
  
    printf("NIM     : "); gets(nim);
    printf("NAMA    : "); gets(nama);
    
    printf("Masukan Nilai Akhir : ");
    scanf("%f",&nilai_akhir);

    if(nilai_akhir<=100 && nilai_akhir>76)
    {
        printf("Grade Nilai Final : A");
    }
    else if(nilai_akhir<=75 && nilai_akhir>=66)
    {
        printf("Grade Nilai Final : B");
    }
    else if(nilai_akhir<65 && nilai_akhir >51)
    {
        printf("Grade Nilai Final : C");
    }
    else if(nilai_akhir<=50 && nilai_akhir >0)
    {
        printf("Grade Nilai Final : D");
    }
  

    return 0;
}
