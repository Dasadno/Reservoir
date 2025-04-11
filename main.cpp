#include "Reservoir.hpp"
#include "ReservoirUI.hpp"

int main()
{
	ReservoirUI ui;
	
	Reservoir res1;
	res1.SetDeep(50);
	res1.SetLenght(100);
	res1.SetTitle("res1");
	res1.SetWidth(20);


	Reservoir res2;

	res2.SetDeep(50);
	res2.SetLenght(100);
	res2.SetTitle("res2");
	res2.SetWidth(20);


	Reservoir res3;

	res3.SetDeep(50);
	res3.SetLenght(100);
	res3.SetTitle("res3");
	res3.SetWidth(20);


	Reservoir res4;

	res4.SetDeep(50);
	res4.SetLenght(100);
	res4.SetTitle("res4");
	res4.SetWidth(20);

	ui.GetReservoirList().push_back(res1);
	ui.GetReservoirList().push_back(res2);
	ui.GetReservoirList().push_back(res3);
	ui.GetReservoirList().push_back(res4);
	
	ui.SerializeReservoirList();
	ui.GetReservoirsInfo();
}