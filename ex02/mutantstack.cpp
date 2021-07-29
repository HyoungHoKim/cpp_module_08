#include "mutantstack.hpp"

template <class T>
MutantStack<T>::MutantStack()
: std::stack<T>()
{ }

template <class T>
MutantStack<T>::~MutantStack()
{ }

template <class T>
MutantStack<T>::MutantStack(const MutantStack<T> &_stack)
: std::stack<T>(_stack)
{ }

template <class T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &_stack)
{
	if (this == &_stack)
		return (*this);
	this->c = _stack.c;
	return (*this);
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}