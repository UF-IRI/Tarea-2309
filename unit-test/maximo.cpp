#include "gmock/gmock.h"

#include "maximo.h"



	TEST(ExampleTests, Example) {
		Example example{};
        ASSERT_THAT(example.getValue(), Eq(99));
	}
