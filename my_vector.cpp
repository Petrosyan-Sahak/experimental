#include "my_vector.h"

// Creates a vector of capacity 1, and size 0
my::vector::vector() : size
{
        m_vec = new type[1];
	m_size = 0;
	m_capacity = 1;
}


// Creates a vector of specified capacity, and size 0
my::vector::vector(std::size_t capacity)
{
	m_vec = new type[capacity];
	m_size = 0;
	m_capacity = capacity;
}


// Creates a vector of specified capacity, and
// sets all values to the value provided, the size is 0
my::vector::vector(std::size_t capacity, type init)
{
	m_vec = new type[capacity];
	m_size = 0;
	m_capacity = capacity;

	for(size_t i = 0; i < capacity; ++i)
		m_vec[i] = init;
}

// Creates a copy of a given vector
my::vector::vector(const vector& src)
{
	m_size = src.get_size();
	m_capacity = src.get_capacity();
	m_vec = new type[m_capacity];

	for(std::size_t i = 0; i < capacity; ++i)
		m_vec[i] = src.at(i);
}

// Moves the vector from tmp to the newly created one
// after moving we set the tmp.m_vec pointer to null, 
// to avoid double free errors
my::vector::vector(vector&& tmp)
{
	m_capacity = tmp.get_capacity();
	m_size = tmp.get_size();
        m_vec = tmp.get_vec_ptr;
	tmp.set_vec_ptr(nullptr);
}


// Deleting the memory taken
my::vector::~vector()
{
	delete[] m_vec;
}
