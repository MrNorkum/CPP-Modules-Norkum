/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Array.tpp                                                                */
/*                                                                            */
/*   By: Mr. Norkum <mrnorkum@gmail.com>                                      */
/*                                                                            */
/*   Created: 2024/01/30 04:04:17 by Mr. Norkum                               */
/*   Updated: 2024/01/30 04:04:20 by Mr. Norkum                               */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

/* ************************************************************************** */
/*                           Orthodox Canonical Form                          */
/*                                                                            */
/*   ->Array<T>::Array(void);                                                 */
/*   ->Array<T>::Array(unsigned int n);                                       */
/*   ->Array<T>::Array(const Array& copy);                                    */
/*   ->Array<T>::~Array(void);                                                */
/*                                                                            */
/*   ->Array<T>&    Array<T>::operator=(const Array& other);                  */
/*   ->T&           Array<T>::operator[](const unsigned int index);           */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array(void) : _array(0), _size(0)
{
	cout << "Default constructor called (Array<T>)" << endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
	cout << "Parameterized constructor called (Array<T>)" << endl;
}

template <typename T>
Array<T>::Array(const Array<T>& copy) : _array(new T[copy.size()]), _size(copy.size())
{
	cout << "Copy constructor called (Array<T>)" << endl;
	for (unsigned int i = 0; i < copy.size(); i++)
		this->_array[i] = copy._array[i];
}

template <typename T>
Array<T>::~Array(void)
{
	cout << "Destructor called (Array<T>)" << endl;
	delete[] this->_array;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& other)
{
	cout << "Assignment operator called (Array<T>)" << endl;
	if (this != &other)
	{
		delete[] this->_array;
		this->_array = new T[other.size()];
		this->_size = other.size();
		for (unsigned int i = 0; i < other.size(); i++)
			this->_array[i] = other._array[i];
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](const unsigned int index)
{
	if (index >= this->_size)
		throw Array<T>::OutOfBoundsException();
	return (this->_array[index]);
}

/* ************************************************************************** */
/*                                  Getters                                   */
/*                                                                            */
/*   ->const size_t&   Array<T>::size(void) const;                            */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
const size_t&	Array<T>::size(void) const
{
	return (this->_size);
}

/* ************************************************************************** */
/*                           Nested Classes                                   */
/*                                                                            */
/*   ->const char *Array<T>::OutOfBoundsException::what() const throw();      */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return ("index out of bounds");
}

/* ************************************************************************** */
/*                           Non Member Functions                             */
/*                                                                            */
/*   ->ostream&    operator<<(ostream& out, const Array<T>& arr);             */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
ostream&	operator<<(ostream& out, const Array<T>& arr)
{
	for (size_t i = 0; i < arr.size(); i++)
			out << "[" << arr[i] << "]";
	return (out);
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*   Mr. Norkum                                                               */
/*                                                                            */
/*   Instagram: @mrnorkum                                                     */
/*   Telegram: @mrnorkum                                                      */
/*   Discord: @mrnorkum                                                       */
/*                                                   mail: mrnorkum@gmail.com */
/* ************************************************************************** */
