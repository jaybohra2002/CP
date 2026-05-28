# Competitive Programming

This is my Competitive Programming repository.

---

## 🛠️ Environment & Setup

- **Language:** C++23
- **Compiler:** MSYS2 (UCRT64 GCC) As of Now.
- **Editor:** VS Code
- **Build System:** Custom VS Code Tasks with central I/O redirection

---

## ⌨️ Keyboard Shortcuts (VS Code)

I use these custom shortcuts to compile, test, and run code instantly without leaving the editor:

| Shortcut | Action | Description |
| :--- | :--- | :--- |
| `Ctrl + Shift + R` | **Compile & Run** | Compiles the active `.cpp` file and runs it using the root `input.txt` and `output.txt` files. |
| `Ctrl + Shift + C` | **Compile Only** | Quickly checks if the code has any compile errors. |
| `Ctrl + Shift + T` | **Compare Output** | Compares `output.txt` with `expected.txt` using the Windows `fc` command. |

---

## 📁 Repository Structure

```text
CP/
├── .vscode/               # Build tasks, keybindings info, and templates/snippets
├── input.txt              # Global input file for test cases (ignored by git)
├── output.txt             # Global output file for program results (ignored by git)
├── expected.txt           # Global expected output file for comparison (ignored by git)
├── template.cpp           # Single test case boilerplate
├── template_multi.cpp     # Multi-test case boilerplate (T test cases)
│
# --- Topic Wise Directories ---
├── cpp_basics/            # Core syntax, templates, and baseline logic
├── binary_search/         # Monotone predicates, searching ranges, etc.
└── dsu/                   # Disjoint Set Union (Union-Find)
```

---

## ⚡ How to Create & Run a New Solution

1. **Create the file:** Inside a topic folder, create a new file (e.g., `binary_search/aggressive_cows.cpp`).
2. **Expand the template:** Open the file, type `cpt` (for multi-test case) or `cp` (for single test case), and press `Tab`. The boilerplate code will auto-fill.
3. **Set the test case:** Paste the sample test case inside the root `input.txt`.
4. **Run:** Press `Ctrl + Shift + R`.
5. **Verify:** Open the root `output.txt` to see your solution's output.

---


