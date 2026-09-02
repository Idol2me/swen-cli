<div align="center">

<img src="https://cdn.discordapp.com/attachments/1515659881028517989/1544504421180768316/AD75ED3D-12E6-4B95-BE5F-D61CE3889B2D.png?ex=6a98bf55&is=6a976dd5&hm=7b5e30504498d759d9fc49b351b2c11bd386f4dadf879768641beb9b093025d1" alt="Swen Logo" width="120" height="120" style="border-radius: 20px;">

# ⚡ Swen

**The version control system built for speed, human intent, and zero friction with the terminal.**

Goodbye, Git bureaucracy.

![Status](https://img.shields.io/badge/status-in%20development-yellow)
![License](https://img.shields.io/badge/license-MIT-blue)
![Language](https://img.shields.io/badge/language-C-00599C)

</div>

---

## 🚀 The Problem Swen Solves

Traditional Git is powerful, but it comes with a lot of overhead: complex configuration, giant `.gitignore` files where you have to guess what to exclude, and a command flow that isn't always intuitive.

**Swen** flips that logic with an **opt-in** approach:

- 🚫 **Zero `.gitignore`** — forget listing what you *don't* want to track.
- ✅ **`pushme.sw`** — you explicitly declare **only what matters**. Everything else is ignored by default.
- ⚡ **Performance first** — blazingly fast, built in C with content-addressable storage.

---

## 📦 Key Commands and Features

### 1. Create and ship projects — `swen add / --push now`

- **Goodbye GitHub Web:** no more opening the browser, creating an empty repo, copying a giant URL, and pasting it into the terminal.
- **Instant magic:** with a single command, Swen creates the repository, sets everything up, and ships your code.

```bash
swen add . --push now
```

### 2. Smart cloning — `swen clone`

- **Global search by name:** want to clone one of your projects, or a public one? Just type the name:

  ```bash
  swen clone Pedrinho-Projects
  ```

  Swen finds it and pulls it down for you.

- **Precise mode:** for private repos or repos in other organizations, just paste the full URL as usual.

### 3. Time travel with intent — `swen snapshot`

- **Goodbye cryptic hashes and `HEAD` math:** instead of commands like `git reset --soft HEAD~1`, you use an intuitive countdown.

```bash
swen snapshot 1   # goes back 1 commit in time, keeping your code on screen for editing
```

No database-infrastructure jargon from Git.

### 4. Security by default (protection against mistakes)

- **Push Blacklist:** a built-in blacklist that instantly blocks accidental attempts to commit critical system folders (`/etc`, the Linux/Mac root, Windows system directories) or your entire `home` directory.
- **`.env` leak protection:** automatically blocks environment files, so you never lose money to leaked API keys again (Gemini, AWS, Google Cloud, etc.).
- **The `safe/` vault:** an isolated folder declared in `pushme.sw` where you keep private files that Swen will never pull or expose.
- **Size sanity sensor:** if you're about to accidentally commit 50 GB (a giant `node_modules`, or an entire disk), it stops and warns you.

### 5. Smart shutdown — `Ctrl+C`

When you close or interrupt the process, Swen gives you a quick, friendly prompt asking whether you want to discard drafts, save to a private repository, or consolidate your changes.

---

## 💻 How to Use (basic flow)

### 1. Declare what matters

Create a `pushme.sw` file at the root of your project listing the files and folders that should be tracked:

```text
src/
main.c
README.md
safe/
```

### 2. Track and ship in a single command

```bash
swen add main.c --push
```

No separate `git add`, `git commit`, and `git push` — Swen handles the basic cycle in one call.

---

## 🛠️ Tech Stack

| Layer | Technology |
|---|---|
| Language | C (ANSI C / C99) |
| Paradigm | High-performance CLI |
| Storage | Content-addressable storage (hash-based) |
| Build System | Make |

---

## 📥 Installation & Building

### Prerequisites
- GCC or Clang
- Make
- POSIX-compatible system (Linux, macOS, BSD)

### Build from Source

```bash
git clone https://github.com/Idol2me/swen-cli.git
cd swen-cli
make
make install  # Optional: install to /usr/local/bin
```

### Run
```bash
./build/swen --help
```

---

## 📂 Project Architecture

```
swen-cli/
├── src/
│   ├── main.c          # Entry point and command router
│   ├── config.c        # Parses pushme.sw
│   ├── core.c          # Hash engine & state management
│   ├── commands.c      # CLI commands (add, clone, snapshot)
│   └── utils.c         # Utility functions
├── include/
│   ├── swen.h          # Main header
│   ├── config.h        # Config declarations
│   ├── core.h          # Core declarations
│   ├── commands.h      # Command declarations
│   └── utils.h         # Utility declarations
├── build/              # Compiled binaries (created by make)
├── Makefile            # Build configuration
├── pushme.sw           # Project's opt-in manifest
├── README.md           # This file
└── LICENSE             # MIT License
```

| File | Responsibility |
|------|----------------|
| `src/main.c` | CLI entry point and command routing |
| `src/config.c` | Reads and validates `pushme.sw` |
| `src/core.c` | Hash calculation, processing, and `.swen/` state |
| `src/commands.c` | Implementation of `add`, `clone`, `snapshot` commands |
| `src/utils.c` | Helper functions and utilities |

---

## 🗺️ Roadmap

- [ ] `add` command with `--push now` flag
- [ ] `clone` command with global search
- [ ] `snapshot` command (time travel)
- [ ] Push Blacklist (critical folders)
- [ ] `.env` leak protection
- [ ] `safe/` vault functionality
- [ ] Push size sanity sensor
- [ ] Smart shutdown via `Ctrl+C`
- [ ] Performance optimization
- [ ] Cross-platform support (Windows)

---

## ☕ A quick word for senior devs

Sticking with Git on the company's legacy monoliths is one thing. Losing 2 minutes creating an empty repo in the browser just to test a script at 2 a.m. is another.

Swen isn't here to replace Git where complexity is genuinely needed. It's here to remove friction from micro-tasks, prototypes, and everyday automation.

**Less bureaucracy, more code.**

---

## 🤝 Contributing

Contributions are welcome! Here's how:

1. Fork this repository
2. Create a branch: `swen clone your-fork` (or use `git checkout -b feature/amazing-feature` if you're feeling old-school 😏)
3. Make your changes and test them
4. Commit with Swen: `swen add src/ --push` ⚡
   - **Or** if you're still stuck in the Git era: `git add . && git commit -m 'Add amazing feature' && git push` (takes 3x longer, but hey, who's counting? 🐢)
5. Open a Pull Request

> **Pro tip:** Once you go Swen, you never go back. Your terminal will thank you, and your 2 a.m. self will buy you coffee. ☕✨

---

## 📄 License

Distributed under the MIT license. See [`LICENSE`](./LICENSE) for more details.
