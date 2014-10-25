#include <iostream>
using namespace std;

int main(){
	int no_of_testcases;
	int array_size;
	cin>>no_of_testcases;
	int **Array;
	


	for(int p=0;p<no_of_testcases;p++){
		cin>>array_size;
		Array = new int *[array_size];
		for(int i=0;i<array_size;i++){
			Array[i] = new int[3];
		}
		for(int i=0;i<array_size;i++){
			for(int j=0;j<2;j++){
				int val;
				cin>>val;
				Array[i][j]=val;
			}
			Array[i][2]=Array[i][1]-Array[i][0];
		}

		int intersect=0;
		for(int i=0;i<array_size;i++){
			for(int j=i+1;j<array_size;j++){
				if(Array[i][2]-Array[j][2]==0);
				else{
					intersect++;
				}
			}
		}
		cout<<intersect<<"\n";
	}
	return 0;
}