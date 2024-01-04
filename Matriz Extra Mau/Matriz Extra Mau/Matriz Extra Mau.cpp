#include <iostream>

int main()
{

	//Generacion de Matriz
	std::cout << "Creacion de Memoria Dinamica" << std::endl;

	int rows = 0, cols = 0, random = 0;

	std::cout << "Ingresa el numero de filas" << std::endl;

	std::cin >> rows;

	std::cout << "Ingresa el numero de columnas" << std::endl;

	std::cin >> cols;

	srand(time(0));

	int** matrix = new int* [rows];
	for (int i = 0; i < rows; ++i)
		matrix[i] = new int[cols];;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = rand() % 6;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

	delete(matrix);
}