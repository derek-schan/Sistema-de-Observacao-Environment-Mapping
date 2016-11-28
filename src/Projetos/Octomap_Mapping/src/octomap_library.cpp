#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <list>
#include <stdio.h>

//Incluindo referências do Octomap
#include <octomap/octomap.h>
//#include <octomap/OcTree.h>


//Incluindo referências do projeto
#include "octomap_library.h"


using namespace std;
using namespace octomap;

octomap_library::octomap_library()
{
    cout << "Objeto criado.\n";
}

void octomap_library::teste()
{
    string btfileName = "/home/derekchan/Dropbox/Projeto Final/mapfile.bt";

    OcTree* tree = new OcTree(btfileName);


    delete tree;

}




//void octomap_library::teste()
//{
//    string vrmlFilename = "";
//    string btFilename = "";
//    btFilename = std::string("/home/rob/Dropbox/Projeto Final/mapfile.bt");
//    vrmlFilename = btFilename + ".wrl";


//    cout << "\nReading OcTree file\n===========================\n";
//    // TODO: check if file exists and if OcTree read correctly?
//    OcTree* tree = new OcTree(btFilename);


//    cout << "\nWriting occupied volumes to VRML\n===========================\n";

//    std::ofstream outfile (vrmlFilename.c_str());

//    outfile << "#VRML V2.0 utf8\n#\n";
//    outfile << "# created from OctoMap file "<<btFilename<< " with bt2vrml\n";

//    double maxsize=0;
//    double minsize=10;
//    size_t count(0);
//    for(OcTree::leaf_iterator it = tree->begin(), end=tree->end(); it!= end; ++it) {
//      if(tree->isNodeOccupied(*it)){
//        count++;
//        double size = it.getSize();
//        outfile << "Transform { translation "
//            << it.getX() << " " << it.getY() << " " << it.getZ()
//            << " \n  children ["
//            << " Shape { geometry Box { size "
//            << size << " " << size << " " << size << "} } ]\n"
//            << "}\n";
//        double distance =sqrt(it.getX()*it.getX()+it.getY()*it.getY()+it.getZ()*it.getZ());
//        if (maxsize < distance) { maxsize= distance;}
//        if (minsize > distance) { minsize= distance;}
//      }
//    }


//    delete tree;
//    outfile.close();

//      std::cout << "Finished writing "<< count << " voxels to " << vrmlFilename << std::endl;
//      std::cout << "Max distance: "<< maxsize << std::endl;
//      std::cout << "Min distance: "<< minsize << std::endl;
//}
