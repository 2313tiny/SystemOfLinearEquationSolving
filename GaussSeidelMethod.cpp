

#include"LinearEquationSolving.hpp"




void LinearEquationSolving::gaussSeidelMethod( Matrix  & from_A , Matrix &  from_b, Matrix & to_result)
{
	
	//under construction
	std::cout << " Gauss-Seidel Method ... DONE  " << std::endl;
	std::cout << " You can find solution into resGaussSeidel.txt file\n";
	std::cout << " Please check it \n";
}

/*	
void LinearEquationSolving::gaussSeidelMethod(int & from_A, int & from_b, int & to)
{
/*
	while( m>0)
	{
		for( unsigned int i = 0; i < n; ++i)
		y[ i ]= b[ i ] / a[i][i];
		for( int j = 0; j < n ; ++j)
		{
			if( j == i)
				continue;
			y[ i ] = y[ i ] - ( a[i][j ] / a[i][i] * x[j]);
			x[ i ] = y[ i ];
		}//end for(j;j;j)
		std::cout << i+1 << " " << y[i] << " " ;
	}//end while

			std::cout <<"\n\n Gauss - Seidel method ... DONE" << std::endl;


*/

//}
