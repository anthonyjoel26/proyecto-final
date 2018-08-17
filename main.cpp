#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;
main()
{
float c, cc, prom;
cout<<" ingresar primera calificacion "<<endl;
cin>>c;
cout<<" ingresar segunda calificacion "<<endl;
cin>>cc;
prom=(c+cc)/2;

if(prom>=70)
cout<<"Aprobo"<<endl; 
else{
cout<<"reprobo"<<endl;
}
getch();
return(0);
} 
      
