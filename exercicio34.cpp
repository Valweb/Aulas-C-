#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;
int main()

{
	char sexo, resp;
	int  cont_nao, cont_sim, cont_m, cont_p, cont_sim_fem;
	float  porc_fem; 
	
	cont_nao = 0;
	cont_sim = 0;
	cont_m = 0;
	cont_p = 1;
	cont_sim_fem=0;
	
	while (cont_p <=5)
	{
	
		do
		{
			cout<<"Digite seu sexo:";
			cin >> sexo;
	
		} while (sexo !='m' && sexo !='f' && sexo !='M' && sexo !='F');
		do
		{
			cout <<"Gostou do lancamento do produto? [S sim ou N nao]" <<"\n";
			cin >> resp;

		}while (resp !='s' && resp !='n' && resp !='S' && sexo !='N');	
		
		if (resp == 's' || resp == 'S')
		{
			cont_sim++;
			
		}
		else 
		{
			cont_nao++;
			
		}
		if (sexo == 'f' || sexo =='F')
		{
			cont_m++;
			
			if (resp == 's' || resp =='S')
			{
				cont_sim_fem++;
			}
		}
		cont_p++;
		
		cout <<"______________________________________________________\n";
			
			  	
	}
		porc_fem = cont_sim_fem*100.0/5.0;
		cout << "O numero de pessoas que responderam sim e:" << cont_sim <<"\n";
		cout << "O numero de pessoas que responderam nao e:" << cont_nao <<"\n";
		cout << "O percentual de mulheres que responderam sim em relacao a todas :" << porc_fem <<"\n";

	  system("PAUSE");
      return EXIT_SUCCESS; 
}


