// Significant changes to C++14


#if !defined(__cpp_binary_literals)
// Binary Literals in the C++ Core Language
// \see N3472 section 2.14 Header predefined
#define __cpp_binary_literals 201304
#endif


#if !defined(none)
// A Proposal to Tweak Certain C++ Contextual Conversions
// \see N3323 section 4 Header 
#define none 
#endif


#if !defined(__cpp_init_captures)
// Wording Changes for Generalized Lambda-capture
// \see N3648 section 5.1 Header predefined
#define __cpp_init_captures 201304
#endif


#if !defined(__cpp_generic_lambdas)
// Generic (Polymorphic) Lambda Expressions
// \see N3649 section 5.1 Header predefined
#define __cpp_generic_lambdas 201304
#endif


#if !defined(none)
// Clarifying Memory Allocation
// \see N3664 section 5.3 Header 
#define none 
#endif


#if !defined(none)
// Core Issue 1512: Pointer comparison vs qualification conversions
// \see N3624 section "5.9; 5.10" Header 
#define none 
#endif


#if !defined(__cpp_constexpr)
// Relaxing constraints on constexpr functions / constexpr member functions and implicit const
// \see N3652 section "5.19; 7.1" Header predefined
#define __cpp_constexpr 201304
#endif


#if !defined(__cpp_decltype_auto)
// Return type deduction for normal functions
// \see N3638 section 7.1 Header predefined
#define __cpp_decltype_auto 201304
#endif


#if !defined(__cpp_return_type_deduction)
// 
// \see  section  Header predefined
#define __cpp_return_type_deduction 201304
#endif


#if !defined(__cpp_runtime_arrays)
// Runtime-sized arrays with automatic storage duration
// \see N3639 section 8.3 Header predefined
#define __cpp_runtime_arrays 201304
#endif


#if !defined(__cpp_aggregate_nsdmi)
// Member initializers and aggregates
// \see N3653 section 8.5 Header predefined
#define __cpp_aggregate_nsdmi 201304
#endif


#if !defined(none)
// Drafting for Core 1402
// \see N3667 section 12.8 Header 
#define none 
#endif


#if !defined(__cpp_variable_templates)
// Variable Templates
// \see N3651 section "14; 14.7" Header predefined
#define __cpp_variable_templates 201304
#endif

// N3669,Fixing constexpr member functions without const,various,none,,
// N3673,C++ Library Working Group Ready Issues Bristol 2013,various,none,,


#if !defined(__cpp_lib_constexpr_functions)
// Constexpr Library Additions: utilities
// \see N3471 section 20.2-20.4 Header <utility>
#define __cpp_lib_constexpr_functions 201210
#endif


//#if !defined()
//// Constexpr Library Additions: chrono
//// \see N3469 section 20.11 Header <chrono>
//#define  
//#endif


//#if !defined()
//// Constexpr Library Additions: containers
//// \see N3470 section 23.3 Header <array>
//#define  
//#endif


#if !defined(__cpp_lib_integer_sequence)
// Compile-time integer sequences
// \see N3658 section 20 Header <utility>
#define __cpp_lib_integer_sequence 201304
#endif


#if !defined(__cpp_lib_exchange_function)
// exchange() utility function
// \see N3668 section 20 Header <utility>
#define __cpp_lib_exchange_function 201304
#endif


#if !defined(__cpp_lib_tuples_by_type)
// Wording for Addressing Tuples by Type
// \see N3670 section 20.2-20.4 Header <utility>
#define __cpp_lib_tuples_by_type 201304
#endif


//N3672,A proposal to add a utility class to represent optional objects,20.5,__has_include(<optional>),1,predefined


#if !defined(__cpp_lib_make_unique)
// make_unique
// \see N3656 section 20.7 Header <memory>
#define __cpp_lib_make_unique 201304
#endif


#if !defined(__cpp_lib_transparent_operators)
// Making Operator Functors greater<>
// \see N3421 section 20.8 Header <functional>
#define __cpp_lib_transparent_operators 201210
#endif


