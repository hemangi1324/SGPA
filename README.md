# SGPA Calculator (C++)

A terminal-based **SGPA Calculator** that helps engineering students compute their **Semester Grade Point Average (SGPA)** based on marks scored in various subjects. The program handles different subject combinations for **Group 1** and **Group 2** students, taking into account In-Sem, End-Sem, CIE, Attendance, and Term Work components.

---

## Features

- Calculate SGPA based on **actual credit-weighted performance**
- Supports **two distinct subject groups** (Group 1 and Group 2)
- Takes **internal and external assessments** into account
- Follows standard **credit-to-grade-point conversion**
- Implemented entirely in **C++** with **object-oriented design**

---

##  Subjects Included

### Group 1:
- SIC (Statistics and integral calculus)
- OOPC (Object Oriented Programming using C++)
- CST (Chemical Science and Technology)
- CGD (Computer Graphics and Design)
- ESE (Environment and Sustainable Engineering)
- IIDTL (Innovative Ideas and Design Thinking Lab)
- Soft Skills
- CCA (Co-Curricular Activity)
- NPTEL courses

### Group 2:
- SIC
- OOPC
- QP (Quantum Physics)
- IEEE (Integrated Electronics and Electrical engineering)
- MFR (Mechanics for Robotics)
- FAB (Fabrication Lab)
- IKS (Indian Knowledge System)
- CCA

---

## How It Works

1. **Run the program**
2. Choose your group:  
   - `1` for Group 1  
   - `2` for Group 2  
3. Enter your marks for each subject component:
   - In-sem (out of 30)
   - End-sem (out of 70)
   - CIE, Attendance, Term work (based on internal scheme)
4. The program calculates grade points per subject and multiplies them by their respective credits.
5. Your **Total Earned Credits** and **SGPA** are displayed.

---

##  Credit-To-Grade Point Mapping

| Marks (%) | Grade Point |
| --------- | ----------- |
| 91–100    | 10          |
| 81–90     | 9           |
| 71–80     | 8           |
| 61–70     | 7           |
| 51–60     | 6           |
| 45–50     | 5           |
| 40–44     | 4           |
| Below 40  | 0 (Fail)    |

