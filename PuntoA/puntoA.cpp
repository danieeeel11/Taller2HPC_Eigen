/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto A
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto A\n" <<std::endl;
    //Se crean dos matrices 2x2
    Eigen::Matrix2d A;
    A << 4, -2, 1, -7;
    Eigen::Matrix2d B;
    B << -1, 2, 6, -5;
    Eigen::Matrix2d operacion;
    //Se imprimen las matrices anteriores
    std::cout << "Matrix A\n" << A << std::endl;
    std::cout << "Matrix B \n" << B << std::endl;
    //std::cout << "\n Matrix A*3 \n"<< A.array()*3 <<std::endl;
    //std::cout << "\n Matrix B*4 \n"<< B.array()*4 <<std::endl;
    std::cout << "\n  =='3A-4B'== "<< std::endl;
    operacion = A.array()*3 - B.array()*4;
    std::cout << operacion <<std::endl;

    return 0;
}
