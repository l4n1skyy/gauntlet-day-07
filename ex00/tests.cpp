#include "Inventory.hpp"
#include "catch_amalgamated.hpp"

TEST_CASE("adding an item raises the count")
{
	Inventory inv;
	inv.add("potion");
	CHECK(inv.count() == 1);
}
