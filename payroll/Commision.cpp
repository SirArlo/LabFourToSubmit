#include "Commision.h"


CommisionWorker::CommisionWorker(const string& first_name, const string& surname, double BaseSalary  , double CommissionPerItem  , double NoSoldItems ):Employee(first_name, surname),_BaseSalary(BaseSalary),
 _CommissionPerItem(CommissionPerItem), _NoSoldItems(NoSoldItems){}
	   

void CommisionWorker::setBaseSalary( double BaseSalary ){
	
	_BaseSalary = BaseSalary;
	
}	


void CommisionWorker::setCommission( double CommissionPerItem){
	
	
	_CommissionPerItem = CommissionPerItem;
	
	
}


void CommisionWorker::setNoSold( double NoSoldItems ){
	
	
	_NoSoldItems =NoSoldItems;
	

	
}


void CommisionWorker::print() const
{
   cout << "Commissioned worker: ";
   Employee::print();
   
}

double CommisionWorker::earnings() const{
	
	
	
	return (_BaseSalary + (_NoSoldItems  *  _CommissionPerItem) );
	
	
}
