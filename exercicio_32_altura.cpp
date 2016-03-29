#include <cstdlib>
#include <iostream>
using namespace std;

int main()

{
	
	char nome[30], sexo;
	int cont_h, status;
	float altura, maior_altura, altura_h, media_altura;
	
	altura = 0;
	altura_h = 0;
	cont_h = 0;
	maior_altura = 0;
	media_altura=0;
    status = 1;
	
	
	while (status == 1)

   {
   	    
		cout <<"Deseja inserir os dados? 1 (sim) ou 2 (nao):";
	    cin >> status;
	    
	    if (status == 2)
   	    {
   	    	break;
   	    }
         else
        {
          
	    	cout <<"Digite o nome:";
	   	    cin >> nome;
	   	
	   	    cout <<"Digite o sexo:";
	   	    cin >> sexo;  	   	
	   	
	   	
	   	    cout <<"Digite a altura:";
	        cin >> altura;
	   	    cout <<"__________________________________________________________"<<"\n";
	   
		   		   
	    }
	   	
	   	if ( altura > maior_altura)
	   	{
	   		maior_altura = altura;
	   	}
	   		   	
	   	if (sexo == 'm' || sexo == 'M')
	   	
	   	{
	   	   altura_h = altura + altura_h;
	   	   cont_h = cont_h + 1;
	   	}
	   		   	
	  
  }  
  
        media_altura = (float)(altura_h/cont_h);
        
        cout <<"A media de altura masculino e:" << media_altura<<"\n";
        cout <<"A maior altura e:" << maior_altura<<"\n"<<"\n";
        cout <<"__________________________________________________________"<<"\n";
        
        system ("PAUSE");
		return EXIT_SUCCESS;
        
}



