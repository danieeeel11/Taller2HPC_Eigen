/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto F
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto F\n" <<std::endl;
    //Se crean dos matrices
    Eigen::Matrix3d A;
    A << 1, 5, -1,
         -1, 2, 2,
         0, -3, 3;
    Eigen::Matrix3d B;
    B << -1, -4, 3,
         1, -2, -2,
         -3, 3, -5;
    Eigen::Matrix3d operacion;
    //Se imprimen las matrices anteriores
    std::cout << "Matrix A\n" << A << std::endl;
    std::cout << "Matrix B \n" << B << std::endl;
    std::cout << "\n  =='X=A+3B'== "<< std::endl;
    operacion = A+3*B;
    std::cout << operacion <<std::endl;

    return 0;
}
