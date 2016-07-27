//============================================================================
// Name        : Sorting.cpp
// Author      : Chatura Ahangama
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <iterator>
#include <functional>


using namespace std;




void bubbleSort(vector<int> & a) {
    int counter=0;
	bool swapp = true;
	      while(swapp){
	        swapp = false;
	        for (size_t i = 0; i < a.size()-1; i++) {
	            if (a[i]>a[i+1] ){
	            	counter++;
	                a[i] += a[i+1];
	                a[i+1] = a[i] - a[i+1];
	                a[i] -=a[i+1];
	                swapp = true;
	            }
	        }
	    }
	 cout <<"\nCounted Operations ::" <<counter<<endl;
}

void insertionSort(vector<int>& v){//pass a reference so you can modify data
//you don't even need the size parameter here

  int counter=0;
  for (int i = 1; i < v.size(); ++i) {
	  int x = v[i];
	  int j = i;
  	  	  while (j > 0 and v[j - 1] > x) {
  	  		  v[j] = v[j - 1];
  	  		  counter++;
  	  		  --j;
  	  	  }
  	  v[j] = x;
  }
    cout<<"Counter :: "<< counter<<endl;
}//end insertionSort Function

void vectorPrint(const vector<int> & num){
	cout<<"First 10: "<<endl;
	for(int i=0;i<10;i++)
			cout<<num[i]<<"  ";

	cout<<endl;
	cout<<"Last 10: "<<endl;
	for(int i=90;i<100;i++)
				cout<<num[i]<<"  ";
			//cout<<"Printing"<<endl;



}

int pos_min(const vector<int>& v, int left, int right) {
	int pos = left;
	for (int i = left + 1; i <= right; ++i) {
		if (v[i] < v[pos]) pos = i;
	}
	return pos;
}

void selection_sort(vector<int>& v) {
	int last = v.size() - 1;
	for (int i = 0; i < last; ++i)
	{
		int k = pos_min(v, i, last);
		swap(v[k], v[i]);
	}


}

vector<int> merge(vector<int> left, vector<int> right)
{
   vector<int> result;
   while ((int)left.size() > 0 || (int)right.size() > 0) {
      if ((int)left.size() > 0 && (int)right.size() > 0) {
         if ((int)left.front() <= (int)right.front()) {
            result.push_back((int)left.front());
            left.erase(left.begin());
         }
   else {
            result.push_back((int)right.front());
            right.erase(right.begin());
         }
      }  else if ((int)left.size() > 0) {
            for (int i = 0; i < (int)left.size(); i++)
               result.push_back(left[i]);
            break;
      }  else if ((int)right.size() > 0) {
            for (int i = 0; i < (int)right.size(); i++)
               result.push_back(right[i]);
            break;
      }
   }
   return result;
}

vector<int> mergeSort(vector<int> m)
{
   if (m.size() <= 1)
      return m;

   vector<int> left, right, result;
   int middle = ((int)m.size()+ 1) / 2;

   for (int i = 0; i < middle; i++) {
      left.push_back(m[i]);
   }

   for (int i = middle; i < (int)m.size(); i++) {
      right.push_back(m[i]);
   }

   left = mergeSort(left);
   right = mergeSort(right);
   result = merge(left, right);

   return result;
}


void exch(vector<int> &data,int i,int j)
{
    int s=data[i];
    data[i]=data[j];
    data[j]=s;

}

int partition(vector<int> &a,int low,int high)
{
    int left=low;
    int right=high;
    int v=a[left];
    while(left<right)
 {
        while( a[left]<=v) left++;
        while(a[right]>v) right--;
  if (left<right)
   exch(a,left,right);
    }

    exch(a,low,right);
    return right;

}

void quick(vector<int> &data,int left,int right)
{
    if (right <= left) return ;
    int pivot=partition(data,left,right);
    quick(data,left,pivot-1);
    quick(data,pivot+1,right);
}


