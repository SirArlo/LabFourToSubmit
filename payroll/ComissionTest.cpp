#include "Commision.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <memory>
#include <vector>

using std::make_shared;
using std::shared_ptr;
using std::vector;


TEST_CASE("Comission Calculates Correctly") {
	
    shared_ptr<CommisionWorker> Test1_Ptr = make_shared<CommisionWorker>("Arlo", "Eardley", 30000.00, 100, 0.1);
	CHECK(30010 == Test1_Ptr->earnings());
	
}

TEST_CASE("Can set number of items sold") {

	shared_ptr<CommisionWorker> Test3_Ptr = make_shared<CommisionWorker>("Arlo", "Eardley", 30000.00, 100.00, 1.00);

	Test3_Ptr  -> setNoSold(2);
	CHECK(30200 == Test3_Ptr->earnings());
	
}


TEST_CASE("Can set Base salary") {
	
  shared_ptr<CommisionWorker> Test2_Ptr = make_shared<CommisionWorker>("Arlo", "Eardley", 30000.00, 100, 0.1);
	
	CHECK(30010 == Test2_Ptr->earnings());
	
	Test2_Ptr ->setBaseSalary(10);
	CHECK(20== Test2_Ptr->earnings());
	
}

TEST_CASE("Can set the comission") {

	shared_ptr<CommisionWorker> Comissioned_Ptr = make_shared<CommisionWorker>("Arlo", "Eardley", 100, 10, 1);
	CHECK(110 == Comissioned_Ptr->earnings());
	Comissioned_Ptr ->setCommission(2);
	CHECK(102 == Comissioned_Ptr->earnings());
	
}