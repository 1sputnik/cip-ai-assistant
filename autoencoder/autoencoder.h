#pragma once

#include <iostream>
#include <vector>
#include "neiron.h"
#include "data_form.h"



class autoencoder
{

	
	std::vector<size_t> size_of_set;// ������ ���� �� �����
	std::vector<std::vector<neiron*>> p_on_neiron; // ��������� �� ������ ������

public:
	
	autoencoder();//����� ���������� ����������� � ���������, ��� ������ ���� ����


	neiron* get_pointer_on_neiron(size_t height, size_t width)// ��������� �������� �� ���������� ������ � ����
	{
	
	
	}

	std::vector<DATA> put_and_get(std::vector<DATA> input)//���� ������ ������ � �������� ���������
	{
		std::vector<DATA> output;
		return output;
	}
};


class AE_builder
{


public:



};