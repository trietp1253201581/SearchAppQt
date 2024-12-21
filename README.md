# SearchAppQt

## Cây phân cấp các class của dự án
* Searcher([.h](Searcher.h), [.cpp](Searcher.cpp)): **(Các thuật toán tìm kiếm)**
    * LinearSearcher([.h](LinearSearcher.h), [.cpp](LinearSearcher.cpp))
    * NeedSortedSearcher([.h](NeedSortedSearcher.h), [.cpp](NeedSortedSearcher.cpp)) **(Các thuật toán tìm kiếm cần sắp xếp)**
        * BinarySearcher([.h](BinarySearcher.h), [.cpp](BinarySearcher.cpp))
        * TernarySearcher([.h](TernarySearcher.h), [.cpp](TernarySearcher.cpp))
        * JumpSearcher([.h](JumpSearcher.h), [.cpp](JumpSearcher.cpp))
        * ExponentialSearcher([.h](ExponentialSearcher.h), [.cpp](ExponentialSearcher.cpp))
        * InterpolationSearcher([.h](InterpolationSearcher.h), [.cpp](InterpolationSearcher.cpp))
        * FibonacciSearcher([.h](FibonacciSearcher.h), [.cpp](FibonacciSearcher.cpp))
    * HashingSearcher([.h](HashingSearcher.h), [.cpp](HashingSearcher.cpp))
* TimeCounter([.h](TimeCounter.h), [.cpp](TimeCounter.cpp)) **(Bộ đếm thời gian)**
* SearchContext([.h](SearchContext.h), [.cpp](SearchContext.cpp)) 
* ArrGenerator([.h](ArrGenerator.h), [.cpp](ArrGenerator.cpp)) **(Các bộ sinh số)**
    * AscendingArrGenerator([.h](AscendingArrGenerator.h), [.cpp](AscendingArrGenerator.cpp))
    * DescendingArrGenerator([.h](DescendingArrGenerator.h), [.cpp](DescendingArrGenerator.cpp))
    * RandomizeArrGenerator([.h](RandomizeArrGenerator.h), [.cpp](RandomizeArrGenerator.cpp))
* Reader([.h](Reader.h), [.cpp](Reader.cpp)) **(Đọc từ field)**
* FileIO([.h](FileIO.h), [.cpp](FileIO.cpp)) **(Đọc ghi file)**
* SearchVisualizer([.h](SearchVisualizer.h), [.cpp](SearchVisualizer.cpp)): **(Các class để tạo animation minh họa thuật toán tìm kiếm)**
    * LinearSearchVisualizer([.h](LinearSearchVisualizer.h), [.cpp](LinearSearchVisualizer.cpp))
    * BinarySearchVisualizer([.h](BinarySearchVisualizer.h), [.cpp](BinarySearchVisualizer.cpp))
    * TernarySearchVisualizer([.h](TernarySearchVisualizer.h), [.cpp](TernarySearchVisualizer.cpp))
    * JumpSearchVisualizer([.h](JumpSearchVisualizer.h), [.cpp](JumpSearchVisualizer.cpp))
    * ExponentialSearchVisualizer([.h](ExponentialSearchVisualizer.h), [.cpp](ExponentialSearchVisualizer.cpp))
    * InterpolationSearchVisualizer([.h](InterpolationSearchVisualizer.h), [.cpp](InterpolationSearchVisualizer.cpp))
    * FibonacciSearchVisualizer([.h](FibonacciSearchVisualizer.h), [.cpp](FibonacciSearchVisualizer.cpp))
    * HashingSearchVisualizer([.h](HashingSearchVisualizer.h), [.cpp](HashingSearchVisualizer.cpp))
* mainWindow([.h](mainWindow.h), [.cpp](mainWindow.cpp)) **(Cửa sổ chính của app)**

## Chạy thử
Run file [main](main.cpp)