class ProductOfNumbers {
    vector<int>res;
public:
    ProductOfNumbers() {
    }
    
    void add(int num) {
      res.push_back(num);  
    }
    
    int getProduct(int k) {
        int prod=1;
        for(int in=0;in<k;in++){
            prod=prod*(res[res.size()-in-1]);
        }
        return prod;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */