#include "gmock/gmock.h"
#include "ConjuntoEnterosLib.h"

TEST(PruebaPromedio, Sucesion1a10es5_5) {
	int elementos[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	float result = calcularPromedio(elementos, 10);
	ASSERT_EQ(result, 5.5);
}

TEST(PruebaPromedio, Promedio0) {
	int elementos[] = { 2,0,-2 };
	float result = calcularPromedio(elementos, 3);
	ASSERT_EQ(result, 0);
}