/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto J
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto J\n" <<std::endl;
    //Se crean una matriz
    Eigen::Matrix2d A;
    A << 4, 2,
         -1, 0;
    Eigen::Matrix2d operacion;
    //Se imprimen las matrices anteriores
    std::cout << "Matrix A\n" << A << std::endl;
    std::cout << "\n  =='X=A³'== "<< std::endl;
    operacion = A*A*A;
    std::cout << operacion <<std::endl;

    return 0;
}
