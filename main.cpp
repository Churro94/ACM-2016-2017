#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vec;
    int arr[4];

    do
    {
        int res=0;

        for(int i=0; i<4; i++)
            cin >> arr[i];

        if( arr[2] > arr[0] )
            res += ( (arr[2] - arr[0]) * 60) + (arr[3] - arr[1]);
        else if( arr[2] < arr[0] )
            res += ( ( (arr[2]+24) - arr[0]) * 60) + (arr[3] - arr[1]);
        else
        {
            if( arr[3] > arr[1] )
                res += arr[3] - arr[1];
            else if( arr[3] < arr[1] )
                res += 24*60 + (arr[3] - arr[1]);
        }

        if( arr[0]!=0 || arr[1]!=0 || arr[2]!=0 || arr[3]!=0 )
            vec.push_back(res);

    }while( arr[0]!=0 || arr[1]!=0 || arr[2]!=0 || arr[3]!=0 );

    for(int i=0; i<vec.size(); i++)
        cout << vec.at(i) << endl;

    return 0;
}
