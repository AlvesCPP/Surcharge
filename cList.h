#pragma once
#include <ostream>

template <typename T>
class cList
{
public:
	//Constructeurs
	cList(int length) {
		values = (T*)malloc(sizeof(T) * length);
		count = length;
	}

	cList(T elements[], int length) {
		values = (T*)malloc(sizeof(T) * length);
		*values = *elements;
		count = length;
	}

	//Destructeurs
	~cList() {
		delete values;
	}

	//Surcharge d'opérateur d'indexation
	T& operator[](int index) {
		return values[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, cList<T> const& list) {
		for (int i = 0; i < list.count; i++) {
			stream << list.values[i] << std::endl;
		}
		return stream;
	}

	bool Contains(T item) {
		for (int i = 0; i < count; i++) {
			if (values[i] == item)
				return true;
		}
		return false;
	}

	int IndexOf(T item) {
		for (int i = 0; i < count; i++) {
			if (values[i] == item)
				return i;
		}
		return -1;
	}
protected:
private:
	T* values;
	int count;
};

