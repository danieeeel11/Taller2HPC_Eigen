/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto M
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto M\n" <<std::endl;
    //Se crean tres matrices
    Eigen::Matrix<double,1,3> A;
    A << 4, 8, 12;
    Eigen::Matrix<double,3,2> B;
    B << 3, 2,
         0, 1,
         -1, 0;
    Eigen::Matrix<double,2,1> C;
    C << 3,
         -1;
    Eigen::Matrix<double, Eigen::Dynamic,Eigen::Dynamic> operacion;
    //Se imprimen las matrices anteriores
    std::cout << "Matrix A\n" << A << std::endl;
    std::cout << "Matrix B \n" << B << std::endl;
    std::cout << "Matrix C \n" << C << std::endl;
    std::cout << "\n  =='X=ABC'== "<< std::endl;
    operacion = A*B*C;
    std::cout << operacion <<std::endl;

    return 0;
}
