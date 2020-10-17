#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float xo, yo, vxo, vyo, xoi, yoi;
    float xd, yd, vxd, vyd, xdi, ydi;
    int anguloo, angulod, t=0, d,vo, vd, g=9.8, t1=0 ;
    return 0;

    while(xo != xd || yo!=yd){
        vxo=vo*cos(anguloo*t);
        xo=xoi+vxo*t;
        vyo=vo*sin(anguloo*t);
        yo=yoi+vyo*t-(1/2)*g*pow(t,2);

        t++;

             if(sqrt(pow(xo,2)+pow(yo,2))-sqrt(pow(xdi,2)+pow(ydi,2))<=0.025*d){
                 angulod=atan(yo/xo);


             }





    }
}
