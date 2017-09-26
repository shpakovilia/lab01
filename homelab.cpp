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
    


