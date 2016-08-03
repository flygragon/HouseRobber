// HouseRobber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"HouseRobber.h"

int main()
{
	int m;
	cin >> m;
	vector<int> num(m);
	for (int i = 0; i < m; i++)
		cin >> num[i];
	HouseRobber H;
	cout << H.robMoney(num) << '\n';
    return 0;
}

