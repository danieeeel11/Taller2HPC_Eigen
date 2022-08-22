/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto H
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto H\n" <<std::endl;
    //Se crean dos matrices
    Eigen::Matrix3d A;
    A << 1, 1, 1,
         6, 5, 4,
         13, 10, 8;
    Eigen::Matrix3d B;
    B << 0, 1, 2,
         1, 0, 2,
         1, 2, 0;
    Eigen::Matrix3d operacion;
    //Se imprimen las matrices anteriores
    std::cout << "Matrix A\n" << A << std::endl;
    std::cout << "Matrix B \n" << B << std::endl;
    std::cout << "\n  =='AX=B'== "<< std::endl;
    /*XA=B
    X=A⁻¹B
    */
    operacion = A.inverse()*B;
    std::cout << operacion <<std::endl;

    return 0;
}
