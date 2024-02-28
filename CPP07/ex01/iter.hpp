#ifndef iter_HPP
# define iter_HPP

template <typename T>
void iter(T* arr, int len, void (*fnc)(T))
{
	for(int i = 0; i < len; i++)
		fnc(arr[i]);
}

#endif