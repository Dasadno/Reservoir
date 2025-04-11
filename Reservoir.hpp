#pragma once

#include "ReservoirEnum.cpp"

#include <string>
#include <fstream>
#include <iostream>

class Reservoir
{
public:

	Reservoir();

	Reservoir(std::string title, double weight, double width, double deep, ReservoirTypes reservoirType);

	Reservoir(const Reservoir& other);

	std::string GetTitle();

	double GetDeep() const;

	double GetLenght() const;

	double GetWidth() const;

	ReservoirTypes GetReservoirType() const;

	void SetTitle(std::string title);

	void SetDeep(const double& deep);

	void SetLenght(const double& lenght);

	void SetWidth(const double& width);

	double Volume() const;

	double Perimetr() const;

	bool IsTypeEqual(const Reservoir& other);

	bool IsReservoirLarger(const Reservoir& other);

	bool IsReservoirSmaller(const Reservoir& other);

	void Serialize();

	void GetInfo();

private:
	ReservoirTypes _reservoirType;
	
	std::string _title;

	double _deep;
	double _lenght;
	double _width;
};
