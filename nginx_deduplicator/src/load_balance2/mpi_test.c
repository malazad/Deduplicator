/* simple send and receive */
#include <stdio.h>
#include <mpi.h>
int main (int argc, char **argv) {
int myrank;
MPI_Status status;
double a[100];
MPI_Init(&argc, &argv); /* Initialize MPI */
MPI_Comm_rank(MPI_COMM_WORLD, &myrank); /* Get rank */
if( myrank == 0 ) /* Send a message */
MPI_Send( a, 100, MPI_DOUBLE, 1, 17, MPI_COMM_WORLD );
else if( myrank == 1 ) /* Receive a message */
MPI_Recv( a, 100, MPI_DOUBLE, 0, 17, MPI_COMM_WORLD, &status );
MPI_Finalize(); /* Terminate MPI */
return 0;
}