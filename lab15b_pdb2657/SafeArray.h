/* 
 * File:   SafeArray.h
 * Author: fdd5501
 *
 * Created on April 19, 2015, 1:18 PM
 */

#ifndef SAFEARRAY_H
#define	SAFEARRAY_H
template <class safe>
class SafeArray {
public:
    SafeArray();
    SafeArray(int size);
    virtual ~SafeArray();
    int getSize();
    safe & operator[](int index);
private:
    safe *a;
    int num;
    int size;
};
template <class safe>
SafeArray<safe>::SafeArray() {
    size = 5;
    a = new safe[size];
    for (int i=0; i<size; i++)
        a[i] = safe();
}
template <class safe>
SafeArray<safe>::SafeArray(int size) {
    if (size > 0)
        this->size = size;
    else
        this->size = 5;
    a = new safe[size];
    for (int i=0; i<size; i++)
        a[i] = safe();
}
template <class safe>
SafeArray<safe>::~SafeArray() {
    delete []a;
}
template <class safe>
int SafeArray<safe>::getSize() {
    return size;
}
template <class safe>
safe & SafeArray<safe>::operator [](int index) {
    if (index < 0) index = 0;
    if (index >= size) index = size - 1;
    return a[index];
}

#endif	/* SAFEARRAY_H */
