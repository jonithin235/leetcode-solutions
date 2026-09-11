# Compile, Run, Commit, and Push

Run these commands from the `leetcode-solutions` folder in PowerShell.

## Compile and run the C program

```powershell
gcc .\arrays-strings.c -o .\arrays-strings.exe
.\arrays-strings.exe
```

To compile with warnings and debugging information:

```powershell
gcc -Wall -Wextra -g .\arrays-strings.c -o .\arrays-strings.exe
.\arrays-strings.exe
```

## Commit changes

Review the changes first:

```powershell
git status
git diff
```

Stage the source and Markdown files:

```powershell
git add .\arrays-strings.c .\git-commands.md .\README.md
```

Create a commit:

```powershell
git commit -m "Add string reversal solution and development commands"
```

Do not add `arrays-strings.exe`; it is a generated build file.

## Push to GitHub

```powershell
git push origin main
```

The repository remote is:

```text
https://github.com/jonithin235/leetcode-solutions.git
```
