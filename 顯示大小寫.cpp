#include <stdio.h> 

#include <stdlib.h>



int main() 

{

	char az; 

	for (az=65; az<=90; az++)  //ERROR1

	{

		printf("%c ",az);

	}

	

	printf("\n");  

	for (az=97; az<=122; az++)  

	{

		printf("%c ",az);    //ERROR2

	}

	printf("\n");   //ERROR3

	system ("pause"); 

	return 0;  

}


