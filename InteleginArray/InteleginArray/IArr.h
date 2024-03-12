/*
������ 1. ����� ������
��������
��� ����� ����������� ����� ������ ��� ������ ���� int � ���� ������ RAII,
������� ��� ��������� ����� �������: �������������� �������� � ��� �������� � �������, ����� ������ ������� ������ �� ������������.

������ ���� ����������� ��������� �������:

�����������, ���������� ���������� ���������, ������� ����� ������� ������.
������� ���������� ������ �������� � ������. �� �������� ���������� ������, ����� ���������� ��������� ������ ���������� ���������, �� ������� �������� ������.
������� ��������� �������� �� �������. �� �������� �������� �� ������������ �������.
����������.
������ ���������� ������ ���������
������ � ����� ������� ������ ����������� ���:

try {
	smart_array arr(5);
	arr.add_element(1);
	arr.add_element(4);
	arr.add_element(155);
	arr.add_element(14);
	arr.add_element(15);
	std::cout << arr.get_element(1) << std::endl;
}
catch (const std::exception& ex) {
	std::cout << ex.what() << std::endl;
}

*/



#pragma once
class smart_array
{
protected:
	int* array1;
	int actual_size=0;
	int index = 0;
public:
	smart_array(int a)
	{
		int* arr = new int[a];
		this->array1 = arr;
		this->actual_size = a;
		
	}
	int get_element(unsigned int arr);
	
	int* add_element(unsigned int new_element);
	
	~smart_array()
	{
		delete[] array1;
	}
	
};