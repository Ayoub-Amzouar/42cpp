#ifndef __ITER_HPP__
#define __ITER_HPP__

template<typename T>
void	iter(T *arr, int len, void (*fun_ptr)(T const &))
{
	for (int i = 0; i < len; i++)
		(*fun_ptr)(arr[i]);
}

#endif