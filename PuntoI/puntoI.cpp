/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto I
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto I\n" <<std::endl;
    //Se crean una matriz
    Eigen::Matrix2d A;
    A << 3, -1,
         0, 2;
    Eigen::Matrix2d operacion;
    //Se imprimen las matrices anteriores
    std::cout << "Matrix A\n" << A << std::endl;
    std::cout << "\n  =='X=(A^T)A-2A'== "<< std::endl;
    operacion = A.transpose()*A-2*A;
    std::cout << operacion <<std::endl;

    return 0;
}
