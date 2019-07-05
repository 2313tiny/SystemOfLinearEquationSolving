
#include"LinearEquationSolving.hpp"

int main()
{
	unsigned int M = 3;
	unsigned int N = 3;
	unsigned int single_col=1;

	LinearEquationSolving equation;
	Matrix A(M,N); 
	Matrix b(M,single_col);
	Matrix resGauss(M,N);
	Matrix resJacobi(M,single_col);
	Matrix resGaussSeidel(M, single_col);
	FileReader fr_A("A.txt");
	FileReader fr_b("b.txt");
	FileWriter fw_resGauss("resGauss.txt");
	FileWriter fw_resJacobi("resJacobi.txt");
	FileWriter fw_resGaussSeidel( "resGaussSeidel.txt");

	equation.generateMatrix();
	equation.readMatrixFromFile(A,fr_A);
	equation.readMatrixFromFile(b,fr_b);

//	equation.gaussMethod(A,b, resGauss );  
//	equation.writeMatrixToFile( resGauss, fw_resGauss);

//	equation.gaussSeidelMethod( A, b, resGaussSeidel);
//	equation.writeMatrixToFile( resGaussSeidel, fw_resGaussSeidel);	

	equation.jacobiMethod( A, b, resJacobi);
	equation.writeMatrixToFile(resJacobi, fw_resJacobi); 
}
