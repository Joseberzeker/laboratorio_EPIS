#include <iostream>

using namespace std;

int salario = 0;
int categoria = 0;
int horasTrabajadas = 0;
int tarifa = 0;

void calcularSalario(int categoria, int horasTrabajadas )
{

	if(categoria == 1)
	{

		if(horasTrabajadas < 24)
		{

			tarifa = 12000 * 0.05;
			salario = tarifa * horasTrabajadas;

		}
		else if( horasTrabajadas >= 24 && horasTrabajadas <= 48)
		{

			tarifa = 12000 * 0.10;
			salario = tarifa * horasTrabajadas;

		}
		else if( horasTrabajadas > 48)
		{

			tarifa = 12000 * 0.20;
			salario = tarifa * horasTrabajadas;

		}

	}
	else if(categoria == 2)
	{

		if(horasTrabajadas < 24)
		{

			tarifa = 17000 * 0.05;
			salario = tarifa * horasTrabajadas;

		}
		else if( horasTrabajadas >= 24 && horasTrabajadas <= 48)
		{

			tarifa = 17000 * 0.10;
			salario = tarifa * horasTrabajadas;


		}
		else if( horasTrabajadas > 48)
		{

			tarifa = 17000 * 0.20;
			salario = tarifa * horasTrabajadas;

		}

	}
	else if(categoria == 3)
	{

		if(horasTrabajadas < 24)
		{

			tarifa = 22000 * 0.05;
			salario = tarifa * horasTrabajadas;

		}
		else if( horasTrabajadas >= 24 && horasTrabajadas <= 48)
		{

			tarifa = 22000 * 0.10;
			salario = tarifa * horasTrabajadas;

		}
		else if( horasTrabajadas > 48)
		{

			tarifa = 22000 * 0.20;
			salario = tarifa * horasTrabajadas;

		}

	}

	cout << "El salario es: " << salario << " pesos";
}



int main()
{

	cout << "Ingrese la categoria: ";
	cin >> categoria;
	
	
	if(categoria != 1 && categoria != 2 && categoria != 3)
	{
		cout << "Digite una categoria valida";
	}
	else
	{
		cout << "Ingrese las horas trabajadas: ";
		cin >> horasTrabajadas;
		
		if(horasTrabajadas < 0)
		{
			cout << "Ingrese una hora valida: ";
		
		}
		else
		{
			calcularSalario(categoria, horasTrabajadas);
		}

	}

}
