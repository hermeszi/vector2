#include <iostream>
#include <sstream>
#include "vect2.hpp"

int main()
{
    // Test constructor
    vect2 v1(2, 3);
    vect2 v2(4, 5);
    vect2 v0;  // default: should be (0,0)

    std::cout << "=== Constructor Tests ===" << std::endl;
    std::cout << "v1(2,3): " << v1 << std::endl;
    std::cout << "v2(4,5): " << v2 << std::endl;
    std::cout << "v0 default: " << v0 << std::endl;

    // Test addition (required)
    std::cout << "\n=== Addition ===" << std::endl;
    std::cout << v1 << " + " << v2 << " = " << (v1 + v2) << std::endl;

    // Test subtraction (required)
    std::cout << "\n=== Subtraction ===" << std::endl;
    std::cout << v2 << " - " << v1 << " = " << (v2 - v1) << std::endl;

    // Test scalar multiplication (required - from spec example)
    std::cout << "\n=== Scalar Multiplication ===" << std::endl;
    vect2 v3(2, 2);
    std::cout << v3 << " * 2 = " << (v3 * 2) << std::endl;
    std::cout << "vect2(2,2) * 2 == vect2(4,4): " 
              << ((vect2(2,2) * 2 == vect2(4,4)) ? "true" : "false") << std::endl;

    // Test operator[] (required)
    std::cout << "\n=== Subscript Operator ===" << std::endl;
    std::cout << "v1[0] = " << v1[0] << ", v1[1] = " << v1[1] << std::endl;
    
    // Test modifying via []
    vect2 v4(1, 1);
    v4[0] = 10;
    v4[1] = 20;
    std::cout << "After v4[0]=10, v4[1]=20: " << v4 << std::endl;

    // Test << operator format (required: {x, y})
    std::cout << "\n=== Output Format ===" << std::endl;
    std::stringstream ss;
    ss << "{" << v1[0] << ", " << v1[1] << "}";
    std::stringstream ss2;
    ss2 << v1;
    std::cout << "Expected: " << ss.str() << std::endl;
    std::cout << "Got:      " << ss2.str() << std::endl;
    std::cout << "Match: " << ((ss.str() == ss2.str()) ? "true" : "false") << std::endl;

    // Test equality (required for spec example)
    std::cout << "\n=== Equality ===" << std::endl;
    std::cout << "vect2(4,4) == vect2(4,4): " 
              << ((vect2(4,4) == vect2(4,4)) ? "true" : "false") << std::endl;
    std::cout << "vect2(4,4) == vect2(4,5): " 
              << ((vect2(4,4) == vect2(4,5)) ? "true" : "false") << std::endl;

    std::cout << "\n=== All Required Tests Complete ===" << std::endl;
    	
    // vect2 v1; // 0, 0
	// vect2 v2(1, 2); // 1, 2
	// const vect2 v3(v2); // 1, 2
	// vect2 v4 = v2; // 1, 2

	// std::cout << "v1: " << v1 << std::endl;
	// std::cout << "v1: " << "{" << v1[0] << ", " << v1[1] << "}" << std::endl;
	// std::cout << "v2: " << v2 << std::endl;
	// std::cout << "v3: " << v3 << std::endl;
	// std::cout << "v4: " << v4 << std::endl;
	// std::cout << v4++ << std::endl; // 2, 3
	// std::cout << ++v4 << std::endl; // 3, 4
	// std::cout << v4-- << std::endl; // 2, 3
	// std::cout << --v4 << std::endl; // 1, 2


	// v2 += v3; // 2, 4
	// v1 -= v2; // -2, -4
	// v2 = v3 + v3 *2; // 3, 6
	// v2 = 3 * v2; // 9, 18
	// v2 += v2 += v3; // 20, 40
	// v1 *= 42; // -84, -168
	// v1 = v1 - v1 + v1;

	// std::cout << "v1: " << v1 << std::endl;
	// std::cout << "v2: " << v2 << std::endl;
	// std::cout << "-v2: " << -v2 << std::endl;
	// std::cout << "v1[1]: " << v1[1] << std::endl;
	// v1[1] = 12;
	// std::cout << "v1[1]: " << v1[1] << std::endl;
	// std::cout << "v3[1]: " << v3[1] << std::endl;
	// std::cout << "v1 == v3: " << (v1 == v3) << std::endl;
	// std::cout << "v1 == v1: " << (v1 == v1) << std::endl;
	// std::cout << "v1 != v3: " << (v1 != v3) << std::endl;
	// std::cout << "v1 != v1: " << (v1 != v1) << std::endl;

    return 0;
}
