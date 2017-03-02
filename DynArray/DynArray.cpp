#include "DynArray.hh"
#include <iostream>

DynArray::DynArray(void) {
	m_capacity = DYN_ARRAY_DEFAULT_SIZE;
	m_size = 0;
	m_data = new int[m_capacity];
}

DynArray::DynArray(size_t size) {
	m_capacity = size;
	m_size = 0;
	m_data = new int[m_capacity];
}

DynArray::DynArray(size_t size, const int &value) {
	m_capacity = size;
	m_size = m_capacity;
	m_data = new int[m_capacity];
	for (int x = 0; x < m_capacity; x++) {
		m_data[x] = value;
	}
}

DynArray::DynArray(int *arr, size_t size) {
	m_capacity = size;
	m_size = size;
	m_data = new int[m_capacity];
	for (int x = 0; x < m_capacity; x++) {
		m_data[x] = arr[x];
	}
}

DynArray::~DynArray(void) {
	delete[]m_data;
}


DynArray& DynArray::operator= (const DynArray &x) {
	m_capacity = x.m_capacity;
	m_size = x.m_size;
	m_data = x.m_data;
	for (int z = 0; z < m_capacity; z++) {
		m_data[z] = x.m_data[z];
	}
}

DynArray begin(void) const {
	return m_data[0];
}


void main() {
	int x = 10;
	int* lista = new int[x];
}