int KonversiGanjil(List L, int x[]){
	address P = First(L);
	int i=0, j=7;
	int sum=0, hasil = 0;
	while(P != Nil){
		if(x[i] == 1){
			sum = Info(P);
		}else{
			sum =0;
		}
		hasil += sum;
		cout << "2^"<<j <<" = " << sum<<endl;
		j -= 2;
		i+= 2;
		P = Next(Next(P));
	}
	return hasil;
}

int KonversiGenap(List L, int x[]){
	address P = Last(L);
	int i=7, j=0;
	int sum=0, hasil = 0;
	while(P != Nil){
		if(x[i] == 1){
			sum = Info(P);
		}else{
			sum =0;
		}
		hasil += sum;
		cout << "2^"<<j <<" = " << sum<<endl;
		j += 2;
		i -= 2;
		P = Prev(Prev(P));
	}
	return hasil;
}

int main() {
	List L;
	address ps;
	createList(&L);
	InsertLast(&L,128);
	InsertLast(&L,64);
	InsertLast(&L,32);
	InsertLast(&L,16);
	InsertLast(&L,8);
	InsertLast(&L,4);
	InsertLast(&L,2);
	InsertLast(&L,1);
	int x[8];
	for (int i =0;i<8;i++){
		cin >> x[i];
	}
	cout << KonversiGanjil(L,x) + KonversiGenap(L,x);
} 