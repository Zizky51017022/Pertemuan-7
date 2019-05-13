#include <iostream.h>
#include <conio.h>
main()
{
int Angka;
int Kode;
for(Angka=1; Angka<=4; Angka++)
{for(Kode=1; Kode<=4; Kode++)
 {if(Angka==Kode){
   cout<<Angka<<" ";}
      else{cout<<'x'<<" ";}
   }
   cout<<"\n";
   cout<<"\n";
  }
getch();
}