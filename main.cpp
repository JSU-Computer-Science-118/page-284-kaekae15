//Kaylen Bolden          JNUMBER:J00965280          DATE:11/15/2022
//                       PG.284 Example 5-6
//                      DUE DATE: 11/16/2022
#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n;
    int num;

    srand(time(0));

    cin >> n;
    
    for(int i=0; i<=100; i++)
    {
       num = rand() % 100;
       cout << num << endl;
    }
    return 0;
}
