//Garcia lopez lisbeth Mostrar por pantalla los elementos de la matriz.
#include<iostream>
using namespace std;
int main()
{
int c=0;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];
  do {
	cout<<matriz1[c];
	c=c+1;
	if(c<10){
		cout<<" - ";
	}
}while(c<10);
cout<<endl;
c=0;
do {
	cout<<matriz2[c];
	c=c+1;
	if(c<10){
		cout<<" - ";
	}
}while(c<10);
cout<<endl;
c=0;

//Pierina Mejía Hurtado
do{
	suma[c]=matriz1[c]+matriz2[c];
	cout<<suma[c];
	
	c=c+1;
	cout<<" - ";

}while(c<10);
c=0;
cout<<endl;

  //Diana Espinal Marin
	do{
	resta[c]=matriz1[c]-matriz2[c];
	cout<<resta[c];
	
	c=c+1;
	cout<<" - ";

}while(c<10);
c=0;
cout<<endl;
//Fernando Cajiao Multiplicacion de dos matrices
	do{
	producto[c]=matriz1[c]*matriz2[c];
	cout<<producto[c];
	
	c=c+1;
	cout<<" - ";

}while(c<10);
c=0;
cout<<endl;
