

#include"LinearEquationSolving.hpp"


bool LinearEquationSolving::writeMatrixToFile( Matrix & from , FileWriter & to)
{
	prefer_type x = 0;

	for( unsigned int i = 0; i < from.getMatrixRow(); ++i)
	{
		for(unsigned int j = 0; j < from.getMatrixCol(); ++j)
		{ 
			x = from(i,j);
			to.like_pipe<<std::setw(8);
		       	to.myWrite( from(i,j));
			to.like_pipe <<" "; 	
		}//end for(j;j;j)	
		 	//	std::cout << std::endl;
			to.like_pipe << std::endl;
	}//end for(i;i;i)	
	
	return true;

	std::cout << "inline   " << std::endl;//emtpy body
}	
