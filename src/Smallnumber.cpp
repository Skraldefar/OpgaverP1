#include <iostream>
#include <vector>
#include <stdlib.h>


int Vectorsize {};
std::vector<int> Numre (Vectorsize);

int smallnumber()
{
    int ien {};
    int ito {};
    for(int i = 0; i < Numre.size()-1; i++)
    {

    for(int i = 0; i<Numre.size()-1; i++)
    {
        if(Numre[i] > Numre[1+i])
        {
            ien = Numre[i];
            ito = Numre[1+i];

            Numre[1+i] = ien;
            Numre[i] = ito;
        }
    }
        std::cout << Numre[0] << std::endl;
    }
    return Numre[0];
}




int main()
{
    int input {};
    
   
    std::cout << "size vector " << Numre.size() << std::endl;
    std::cout << smallnumber() << std::endl;





}