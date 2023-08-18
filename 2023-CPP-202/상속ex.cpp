#include <iostream>
#include <string>


class Shape {
public:
    virtual int get_point_count() const = 0; //const�� �����
    virtual std::string get_position() const = 0;
    virtual void draw() const = 0;

    virtual ~Shape() {}
};

class RectangleShape : public Shape {
private:
    double width;
    double height;

public:
    // �����ڷ� �ʺ�� ���̸� �޾� �ʱ�ȭ
    RectangleShape(double w, double h) : width(w), height(h) {}

    //������ ���� ��ȯ
    int get_point_count() const override {
        return 4; //4�� ������
    }

    std::string get_position() const override {
        return "Top-left corner";
    }

    void draw() const override {
        std::cout << "�簢�� �׸���" << std::endl;
    }

    // �ʺ�
    double get_width() const {
        return width;
    }

    // ����
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
        std::cout << "�� �׸���" << std::endl;
    }

    // ������ ��ȯ
    double get_radius() const {
        return radius;
    }
};

int main() {

    Shape* shape1 = new RectangleShape(10, 5);

    Shape* shape2 = new CircleShape(7);

    // �簢��
    shape1->draw();
    std::cout << "�簢�� ���: " << static_cast<RectangleShape*>(shape1)->get_width() << std::endl;

    // ��
    shape2->draw();
    std::cout << "���� ���: " << static_cast<CircleShape*>(shape2)->get_radius() << std::endl;

    delete shape1;
    delete shape2;

    return 0;
}
