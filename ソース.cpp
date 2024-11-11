#include <stdio.h>
#include <stdint.h>

#include "DoubleUnsignedInt.h"

struct BarAndCar {
	DoubleUnsignedInt<uint8_t> Bar;
	DoubleUnsignedInt<uint8_t> Car;
};

bool Bar(BarAndCar& In) {
	Inc(Bar);
	return true;
}
bool Car(BarAndCar& In) {
	Inc(Car);
	return true;
}
bool WriteMemory(BarAndCar& In, Memory& M) {

	return false;
 }
bool ReadMemory(BarAndCar& In, Memory& M) {

	return false;
}

struct Memory{
	//type W = NULL;
	typedef uint8_t W;
	//type Word W;

	const size_t Size = 1;
	W/*ord*/ Steage[N] = {0,};
};

template<class T,size_t N>
Memory ConstructMemory<T, N>() {
	Memory M = { T,N };
	return N;
}
bool Free(Memory& In) {
	Free(In);

	return true;
}

In.Word* Index(Memory& In, size_t P) {
	if (In.Size <= P) { return NULL; }
	return &In.Strage[P];
}

bool Save(Memory& In, Memory& Dst) {
	return false;
}
bool Load(Memory& In, Memory& Src) {
	return false;
}

struct SystemOLDLisp {
	BarAndCar Register;
	Memory Cash;
	Memory Memory;
	Memory Strage;
	Memory DeCoder;
	Memory EnCoder;
	intmax_t LCounter = 0;
	intmax_t GCounter = 0;
};