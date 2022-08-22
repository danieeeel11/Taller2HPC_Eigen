/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto K
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto K\n" <<std::endl;
    //Se crean tres matrices
    Eigen::Matrix2d A;
    A << 2, 4,
         3, 2;
    Eigen::Matrix2d B;
    B << 1, 0,
         2, 1;
    Eigen::Matrix2d C;
    C << 7, 5,
         6, 1;
    Eigen::Matrix2d operacion;
    //Se imprimen las matrices anteriores
    std::cout << "Matrix A\n" << A << std::endl;
    std::cout << "Matrix B \n" << B << std::endl;
    std::cout << "Matrix C \n" << C << std::endl;
    std::cout << "\n  =='A^TXB=C'== "<< std::endl;
    /*A^TXB=C
    X=((A^T)⁻¹)C(B⁻¹)
    */
    A.transposeInPlace();
    operacion = A.inverse()*C*B.inverse();
    std::cout << operacion <<std::endl;

    return 0;
}
