#include "gmock/gmock.h"

#include "promedio.h"

using namespace testing;

	TEST(ExampleTests, Example) {
		Example example{};
        ASSERT_THAT(example.getValue(), Eq(99));
	}
