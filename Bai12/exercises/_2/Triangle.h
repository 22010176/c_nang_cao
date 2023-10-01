#ifndef _TRIANGLE_
#define _TRIANGLE_

class Triangle {
private:
    float a, b, c;
public:
    Triangle(float a = 0, float b = 0, float c = 0);
    float& operator[] (int i);
    bool operator!= (const Triangle& other);
    void show() const;
};
#endif