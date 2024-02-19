#pragma once
#include "NeuralNetwork.h"



/*
����:

�������� �������� �������� 
����� �������������� �����

*/

class Teacher
{
public:
	Teacher();
	~Teacher();
	Teacher(NeuralNetwork train);
	void SetData(vector<double> data);
	void TrainBPE();// �������� ��������� ����������� ��� (��������� ��������������� ������)
	void TrainAutoencoder();// �������� ��������� ����������� ��������������� ������ (�� ��������� � ���)
	void TrainDeepAutoencoder();// �������� ��������� ����������� ��������������� ������ 
	void TrainDeepBolzman();// �������� ��������� ����������� ������������ ������ ��������� ( ���� �� ����� ������� �������)
private:
	/*��������������� ����������*/
	double alfa;
	size_t itterations;//��������� �� �������
	//vector <Layer*> layers;
	NeuralNetwork network;
	vector<double> data;
};


