/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto G
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto G\n" <<std::endl;
    //Se crean dos matrices
    Eigen::Matrix3d A;
    A << 2, 7, 3,
         3, 9, 4,
         1, 5, 3;
    Eigen::Matrix3d B;
    B << 1, 0, 2,
         0, 1, 0,
         0, 0, 1;
    Eigen::Matrix3d operacion;
    //Se imprimen las matrices anteriores
    std::cout << "Matrix A\n" << A << std::endl;
    std::cout << "Matrix B \n" << B << std::endl;
    std::cout << "\n  =='XA=B'== "<< std::endl;
    /*XA=B
    X=BA⁻¹
    */
    operacion = B*A.inverse();
    std::cout << operacion <<std::endl;

    return 0;
}
