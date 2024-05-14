#include <iostream>
#include <math.h>

using namespace std;

class Shape 
{
    protected:
        float width, height, c;

    public:
        void setDimensions(float w, float h) 
        {
            cout << "Sirinata i visinata na formite gi koristime za presmetuvanje na plostina i perimetar!\n";
            cout << "Sirinata i visinata se: " << w << " and " << h << "\n\n";

            width = w;
            height = h;
        }
};
class Rectangle: public Shape 
{
     public: float ploshtina() 
    {
        return (width * height);
    }
     public: float perimetar() 
    {
        return (2* (width + height));
    }
};
class Triangle: public Shape 
{
     public: float ploshtina() 
    {
        return (width * height / 2);
    }
     public: float perimetar() 
    {
        return (width + height + c );
    }
     public: float dolzina() 
    {
        c=sqrt(pow(width, 2) + pow(height, 2));
		return (c);
    }
};
int main() 
{
    Rectangle rectangle;
    Triangle triangle;

    rectangle.setDimensions(83, 8);
    triangle.setDimensions(8, 38);

    cout<<"\n Plostinata na pravoagolnikot e: " << rectangle.ploshtina();
    cout<<"\n Perimetarot na pravoagolnikot e: " << triangle.ploshtina();
    cout<<"\n Plostinata na triagolnikot e: "<<rectangle.perimetar();
    cout<<"\n Perimetarot na triagolnikot e: "<<triangle.perimetar();

    return 0;
}
