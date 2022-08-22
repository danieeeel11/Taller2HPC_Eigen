/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto D
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto D\n" <<std::endl;
    //Se crean dos matrices 2x2
    Eigen::Matrix2d A;
    A << 2, 1, -4, -3;
    Eigen::Matrix2d B;
    B << 2, 2, 6, 4;
    Eigen::Matrix2d operacion;
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
