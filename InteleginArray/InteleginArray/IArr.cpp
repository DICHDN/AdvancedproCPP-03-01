#include <iostream>
#include "IArr.h"


int smart_array::get_element(int arr)
{
    return array1[arr];
}


int* smart_array::add_element(int new_element)
{
    if (index < actual_size)
    {
        array1[index] = new_element;
        ++index;
    }
    else std::cout << "out if rage array!";
   
    return array1;
}



