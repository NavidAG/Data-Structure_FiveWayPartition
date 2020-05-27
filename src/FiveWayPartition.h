/* Copyright (C) Fateme Chaji, Ferdowsi Univerity of Mashhad
 * 25 Esfand 1396(Hijri shamsi)
 * 16 March 2018
 * Author: Fateme Chaji
 */

#pragma once

#include <iostream>
using namespace std;
template <class T>
class FiveWayPartition {
    
public:
    void Partition(T* A, T pivot1, T pivot2, int p, int r, int& q1, int& q2, int& q3, int& q4) {
        
        //Write your code here
        
        int i, j, k, m, l;
        
        i = p;
        j = p;
        k = p;
        l = r+1;
        m = r+1;
        
        while(k<l){
            if(A[k] < pivot1){
                //done
                int temp = A[k];
                A[k] =A[j];
                A[j] = A[i];
                A[i] = temp;
                i++;
                j++;
                k++;
            }
            else if(A[k] == pivot1){
                //done
                swap(A[k], A[j]);
                j++;
                k++;
            }
            else if(A[k] > pivot1 && A[k] < pivot2){
                k++;
            }
            else if(A[k] == pivot2){
                swap(A[k], A[l-1]);
                l--;
            }
            else {//A[k] > pivot2
                int temp = A[k];
                A[k] = A[l-1];
                A[l-1] = A[m-1];
                A[m-1] = temp;
                l--;
                m--;
            }
        }
        q1 = i;
        q2 = j;
        q3 = l;
        q4 = m;
        
    }
};
