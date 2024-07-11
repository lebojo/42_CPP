#ifndef iter_HPP
# define iter_HPP

template <typename T, typename Func>
void iter(T* arr, int len, Func fnc)
{
	for(int i = 0; i < len; i++)
		fnc(arr[i]);
}

#endif