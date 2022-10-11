#include <iostream>

using namespace std;

int main()
{
	int salario = 0;
	int categoria = 0;
	int horas_Trabajadas = 0;
	int tarifa = 0;
	float porcetntajeTarifa = 0;
	
    cout << "Ingrese la categoria: ";
    cin >> categoria;
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas_Trabajadas;
    
    if(categoria == 1){
		
		if(horas_Trabajadas < 24){
			
			tarifa = 12000 * 0.05;
			salario = tarifa * horas_Trabajadas;
			
			cout << "El salario es: "<< salario <<" pesos";
			
		}else if( horas_Trabajadas >= 24 && horas_Trabajadas <= 48){
			
			tarifa = 12000 * 0.10;
			salario = tarifa * horas_Trabajadas;
			
			cout << "El salario es: "<< salario <<" pesos";	
					
		}else if( horas_Trabajadas > 48){
			
			tarifa = 12000 * 0.20;
			salario = tarifa * horas_Trabajadas;
			
			cout << "El salario es: "<< salario <<" pesos";			
		}
		
	}else if(categoria == 2){
		
		if(horas_Trabajadas < 24){
			
			tarifa = 17000 * 0.05;
			salario = tarifa * horas_Trabajadas;
			
			cout << "El salario es: "<< salario <<" pesos";
			
		}else if( horas_Trabajadas >= 24 && horas_Trabajadas <= 48){
			
			tarifa = 17000 * 0.10;
			salario = tarifa * horas_Trabajadas;
			
			cout << "El salario es: "<< salario <<" pesos";	
					
		}else if( horas_Trabajadas > 48){
			
			tarifa = 17000 * 0.20;
			salario = tarifa * horas_Trabajadas;
			
			cout << "El salario es: "<< salario <<" pesos";			
		}
		
	}else if(categoria == 3){
		
		if(horas_Trabajadas < 24){
			
			tarifa = 22000 * 0.05;
			salario = tarifa * horas_Trabajadas;
			
			cout << "El salario es: "<< salario <<" pesos";
			
		}else if( horas_Trabajadas >= 24 && horas_Trabajadas <= 48){
			
			tarifa = 22000 * 0.10;
			salario = tarifa * horas_Trabajadas;
			
			cout << "El salario es: "<< salario <<" pesos";	
					
		}else if( horas_Trabajadas > 48){
			
			tarifa = 22000 * 0.20;
			salario = tarifa * horas_Trabajadas;
			
			cout << "El salario es: "<< salario <<" pesos";			
		}
	}
	
    return 0;       
}
