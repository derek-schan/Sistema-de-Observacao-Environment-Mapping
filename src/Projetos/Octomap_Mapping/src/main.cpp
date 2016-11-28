#include <iostream>

#include "octomap_library.h"

using namespace std;

int main()
{
    try
    {
        //Criando um objeto do octomap_library
        octomap_library Octomap_lib = octomap_library();

        //Criando a Octree à partir do arquivo binário para trabalharmos com ela. (Testar como criar a Octree à partir de um flow)
        Octomap_lib.teste();

        throw new exception();

    }
    catch(exception ex)
    {
        cout << "Error Occurred." << endl;
    }



    return 0;
}

