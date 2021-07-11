#include "normal.hpp"

int main(int argc,const char *argv[])
{
    int Run = atoi(argv[1]);
    int Iteration = atoi(argv[2]);
    int Dim = atoi(argv[3]);
    const char *F = argv[4];

    HC hc;
    hc.run(Run,Iteration,Dim,F);

}
