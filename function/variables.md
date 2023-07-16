# Variables

## Types of Variables

- Local variables: Defined within a function, can only be accessed within it's function. It only lasts throughout the function's lifetime.

  - ```
        int determineMax(int x, int y){
            int max = x;
            if (y > max)
                max = y;
            return max;
        }
    ```

- Global Variables: Defined outside a function, and can be accessed anywhere in the program. Lasts throughtout the entire program except points where it is overridden.

### NB: Local variables of same name with Global variables will override the global

- Scope of a variable is the region it is exists.

- Static variables retain their value even when out of scope.
