#include "Reservoir.hpp"

Reservoir::Reservoir() {}

Reservoir::Reservoir(std::string title, double lenght, double width, double deep, ReservoirTypes reservoirType)
{
	_title = title;
	_lenght = lenght;
	_width = width;
	_deep = deep;
	_reservoirType = reservoirType;
}

Reservoir::Reservoir(const Reservoir& other)
{
	_title = other._title;
	_lenght = other._lenght;
	_width = other._width;
	_deep = other._deep;
	_reservoirType = other._reservoirType;
}

std::string Reservoir::GetTitle()
{
	return _title;
}

double Reservoir::GetDeep() const
{
	return _deep;
}

double Reservoir::GetLenght() const
{
	return _lenght;
}

double Reservoir::GetWidth() const
{
	return _width;
}

ReservoirTypes Reservoir::GetReservoirType() const
{
	return _reservoirType;
}

void Reservoir::SetTitle(std::string title)
{
	_title = title;
}

void Reservoir::SetDeep(const double& deep)
{
	_deep = deep;
}

void Reservoir::SetLenght(const double& lenght)
{
	_lenght = lenght;
}

void Reservoir::SetWidth(const double& width)
{
	_width = width;
}

double Reservoir::Volume() const
{
	return _deep * _lenght * _width;
}

double Reservoir::Perimetr() const
{
	return _lenght * _width;
}

bool Reservoir::IsTypeEqual(const Reservoir& other)
{
	return _reservoirType = other._reservoirType;
}

bool Reservoir::IsReservoirLarger(const Reservoir& other)
{
	return Perimetr() > other.Perimetr();
}

bool Reservoir::IsReservoirSmaller(const Reservoir& other)
{
	return Perimetr() < other.Perimetr();
}

void Reservoir::Serialize()
{
	std::ofstream out;
	out.open("content.txt");
	if (out.is_open())
	{
		out << "Title: " << GetTitle() << "\n\n"
		<< "Deep: " << GetDeep() << ",\nLenght: " << GetLenght()
		<< ",\nReservoir type: " << GetReservoirType() << ",\nWidth: " << GetWidth() << ",\n"
		<< "Perimetr: " << Perimetr() << "\n\n\n";
	}
}

void Reservoir::GetInfo()
{
	std::cout << "Title: " << GetTitle() << "\n\n";
	std::cout << "Deep: " << GetDeep() << ",\nLenght: " << GetLenght();
	std::cout << ",\nReservoir type: " << GetReservoirType() << ",\nWidth: " << GetWidth() << ",\n";
	std::cout << "Perimetr: " << Perimetr() << "\n\n\n";
}


