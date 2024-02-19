#pragma once
#include "Neirons.h"
#include "Layer.h"
#include "Builder.h"
#include "NeuralNetwork.h"
//#include "Director.h"
#include <vector>



using std::vector;
class AdapterBegin;
class AdapterEnd;
class Builder;


class AdapterBegin // ������� ��� ������
{
	friend class Builder;
public:
	AdapterBegin();
	AdapterBegin(NeuralNetwork* this_ns);
	AdapterBegin(NeuralNetwork* this_ns, bool type_connection);
	AdapterBegin(bool type_of_connection, size_t values_to_layer, size_t how_many_set, size_t data_shift);
	AdapterBegin(bool type_of_connection, size_t values_to_layer, size_t how_many_set);
	~AdapterBegin();
	void Work();
private:
	void SetPointers(vector<Neiron*> neirons);
	void SetLayer(Layer* first_layer);


	vector<double> data;// ����� �������� �� ����������

    //AdapterEnd* previous_adapter;// ��������� �� ���������� �������
	//NeuralNetwork* previous_ns;// ���� �� ����������

	NeuralNetwork* this_ns;// ��������� �� ���������
	Layer* first_layer;// ��������� �� ������ ����
	vector<Neiron*> neirons;
	
	

	AdapterEnd* this_adapter;// ��������� �� �������� ������� (�������� �� ����������)

	bool type_of_connection;// ��� ����������� � ������� ���� 1 - ��� ������ �� ���� ��������, 0 - ���� ����� �� ���� ������
	size_t values_to_layer;//������� � ��� ��������
	size_t how_many_set;// ������� �������� ����������
	size_t data_shift;//����� �� ������

};







class AdapterEnd
{
public:
	AdapterEnd();
	~AdapterEnd();

private:
	//����� �����������������
	vector<double> data;// ����� �������� �� ����������

	//NeuralNetwork* next_ns;
	AdapterBegin* next_adapter;


	//NeuralNetwork* this_ns;
	AdapterBegin* this_adapter;

};