#include <unordered_map>
#include <cstdio>
#include <omp.h>
#include <iostream>

#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Delaunay_triangulation_2.h>
#include <CGAL/Delaunay_triangulation_3.h>

//g++ test_openmp.cpp -std=c++11 -fopenmp -lCGAL -lgmp -lmpfr 

int main(int argc, char *argv[])
{
  std::unordered_map<unsigned,std::string> map{
    {200505,"2.5"},{200805,"3.0"},{201107,"3.1"},{201307,"4.0"},{201511,"4.5"}};
  printf("We have OpenMP %s.\n", map.at(_OPENMP).c_str());



    #pragma omp parallel for
    for(uint index = 0 ; index < 7 ; ++index){
        std::cout<<"hola "<<index<<std::endl;
    }

    bool continueFlag = true;
    do{
        //bool continueFlag = false;
        
        #pragma omp parallel for
        for(uint t = 0 ; t < 100 ; ++t){

        }
    } while(continueFlag);
  return 0;
}
