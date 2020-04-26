#include<iostream>
using namespace std;

int main(){
	
	float temperatura;
    cout<<"\t\t\t\t\tIngreso a la camara detectora del segundo sintoma del covid-19.\n";
    cout<<"Por favor ingrese su temperatura: ";
    cin>> temperatura;
	
	if(temperatura > 37){
		
		cout<<"Necesitas chequeo de un medico pues tienes uno de los sintomas del virus.\n"; 	
	}
	else if(temperatura > 0){
		cout<<"cuidate.\n"; 	
	}
	
	return 0;
}

