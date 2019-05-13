#include <iostream.h>
#include <conio.h>

main ()
{
int Z,Y,S=10;
for (Z=1; Z<=4; Z++)
{
for (Y=1; Y<=Z; Y++)
{cout<<S<<" ";
S--;
}
cout<<"\n";
cout<<"\n";
}
getch();
}
