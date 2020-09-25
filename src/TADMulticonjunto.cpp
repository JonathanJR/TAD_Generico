#include "TADMulticonjunto.h"

template <typename T> TADMulticonjunto<T>::TADMulticonjunto(){
    num=0;
}

template <typename T> bool TADMulticonjunto<T>::esVacio() const {
    //Es lo mismo que:
    /*if (num==0)
        return true;
    else
        return false;*/
        return (num==0);
}

template <typename T> int TADMulticonjunto<T>::cardinalidad () const {
    return num;
}

template <typename T> void TADMulticonjunto<T>::anade(const T& objeto){
    c[num] = objeto;
    num++;
}

template <typename T> void TADMulticonjunto<T>::elimina(const T& objeto){
    while(esVacio()==false){
            for(int i=0; i<num;i++){
                if(objeto==c[i]){
                    objeto[i]=objeto[i+1];
                }
            }
			num--;
    }
}

template <typename T> bool TADMulticonjunto<T>::pertenece(const T& objeto) const{
    while(esVacio()==false){
            for(int i=0; i<num;i++){
                if(objeto==c[i]){
                    return true;
                }else{
                    return false;
                }
            }
    }
}

//INSTANCIAS
template class TADMultiConjunto<int>;
template class TADMultiConjunto<char>;
