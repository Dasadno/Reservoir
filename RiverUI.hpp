#pragma once

#include <vector>
#include <iostream>

#include "Reservoir.hpp"

class ReservoirUI
{
public:

	ReservoirUI();

	ReservoirUI(std::vector<Reservoir> ReservoirList);
	
	ReservoirUI(const ReservoirUI& other);

	~ReservoirUI() {};
	
	void GetReservoirsInfo() const;

	void SerializeReservoirList();

	std::vector<Reservoir> GetReservoirList();

private:
	std::vector<Reservoir> _reservoirList;
};