# Functions

## Function definition

- Function header
- Function body

### Function Format

```
    return_type function_name(parameters){
        //body
    }
```

- Return type: type of value function is to return.
- Function name: identifier for referencing the function.
- List of params: Declaration of variables or constants that serve as input to the functions, a.k.a "Formal parameters". They are placeholders for the actual parameters that'll be given when the function is called.
- Body: this contains statements that performs the task(s) the function is design to do.
- Return statements: Functions return a value to the point of call. format: ```return (expr)```. The expression must have the same value type as the function.

### Uses of return statement

- Terminates the execution of the function.
- It returns the value to the point where the function is called.


#### NB: Your return parameters must match/corresponding with the declared function parameters.


### Function Declaration

- This is the specification of a function header terminated with a semi-colon.
- It is used when you need to call a function before defining it.

### Parameter Passing

- By value: The value of the actual parameter is copied into the formal parameter (the formal and the actual parameter do not share memory location).
- By reference: The memory address is passed instead of the value.

    - By alias: done by using an alternative name. Used when you need to pass more than one value to a function.

### Declaring an Alias

- Done by using & + name.