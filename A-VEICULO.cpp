#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
int main()


{

    int cod,cod_desc;
    float bruto,liq,desc;
       
    cout<<"Digite o codigo do Veiculo: (0 para sair) : ";
    cin>>cod;
                                               
    while (cod!=0)
    {
          do{
          	
                cout<<"Escolha o cod desconto: [1-12.30% 2- 14.20%  3- 18.80% 4- 20.50% 5- 22.00%  6- 26.40%]: ";
                cin>>cod_desc;
                
            }while(cod_desc!=1 && cod_desc!=2 && cod_desc!=3 && cod_desc!=4 && cod_desc!=5 && cod_desc!=6);         
            
            cout<<"Digite o valor do Veiculo: ";     
            cin>>bruto;
            
            
       if(cod_desc==1) 
         {
           desc = bruto * 0.123;
           liq = bruto - desc;
                         
         }
       else{
             if(cod_desc==2) 
               {
                           	
                    desc = bruto * 0.142;
                    liq = bruto - desc;
                           
               }
            	
            }                
             
       if(cod_desc==3) 
          {
                           	
                desc = bruto * 0.178;
                liq = bruto - desc;
                           
           }
        else {
            	
               if(cod_desc==4) 
                {
                                                  	
                desc = bruto * 0.205;
                liq = bruto - desc;
                
                }
            	
               }
			              
                                                                 
            if(cod_desc==5) 
              {
                           	
              desc = bruto * 0.220;
              liq = bruto - desc;
                           
               }
               
            else {
                           	
                  if(cod_desc==6) 
                  {
                           	
                  desc = bruto * 0.264;
                  liq =  bruto - desc;
                           
                  }          
                }
       
	     cout<<"\n______________________________________________________________\n";   
	     cout<<"    Codigo do veiculo: "<<cod<<"\n";
         cout<<"    Valor Bruto do veiculo: "<<bruto<<"\n";
         cout<<"    Valor do desconto: "<<desc<<" \n"; 
         cout<<"    Valor liquido do veiculo: "<<liq<<"\n";
         cout<<"\n______________________________________________________________\n";       
	    
         cout<<"Digite o codigo do Veiculo: (0 para sair): ";
         cin>>cod;  
         
	                
           
   }			                                                   
      
     
    system("PAUSE");
    return EXIT_SUCCESS;
	   
 } 
