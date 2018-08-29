#include <iostream>
#include <conio.h>
using namespace std;

const int num=90;
struct infoProducto{
	int precio;
	int ram;
};
struct computadora{
	char marca[20];
	struct infoProducto datosProducto;
}computadoras[num];

int main()
{
	struct computadora var;
	struct computadora *ptr;
	ptr=&var;
	cout<<"Introducir marca de la computadora: "; cin.getline(ptr->marca,20,'\n');
	cout<<"\nIntroducir precio del producto: "; cin>>ptr->datosProducto.precio;
	cout<<"\nIntroducit cantidad de memoria ram: "; cin>>ptr->datosProducto.ram;
	
	cout<<"\nMarca: "<<var.marca;
	cout<<"\nPrecio: "<<var.datosProducto.precio;
	cout<<"\nRam:: "<<var.datosProducto.ram;
	
	getch();
	return 0;
}
