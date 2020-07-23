#include <iostream>
using namespace std;
void ingresar_numeros(int m[],int t);
void imprimir_numpares(int m[],int t,int b[],int k);
void burbuja(int m[],int t,int b[],int k);

int main()
{
 
int arreglom[100], arreglob[100], i, k=0, t;

cout<<"Ingrese el tamaño del arreglo: ";
cin>>t;

ingresar_numeros(arreglom,t);
imprimir_numpares(arreglom, t, arreglob,k);
burbuja(arreglom, t, arreglob , k);

 

return 0;
}

void ingresar_numeros(int m[],int t){
int i;
for(i=0;i<t;i++)
{
cout<<"\nIngrese m["<<i+1<<"]=";
cin>>m[i];
}

}
void imprimir_numpares(int m[],int t,int b[],int k){
int  i;

for(i=0;i<t;i++)
{
if(m[i]%2==0)
{
  b[k]=m[i];
  k++;
}
}
cout<<"Los pares son:"<<endl;
for(int i=0;i<k;i++)
{
cout<<endl<<"b["<<i<<"]="<<b[k];
}
 //Arreglado
}
//
//
/*void burbuja(int m[],int t,int b[],int k){
  
  ;
  cout<<"Los pares son:"<<endl;
for(int i=0;i<k;i++)
{
cout<<endl<<"b["<<i<<"]="<<b[k];
}
 
}