#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;
int main()

{
	char nome[30], sexo;
	int grau, tcand, fem, masc, contf,contm;
	float porc;
	
	grau = 0;
	tcand = 0;
	masc = 0;
	fem = 0;
	contf = 0;
	contm = 0;
	porc = 0;
	
	
	
	
	cout <<"Inserir o nome ou digite fim [ fim para terminar]:";
		cin >> nome;
		
	while (strcmp(nome,"fim"))
	
	{

	do
	{
    	cout<<"Digite seu sexo:";
		cin >> sexo;
	}while (sexo !='m' && sexo !='f' && sexo !='M' && sexo !='F'); 
	
	do
	{
		cout<<"Digite seu grau de instrução: [1= Segundo grau, 2= Terceiro grau]";
		cin >> grau;
	}while(grau<1 || grau>2);
	
	tcand = tcand + 1;
	
	if (sexo=='f' || sexo=='F')
	  
	  {
	  	fem ++;
	  }
	  
	
	else
	{
		masc = masc + 1;
	}
	
		if ((sexo =='f'|| sexo =='F') && (grau ==1))
		{
		contf++;
		}
	
	else
	{
		if ((sexo =='m'|| sexo=='M') && (grau ==2))
		{
		contm++;
		}
	}

		cout <<"______________________________________________________\n";
   	 	cout <<"Inserir o nome ou digite fim [ fim para terminar]:";
		cin >> nome;
		
		
	}
	 
	 porc = contm*100.0 /masc;
	 
		
	cout <<"Total de candidatos e:" << tcand <<"\n";
    cout <<"Total de candidatos sexo Masculino e:" << masc <<"\n";	
    cout <<"Total de candidatos sexo Feminino e:" <<  fem <<"\n";	
    cout <<"Total de mulheres com segundo grau:" << contf <<"\n";
    cout <<"Total de homens com terceiro grau:" << contm <<"\n";
    cout <<"Porcentagem de homens com terceiro grau em relacao a todos os homens:" << porc <<"\n";
	cout <<"______________________________________________________\n";
	
	
	system ("PAUSE");
   	return EXIT_SUCCESS; 
}