int main() {

	int start_s=clock();
	int stop_s=clock();


	cout << "!!!Sorting : Week8 !!!" << endl; // prints !!!Sorting : Week8 !!!
	vector<int> num; //{100, 99, 98,…, 3, 2, 1} list such as this
	vector<int> num2; //{1, 2, 3, … ,98, 99, 100} list such as this
	vector<int> num3;//Creating a random Vector

	for(int i=100;i>0;i--){ num.push_back(i);}
	for(int j=0;j<100;j++){ num2.push_back(j+1);}
	num3=num2;
	std::random_shuffle(num3.begin(),num3.end());

	cout<<"************** Bubble Sort ************"<<endl;
	cout<<"Original List 1: "<<endl;
    vectorPrint(num);
    cout<<endl;
	cout<<"\t\tSorted: "<<endl;
	start_s=clock();
	bubbleSort(num);
    stop_s=clock();
    vectorPrint(num);
    cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    cout<<"\n\n";

    cout<<"Original List 2: "<<endl;
    vectorPrint(num2);
    cout<<endl;
    cout<<"\t\tSorted: "<<endl;
    start_s=clock();
    bubbleSort(num2);
    stop_s=clock();
    vectorPrint(num);
    cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    cout<<"\n\n";

    cout<<"Original List 3: "<<endl;
    vectorPrint(num3);
    cout<<endl;
    cout<<"\t\tSorted: "<<endl;
    start_s=clock();
    bubbleSort(num3);
    stop_s=clock();
    vectorPrint(num3);
    cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    cout<<"\n\n";

    cout<<"************** Insert Sort  ************"<<endl;

    num.clear(); //Clearing the vectors
    num2.clear(); //Clearing the vectors
    num3.clear(); //Clearing the vectors

    for(int i=100;i>0;i--){ num.push_back(i);}
    for(int j=0;j<100;j++){ num2.push_back(j+1);}
    	num3=num2;
    std::random_shuffle(num3.begin(),num3.end());


    cout<<"Original List 1: "<<endl;
    vectorPrint(num);
    cout<<endl;
    cout<<"\t\tSorted: "<<endl;
    start_s=clock();
    insertionSort(num);
    stop_s=clock();
    vectorPrint(num);
    cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    cout<<"\n\n";

    cout<<"Original List 2: "<<endl;
    vectorPrint(num2);
    cout<<endl;
    cout<<"\t\tSorted: "<<endl;
    start_s=clock();
    insertionSort(num2);
    stop_s=clock();
    vectorPrint(num2);
    cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    cout<<"\n\n";

    cout<<"Original List 3: "<<endl;
    vectorPrint(num3);
    cout<<endl;
    cout<<"\t\tSorted: "<<endl;
    start_s=clock();
    insertionSort(num3);
    stop_s=clock();
    vectorPrint(num3);
    cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    cout<<"\n\n";



    cout<<"************** Select Sort  ************"<<endl;

    num.clear(); //Clearing the vectors
    num2.clear(); //Clearing the vectors
    num3.clear(); //Clearing the vectors

    for(int i=100;i>0;i--){ num.push_back(i);}
    for(int j=0;j<100;j++){ num2.push_back(j+1);}
       	num3=num2;
    std::random_shuffle(num3.begin(),num3.end());


    cout<<"Original List 1: "<<endl;
    vectorPrint(num);
    cout<<endl;
    cout<<"\t\tSorted: "<<endl;
    start_s=clock();
    selection_sort(num);
    stop_s=clock();
    vectorPrint(num);
    cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    cout<<"\n\n";

    cout<<"Original List 2: "<<endl;
    vectorPrint(num2);
    cout<<endl;
    cout<<"\t\tSorted: "<<endl;
    start_s=clock();
    selection_sort(num2);
    stop_s=clock();
    vectorPrint(num2);
    cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    cout<<"\n\n";

    cout<<"Original List 3: "<<endl;
    vectorPrint(num3);
    cout<<endl;
    cout<<"\t\tSorted: "<<endl;
    start_s=clock();
    selection_sort(num3);
    stop_s=clock();
    vectorPrint(num3);
    cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    cout<<"\n\n";

    cout<<"************** Merge Sort  ************"<<endl;

       num.clear(); //Clearing the vectors
       num2.clear(); //Clearing the vectors
       num3.clear(); //Clearing the vectors

       for(int i=100;i>0;i--){ num.push_back(i);}
       for(int j=0;j<100;j++){ num2.push_back(j+1);}
          	num3=num2;
       std::random_shuffle(num3.begin(),num3.end());


       cout<<"Original List 1: "<<endl;
       vectorPrint(num);
       cout<<endl;
       cout<<"\t\tSorted: "<<endl;
       start_s=clock();
       num=mergeSort(num);
       stop_s=clock();
       vectorPrint(num);
       cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
       cout<<"\n\n";

       cout<<"Original List 2: "<<endl;
       vectorPrint(num2);
       cout<<endl;
       cout<<"\t\tSorted: "<<endl;
       start_s=clock();
       num2=mergeSort(num2);
       stop_s=clock();
       vectorPrint(num2);
       cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
       cout<<"\n\n";

       cout<<"Original List 3: "<<endl;
       vectorPrint(num3);
       cout<<endl;
       cout<<"\t\tSorted: "<<endl;
       start_s=clock();
       num3=mergeSort(num3);
       stop_s=clock();
       vectorPrint(num3);
       cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
       cout<<"\n\n";

       cout<<"************** Quick Sort  ************"<<endl;

       num.clear(); //Clearing the vectors
       num2.clear(); //Clearing the vectors
       num3.clear(); //Clearing the vectors

       for(int i=100;i>0;i--){ num.push_back(i);}
       for(int j=0;j<100;j++){ num2.push_back(j+1);}
                 	num3=num2;
       std::random_shuffle(num3.begin(),num3.end());

       cout<<"Original List 1: "<<endl;
       vectorPrint(num);
       cout<<endl;
       cout<<"\t\tSorted: "<<endl;
       start_s=clock();
       quick(num,0,99);
       stop_s=clock();
       vectorPrint(num);
       cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
       cout<<"\n\n";

       cout<<"Original List 2: "<<endl;
       vectorPrint(num2);
       cout<<endl;
       cout<<"\t\tSorted: "<<endl;
       start_s=clock();
       quick(num2,0,99);
       stop_s=clock();
       vectorPrint(num2);
       cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
       cout<<"\n\n";

       cout<<"Original List 3: "<<endl;
       vectorPrint(num3);
       cout<<endl;
       cout<<"\t\tSorted: "<<endl;
       start_s=clock();
       quick(num3,0,99);
       stop_s=clock();
       vectorPrint(num3);
       cout << "\nTime: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
       cout<<"\n\n";

       return 0;
}
