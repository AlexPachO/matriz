#include <iostream>

using namespace std;

int main() {
	int opcion;
	opcion = 1, 2, 3;
	int fa, ca, fb, cb, i, j, k;

	do {
		
		cout << "que opcion quieres elegir: " << endl;
		cout << "matriz: " << 1 << endl;
		cout << "funcion: " << 2 << endl;
		cout << "salir del programa: " << 3 << endl;
		cin >> opcion;
	
	
	if (opcion == 1) {
		cout << "introducir numero de fila a: " << endl;
		cin >> fa;
		cout << "introducir numero de columna a: " << endl;
		cin >> ca;
		cout << "introducir numero de fila b: " << endl;
		cin >> fb;
		cout << "introducir numero de columna b: " << endl;
		cin >> cb;
	}
	

	int A[fa][ca], B[fb][cb], C[fa][cb];

	if (ca == fb)
	{
		cout << "introducir numeros de matriz a: " << endl;
		for (i = 0; i < fa; i++)
			for (j = 0; j < ca; j++)
			{
				cout << "a [" << i << "] [" << j << "]: ";
				cin >> A[i][j];
			}
				
		

		cout << "introducir numeros de matriz b: " << endl;
		for (i = 0; i < fb; i++)
			for (j = 0; j < cb; j++)
			{
				cout << "b [" << i << "] [" << j << "]: ";
				cin >> B[i][j];	
			}
			
		for(i=0; i<fa; i++)
		for(j=0; j<cb;j++){
			C[i][j]+=A[i][k]*B[k][j];
		}	
		
		cout<<endl;
		
		for(i=0; i<fa;i++)
		for(j=0; j<cb; j++)
		cout<<C[i][j]<<endl;
	}	

	}
	while (opcion != 3);
	cout << "el programa finalizo" << endl;



	














}
