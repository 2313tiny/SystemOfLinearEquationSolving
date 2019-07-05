

#include "LinearEquationSolving.hpp"

bool  LinearEquationSolving::readMatrixFromFile( Matrix & to, FileReader & from)
{
	prefer_type x = 0;
	char c;

	from.myRead(c);
	
	for( unsigned int i = 0; i < to.getMatrixRow(); ++i)
	{
		for(unsigned int j = 0; j < to.getMatrixCol(); ++j)
		{
			if(from.myRead(x) )
			{
				to(i,j) = x;	
				std::cout << to(i,j) <<" ";
			}
			else 
			{
				std::cout << "Can not open file... " << std::endl;
				return false;
			}
		}//end for(j;j;j)	
		 	std::cout << std::endl;
	}//end for(i;i;i)	
	
	return true;

	std::cout << "inline   " << std::endl;
}

