#include <iostream>
#include <Physics/Vector2D.h>


void VectorAdditionUnitTest(Vector2D, Vector2D);

// This is a console project for testing /Physics/*.cpp
int main()
{
    Vector2D a = Vector2D(3, 5);
    Vector2D b = Vector2D(10, 7);
    VectorAdditionUnitTest(a,b);
}

void VectorAdditionUnitTest(Vector2D a, Vector2D b)
{
    std::cout << "a: " << "\t\t" << a.ToString() << std::endl;
    std::cout << "b: " << "\t\t" << b.ToString() << std::endl;
    a.Add(b);
    std::cout << "a + b = " << "\t" << a.ToString();
}
