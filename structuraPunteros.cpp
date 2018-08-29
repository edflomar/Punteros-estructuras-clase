#include <iostream>
#include <conio.h>
using namespace std;

struct dato{
	int dato1;
	char dato2[20];
};
int main()
{
	
	struct dato var1;
    struct dato *ptr;
	ptr=&var1;
	//Imprime valor de ptr
	cout<<"Puntero= "<<&ptr<<endl;
	//Imprime direccion de ptr
	cout<<"Direccion de ptr: "<<ptr<<endl;
	
	cout<<"Introducir dato 2: ";
	fflush(stdin);
	cin.getline(ptr->dato2,20,'\n');
	
	cout<<"Introducir dato 1: ";
	cin>>ptr->dato1;
	
	cout<<"Imprimiendo dato 2: "<<var1.dato2<<endl;
	cout<<"Imprimiendo dato 1: "<<var1.dato1<<endl;
	
	getch();
	return 0;
}

