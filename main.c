//SEFA ENES ERGİN-sefaenesergin@gmail.com
// Klavyeden girilen sayının en büyük rakamını bulan kod parçası.
#include <stdio.h>
main()
{
int sayi, b, max=0;
 printf("Bir sayi girin : ");
 scanf("%d",&sayi);
 while(sayi>0) {
 b = sayi % 10;
 if(b>max) max = b;
 sayi /= 10;
 }
 printf("En buyuk hanenin degeri : %d\n",max);
}
