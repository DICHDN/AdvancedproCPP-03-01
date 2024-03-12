#include <iostream>
#include "IArr.h"


int smart_array::get_element(unsigned int arr)
{
    
    
    if (arr < actual_size)
    {
        return array1[arr];
    }
    else
    {
        std::cout << "Индекс вне диапазона!";
        return false;
    }
    
}


int* smart_array::add_element(unsigned int new_element)
{
    if (index < actual_size)
    {
        array1[index] = new_element;
        ++index;
    }
    else std::cout << "out if rage array!";
   
    return array1;
}



