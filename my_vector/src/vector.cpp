#ifndef __VECTOR__
#define __VECTOR__
#include "../../header.hpp"

template <typename type>
class vector{
private:
    type *data;
    int capacity;
    int size;
public:
    vector();
    vector(int size);
    void push_back(type data);
    void display();
    };
template <typename type>
vector<type>::vector()
{
    capacity = 1;
    size = 0;
}

template <typename type>
vector<type>::vector(int size)
{
    this->size = size;
    capacity = size;
    data = new type[size];
    for(int i = 0; i < size; i++)
    {
        *(this->data + i) = 0; 
    }
}
template <typename type>
void vector<type>::push_back(type data)
{
    size++;
    if(size>capacity)
    {
        capacity *=2;
        type *newdata = new type[capacity];
        for(int i = 0; i < size; i++)
        {
            *newdata[i] = *data[i];
        }
        delete this->data[size - 1];
        this->data = newdata;
    }     
    *(this->data + size - 1) = data; 
}
template <typename type>
void vector<type>::display()
{
    for(int i = 0; i < size; i++)
    {
        cout << *(this->data + i);
    }
}

#endif