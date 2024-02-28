template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {};

template <typename T>
Array<T>::~Array() { if (_array) delete[] _array;};

template <typename T>
Array<T>::Array(unsigned int n): _array(new T[n]), _size(n) {};

template <typename T>
Array<T>::Array(const Array& src): _array(NULL), _size(0) { *this = src; };

template <typename T>
Array<T>& Array<T>::operator=(const Array& src) {
	if (this != &src) {
		if (_array)
			delete[] _array;
		_size = src._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = src._array[i];
	}
	return *this;
};

template <typename T>
T& Array<T>::operator[](unsigned int i) {
	if (i >= _size)
		throw std::out_of_range("Index out of range");
	return _array[i];
};

template <typename T>
size_t	Array<T>::size() const { return _size; };