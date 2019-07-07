



#sorry under construction
# try again
#just for test
# I can not add something to file.... this is not good


exe: JacobiMethod.o #readMatrixFromFile.o writeMatrixToFile.o\
       	GaussMethod.o GenerateMatrix.o GaussSeidelMethod.o Project.o  
      

JacobiMethod.o: JacobiMethod.cpp
	g++ JacobiMethod.cpp -c   #$@ 



#	       JacobiMethod.o		  readMatrixFromFile.o
#A.txt		       LinearEquationSolving.hpp  resGaussSeidel.txt
#b.txt		       Make_all			  resGauss.txt
#GaussMethod.cpp        Make_all_v1		  resJacobi.txt
#GaussMethod.o	       makefile			  result
#GaussSeidelMethod.cpp  poxos			  RUN
#GaussSeidelMethod.o    Project.			  writeMatrixToFile.cpp
#GenerateMatrix.cpp     Project.cpp		  writeMatrixToFile.o
#GenerateMatrix.o       Project.o
#JacobiMethod.cpp       readMatrixFromFile.cpp