#if !defined(__cpp_lib_result_of_sfinae)
// std::result_of and SFINAE
// \see N3462 section 20.9 Header <functional>
#define __cpp_lib_result_of_sfinae 201210
#endif


#if !defined(__cpp_lib_integral_constant_callable)
// An Incremental Improvement to integral_constant
// \see N3545 section 20.9 Header <type_traits>
#define __cpp_lib_integral_constant_callable 201304
#endif


#if !defined(__cpp_lib_transformation_trait_aliases)
// TransformationTraits Redux
// \see N3655 section 20.9 Header <type_traits>
#define __cpp_lib_transformation_trait_aliases 201304
#endif


#if !defined(__cpp_lib_chrono_udls)
// User-defined Literals for Standard Library Types
// \see N3642 section 20.11 Header <chrono>
#define __cpp_lib_chrono_udls 201304
#endif


#if !defined(__cpp_lib_string_udls)
// 
// \see  section 21.7 Header <string>
#define __cpp_lib_string_udls 201304
#endif


//N3662,C++ Dynamic Arrays,"23.2; 23.3",__has_include(<dynarray>),1,predefined


#if !defined(__cpp_lib_generic_associative_lookup)
// Adding heterogeneous comparison lookup to associative containers
// \see N3657 section 23.4 Header <map>
#define __cpp_lib_generic_associative_lookup 201304
#endif


//#if !defined()
//// 
//// \see  section  Header <set>
//#define  
//#endif


#if !defined(__cpp_lib_null_iterators)
// Null Forward Iterators
// \see N3644 section 24.2 Header <iterator>
#define __cpp_lib_null_iterators 201304
#endif


#if !defined(__cpp_lib_robust_nonmodifying_seq_ops)
// Making non-modifying sequence operations more robust
// \see N3671 section 25.2 Header <algorithm>
#define __cpp_lib_robust_nonmodifying_seq_ops 201304
#endif


#if !defined(__cpp_lib_quoted_string_io)
// Quoted Strings Library Proposal
// \see N3654 section 27.7 Header <iomanip>
#define __cpp_lib_quoted_string_io 201304
#endif


#if !defined(__cpp_lib_shared_mutex)
// Shared locking in C++
// \see N3659 section 30.4 Header <mutex>
#define __cpp_lib_shared_mutex 201304
#endif


//#if !defined()
//// 
//// \see  section  Header 
//#define  
//#endif
//Significant features of C++11,,,,,
//Doc. No.,Title,Primary Section,Macro name,Value,Header


#if !defined(__cpp_unicode_characters)
// New Character Types in C++
// \see N2249 section 2.13 Header predefined
#define __cpp_unicode_characters 200704
#endif


#if !defined(__cpp_raw_strings)
// Raw and Unicode String Literals Unified Proposal
// \see N2442 section 2.13 Header predefined
#define __cpp_raw_strings 200710
#endif


#if !defined(__cpp_unicode_literals)
// 
// \see  section  Header predefined
#define __cpp_unicode_literals 200710
#endif


#if !defined(__cpp_user_defined_literals)
// User-defined Literals
// \see N2765 section "2.13; 13.5" Header predefined
#define __cpp_user_defined_literals 200809
#endif


#if !defined(__cpp_constexpr)
// Generalized Constant Expressions
// \see N2235 section "5.19; 7.1" Header predefined
#define __cpp_constexpr 200704
#endif


#if !defined(__cpp_decltype)
// Decltype
// \see N2343 section 7.1 Header predefined
#define __cpp_decltype 200707
#endif


#if !defined(__cpp_attributes)
// Towards support for attributes in C++
// \see N2761 section 7.6 Header predefined
#define __cpp_attributes 200809
#endif


#if !defined(__cpp_rvalue_reference)
// A Proposal to Add an Rvalue Reference to the C++ Language
// \see N2118 section 8.3 Header predefined
#define __cpp_rvalue_reference 200610
#endif


#if !defined(__cpp_variadic_templates)
// Proposed Wording for Variadic Templates
// \see N2242 section "8.3; 14" Header predefined
#define __cpp_variadic_templates 200704
#endif
