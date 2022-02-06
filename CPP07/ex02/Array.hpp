#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>

template<typename T>
class Array
{
	public:
		// constructors
		Array(): _size(0), _arrayPtr(new T[0]){};
		Array(unsigned int n): _size(n), _arrayPtr(new T[n]) 
		{
			for (unsigned int i = 0; i < _size; i++)
				_arrayPtr[i] = T();
		};
		~Array(void){delete [] _arrayPtr; };
		Array(Array const &src): _size(src._size)
		{
			_arrayPtr = new T[src._size];
			for (unsigned int i = 0; i < src._size; i++)
				_arrayPtr[i] = src._arrayPtr[i];
		};
		//operators
		Array	&operator=(Array const &rhs)
		{
			delete []_arrayPtr;
			_arrayPtr = new T[rhs._size];
			_size = rhs._size;
			for (unsigned int i = 0; i < rhs._size; i++)
				_arrayPtr[i] = rhs._arrayPtr[i];
			return (*this);
		};
		T		&operator[](unsigned int i)
		{
			if  (i >= _size)
				throw outOfRangeException();
			return (_arrayPtr[i]);
		};
		//functions
		unsigned int size() const {return (_size);};
		//nested classes
		class outOfRangeException : public std::exception
		{
			public:
				virtual const char *what() const throw() {return ("Assignation out of range"); };
		};
		private:
			// attributes
			unsigned int _size;
			T			*_arrayPtr;
};

#endif