/***********************************************
* Fecha: 23 agosto de 2022
* Autor: Daniel Velásquez
* Tema: Taller Eigen
* Tópico: Punto C
* Materia: Introducción HPC
* **********************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>

int main(){
    std::cout <<"Punto C\n" <<std::endl;
    //Se crean tres matrices 2x2
    Eigen::Matrix2d A;
    A << -3, -2, 3, 3;
    Eigen::Matrix2d B;
    B << 5, 3, 9, 4;
    Eigen::Matrix2d C;
    C << 1, 1, 0, 0;
    Eigen::Matrix2d operacion;
    //Se imprimen las matrices anteriores
    std::cout << "Matrix A\n" << A << std::endl;
    std::cout << "Matrix B \n" << B << std::endl;
    std::cout << "Matrix C \n" << C << std::endl;
    std::cout << "\n  =='AXB^T=C'== "<< std::endl;
    /*AXB^T=C
    X=(A⁻¹)C((B^T)⁻¹)
    */
    B.transposeInPlace();
    operacion = A.inverse()*C*B.inverse();
    std::cout << operacion <<std::endl;

    return 0;
}
