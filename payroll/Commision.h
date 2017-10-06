#ifndef COMMISION_H
#define COMMISION_H
#include "employee.h"

class CommisionWorker :public Employee {
	
public:

	CommisionWorker(const string& first_name, const string& surname, double BaseSalary =0.0, double CommissionPerItem =0.0, double NoSoldItems =0.0);
	
	void setBaseSalary( double BaseSalary);		
   void setCommission( double CommissionPerItem);	
   void setNoSold( double NoSoldItems);
   
   virtual double earnings() const override;
   void print() const;
	
private:
	
	double _BaseSalary;
	double _CommissionPerItem;
	double _NoSoldItems;
	
};

#endif