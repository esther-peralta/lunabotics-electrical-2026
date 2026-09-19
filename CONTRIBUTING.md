# Contributing to the Lunabotics Electrical Repository

This document explains how electrical-team members should submit their work.

## Before Starting

Open the repository in VS Code and update the `main` branch:

----bash/terminal (ctrl+shift+`)
git switch main
git pull origin main
-----

## Create a Branch

Create a separate branch for your assignment:

-----bash
git switch -c firstname-task
-----

Example:

```bash
git switch -c esther-hall-sensor
```

Use lowercase branch names and separate words with hyphens.

## Make Your Changes

Complete your assignment in the correct folder:

- `firmware/` for Arduino and microcontroller code
- `hardware/` for components, schematics, and wiring information
- `docs/` for meeting notes and research
- `assignments/` for assignment instructions and submissions

Save your files with `Ctrl+S`.
To exit files use `ctrl+F4`

## Check Your Work

```bash
git status
```

This displays your current branch and changed files.

## Stage Your Files

Add the specific files that belong to your assignment:

```bash
git add path/to/file
```

Example:

```bash
git add docs/research/hall-sensor.md
```

## Commit Your Work

```bash
git commit -m "Add Hall-effect sensor research"
```

The commit message should briefly explain what you completed.

## Push Your Branch

The first time you push a new branch, use:

```bash
git push -u origin firstname-task
```

Example:

```bash
git push -u origin esther-hall-sensor
```

After the first push, you can use:

```bash
git push
```

## Open a Pull Request

After pushing:

1. Open the repository on GitHub.
2. Select **Compare & pull request**.
3. Explain what you changed.
4. Submit the pull request.
5. Wait for the electrical lead to review it.

## Team Rules

- Do not work directly on `main`.
- Pull the latest version before starting.
- Create a new branch for each assignment.
- Use clear file and folder names.
- Use clear commit messages.
- Do not upload passwords, private keys, tokens, or personal information.
- Do not upload compiled programs or unnecessary generated files.
- Ask the electrical lead before resolving a merge conflict.
- Arduino project folders and their main `.ino` files must use the same name.
