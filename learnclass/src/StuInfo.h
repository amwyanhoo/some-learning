class StuInfo{
private:
	int Id;
	char name[10];
	float prog,net,db,total;

public:
	void set( int i,char *q,float p,float n,float d);
	float getpScore(){
		return prog;
	}
	float getnScore(){
		return net;
	}
	float getdbScore(){
		return db;
	}
	float gettotalScore(){
		return prog+net+db;
	}
	void sort(StuInfo *s,int N);
	void show();
	bool Isbig(int Kk);
};
