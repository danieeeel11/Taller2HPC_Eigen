/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto B
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto B\n" <<std::endl;
    //Se crean dos matrices 2x2
    Eigen::Matrix2d A;
    A << 0, -1, 2, 1;
    Eigen::Matrix2d B;
    B << 1, 2, 3, 4;
    Eigen::Matrix2d operacion;
    //Se imprimen las matrices anteriores
    std::cout << "Matrix A\n" << A << std::endl;
    std::cout << "Matrix B \n" << B << std::endl;
    //std::cout << "\n Matrix A*3 \n"<< A.array()*3 <<std::endl;
    //std::cout << "\n B*A \n"<< B*A <<std::endl;
    std::cout << "\n  =='2X+4A=3BA'== "<< std::endl;
    operacion = ( (3*(B*A).array()) - (4*A.array()) )/2;
    std::cout << operacion <<std::endl;

    return 0;
}

