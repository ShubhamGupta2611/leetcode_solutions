class Foo {
public:
    
    std::counting_semaphore<1>mutex1{1};
    std::counting_semaphore<1>mutex2{0};
    std::counting_semaphore<1>mutex3{0};
    Foo() {
        
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.

            mutex1.acquire();
            printFirst();
            mutex2.release();
    }

    void second(function<void()> printSecond) {
        
        // printSecond() outputs "second". Do not change or remove this line.
            mutex2.acquire();
            printSecond();
            mutex3.release();

    }

    void third(function<void()> printThird) {
        
        // printThird() outputs "third". Do not change or remove this line

            mutex3.acquire();
            printThird();

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna