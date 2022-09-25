#include "gmock/gmock.h"
#include "ConjuntoEnterosLib.h"

TEST(PruebaExtremos, ElementosIndenticos) {
	int elementos[] = {1, 1, 1};
	Extremos result = encontrarExtremos(elementos, 3);
	ASSERT_EQ(result.minimo, 1);
	ASSERT_EQ(result.maximo, 1);
}
TEST(PruebaExtremos, Min1Max90) {
	int elementos[] = { 12, 11, 50, 7, 90, 1, 2 };
	Extremos result = encontrarExtremos(elementos, 7);
	ASSERT_EQ(result.minimo, 1);
	ASSERT_EQ(result.maximo, 90);
}
TEST(PruebaExtremos, Min10negMax1neg) {
	int elementos[] = { -8, -1, -10, -7, -6, -4, -2 };
	Extremos result = encontrarExtremos(elementos, 7);
	ASSERT_EQ(result.minimo, -10);
	ASSERT_EQ(result.maximo, -1);
}

TEST(PruebaExtremos, Min15negMax50) {
	int elementos[] = { -15, -5, -3, 20, 0, 50, 36 };
	Extremos result = encontrarExtremos(elementos, 7);
	ASSERT_EQ(result.minimo, -15);
	ASSERT_EQ(result.maximo, 50);

}