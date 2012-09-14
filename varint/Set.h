class Set {
public:
	class Iterator {
		public:
		virtual int docID() = 0;
		virtual int getBlockIndex(int docIdIndex) = 0;
		virtual int nextDoc() = 0;
	};
	virtual Iterator* iterator()  = 0;
	virtual void addDocs(unsigned int docids[],size_t start,size_t len)= 0;
	virtual void addDoc(unsigned int docId) = 0;
	virtual void compact() = 0;
	virtual void flush() = 0;
	
	//Number of docIds in the set
	virtual bool find(unsigned int target) = 0;
};