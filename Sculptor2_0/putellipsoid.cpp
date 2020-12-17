#include "putellipsoid.h"
#include "math.h"

PutEllipsoid::PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

PutEllipsoid::~PutEllipsoid()
{

}

void PutEllipsoid::draw(Sculptor &t)
{
    for(int i = xcenter-rx; i<=xcenter+rx; i++)
        {
            for(int j = ycenter-ry; j<=ycenter+ry; j++)
            {
                for(int k = zcenter-rz; k<=zcenter+rz; k++)
                {
                        if(((pow((i-xcenter),2)/pow(rx,2))+(pow((j-ycenter),2)/pow(ry,2))+(pow((k-zcenter),2)/pow(rz,2)))<=1.0)
                        {
                            t.setColor(r, g, b, a);
                            t.putVoxel(i,j,k);
                        }
                }
            }
        }
}
