✅ Module 2: Operator & Conditions Summary

🟩 1. Operators 

➡️ Arithmetic Operators:

Operator

Meaning

Example

Addition x + y
Subtraction x - y
Multiplication x * y
Division x / y
Modulus (remainder) x % y

➡️ Example Code:
int x = 10, y = 3;
printf("%d", x + y); // Output: 13

🟩 2. Conditional Statements (if, else if, else)

➡️ Structure:

if (condition) {
   // code block
}
else if (another_condition) {
   // another block
}
else {
   // fallback block
}

➡️ Used for decision making based on user input

🟨 Example 1:
int tk;
scanf("%d", &tk);

if(tk >= 12000){
    printf("Canada\n");
    if(tk >= 14000){
        printf("USA\n");
    }
}
else if(tk == 7000){
    printf("Dubai");
}
else {
    printf("Italy");
}

📌 Logic:

14000+ → Canada + USA

12000 → Canada only

7000 → Dubai

Others → Italy

🧠 Extra Concepts Covered:

scanf() with multiple inputs

Nested if (if inside another if)

%d, %f, %c format specifiers

Printing percentage: %%

