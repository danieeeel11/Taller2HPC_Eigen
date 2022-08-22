/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto E
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto E\n" <<std::endl;
    //Se crean tres matrices
    Eigen::Matrix<double,2,3> A;
    A << 3, 0, -1,
         0, 2, 1;
    Eigen::Matrix<double,3,2> B;
    B << 1, 2,
         1, 0,
         0, 6;
    Eigen::Matrix2d C;
    C << -2, 0,
         -2, -5;
    Eigen::Matrix<double, Eigen::Dynamic,Eigen::Dynamic> operacion;
    //Se imprimen las matrices anteriores
    std::cout << "Matrix A\n" << A << std::endl;
    std::cout << "Matrix B \n" << B << std::endl;
    std::cout << "Matrix C \n" << C << std::endl;
    std::cout << "\n  =='X=2(AB+C)'== "<< std::endl;
    operacion = 2*((A*B)+C);
    std::cout << operacion <<std::endl;

    return 0;
}
