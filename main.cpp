#include <iostream>

class Shape {
public:
    virtual double computer_area() ;

};

double Shape::computer_area() {
    return 0;
}

class Rectangle : public Shape {
protected:


    double length{} ;

    double width{} ;
public:
    static double validate(double newLength, double newWidth) ;

    double computer_area() override ;


    Rectangle(double i, double i2);
};

double Rectangle::validate(double newLength, double newWidth) {
    if(sizeof(newLength) <= 0 and sizeof(newWidth) <= 0) {
        throw std::invalid_argument("length and width must be > 0") ;
    }
    return 0 ;
}

double Rectangle::computer_area() {
    double area = length * width;
    return area ;
}

class Square : public Rectangle {
public:
    explicit Square(double i);


    double newSide{} ;

    double getSide() ;

    int i2{};
};

double Square::getSide() {
    return length ;
}

Square::Square(double i) : Rectangle(i, i2) {
    i = length ;
    i = width ;

}



Rectangle::Rectangle(double i, double i2) {
    i = length ;
    i2 = width ;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    Square mySquare(2);
    std::cout << "The area of mySquare is: "
              << mySquare.computer_area()
              << std::endl;
    Rectangle myRectangle( 2, 4 );
    std::cout << "The area of myRectangle is: "
              << myRectangle.computer_area()
              << std::endl;
    return 0;

}
