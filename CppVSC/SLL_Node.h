#ifndef SLL_NODE_H
#define SLL_NODE_H

#include <iostream>

namespace SLL {

template <typename NodeType>
class Node {
private:
    NodeType __data;
    Node* __p_next;

public:
    Node(NodeType __data);
    Node(const Node& other);
    ~Node();

    NodeType val();
    void val(NodeType newData);

    Node* next();
    void next(const Node& newNext);
    bool hasNext();

    std::string show();
};

} // namespace SLL

template <typename NodeType>
SLL::Node<NodeType>::Node(NodeType data) : __data(data), __p_next(nullptr) {}

template <typename NodeType>
SLL::Node<NodeType>::Node(const Node& other) : __data(other.__data), __p_next(nullptr) {
    if (other.__p_next) {
        __p_next = new Node(*other.__p_next);
    }
}

template <typename NodeType>
SLL::Node<NodeType>::~Node() {
    delete __p_next;
}

template <typename NodeType>
NodeType SLL::Node<NodeType>::val() {
    return __data;
}

template <typename NodeType>
void SLL::Node<NodeType>::val(NodeType newData) {
    __data = newData;
}

template <typename NodeType>
SLL::Node<NodeType>* SLL::Node<NodeType>::next() {
    return __p_next;
}

template <typename NodeType>
void SLL::Node<NodeType>::next(const Node& newNext) {
    __p_next = newNext;
}

template <typename NodeType>
bool SLL::Node<NodeType>::hasNext() {
    return __p_next != nullptr;
}

template <typename NodeType>
std::string SLL::Node<NodeType>::show() {
    return "[" + std::to_string(__data) + "]->";
}

#endif //SLL_NODE_H

/*
    std::cout << YELLOW << "STARTING" << RESET << std::endl;

    int a = 5, b = 6, c, d;
    c = a, b;
    d = (a, b);
    std::cout << c << " " << d;

    // std::cout << a << b << std::endl;
    // SLL::Node<int> node1 = SLL::Node<int>(1);
    // SLL::Node<int> node2 = SLL::Node<int>(2);
    // SLL::Node<int> node3 = SLL::Node<int>(3);

    // node1.next()

    // SLL::Node<int> copy_node1 = SLL::Node<int>(node1);
    // std::cout << copy_node1.show() << std::endl;
    // SLL::Node<int> node4 = SLL::Node<int>(4);
    // SLL::Node<int> node5 = SLL::Node<int>(5);
    // SLL::Node<int> node6 = SLL::Node<int>(6);

    // std::cout << node1.show() << node2.show() << node3.show() << node4.show() << node5.show() << node6.show() << std::endl;

    std::cout << GREEN << "SUCCESS!!!" << RESET << std::endl;
*/