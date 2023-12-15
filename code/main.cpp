#include<iostream>
#include"Addition.h"
#include"Sub.h"
#include"Mul.h"
#include"Div.h"



int main()
{
    int n1=40,n2=20;
    std::cout<<add(n1,n2)<<std::endl;
    std::cout<<subs(n1,n2)<<std::endl;
    std::cout<<multi(n1,n2)<<std::endl;
    std::cout<<divi(n1,n2)<<std::endl;


}