#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point* ptr = new Point;

    ptr->x = 10;
    ptr->y = 20;

    std::cout << "Les valeurs originales sont : " << ptr->x << ", " << ptr->y << std::endl;

    ptr->x = 100;
    ptr->y = 200;

    std::cout << "Les nouvelles valeurs sont : " << ptr->x << ", " << ptr->y << std::endl;

    delete ptr;

    return 0;
}