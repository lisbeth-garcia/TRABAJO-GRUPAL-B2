//*********************************************************************
//Garcia lopez lisbeth Mostrar por pantalla los elementos de la matriz.
// Revisados 2021-07-06
//*********************************************************************

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
//********************************
//Pierina Mejía Hurtado
// Revisados 2021-07-06
//********************************

cout<<"La suma de las dos matrices es: "<<endl;
do{
	suma[c]=matriz1[c]+matriz2[c];
	cout<<suma[c];
	
	c=c+1;
	cout<<" - ";

}while(c<10);
c=0;
cout<<endl;
//*****************************************
//Diana Espinal Marin
// Revisados 2021-07-06
//*****************************************

	
cout<<"La resta de las dos matrices es: "<<endl;
do{
	resta[c]=matriz1[c]-matriz2[c];
	cout<<resta[c];
	
	c=c+1;
	cout<<" - ";

}while(c<10);
c=0;
cout<<endl;
//***************************************************
//Fernando Cajiao Multiplicacion de dos matrices
// Revisados 2021-07-06
//***************************************************

cout<<"La multiplicacion de las dos matrices es: "<<endl;
do{
	producto[c]=matriz1[c]*matriz2[c];
	cout<<producto[c];
	
	c=c+1;
	cout<<" - ";

}while(c<10);
c=0;
cout<<endl;
//*****************************************
// Carlos Mero  Division de dos matrices
// Revisados 2021-07-06
//*****************************************

cout<<"la division de las dos matrices están: "<<endl;

  for (c=0;c<10;c++){
	division[c]=matriz1[c]/matriz2[c];
    }
  for (c=0;c<10;c++){
	cout<<division[c]<<" ";
	cout<<endl; 
	} 
return 0;
}
