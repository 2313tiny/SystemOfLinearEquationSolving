
#include"LinearEquationSolving.hpp"

//############ VARIABLE ##################

//-----OPERATION---------
//----Function , Algorithm------

void fillMatrixValue( FileWriter & fw, unsigned int row, unsigned int col, 
			unsigned int HOW_MANY_EXAMPLE)
{
	

	for( int many = 0; many < HOW_MANY_EXAMPLE; ++many)
	 {
	//fw.write( '#' );
	fw.like_pipe << "#";
	fw.write( many + 1); //test
	fw.like_pipe << std::endl;

	for( int i = 0; i < row; ++i)
	{
		for( int j = 0; j < col ; ++j)
			{
			prefer_type x = 0;
			x= rand()%10 +1;
			fw.myWrite(x);	
		//	fw.write( i + j); //test
			} //end for(j;j;j)
		fw.like_pipe<< std::endl;		 
		}//end for(i;i;i )
	 fw.like_pipe<< std::endl;
	} // end for( many; many; many)
}

void InsertMatrixDimensions(unsigned int & M, unsigned int & N, unsigned int & HOW_MANY)
{
	std::cout << "Enter M and N dimensions  for generating matrices \n";
	std::cout << " M x N  for A matrix\n";
	std::cout << " M x 1  for b matrix\n ";

	std::cout << "M = 3 ...test\n ";
	//std::cin  >> M; 
	M = 3; //test version	
	std::cout << " N = 3 ...test\n ";
	//std::cin >> N; 	
	N = 3; //test version
	std::cout <<  "HOW MANY MATRICES EXAMPLES YOU NEED -> 4... test\n ";
	//std::cin >> HOW_MANY; 
	HOW_MANY = 4; //test version
	
	std::cout << "Please wait....and do not panic" << std::endl;
}


void LinearEquationSolving::generateMatrix()
{
	srand( time(NULL)); //need for generating random value

 	unsigned int M = 0;
	unsigned int N = 0;
 	unsigned int K = 1; // vector col
	unsigned int HOW_MANY = 0;

	InsertMatrixDimensions(M,N,HOW_MANY);

	FileWriter wa("A.txt");
	FileWriter wb("b.txt");

	fillMatrixValue( wa, M, N, HOW_MANY);
	fillMatrixValue( wb, M, K, HOW_MANY);

	std::cout << "\nGenerate matrices ..... DONE\n" << std::endl;
	std::cout << "You can find matrix A into A.txt file \n";
	std::cout << "You can find matrix b into b.txt file \n";
	std::cout << "Please check it\n";

}
