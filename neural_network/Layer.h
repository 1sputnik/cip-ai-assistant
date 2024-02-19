#pragma once
#include <vector>
#include "Neirons.h"

using std::vector;
using std::pair;

class Neiron;
typedef pair<size_t, size_t> act_qua; // ���� ������� ��������� � �-�� ��������
typedef vector< act_qua> activations; // ���� ������� ��������� � �-�� ��������
//typedef AbstractNeirons Neiron;

class Layer
{
private:
	friend class Builder;
	
	vector<Neiron*> pt_this;
	vector<Neiron*> pt_next;
	vector<Neiron*> pt_prev;
	
	size_t qua_of_neirons;
	void MakeConnectionNext(Layer* next, bool type);
	void MakeConnectionPrev(Layer* prev, bool type);
public:

	Layer();
	Layer(size_t type_of_active, size_t quantity); 
	Layer(size_t type_of_active,double a, double b, size_t quantity);
	Layer(size_t type_of_active, double a, size_t quantity);
	Layer(vector<Neiron*> set);
	~Layer();
	vector<Neiron*> GetThisLayer();// ��������� ������� ���������� �� ������� ����� ����
	vector<Neiron*> GetNextLayer();// ��������� ������� ���������� �� ������� ���������� ����
	vector<Neiron*> GetPrevLayer();// ��������� ������� ���������� �� ������� ����������� ����
	//activations GetInformationAboutActivation();// �������� � �������
	Neiron* GetNeiron(size_t position); // ��������� ������� ��������� �� ������ � ������� (��������� ��� ��� �����������)
	size_t NeironsInLayer();
	void SetPointer(Neiron* some);
	void SetPrevLayer(vector<Neiron*> prev_layer);
	void SetPrevLayer(vector<Neiron*> prev_layer, bool type_connection);
	void SetNextLayer(vector<Neiron*> next_layer);
	void SetNextLayer(vector<Neiron*> next_layer, bool type_connection);
	void WorkLayer();
	void PutValues(vector<double> in);
	vector<double> GetY();
	vector<double> GetDiff();
	void ClearAll(); 
	void ClearX();


};



