#include "Commision.h"
#include "employee.h"
#include "fixed.h"
#include "hourly.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <memory>
#include <vector>

using std::make_shared;
using std::shared_ptr;
using std::vector;

double TotalEmployeeEarnings(const std::vector<std::shared_ptr<Employee>>& Workers)
{
	auto TotalEarnings = 0.0;
	
	for(const auto& employee : Workers)
		
	{
		TotalEarnings += employee->earnings();
		
	}
	
	return TotalEarnings;
	
}

TEST_CASE("Calculate total wages") {
	
	
	shared_ptr<Employee> employee1_ptr = make_shared<FixedRateWorker>("Ted", "Ramgasamy", 905.00);
	shared_ptr<Employee> employee2_ptr = make_shared<HourlyWorker>("Louisa", "Mahlungu", 12.00, 52);
	shared_ptr<Employee> employee3_ptr = make_shared<CommisionWorker>("Arlo", "Eardley", 30000.00, 100, 0.1);
	vector<shared_ptr<Employee>> Workers = {employee1_ptr, employee2_ptr, employee3_ptr};
	
	CHECK(31611 == TotalEmployeeEarnings(Workers));
	
}