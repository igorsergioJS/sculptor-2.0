#include <iostream>
#include "sculptor.h"
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    nx = _nx; ny = _ny; nz = _nz;
    if(nx<=0)
    {
        nx = 0;
    }
    if(ny<=0)
    {
        ny = 0;
    }
    if(nz<=0)
    {
        nz = 0;
    }

    //Alocação dinâmica da memória para a matriz 3D
    v = new Voxel**[nx];
    v[0] = new Voxel*[nx*ny];
    v[0][0] = new Voxel[nz*ny*nx];

    for(int i=1;i<nx;i++)
    {
        v[i] = v[i-1]+ny;
    }

    for(int i=1; i<(nx*ny);i++)
    {
        v[0][i]=v[0][i-1]+nz;
    }

}

Sculptor::~Sculptor()
{
    // Liberação da memória alocada;
    delete [] v[0][0];
    delete [] v[0];
    delete [] v;
}

void Sculptor::setColor(float _r, float _g, float _b, float alpha)
{
    r = _r;
    g = _g;
    b = _b;
    a = alpha;
}

void Sculptor::putVoxel(int x, int y, int z)
{
    v[x][y][z].isOn = true;
    v[x][y][z].r = r;
    v[x][y][z].g = g;
    v[x][y][z].b = b;
    v[x][y][z].a = a;

}

void Sculptor::cutVoxel(int x, int y, int z)
{
    v[x][y][z].isOn = false;
}

void Sculptor::writeOFF(string filename)
{

    int aux = 0;
    int Nface = 0;
    int Nvert = 0;

    ofstream arq;
    arq.open(filename);


    for(int i=0;i<nx;i++)
    {
        for(int j=0;j<ny;j++)
        {
            for(int k=0;k<nz;k++)
            {
                if(v[i][j][k].isOn)
                {
                    Nvert = Nvert+8;
                    Nface = Nface+6;

                }
            }
        }
    }


    arq << "OFF" << endl; //Primeira linha do arquivo (obrigatória)
    arq << Nvert << " " << Nface << " " << 0 << endl;

    // Laço para atribuir os devidos valores dos vértices de cada voxel no arquivo
    for(int i=0;i<nx;i++)
    {
        for(int j=0;j<ny;j++)
        {
            for(int k=0;k<nz;k++)
            {
                if(v[i][j][k].isOn)
                {
                    arq<<i-0.5<<" "<<j+0.5<<" "<<k-0.5<<endl;
                    arq<<i-0.5<<" "<<j-0.5<<" "<<k-0.5<<endl;
                    arq<<i+0.5<<" "<<j-0.5<<" "<<k-0.5<<endl;
                    arq<<i+0.5<<" "<<j+0.5<<" "<<k-0.5<<endl;
                    arq<<i-0.5<<" "<<j+0.5<<" "<<k+0.5<<endl;
                    arq<<i-0.5<<" "<<j-0.5<<" "<<k+0.5<<endl;
                    arq<<i+0.5<<" "<<j-0.5<<" "<<k+0.5<<endl;
                    arq<<i+0.5<<" "<<j+0.5<<" "<<k+0.5<<endl;
                }
            }
        }
    }

    // Laço para atribuir o devido ordenamento das faces de cada voxel no arquivo;
    for(int i=0;i<nx;i++)
    {
        for(int j=0;j<ny;j++)
        {
            for(int k=0;k<nz;k++)
            {
                if(v[i][j][k].isOn)
                {
                   arq << 4 << " " << aux+0 << " " << aux+3 << " " << aux+2 << " " << aux+1 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                   arq << 4 << " " << aux+4 << " " << aux+5 << " " << aux+6 << " " << aux+7 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                   arq << 4 << " " << aux+0 << " " << aux+1 << " " << aux+5 << " " << aux+4 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                   arq << 4 << " " << aux+0 << " " << aux+4 << " " << aux+7 << " " << aux+3 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                   arq << 4 << " " << aux+3 << " " << aux+7 << " " << aux+6 << " " << aux+2 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                   arq << 4 << " " << aux+1 << " " << aux+2 << " " << aux+6 << " " << aux+5 << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;

                   aux = aux + 8;
                }
            }
        }
    }

    // Verifica se o arquivo é gerado. Quando não aparece mensagem alguma, provavelmente houve alguma falha na alocação;
    if(arq.is_open())
        {
            cout << "arquivo OFF salvo com sucesso ! "<<endl;
        }
    else
    {
        cout << "Erro ao salvar o arquivo" << endl;
    }

}
