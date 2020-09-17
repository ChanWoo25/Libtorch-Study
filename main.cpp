#include <iostream>
#include <torch/torch.h>

int main()
{
    at::Tensor ts = at::randint(128, {3, 3});
    ts.print();
    std::cout << ts << std::endl;

    if(ts.is_contiguous())
        std::cout << "ts is contiguous!\n";
    else
        std::cout << "ts is not contiguous!\n";

    return 0; 
}