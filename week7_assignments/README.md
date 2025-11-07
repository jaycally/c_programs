# Week 7 – File Handling in C

**Student:** Joseph Thuo  
**Reg No:** CT100/G/26202/25  
**Unit:** Introduction to Programming 
**Unit Code:** SPT 2103  
**Institution:** Kirinyaga University  
**Assignment Week:** 7  
**Topic:** File Handling in C

---

## 📂 Programs Included

| Filename | Description |
|----------|-------------|
| `library_books.c` | Appends book titles to `borrowed_books.txt` without deleting previous entries |
| `student_results.c` | Reads student records from `results.dat` and displays name + marks |
| `student_results_writer.c` | Creates `results.dat` binary file with student records |
| `daily_sales.c` | Reads transactions from `sales.txt` and calculates total sales |
| `sales_creator.c` | Creates sample `sales.txt` file with test transactions |

---

## 🛠️ How to Compile and Run

Use any C compiler (e.g., GCC or Falcon C++):

```bash
gcc library_books.c -o library_books.exe
gcc student_results_writer.c -o writer.exe
gcc student_results.c -o reader.exe
gcc sales_creator.c -o sales_creator.exe
gcc daily_sales.c -o daily_sales.exe
