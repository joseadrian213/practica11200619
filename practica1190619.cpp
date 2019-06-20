#include<iostream>
using namespace std;
	class arreglo{
		public:
				int arre[7];
				int suma=0;
				void datos(){
				
					for(int i=0;i<7;i++){
						cout<<"introduzca un numero "<<endl;
					
						cin>>arre[i];
				suma+=arre[i];
				
					}
					cout<<"el resultado es:"<<suma<<endl;					

				}
				
	};
int main(){
arreglo objeto;
objeto.datos();
	cin.get();
	return 0;
}
