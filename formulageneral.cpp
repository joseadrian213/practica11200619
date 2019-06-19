#include<iostream>
#include<math.h>
using namespace std;
class formulage{
public:
	double a,b, c,resultado=0,resultado2=0;
void datos(){
	cout<<"introduzca a"<<endl;
	cin>>a;
	cout<<"introduzca b"<<endl;
	cin>>b;
	cout<<"introduzca c"<<endl;
	cin>>c;
}
void formu(){
	resultado=-b- (sqrt(b*b+4*a*c)/2*a);
	resultado2=-b+ (sqrt(b*b+4*a*c)/2*a);
	cout<<"el resultado uno es:"<<resultado<<endl;
		cout<<"el resultado uno es:"<<resultado2<<endl;

}

};
int main(){
	formulage objeto;
	objeto.datos();
	 objeto.formu();
	cin.get();
	return 0;
}
