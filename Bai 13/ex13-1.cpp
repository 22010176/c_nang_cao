#include <iostream>
#include  <string>

using namespace std;

class Product {
private:
    string code; double price;
public:
    Product(string c, double pr) {
        cout << "Base Constructor\n";
        code = c, price = pr;
    }
    ~Product() { cout << "Base Destructor\n"; }
    void show() const { cout << "\nProduct code: " << code << "\nPrice :" << price << endl; }
};

class Book :public Product {
private:
    string title, auther;
public:
    Book(string c, double pr, string tle, string au) : Product(c, pr) {
        cout << "Derived Constructor\n";
        title = tle, auther = au;
    }
    ~Book() { cout << "Derived Destructor\n"; }
    void display() const {
        this->show();
        cout << "\nBook title: " << title << "\nAuthor: " << auther << endl;
    }
};

int main() {
    Book b("AB20", 9.2, "C++", "Scott");
    Product* p = &b;
    Product& r = b;
    p->show();

    // b.show();
    b.display();

}