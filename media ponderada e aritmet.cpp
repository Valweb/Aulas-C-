#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char * argv[])

{
	
	 float mat,port,dir,m_arit,m_pond;
			 
	 cout<<"Digite a nota de Matematica:"<<"\n";
	 cin>> mat;
	 cout<<"Digite a nota de Portugues:"<<"\n""";
	 cin>> port;
	 cout<<"Digite a nota de Direito: "<<"\n";
	 cin>> dir;
	 
	 m_arit = (mat+port+dir)/3.0;
	 m_pond = (mat*4.0 +port*2.0+dir*3.0)/9.0;
	 
	 cout <<"A sua média aritmetica e: " <<m_arit <<"\n";
	 cout <<"A sua média ponderada e: " <<m_pond<<"\n";
	
	

system("PAUSE");
    return EXIT_SUCCESS; 
}
