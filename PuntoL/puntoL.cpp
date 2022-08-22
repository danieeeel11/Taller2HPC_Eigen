/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto L
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto L\n" <<std::endl;
    //Se crean dos matrices
    Eigen::Matrix<double,2,3> A;
    A << 1, 0, -2,
         2, -1, 3;
    Eigen::Matrix<double,3,2> B;
    B << 2, -3,
         -2, 0,
         -1, -2;
    Eigen::Matrix2d operacion;
    //Se imprimen las matrices anteriores
    std::cout << "Matrix A\n" << A << std::endl;
    std::cout << "Matrix B \n" << B << std::endl;
    std::cout << "\n  =='X=AA^T-2AB'== "<< std::endl;
    operacion = A*A.transpose()-2*(A*B);
    std::cout << operacion <<std::endl;

    return 0;
}
