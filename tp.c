/* tp.c -- Parallel Generation & Checking Of Unique Values In Arbitrarily Large Multiplication Tables
 *
 * Generate large multiplication table matrices in parallel & determine the number of unique values.
 *
 * Inputs: hardcoded.
 *
 * Output: the number of unique values in an nxn multiplication table.
 */

#include <stdio.h>
#include "mpi.h"

main(int argc, char** argv) {
	int		my_rank;	/* My process rank			*/
	int		p;		/* Number of processes			*/
	int		n = 100;	/* Size of nxn multiplication table	*/
	int		matrix[n][n];	/* Global Multiplication table matrix	*/
	int		a, b;		/* Left and right endpoints		*/
	int		unique;		/* Number of unique values		*/
	int		source;		/* Process sending signal		*/
	int 		dest = 0;	/* Process receiving signals		*/
	int		tag = 0;
	MPI_Status 	status;

	/* Initialize MPI */
	MPI_Init(&argc, &argv);

	/* Get my process rank */
	MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

	/* Find out how many processes are being used */
	MPI_Comm_size(MPI_COMM_WORLD, &p);

	/* Master processor */
	if (my_rank == 0) {
		printf("test\n");	
	}
	
	/* Shut down MPI */
	MPI_Finalize();
}
