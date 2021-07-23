	#include <iostream>
	#include <math.h>
	
	using namespace std;
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int menu();
	void ejercicio1(int);
	void ejercicio2(int);
	
	int main(int argc, char** argv) {
		int opcion=0;
		
		while((opcion = menu()) != 3){
			if(opcion==1){
				int n=0;
				while(n<1){
					cout << "ingrese un n : ";
					cin >> n;
				}
				
				ejercicio1(n);	
			}else {
				if(opcion == 2){
					int x=0;
				cout << "ingrese un x : ";
				cin >>x;
				
				ejercicio2(x);
				}
			}
		}
		return 0;
	}
	
		int menu(){
			int opc=0;
			cout << "menu:\n"
			"1) Ejercicio 1\n"
			"2) ejercicio 2\n"
			"3) salir\n\n"
			"Ingrese la opcion que desee" << endl;
			cin >> opc;             
			return opc;
		}
		
		void ejercicio1(int n){
			double acum=0;
				for(int i=1; i<=n; i++){
					double numerador=2.0 *i -1.0 ;
					double denuminador= i * ( i + 1.0 );
					acum+=numerador / denuminador;
					}
					cout<<"S("<<n<<") = "<<acum<<endl;
		}
		
		void ejercicio2(int x){
			double resul= 1.0 / (1.0 + exp(x)) ;
			cout << "f("<< x <<") = " << resul << endl;			
		}
