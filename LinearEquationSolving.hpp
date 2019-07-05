
#ifndef LINEAR_EQUATION_SOLVING_H
#define LINEAR_EQUATION_SOLVING_H

#include<iostream>
#include<time.h>  // need for random generating matrix
#include<stdlib.h>
#include<fstream>
#include<iomanip>


typedef float prefer_type;

struct Matrix
{

	unsigned int m_col;
       	unsigned int m_row;	
	prefer_type  * m_array ;


	//constructor
	Matrix(unsigned int M, unsigned int N) : m_col(M) , m_row(N)
	{
	//	for(unsigned int i = 0; i < M; ++i )
	//	{
			m_array = new prefer_type[M*N]; 
	//	}//end for(i;i;i)
	}
	
	//utilities
	int  getMatrixRow()
	{
		return m_row;
	}
	
	int getMatrixCol()
	{
		return m_col;
	}
	
	prefer_type & operator()( unsigned int i , unsigned int j)
	{
		//return * (*( m_array + i)+ j);
		return m_array[getMatrixCol() *i + j];
	}


	//destructor
	~Matrix()
	{   //under construction
	/* 
	 *	for( unsigned int i = 0; i < getMatrixRow(); ++i)
		{
			delete 	m_array[i];
		}//endfor(i;i;i)
		delete[] m_array;
	*/ 
	}

};

struct FileWriter
{
	const char * fileName;
	std::ofstream like_pipe;


	//#constructor_1
	FileWriter( const char * fn ):fileName(fn)
	{
		like_pipe.open(fileName,std::ios::out);
	}
	

	bool  write(prefer_type x)
	{
		if( like_pipe.is_open() )
		{
			like_pipe <<  x  ;
		}
		else
		{
			std::cout << "Something WRONG...SORRY\n";
			return false;
		}
		return true;
	}

	bool myWrite(prefer_type x)
	{
		if( like_pipe.is_open() )
		{
			like_pipe << std::setw(3) <<  x  ;
		}
		else
		{
			std::cout << "Something WRONG...SORRY\n";
		}
	}


	//destructor
	~FileWriter()
	{
		like_pipe.close();
	}
};

	

struct FileReader
{
	const char * fileName;
	std::ifstream like_pipe;

	//#constructor_1
	FileReader( const char * fn ):fileName(fn)
	{
		like_pipe.open(fileName,std::ios::out);
	}


	bool  myRead( char &  c)
	{
		if( like_pipe.is_open() )
		{
			if( like_pipe >> c)
			{	
				like_pipe >> c;/// add
				return false;
			}//end if		
		}
		else
		{
			std::cout << "Something WRONG...SORRY\n";
			return false;
		}
		return true;
	}

	bool  myRead(prefer_type &  x)
	{
		if( like_pipe.is_open() )
		{
			like_pipe >> x  ;
		}
		else
		{
			std::cout << "Something WRONG...SORRY\n";
			return false;
		}
		return true;
	}

	//destructor
	~FileReader()
	{
		like_pipe.close();
	}
};

struct LinearEquationSolving
{
	void generateMatrix() ;// generate Matrix A and b   	   //-----DONE            

	bool readMatrixFromFile( Matrix & to, FileReader & from);  //-----DONE
	bool writeMatrixToFile( Matrix & from, FileWriter & to);   //-----DONE

	void gaussMethod( Matrix &, Matrix &, Matrix &);         //solving linear equation by Gauss Method
	void gaussSeidelMethod(Matrix & , Matrix & , Matrix &);  //solving linear equation by Gauss-Seidel Method
	void jacobiMethod( Matrix & , Matrix & , Matrix &);      //solving linear equation by Jacobi Method 
};


#endif // LINEAR_EQUATION_SOLVING_H

