#include "RiverUI.hpp"



ReservoirUI::ReservoirUI() {}

ReservoirUI::ReservoirUI(std::vector<Reservoir> ReservoirList)
{
	for (Reservoir item : ReservoirList)
	{
		_reservoirList.push_back(item);
	}
}

ReservoirUI::ReservoirUI(const ReservoirUI& other)
{
	for (Reservoir item : other._reservoirList)
	{
		_reservoirList.push_back(item);
	}
}


void ReservoirUI::GetReservoirsInfo() const
{
	for (Reservoir item : _reservoirList)
	{
		item.GetInfo();
	}
}

void ReservoirUI::SerializeReservoirList()
{
	for (Reservoir item : _reservoirList)
	{
		item.Serialize();
	}
}

std::vector<Reservoir> ReservoirUI::GetReservoirList()
{
	return _reservoirList;
}


