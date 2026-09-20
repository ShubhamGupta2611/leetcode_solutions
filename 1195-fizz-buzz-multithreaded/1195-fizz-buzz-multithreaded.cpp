class FizzBuzz {
private:
    int n;
    int i=1;
    std::counting_semaphore<1>fiz{0};
    std::counting_semaphore<1>buz{0};
    std::counting_semaphore<1>fizbuz{0};
    std::counting_semaphore<1>num{1};
public:
    FizzBuzz(int n) {
        this->n = n;
    }

    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz) {
        
        while(true){
           
            fiz.acquire();
             if(i>n){
                buz.release();
                num.release();
                fizbuz.release();
                break;
            }
            printFizz();
            i++;        
            if(i%15==0){
                fizbuz.release();
            }
            else if(i%5==0){
                buz.release();
            }
            else if(i%3==0){
                fiz.release();
            }
            else{
                num.release();
            }
        }
        
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz) {
        while(true){
            
            buz.acquire();
            if(i>n){
                fiz.release();
                num.release();
                fizbuz.release();
                break;
            }
            printBuzz();
            i++;        
            if(i%15==0){
                fizbuz.release();
            }
            else if(i%5==0){
                buz.release();
            }
            else if(i%3==0){
                fiz.release();
            }
            else{
                num.release();
            }
        }    
    }

    // printFizzBuzz() outputs "fizzbuzz".
	void fizzbuzz(function<void()> printFizzBuzz) {
        while(true){
            
            fizbuz.acquire();
            if(i>n){
                buz.release();
                num.release();
                fiz.release();
                break;
            }
            printFizzBuzz();
            i++;        
            if(i%15==0){
                fizbuz.release();
            }
            else if(i%5==0){
                buz.release();
            }
            else if(i%3==0){
                fiz.release();
            }
            else{
                num.release();
            }
        }
        
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber) {
        while(true){
            num.acquire();
            if(i>n){
                buz.release();
                fiz.release();
                fizbuz.release();
                break;
            }
            printNumber(i);
            i++;        
            if(i%15==0){
                fizbuz.release();
            }
            else if(i%5==0){
                buz.release();
            }
            else if(i%3==0){
                fiz.release();
            }
            else{
                num.release();
            }
        }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna