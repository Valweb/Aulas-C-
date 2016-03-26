#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;
int main()
{

   char nome[30], sexo;
   int  idade, serie, turno,cont_serie3, cont_serie2, cont_turno_n, cont_mulher, cont_homem;
   
   
   cont_turno_n = 0;
   cont_serie2 = 0;
   cont_serie3 = 0;
   cont_mulher = 0;
   cont_homem = 0;
   
      
      
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
   	   	cout <<"Digite seu turno: [1-manha] [2-tarde] [3-noite]:";
   		cin >> turno;
   	    } while (turno < 1 || turno > 3);
   	    
   	    do
		{
			cout <<"Digite a sua serie: [ 1-primeira serie] [2-segunda serie] [3-terceiro serie]:";
        	cin >> serie;  
		}while (serie < 1 || serie >3);
   	    
   	 	cout <<"Digite sua idade:";
   		cin >> idade;
   				   	
   		   if (turno==3) 
   		   {
   		  	cont_turno_n = cont_turno_n +1;
   		   }
   		
		   if (serie==3)
   		   {
   		  	cont_serie3 = cont_serie3 + 1;
           }
	     else
		   {
		     if ((serie==2) && (sexo=='f'||sexo=='F'))
   	    	 {
   	 	      cont_serie2 = cont_serie2 + 1;	
   	 	     }
   	       }
   	       if (sexo =='f' || sexo=='F')
   	       {
   	       	cont_mulher = cont_mulher + 1;
   	       }
   	       if (sexo =='m' || sexo=='M')
   	       {
   	       	cont_homem = cont_homem + 1;
   	       }

   	 	    
        
   	 	cout <<"______________________________________________________\n";
   	 	cout <<"Inserir o nome ou digite fim [ fim para terminar]:";
		cin >> nome;
}
   	  
   	 cout <<"O numero de alunos matriculados a noite sao:"<< cont_turno_n <<"\n";
     cout <<"O numero de alunos na terceira serie sao:" << cont_serie3 <<"\n";
   	 cout <<"O numero de mulheres na segunda serie sao:" << cont_serie2 <<"\n"; 
   	 cout <<"O numero total de homens sao:" << cont_homem <<"\n";
   	 cout <<"O numero total de mulheres sao:" << cont_mulher <<"\n";
   	 
		

     
	 
	system ("PAUSE");
   	return EXIT_SUCCESS; 
}
