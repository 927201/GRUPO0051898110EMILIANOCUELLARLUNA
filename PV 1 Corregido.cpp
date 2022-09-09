#include <iostream>
#include <string>


using namespace std;

int main()
{
	int numeroproducto, menu;
	string producto, descripcion, categoria;

		cout << "Bienvenido a Game Buy\n"; //Una bienvenida y el nombre de la tienda
	    cout << "***MENU DE OPCIONES***\n";

		cout << "1.-Agregar producto \n 2.-Modificar producto\n 3.-Eliminar producto\n 4.-Lista producto\n 5.-Limpiar Pantalla\n 6.-Salir\n";
		cin >> menu;

	switch (menu)
	{
	case 1:// Agregar producto
		cout << "Ingrese el numero del producto\n";
		cin >> numeroproducto;
		cout << "Ingrese el nombre del producto\n";
		cin.ignore();//me ignora el primer espacio 
		getline(cin, producto); //permite ejecutar los espacios en la variable
		cout << "Ingrese la descripcion del producto\n";
		cin.ignore();
		getline(cin, descripcion);
		cout << "ingrese la categoria del producto\n";
		cin.ignore();
		getline(cin, categoria);
		cout << "ingrese el precio unitario del producto\n";
		cin >> precio_unitario;
		
		return main();
		break;

	case 2: //Modificar producto

		break;

	case 3: //Eliminar producto

		break;

	case 4: //Lista de producto Vigentes

		break;

	case 5: //Limpiar Pantalla


		system("cls"); 
		return main();
		
		break;

	case 6: //Salir


		cout << "Gracias por su preferencia \n";
		break;

	default:
		cout << "ingrese una opcion correcta \n";
		return main();
		system("pause");

	}
}

