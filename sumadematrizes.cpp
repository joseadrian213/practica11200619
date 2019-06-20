#include<iostream>
using namespace std;
int main(){
	int matriz1[5][5]={{1,2,3,10,11},{4,5,5,8,10},{7,8,9,16,19},{16,17,1,28,98},{4,5,5,8,10}};
	int matriz2[5][5]={{10,11,12,16,18},{13,14,15,19,35},{16,17,1,28,98},{13,14,15,19,35},{4,5,5,8,10}};
	int matriz3[5][5];
	for(int fi=0;fi<5;fi++){
		for(int co=0;co<5;co++){
		
		matriz3[fi][co]=matriz1[fi][co]+matriz2[fi][co];
}
	}
	for(int fi=0;fi<5;fi++){
		for(int co=0;co<5;co++){
		
		cout<<matriz3[fi][co]<<" ";
}
cout<<"\n";
	}
}

