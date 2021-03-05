#include<iostream>
#include<fstream>
#include<cmath>
#include<cstdlib>
#include<string>
int main (int argc, char**argv)
{
    double xmin=1.0;
    double xmax=1.0;
    int N=100;
    std::string data;
    std::ifstream fin ("pmt.txt");
    fin >> xmin >> data;
    fin >> xmax >> data;
    fin >> N>> data;
std::cout<< xmin <<"\t"<< xmax<<"\t"<< N<<"\n";

    double deltax=(xmax-xmin)/N;

    std::ofstream fout ("data1.txt");

    for(int ii=0; ii<=N; ii++){

        fout<<xmin+deltax*ii<<"\t"<< sin(xmin+deltax*ii)<<"\n";

    }
     fout.close();
    return 0;
}
