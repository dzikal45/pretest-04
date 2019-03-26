/*
	nama:Dzikri Algiffari
	Npm:140810180053
	Tanggal:26-03-2019
	kelas:A
	pretest-04
*/
#include<iostream>
using namespace std;
struct Elemtlist{
	int npm;
	char nama[40];
	float ipk;
	Elemtlist* next;	
};
typedef Elemtlist* pointer;
typedef pointer List;

void createList(List& First){
	First=NULL;
}
void createElmt(pointer& pBaru) {
	pBaru = new Elemtlist; 
	cout<< "Masukkan NPM : ";
	cin>> pBaru->npm;
	cout<<"Masukan nama :"; cin>>pBaru->nama;
	cout<<"Masukan IPK :"; cin>>pBaru->ipk;
	pBaru->next = NULL; 
}
void insertsortNPM(List& First, pointer pBaru){
	
	if (First==NULL){ 
	First=pBaru;
	}
	else {
		if (pBaru->npm > pBaru->next->npm){
			pBaru->next=First; 
			First=pBaru; 
		}	
		else{
			First->next=pBaru;
		}
	}
}

void traversal(List First){
	pointer pBantu;
	pBantu=First; 
	while(pBantu != NULL) {
	cout<<"NPM\tNama\t\tIPK"<<endl;
	cout <<pBantu->npm<<"\t"<<pBantu->nama<<"\t"<<pBantu->ipk<<endl;
	pBantu = pBantu->next; 
	}
	}
int main(){
	pointer p;
	List q;
	int n;
	cout<<"Masukan banyak data :"; cin>> n;
	createList(q);
	for(int i=0;i<n;i++){
		createElmt(p);
		insertsortNPM(q,p);
	}
	traversal(q);
}
