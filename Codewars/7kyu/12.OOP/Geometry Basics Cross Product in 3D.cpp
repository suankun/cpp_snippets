// https://www.codewars.com/kata/58e440d8acfd3edfb2000aee/train/cpp
struct Vector {
    double x, y, z;

    Vector(double x_, double y_, double z_) : x(x_), y(y_), z(z_) {}
};

Vector cross_product(const Vector& a, const Vector& b) {
    double x = a.y * b.z - a.z * b.y;
    double y = a.z * b.x - a.x * b.z;
    double z = a.x * b.y - a.y * b.x;

    return Vector(x, y, z);
}
