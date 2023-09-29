# Structs
Structs are similar  to typescript interfaces in the sense that they define the structure of an object or your data.
However, there are some differences to account for.

## Access control
- In C++, all members of a struct have public access so these are exposed and can be access outside the struct.
- Typescript just defines the structure without regard of its access. It's analogous to being "private" but not quite the same

## Implementation
- In C++, a struct can have both data members and method/member functions which allows encapsulation. You can even define the whole function inside the struc!
- In typescript, you can only define the argument types of a method and the return type. It does not account for the function body or operation.

### An important side note
Like in typescript, you can assign enums inside a struc. To do this, declare an unsigned char type then declare the enum similar to typescript.
However, it is important to note that unlike typescript, enums are also public!

Also, unlike C++, enums are not typically human-readable and should be casted to integers before printing to console.