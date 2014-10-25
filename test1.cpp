#include <iostream>
using namespace std;

int main(){
	int no_of_testcases;
	int array_size;
	string typemove;
	cin>>no_of_testcases;
	int **Array;
	


	for(int p=0;p<no_of_testcases;p++){
		cin>>array_size>>typemove;
		Array = new int *[array_size];
		for(int i=0;i<array_size;i++){
			Array[i] = new int[array_size];
		}
		
		for(int i=0;i<array_size;i++){
			for(int j=0;j<array_size;j++){
				int val;
				cin>>val;
				Array[i][j]=val;
			}
		}
		
		if(typemove.compare("up")==0){
			for(int i=0;i<array_size;i=i+2){
				for(int j=0;j<array_size;j++){
					if(Array[i][j]==Array[i+1][j]){
						Array[i][j]=Array[i][j]+Array[i+1][j];
						Array[i+1][j]=0;
						if(i!=0){
							int k=i;
							while(k>0){
								if(Array[k-1][j]!=0){
									Array[k][j]=Array[i][j];
									if(i!=k)Array[i][j]=0;
									break;
								}
								else k=k-1;
							}
						}
					}
					else {
						if(i!=0){
							if(Array[i-1][j]==0){
								Array[i-1][j]=Array[i][j];
								Array[i][j]=Array[i+1][j];
								Array[i+1][j]=0;
							}
						}	
					}
				}		
			}
		}

		if(typemove.compare("left")==0){
			cout<<"come\n";
			for(int i=0;i<array_size;i++){
				for(int j=0;j<array_size;j=j+2){
					if(Array[i][j]==Array[i][j+1]){
						Array[i][j]=Array[i][j]+Array[i][j+1];
						Array[i][j+1]=0;
						if(j!=0){
							int k=j;
							cout<<k<<"\n";
							while(k>0){
								if(Array[i][k-1]!=0){
									Array[i][k]=Array[i][j];
									if(i!=k)Array[i][j]=0;
									break;
								}
								else k=k-1;
							}
						}
					}
					else {
						if(j!=0){
							int k=j;
							while(k>0){
								if(Array[i][k-1]!=0){
									Array[i][k]=Array[i][j];
									if(i!=k)Array[i][j]=0;
									break;
								}
								else k=k-1;
							}
						}	
					}
				}		
			}
		}

		if(typemove.compare("right")==0){
			cout<<"come\n";
			for(int i=0;i<array_size;i++){
				for(int j=array_size-1;j>0;j=j-2){
					if(Array[i][j]==Array[i][j-1]){
						Array[i][j]=Array[i][j]+Array[i][j-1];
						Array[i][j-1]=0;
						if(j!=array_size-1){
							int k=j;
							cout<<k<<"\n";
							while(k<array_size){
								if(Array[i][k+1]!=0){
									Array[i][k]=Array[i][j];
									if(i!=k)Array[i][j]=0;
									break;
								}
								else k=k+1;
							}
						}
					}
					else {
						if(j!=array_size-1){
							int k=j;
							cout<<k<<"\n";
							while(k<array_size){
								if(Array[i][k+1]!=0){
									Array[i][k]=Array[i][j];
									if(i!=k)Array[i][j]=0;
									break;
								}
								else k=k+1;
							}
						}	
					}
				}		
			}
		}

		if(typemove.compare("down")==0){
			for(int i=array_size-1;i>0;i=i-2){
				for(int j=0;j<array_size;j++){
					if(Array[i][j]==Array[i-1][j]){
						Array[i][j]=Array[i][j]+Array[i-1][j];
						Array[i-1][j]=0;
						if(i!=array_size-1){
							int k=i;
							while(k<array_size){
								if(Array[k+1][j]!=0){
									Array[k][j]=Array[i][j];
									if(i!=k)Array[i][j]=0;
									break;
								}
								else k=k+1;
							}
						}
					}
					else {
						if(i!=array_size-1){
							int k=i;
							while(k<array_size){
								if(Array[k+1][j]!=0){
									Array[k][j]=Array[i][j];
									if(i!=k)Array[i][j]=0;
									break;
								}
								else k=k+1;
							}
						}	
					}
				}		
			}
		}


		for(int i=0;i<array_size;i++){
			for(int j=0;j<array_size;j++){
				cout<<Array[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}