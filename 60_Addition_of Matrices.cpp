#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter number of rows and columns ";
    cin >> n >> m;
    cout << endl;
    

    // Storing Elements of first matrix
    cout<<"Enter elements of 1st matrix: " << endl;
    int m1[n][m];
    for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			 cin >> m1[i][j];
		}
    }
	cout<<endl;
	
	
    // Storing elements of second matrix
    cout <<"Enter elements of 2nd matrix: " << endl;
    int m2[n][m];
    for(int i = 0; i < n; i++){
    	  for(int j = 0; j < m; j++){
           cin >> m2[i][j];
       }
	}
    cout<<endl;
    

    // Adding Two matrices
    int sum[n][m];
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < m; j++){
    		sum[i][j] = m1[i][j]  +  m2[i][j];
		}
    }
    cout<<endl; 
	        

    // Displaying Result
    cout <<"Sum of two matrices is: " << endl;
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < m; j++){
            cout << sum[i][j] << "  ";
        }
	}
        
    return 0;
}
