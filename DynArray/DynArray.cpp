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

int* DynArray::begin(void) const {

	return &m_data[0];
}

int* DynArray::end(void) const {
	return &m_data[m_size];
}

int& DynArray::operator[](size_t n) const {
	return m_data[n];
}

int& DynArray::at(size_t n) const {
	return m_data[n];
}

int& DynArray::front(void) const {
	return m_data[0];
}

int& DynArray::back(void) const {
	return m_data[m_size];
}

int* DynArray::data(void) const {
	return &m_data[0];
}

DynArray operator== (const DynArray& lhs, const DynArray& rhs) {
	bool equality = true;
	if (lhs.m_capacity != rhs.m_capacity)
		equality = false;
	if (lhs.m_size != rhs.m_size)
		equality = false;
	for (int x = 0; x < rhs.m_size; x++) {
		if (lhs.m_data[x] != rhs.m_data[x])
			equality = false;
	}
	return equality;
}

DynArray operator!= (const DynArray& lhs, const DynArray& rhs) {

}

DynArray operator<< (std::ostream &out, const DynArray &x) {
	for (int i = 0; i < x.m_size; i++) {
		std::cout << x.m_data[i] << ", " << std::fflush;
	}
}

DynArray min(const size_t &lhs, const size_t &rhs) {
	if (lhs < rhs)
		return lhs;
	else if (rhs < lhs)
		return rhs;
	else return 0;
} //ni idea de que es un size_t

DynArray fill(int * first, int * last, int value) {
	for (int i = * first; i < * last; i++) {
		m_data[i] = value;
	}
}

DynArray copy(int *first, int *last, int *dest) {
	for (int i = *first; i < *last; i++) {
		dest[i] = m_data[i];
	}
}

void main() {
}