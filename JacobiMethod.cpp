#include"LinearEquationSolving.hpp"

void LinearEquationSolving::jacobiMethod( Matrix & A , Matrix & b, Matrix & res_Jacobi)
{	
// worked with horizontal print, i.e. you can see result like horizontal line
	for( int i = 0; i < A.getMatrixCol(); ++i)
	{
	    	res_Jacobi(0,i) = b(0,i) / A(i,i);
		std::cout << res_Jacobi(0,i) << std::endl;
	} //end for(i;i;i)


	for( int i = 0; i < A.getMatrixRow(); ++i)
	{
		res_Jacobi(1,i) = b()		
	}//end for(j;j;j)
		

	std::cout << __LINE__ << std::endl;
	std::cout << __FILE__ << std::endl;
	std::cout << __TIME__ << std::endl;


//under construction
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
/*	
	for( unsigned int i = 0; i < A.getMatrixRow(); ++i)
	{
		for( unsigned int j = 0; j< A.getMatrixCol(); ++j)
		{
			std::cout << A(i,j) << " ";
		}
		std::cout << std::endl;
	}//end for(i;i;i)

*/
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";


	//under construction
	std::cout << " Jacobi Method ... DONE  " << std::endl;
	std::cout << " You can find solution into resJacobi.txt file\n";
	std::cout << " Please check it \n";
}
