#ifndef __SWAP_HPP__
#define __SWAP_HPP__

template<typename T>
void	swap(T& s1, T& s2)
{
	T	temp;

	temp = s1;
	s1 = s2;
	s2 = temp;
}

#endif