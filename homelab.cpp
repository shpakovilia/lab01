#include <cmath>
#include <iostream>


int main()
{
//1
    std::cout << 3.14 << std::endl;
    //////////////////////////////////////
//2
    std::cout <<1<<" "<<13<<" "<<49<< std::endl;
    /////////////////////////////////////
//3
    char c = 0;
    std::cout <<"enter symbols"<< std::endl;
    std::cin >> c;
    std::cout <<1<<c<<13<<c<<49<< std::endl;
    /////////////////////////////////////
//4
    int a = 0;
    int b = 0;
    int d = 0;

    std::cout <<"enter numbers"<< std::endl;
    std::cin >> a >> b >> d;
    std::cout <<a<<"  "<<b<<"  "<<d<< std::endl;
    //////////////////////////////////////
//5
    double e = 0;
    double x = 0;
    double y = 0;
    std::cout <<"enter e"<< std::endl;
    std::cin >> e;
    x=12*e*e + 7*e - 12;
    std::cout <<e<< std::endl;
    y=3*x*x*x + 4*x*x - 11*x;
    std::cout <<y<< std::endl;
    /////////////////////////////////////

//6
    double v = 0;
    double m = 0;
    double p = 0;


    std::cout <<"enter mass and volume"<< std::endl;
    std::cin >> m >> v;
    p=m/v;
    std::cout <<p<< std::endl;
    /////////////////////////////////////

//7
    double q = 0;
    double w = 0;
    double r = 0;
    //qw + r = 0;
    std::cout <<"enter q and r"<< std::endl;
    std::cin >> q >> r;
    w=(-r)/q;
    std::cout <<w<< std::endl;
    /////////////////////////////////////
    
//8
    double x1 = 0;
    double x2 = 0;
    double y1 = 0; 
    double y2 = 0;
    double l = 0;
    std::cout <<"enter the coordinates"
            << "x1= "
            << "y1= " 
            << "x2= "
            << "y2= "
            << std::endl;
     std::cin >> x1 >> y1 >> x2 >> y2;
    l=(x1-x2)*(x1-x2)+(y1+y2)*(y1+y2);
    sqrt(l);
    std::cout << "length between points = "<<l<< std::endl;
    ////////////////////////////////////////
    
//9
    double A = 0;
    double B = 0;
    double h = 0;
    double g = 0;
    double P = 0; 
    double u = 0;
    std::cout << "enter the length of a long side"<< std::endl;
    std::cin >> A;
    std::cout << "enter the length of a shor side" << std::endl;
    std::cin >> B;
    u=(A-B)/2;
    std::cout <<u<< std::endl;
    std::cout << "enter the high"<< std::endl;
    std::cin >> h;
    g=sqrt(h*h+u*u);    
    std::cout <<g<< std::endl;
    P=A+B+g*g;
    std::cout <<"the perimetr = "<<P<< std::endl;
    /////////////////////////////////////////////
    
//10
    double R = 0;
    double R0 = 0;
    double pi = 3.14;
    double S1 = 0;
    double S2 = 0;
    double S3 = 0;
    std::cout << "enter the radius of a big round" << std::endl;
    std::cin >> R;
    std::cout << "ener the radius of a small round" << std::endl;
    std::cin >> R0;
    S1=pi*R*R;
    S2=pi*r*r;
    S3=S1-S2;
    std::cout << "the square of a ring = "<<S3<< std::endl;
    /////////////////////////////////////////

//11 
    double L = 0;
    double V = 0;
    double S = 0;
    std::cout <<"enter the length of a side"<< std::endl;
    std::cin >> L;
    V=L*L*L;
    S=L*L*6;
    std::cout << "the volume of the cube = "<<V
            <<" and the square of a cube = " <<S
            << std::endl;
    ////////////////////////////////////////
    
//12
        double k = 0;
    double per = 0;
    std::cout <<" enter the length of a side"<< std::endl;
    std::cin >> k;
    per=k*4;
    std::cout <<"perimetr = "<<per<< std::endl;
    //////////////////////////////////////
    
//13 
    double R1 = 0; 
    double D = 0;
    std::cout <<" enter the radius "<< std::endl;
    std::cin >> R1;
    D=2*R1;
    std::cout <<"the diameter of the circle = "<<D<< std::endl; 
    }



