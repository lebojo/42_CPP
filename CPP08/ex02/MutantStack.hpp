#ifndef MutantStack_HPP
# define MutantStack_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
		MutantStack(void) : std::stack<T>(), _begin(new iterator(this, 0)), _end(new iterator(this, 1)) {}	
		~MutantStack(void)
		{
			iterator 	*it = this->_begin;
			iterator	*tmp;
			while (it)
			{
				tmp = &(it->next_it());
				delete it;
				it = tmp;
			}
		}
		MutantStack(MutantStack const & src) : std::stack<T>(src), _begin(0), _end(0){}
		MutantStack & operator=(MutantStack const & src)
		{ 
			(void) src;
		}

		virtual void	push(T element)
		{
			if (this->_begin->isSet())
			{
				iterator *it = new iterator(this, this->_end->getIndex(),element);
				this->_end->prev_it().setNext(it);
				it->setPrev(&(this->_end->prev_it()));
				this->_end->setPrev(it);
				it->setNext(this->_end);
				this->_end->incrementIndex();
			}
			else
			{
				this->_begin->setValue(element);
				this->_begin->setNext(this->_end);
				this->_end->setPrev(_begin);
			}
			std::stack<T>::push(element);
		}

		virtual void	pop(void)
		{
			iterator &	it  = this->_end->prev_it();
			if (it.isSet())
			{
				it.prev_it().setNext(this->_end);
				this->_end->setPrev(&(it.prev_it()));
				delete &it;
				this->_end->decrementIndex();
			}
			std::stack<T>::pop();
		}
	class iterator
	{
	public:
		iterator(void) : source(0), index(0) ,value(0), set(false), prev(0), next(0){}
		iterator(MutantStack * src, int index) : source(src),index(index),value(0), set(false), prev(0), next(0){}
		iterator(MutantStack * src, int index,T & value) : source(src),index(index) ,value(value), set(true), prev(0), next(0){}
		~iterator(void){}
		iterator(iterator & src)
		{
			this->value = *src;
			this->set = src.isSet();
			this->index = src.getIndex();
			this->prev = &(src.prev_it());
			this->next = &(src.next_it());
		}

		iterator &	operator=(iterator & src)
		{
			this->value = *src;
			this->index = src.getIndex();
			this->set = src.isSet();
			this->prev = &(src.prev_it());
			this->next = &(src.next_it());
			return *this;
		}

		void	setValue(T element)
		{
			this->set = true;
			this->value = element;
		}

		T &	operator*(void) { return this->value; }

		bool	operator==(iterator & it)
		{
			return this->index == it.getIndex() && this->value == *it;
		}

		bool	operator!=(iterator & it)
		{
			return this->index != it.getIndex() || this->value != *it;
		}

		iterator &	operator--(int)
		{
			iterator & tmp = *this;
			*this = *this->prev;
			return tmp;
		}

		iterator &	operator--()
		{
			*this = *this->prev;
			return *this;
		}

		iterator &	operator++(int)
		{
			iterator & tmp = *this;
			*this = *this->next;
			return tmp;
		}

		iterator &	operator++()
		{
			*this = *this->next;
			return *this;
		}

		iterator &	next_it(void) const { return *this->next; }

		iterator & prev_it(void) const { return *this->prev; }

		int getIndex(void) const
		{
			return this->index;
		}

		MutantStack *	getSource(void) const
		{
			return this->source;
		}
		bool	isSet(void) const
		{
			return this->set;
		}
		void	setPrev(iterator * prev) { this->prev = prev; }
		void	setNext(iterator * next) { this->next = next; }

		void	decrementIndex(void)
		{
			this->index--;
		}



		void	incrementIndex(void)
		{
			this->index++;
		}

	private:
		MutantStack	*source;
		int			index;
		T			value;
		bool		set;
		iterator *	prev;
		iterator *	next;
	};

	iterator& begin()
	{
		return *(this->_begin);
	}

	iterator& end()
	{
		return *(this->_end);
	}
private:
	iterator *_begin;
	iterator *_end;
};

#endif
