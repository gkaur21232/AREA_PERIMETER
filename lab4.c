/*--------------------------------------------------------------------------------------*/
/* Gurnit Kaur                                                                          */
/* Lab 4                                                                               */
/* Figure the perimeter and area of a polygon                                           */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FILE_IN "lab4.dat"
//#define FILE_IN "lab4sample.dat"

int main(void)
{
	double radius, nsides, perimeter, area;
	FILE * input_file;
	FILE * output_file;
	
	input_file = fopen(FILE_IN, "r");
	if(input_file == NULL)
	{
		printf("error opening file\n");
		exit (EXIT_FAILURE);
	}
	
	output_file = fopen("lab4.out", "w");
	if(output_file == NULL)
	{
		printf("Error opening output file\n");
		exit (EXIT_FAILURE);
	}

		fprintf(output_file, "\nGurnit Kaur.  Lab4. \n\n");
		fprintf(output_file, "               Number         Perimeter       Area of  \n");
		fprintf(output_file, " Radius       of Sides        of Polygon      Polygon \n");
		fprintf(output_file, "---------     ---------      ------------    ---------- \n");
	
	while ((fscanf(input_file, "%lf%lf", &radius, &nsides)) == 2)
	{
		perimeter = (2 * nsides* radius *(sin(M_PI/nsides)));
		area = (0.5* nsides* radius* radius* (sin((2*M_PI)/nsides)));
		fprintf(output_file, "%8.2lf      %8.2lf         %8.4lf        %8.4lf \n", radius, nsides, perimeter, area);
		
        }

	fclose(input_file);
	fclose(output_file);
	return EXIT_SUCCESS;
}
/*----------------------------------------------------------------------------------------------------------*/

