#include <iostream>
#include "mpi.h"
using namespace std;
int main(int argc, char **argv)
{ 
int mynode, totalnodes;
int datasize;
int sender = 2;
int receiver = 4;
int tag;
MPI_Status status;

MPI_Init(&argc,&argv);

MPI_Comm_size(MPI_COMM_WORLD, &totalnodes);
MPI_Comm_rank(MPI_COMM_WORLD, &mynode);

double *databuffer = new double[datasize];

if(mynode== sender)
MPI_send(databuffer.datasize,MPI_DOUBLE, receiver,tag,MPI_COMM_WORLD);

if(mynode== receiver)
MPI_Recv(databuffer,datasize,MPI_DOUBLE,sender,tag,MPI_COMM_WORLD,&status);

MPI_Finalize();




return 0;
}


