#include <iostream>
#include <string>
#include <time.h>
#include <fstream>


using namespace std;


//Declaring the class which will handle thre randomization and populating of the Array
class randARRAY{
    public:
    
        //Gets the random value and Populates it the private array
        void setRandom()
        {
            for (int i = 0; i < 10 ;i++)
            {
                 ar1[i]=rand() % 100;
            }
        
        }
    
        void getRandom(int ar[9])
        {
            for (int i = 0; i < 10 ;i++)
            {
                ar[i]=ar1[i];
            }
        }
        void printArray(int ar[9])
        {
            for (int i = 0; i < 10 ;i++)
            {
                cout<< ar[i] << endl;
            }
        
        }
       void printArray()
       {
           for (int i = 0; i < 10 ;i++)
           {
            cout<< ar1[i] << endl;
           }
         
       }

       void sortArray(int arr[9])
       {
          int n=10;
          for (int i = 0; i < n; ++i)
            for (int j = 0; j < n - i - 1; ++j)
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }

       }
    
      void writeArray(int ar[9])
      {
         ofstream myfile ("./array.txt");
         if (myfile.is_open())
         {
             for(int i = 0; i < 10; i++)
             {
                 myfile << ar[i] << endl ;
             }
             myfile.close();
         }
    
      }
    
    void readArray(int ar[9])
    {
        ifstream file("./array.txt");
        if(file.is_open())
        {
            string myArray[9];
            
            for(int i = 0; i < 10; ++i)
            {
                file >> ar[i];
            }
        }
    }
    private:
        /*Delare the static int It simply means that once the variable has been initialized, it remains in memory
        until the end of the program. You can think of it as saying that the variable sticks around
        maintainin'its value, until the program completely ends.
        */
         int ar1[9];
    
    


};




int main(){
    //Seed the time in the main
    srand (time(NULL));
    
    int ar[9]; //Intializes a random array of 10 objects
    randARRAY object; //Intializes a "object" in the randARRAY class
    object.setRandom();  //Calls to secure 9 digits inside the private variabl array
    cout<< "Unsorted Array " << endl;
    object.getRandom(ar); //Gets the random value to the ar by value
    object.printArray(ar); //Prints the passed in  ar value
    //object.printArray(); //By deafult will print the internal values
    object.sortArray(ar);
    cout<< "Sorted Array " << endl;
    object.printArray(ar);
    cout<<"Writing the Array ./array.txt " << endl;
    object.writeArray(ar);
    cout<<"Reading the Array " << endl;
    object.readArray(ar);
    cout<<"Printing the Read Array " << endl;
    object.printArray(ar);
    
    return 0;
    
    
}