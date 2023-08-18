#include <iostream>
#include <string>


class Shape {
public:
    virtual int get_point_count() const = 0; //const를 사용함
    virtual std::string get_position() const = 0;
    virtual void draw() const = 0;

    virtual ~Shape() {}
};

class RectangleShape : public Shape {
private:
    double width;
    double height;

public:
    // 생성자로 너비와 높이를 받아 초기화
    RectangleShape(double w, double h) : width(w), height(h) {}

    //꼭지점 개수 반환
    int get_point_count() const override {
        return 4; //4로 리턴함
    }

    std::string get_position() const override {
        return "Top-left corner";
    }

    void draw() const override {
        std::cout << "사각형 그리기" << std::endl;
    }

    // 너비
    double get_width() const {
        return width;
    }

    // 높이
    double get_height() const {
        return height;
    }
};

class CircleShape : public Shape {
private:
    double radius;

public:
    CircleShape(double r) : radius(r) {}

    int get_point_count() const override {
        return 0;
    }

    std::string get_position() const override {
        return "Center";
    }

    void draw() const override {
        std::cout << "원 그리기" << std::endl;
    }

    // 반지름 반환
    double get_radius() const {
        return radius;
    }
};

int main() {

    Shape* shape1 = new RectangleShape(10, 5);

    Shape* shape2 = new CircleShape(7);

    // 사각형
    shape1->draw();
    std::cout << "사각형 모양: " << static_cast<RectangleShape*>(shape1)->get_width() << std::endl;

    // 원
    shape2->draw();
    std::cout << "원형 모양: " << static_cast<CircleShape*>(shape2)->get_radius() << std::endl;

    delete shape1;
    delete shape2;

    return 0;
}
