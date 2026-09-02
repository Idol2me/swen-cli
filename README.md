<div align="center">

![Swen Logo](https://cdn.discordapp.com/attachments/1515659881028517989/1544504421180768316/AD75ED3D-12E6-4B95-BE5F-D61CE3889B2D.png?ex=6a98bf55&is=6a976dd5&hm=7b5e30504498d759d9fc49b351b2c11bd386f4dadf879768641beb9b093025d1)

# ⚡ Swen

**The version control system built for speed, human intent, and zero friction with the terminal.**

Goodbye, Git bureaucracy.

![Status](https://img.shields.io/badge/status-in%20development-yellow)
![License](https://img.shields.io/badge/license-MIT-blue)
![Language](https://img.shields.io/badge/language-Lua-2C2D72)

</div>

---

## 🚀 The Problem Swen Solves

Traditional Git is powerful, but it comes with a lot of overhead: complex configuration, giant `.gitignore` files where you have to guess what to exclude, and a command flow that isn't always intuitive.

**Swen** flips that logic with an **opt-in** approach:

- 🚫 **Zero `.gitignore`** — forget listing what you *don't* want to track.
- ✅ **`pushme.sw`** — you explicitly declare **only what matters**. Everything else is ignored by default.
- ⚡ **Performance first** — content-addressable storage, with no unnecessary overhead.

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
main.lua
README.md
safe/
```

### 2. Track and ship in a single command

```bash
swen add main.lua --push
```

No separate `git add`, `git commit`, and `git push` — Swen handles the basic cycle in one call.

---

## ☕ A quick word for senior devs

Sticking with Git on the company's legacy monoliths is one thing. Losing 2 minutes creating an empty repo in the browser just to test a script at 2 a.m. is another.

Swen isn't here to replace Git where complexity is genuinely needed. It's here to remove friction from micro-tasks, prototypes, and everyday automation.

**Less bureaucracy, more code.**

---

## 🛠️ Tech Stack

| Layer | Technology |
|---|---|
| Language | Lua / LuaJIT |
| Paradigm | High-performance CLI |
| Storage | Content-addressable storage (hash-based) |

---

## 📂 Project Architecture

```text
swen/
├── main.lua          # CLI entry point and command router
├── src/
│   ├── config.lua     # Reads and validates pushme.sw
│   └── core.lua        # Hashing engine and state management (.swen/)
└── pushme.sw         # The project's opt-in manifest
```

| File | Responsibility |
|---|---|
| `main.lua` | Entry point and command routing |
| `src/config.lua` | Reading and validating `pushme.sw` |
| `src/core.lua` | Hash calculation, processing engine, and state in `.swen/` |

---

## 🗺️ Roadmap

- [ ] `add` command with `--push now` flag support
- [ ] `clone` command with global search by name
- [ ] `snapshot` command (time travel via countdown)
- [ ] Push Blacklist (critical system folders)
- [ ] `.env` leak protection
- [ ] `safe/` vault
- [ ] Push size sanity sensor
- [ ] Smart shutdown via `Ctrl+C`
- [ ] Publish via LuaRocks

---

## 🤝 Contributing

Contributions are welcome! Open an issue to discuss ideas, or send a pull request directly.

---

## 📄 License

Distributed under the MIT license. See [`LICENSE`](./LICENSE) for more details.
