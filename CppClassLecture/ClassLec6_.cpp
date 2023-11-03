//
// Created by Hà Tường Nguyên on 9/20/23.
//

#include "ClassLecturePackage.h"

class Instrument {
public:
    virtual void makeSound() {
        cout << "Instrument playing..." << endl;
    }

};

class Accordion : public Instrument {
public:
    void makeSound() {
        cout << "Accordion playing..." << endl;
    }
};

void ClassLec6() {
    std::cout << "\t\tORIENTED OBJECT PROGRAMMING" << endl << "Lecture 6: VIRTUAL, ABSTRACT \n" << std::endl;

    // Virtual function: a function is defined in base class, then redefined in the child class
    /*
     * Dòng mã `Instrument* [var] = new Accordion();` là một ví dụ của việc sử dụng đa hình (polymorphism) trong ngôn ngữ lập trình C++. Để hiểu câu lệnh này, hãy xem xét các yếu tố sau:
     * 1.`Instrument`: Đây là một lớp (hoặc kiểu dữ liệu) trong chương trình của bạn, có thể đại diện cho một loại nhạc cụ nào đó hoặc một khái niệm chung về nhạc cụ.
     * 2.`Accordion`: Đây là một lớp dẫn xuất từ lớp `Instrument`. Lớp `Accordion` có thể là một loại nhạc cụ cụ thể, được kế thừa từ lớp `Instrument`. Điều này có nghĩa rằng `Accordion` có thể được coi là một loại `Instrument`.
     * 3.`Instrument* [var]`: Đây là một con trỏ đến đối tượng kiểu `Instrument`. Con trỏ này có thể trỏ đến bất kỳ đối tượng nào mà kiểu của nó là `Instrument`, hoặc các lớp kế thừa từ `Instrument`.
     * 4.`new Accordion()`: Đây là toán tử `new` được sử dụng để tạo một đối tượng mới của lớp `Accordion` trong bộ nhớ và trả về một con trỏ đến đối tượng này.
     * Vì `Accordion` là một lớp dẫn xuất từ `Instrument`, nên bạn có thể gán con trỏ trỏ đến một đối tượng `Accordion` cho con trỏ kiểu `Instrument*` một cách hợp pháp.
     * Điều này cho phép bạn sử dụng đa hình để thực hiện các thao tác trên `[var]` như một đối tượng `Instrument`, đồng thời giữ được tính đa hình,
     * có nghĩa là nếu có các phương thức ảo trong lớp cơ sở `Instrument`, chúng sẽ được triển khai trong lớp dẫn xuất `Accordion`.
     */
    Instrument a;
    a.makeSound();
    Accordion b;
    b.makeSound();
    Instrument* c =  new Accordion();
    c->makeSound();
    Instrument* d =  new Accordion;
    d->makeSound();
}