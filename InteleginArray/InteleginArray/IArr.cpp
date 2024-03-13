#include <iostream>
#include "IArr.h"



 
smart_array:: smart_array(int a)
{
    int* arr = new int[a];
    this->array1 = arr;
    this->actual_size = a;
    this->index = 0;
}

int smart_array::get_element(unsigned int arr)
{
    
    
    if (arr < index)
    {
        return array1[arr];
    }
    else
    {
        std::cout << "Out if rage array! Last index = ";
        return index-1;
    }
    
}


int* smart_array::add_element(unsigned int new_element)
{
    if (index < actual_size)
    {
        array1[index] = new_element;
        ++index;
    }
    else {std::cout << "Out if rage array! Size arry = "<< actual_size;
   
    return array1;
}



