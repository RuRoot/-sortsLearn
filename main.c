#include <iostream>
#include <chrono>

#include "arraywork.h"
#include "sorts.h"

using namespace std;

//функция очень монстровидная....
её можно разбить на много маленьких функций....
помним правило одна функция решает одну задачу....
int main ()
{
  
  int bol[] = {1,1,1,1,1,1};
  int buff = 100;
  int stopi = 500;
  
  
//код плохо форматирован.....
  for( int starti = 100;    starti <= stopi;   starti = buff + starti){//starti- начало шага  stopi-конец шага    buff-шаг 
  
//  почему бы вот эти все if else if else не поместить в одну функцию?? 
//которая бы вернула новый шаг изменения массива

            if(starti == 500){
                buff = 100;
                stopi = 1000;
                
            }//определяем шаг
            else if(starti == 1000){
                
                buff = 250;
                stopi = 10000;
            }
            else if(starti == 10000){
                
                buff = 1000;
                stopi = 100000;
                
            }
            else if(starti == 100000){
                buff = 5000;
                 stopi = 200000;
            }
            else if(starti == 200000){
                buff = 10000;
                 stopi = 1000000;
            }
            else if(starti == 1000000){
                buff = 100000;
                stopi = 10000000;
            }
            else if(starti > 10000000){break;}
          
      
      
             int *ar = new int[starti];//динамически выделили память для массива
             
      
      
             cout<<starti<<"\t";//вывод размера массива в консоль
             for (int i = -1;i < 5;i++){ почему здеь i = -1?:;
            
      
             randomFilling(ar,starti,0,999);//заполнили массив произвольными значениями
             
            auto start=std::chrono::high_resolution_clock::now();
      
            switch(i){//выбор сортировок
                case 0:
                   	if(bol[i] != 0){
				mergeSort(ar, starti);
			}
                break;
                
                case 1:
                	if(bol[i] != 0){
				insertionSort(ar,starti);
			}
                
                break;
                       
                case 2:
                if(bol[i] != 0){bubbleSort(ar,starti);}
               
                        break;
                       
                case 3:
                if(bol[i] != 0){selectionSort(ar, starti);}
               
                        break;
                       
                case 4:
                if(bol[i] != 0){countsort(ar, starti);}
                
                        break;
                       
                case 5:
                if(bol[i] !=0 ){quickSort(ar, starti);}
               
                        break;
                       
                
            }
            auto end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double>diff = end - start;
              if(diff.count()>60){
                 bol[i] = 0;
                 cout<<"---";
             }
             else{
             
             std::cout<<diff.count()<<"\t";//время исполнения сортировки
             }
             
      }
      
      cout<<endl;
             delete [] ar;//освободили ранее выделенную память
            
  }
  
  return 0;
  
}
