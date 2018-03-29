
template<class T>
T* merger(T* a1, T* a2, int size1, int size2) {

	int L3 = 0, i1 = 0, i2 = 0;

	T* newa = new T[size1 + size2];

	while (i1 < size1 && i2 < size2 && L3 < size1 + size2) {

		if (a1[i1] < a2[i2]) {
			newa[L3] = a1[i1];
			i1++;
			L3++;
		}
		else {
			newa[L3] = a2[i2];
			i2++;
			L3++;
		}

	}
	while (i1 < size1) {
		newa[L3] = a1[i1];
		i1++;
		L3++;
	}
	while (i2 < size2) {
		newa[L3] = a2[i2];
		i2++;
		L3++;
	}


	return newa;
	
}

template <class T>
T* mergeSort(T* tArr, int size) {
	if (size == 1) {
		return tArr;
	}
	T* left = mergeSort(tArr, size / 2);
	T* right = mergeSort(tArr + size / 2, size - (size / 2));


	T* result = merger(left, right, size / 2, size - size / 2);
	return result;
}