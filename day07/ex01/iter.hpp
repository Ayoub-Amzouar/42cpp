#ifndef __ITER_HPP__
#define __ITER_HPP__

template<class T>
void	iter(T **arr, int len, void (*fun_ptr)(T))
{
	for (int i = 0; i < len; i++)
		(*fun_ptr)(*arr[i]);
}

#endif