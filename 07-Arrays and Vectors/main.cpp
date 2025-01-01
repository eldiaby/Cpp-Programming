#include <iostream>

#include <vector>
 using namespace std;

int main()
{
//    Init the vectors
    vector <int> vector1;
    vector <int> vector2;
    
//    push the elements for vector1 
    int pushedElement;
    cout << "Enter a number: ";
    cin>> pushedElement;
    vector1.push_back(pushedElement);
    cout << "Enter another number: ";
    cin>> pushedElement;
    vector1.push_back(pushedElement);
    
    cout << vector1.at(0)<< "\t"<< vector1.at(1) << endl;
    cout << "vector1 contains " << vector1.size() <<" elements"<<endl;
    
    //    push the elements for vector2
    cout << "Enter a number: ";
    cin>> pushedElement;
    vector2.push_back(pushedElement);
    cout << "Enter another number: ";
    cin>> pushedElement;
    vector2.push_back(pushedElement);
    
    cout << vector2.at(0)<< "\t"<< vector2.at(1) << endl;
    cout << "vector2 contains " << vector2.size() <<" elements"<<endl;
    
//    Init the 2d vector and push the other vector on it
    vector <vector <int>> vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);  
    cout<< "Vector 2d => \n{\n" << vector2d.at(0).at(0) << "," << vector2d.at(0).at(1) << ",\n" << vector2d.at(1).at(0) << "," << vector2d.at(1).at(1) << "\n}\n";
    cout << "vector2d contains " << vector2d.size() <<" elements"<<endl;

    vector1.at(0) = 1000;
  
    cout<< "The new vector 2d  => \n{\n" << vector2d.at(0).at(0) << "," << vector2d.at(0).at(1) << ",\n" << vector2d.at(1).at(0) << "," << vector2d.at(1).at(1) << "\n}\n";


    cout << "vector1 =>" << vector1.at(0)<< "\t"<< vector1.at(1);


	return 0;
}
