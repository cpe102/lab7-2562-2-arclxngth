#include <iostream>
using namespace std;

int main(){

    int age,height,asset;

    cout<<"Please enter age : ";
    cin>>age;

    if(age < 20){

        cout<<"Please in put height : ";
        cin>>height;

        if(height < 160)

            cout<<"status = UNFRIEND";
        
        else if(height <170)

            cout<<"status = FRIEND";
        
        else{

            cout<<"Please input your asset : ";
            cin>>asset;

            if(asset > 69000000)

                cout<<"status = MARRIED";

            else

                cout<<"status = ONE-NIGHT-STAND";
            
        }
    }
    else{

        if(age < 30){

            cout<<"Please input your asset : ";
            cin>>asset;

            if(asset > 10000000)

                cout<<"status = BEST FRIEND";

            else
            
                cout<<"status = UNFRIEND";
        }
        else
            cout<<"status = UNFRIEND";
    }
}

