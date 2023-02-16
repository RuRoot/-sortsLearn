#include <iostream>

#include "testsorts.c"
using namespace std;
void testInsertionSorts() {
        
		int ar[] = {9,8,7,6,5,4,3,2,1};
		int etalonAr[] = {9,8,7,6,5,4,3,2,1};
		insertionSort(ar, 9);
		bool ok = true;
		for (int i = 0; i < 9; i++) {
			if (etalonAr[i] != ar[i]) {
                                cout << "insertionSort FAILED" << endl;
				ok = false;
				break;
			}
		}
		if (ok == true) {
                        cout << "insertionSort is OK" << endl;
		}

	
}
void testselectionSort() {
        
                int ar[] = {10,5,50,7,4,3,8,2,1};
                int etalonAr[] = {1,2,3,4,5,7,8,10,50};
                selectionSort(ar, 9);
                bool ok = true;
                for (int i = 0; i < 9; i++) {
                        if (etalonAr[i] != ar[i]) {
                                cout<< "selectionSort  FAILED" << endl;
                                ok = false;
                                break;
                        }
                }
                if (ok == true) {
                        cout << "selectionSort is  OK" << endl;
                }

        
}


void testcountSort(){
    
            int ar[] = {10,5,50,7,4,3,8,2,1};
            int etalonAr[] = {50,10,8,7,5,4,3,2,1};
            bubbleSort(ar, 9);
            bool ok = true;
            for (int i = 0; i < 9; i++) {
                    if (etalonAr[i] != ar[i]) {
                            cout<< "bubbleSort FAILED" << endl;
                            ok = false;
                            break;
                    }
            }
            if (ok == true) {
                    cout << "bubbleSort is  OK" << endl;
            }

    
}
void testcountSort(){
    
            int ar[] = {10,5,50,7,4,3,8,2,1};
            int etalonAr[] = {1,2,3,4,5,7,8,10,50};
            countsort(ar, 9);
            bool ok = true;
            for (int i = 0; i < 9; i++) {
                    if (etalonAr[i] != ar[i]) {
                           cout << "countSort FAILED" << endl;
                            ok = false;
                            break;
                    }
            }
            if (ok == true) {
                    cout << "countSort is OK" << endl;
            }

    
}
void testmerge() {
	std::cout << "\t---" << __func__ << "---" << std::endl;
	int countTest = 1;
	{
		std::cout << "test " << countTest++ << std::endl;
		const int SIZE_AR = 10;
		int ar[SIZE_AR] = {1, 2, 1, 2, 0, 0, -9, 90, -11};
		print(ar, SIZE_AR);
		mergeSort(ar, SIZE_AR);
		print(ar, SIZE_AR);
	}

	std::cout << "-------------" << std::endl;
}



void testGetMin(){
    int ar[]={123,1,134,8};
    int etalonInt = 1;
    if (etalonInt != getMin(ar,4)){
        cout << "getMin FAILED" << endl;
    }
    else{
        cout << "getMin is OK" << endl;
    }
}
void testGetMax(){
    int ar[]={123,1,134,8};
    int etalonInt = 134;
    if (etalonInt != getMax(ar,4)){
        cout << "getMax FAILED" << endl;
    }
    else{
        cout << "getMax is OK" << endl;
    }
}

