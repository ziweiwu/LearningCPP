#include <iostream>
#include<vector>
#include<string>
using namespace std;



void printvector(vector<string>b)
{
    for(unsigned i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    
};


int main()
{
    vector<string> my_vector{"dog","cat","elephant"};
    
   
    
    cout<<my_vector.front()<<endl;
    cout<<my_vector.back()<<endl;
    
    printvector(my_vector);
    
    cout<<endl;
    
    
    if(my_vector.empty())
        cout<<"Your vector is empty"<<endl;
    
    else
        cout<<"Your vector is not empty. good job"<<endl;
    cout<<"would you like to clear it? y/n"<<endl;
    char choice;
    cin>>choice;
    
    if(choice=='y')
    {
        my_vector.clear();
        cout<<"Your vector has been cleared. Good bye."<<endl;
    }
    else
        cout<<"Bye."<<endl;
    
    
    return 0;
    
    
}


//my_vector.push_back(value)->adds an element and resize it
//my_vecotr.size()-> return an unsigned integer equal to number of elements

//my_vector.at(index) ->return the element at the index number

//my_vector.begin()->reads vectors from the first element (index 0)

//my_vector.insert(my_vector.begin()+integer, new value)-> add element BEFORE specified index number

//my_vector.erase(my_vector.begin()+integer)->removes an element AT specified index number

//my_vector.clear()->removes all elements in vector

//my_vector.empty()->return boolean value if vector is empty
