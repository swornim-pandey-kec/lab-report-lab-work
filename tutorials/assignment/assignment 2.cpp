// 1. Enumerations (enums)
// An enum is a way to replace ugly numbers with readable words. It creates a custom list of options.

// C++
// enum Speed { SLOW, MEDIUM, FAST };
// Speed current = FAST; // Way easier to read than current = 2;
// 2. Rules for Naming Variables (Identifiers)
// Must start with a letter or an underscore (_). Never a number.

// Can only contain letters, numbers, and underscores. No spaces or symbols (@, $, %).

// It is case-sensitive (abc and ABC are different).

// You cannot use keywords (like int, void, or return).

// 3. The Need for Namespaces
// Namespaces prevent name collisions. If two different libraries have a function with the exact same name, the compiler crashes. A namespace acts like a folder or a surname to separate them.

// C++
// namespace Sony { void play() {} }
// namespace Xbox { void play() {} }

// int main() {
//     Sony::play(); // Clearly calls Sony's version
//     Xbox::play(); // Clearly calls Xbox's version
// }