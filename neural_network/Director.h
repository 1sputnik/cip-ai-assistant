#pragma once
#include "NeuralNetwork.h"
#include <vector>
#include <iostream>
#include <fstream>
#include "Adapters.h"
#include "Builder.h"
#include "Teacher.h"

using std::vector;
using std::pair;

// ���� �� ����, ���� �������� �� ���� ����, ���� �� � ��������� ��������� ����� ������
// ���� ����� �� ��������� �����
/*
struct Information
{
	size_t forecast_shift;//����� �� �������� (�� ������� ������������)
	size_t data_shift;//����� �� ������ (�� ������� ���������� �� ������)
	size_t qua_layers;//���������� ����
};*/

struct CotainerNetwork
{
//����� ������� �� ���� � ����� � ���� ����
	AdapterBegin* begin;
	//AdapterEnd* end;
	NeuralNetwork* network;
	//Information inf;
};
/*
typedef pair<double, double> coef_func_pair;
typedef vector<int> intor;

typedef long long llong;

// ��������� ����� ������������ ���� � ������ 
struct GeneralTypeNetwork {
	//std::string instruction_type;
	llong output_network_size; // ������ ������ ����
	llong input_network_size; // ������ ����� ����
	//llong hidden_layer_network_quantity; // ���������� ������� ����
};

struct HandleTN {
	llong hidden_layer_size; // ���������� �������� � ������� ����
	bool type_of_neurons; // ��� ����� � ����������
	bool copy_layer_flag; // ����������� �� ��������� ����
	llong copy_layer_quantitu; // ������� ���� ����� �����������
};*/

//struct Instruction
//{
//	size_t forecast_shift;//����� �� �������� (�� ������� ������������)
//	size_t data_shift;//����� �� ������ (�� ������� ���������� �� ������)
//	size_t qua_layers;//���������� ����
//	vector <int> qua_of_neirons;//�-�� ��������
//	vector <bool> type_of_pointers;//��� �����
//	vector<pair<size_t,vector<coef_func_pair>>> act_func;//������ ������� ��������� � ����������
//};

typedef CotainerNetwork CnNt;


class Director
{
public:
	Director();
	~Director();

	//void GetInstruction();
	//void BuildNetwork(Instruction set);
	void BuildNetworkHand();
	void Train();
	vector<double> Work_();
	vector<double> Work_(vector<double> set);
	void Work();
	void Work(vector<double> set);
	void SetValues(vector<double> set);

private:
	size_t how_many_NS;
	CnNt network;
	//vector <CnNt> networks;
	vector<double> values;
};
