/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto P
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto P\n" <<std::endl;
    //Se crean dos matrices
    Eigen::Matrix4d A;
    A << 1, 1, 1, 1,
         1, 1, -1, -1,
         1, -1, 1, -1,
         1, -1, -1, 1;
    Eigen::Matrix4d B;
    B << 1, 1, 0, 0,
         1, 0, 1, 0,
         1, 0, 0, 1,
         1, 0, 1, 1;
    Eigen::Matrix4d operacion;
    //Se imprimen las matrices anteriores
    std::cout << "Matrix A\n" << A << std::endl;
    std::cout << "Matrix B \n" << B << std::endl;
    std::cout << "\n  =='AX=B'== "<< std::endl;
    /*AX=B
     X=A⁻¹B
     */
    operacion = A.transpose()*B;
    std::cout << operacion <<std::endl;

    return 0;
}
