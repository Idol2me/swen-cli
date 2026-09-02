<div align="center">

![Swen Logo](https://cdn.discordapp.com/attachments/1515659881028517989/1544504421180768316/AD75ED3D-12E6-4B95-BE5F-D61CE3889B2D.png)

# ⚡ Swen

**The version control system built for speed, human intent, and zero friction with the terminal.**

*Goodbye, Git bureaucracy.*

[![Status](https://img.shields.io/badge/status-in%20development-yellow?style=for-the-badge)](https://github.com/Idol2me/swen-cli)
[![License](https://img.shields.io/badge/license-MIT-blue?style=for-the-badge)](./LICENSE)
[![Language](https://img.shields.io/badge/language-Lua-2C2D72?style=for-the-badge)](https://www.lua.org/)

[Installation](#-installation) • [Features](#-key-features) • [Usage](#-how-to-use) • [Contributing](#-contributing)

</div>

---

## 🚀 The Problem Swen Solves

Traditional Git is powerful, but it comes with **overhead**:
- ❌ Complex configuration files
- ❌ Giant `.gitignore` files (guessing what to exclude)
- ❌ Unintuitive command flow
- ❌ Friction for micro-tasks and quick prototypes

**Swen** flips this with an **opt-in** approach:

| Feature | Git | Swen |
|---------|-----|------|
| Configuration | `.gitignore` (opt-out) | `pushme.sw` (opt-in) ✅ |
| Bureaucracy | Multiple commands | Single command ⚡ |
| Speed | Standard | Content-addressable storage 🚀 |
| Default behavior | Track everything | Ignore everything (safe) 🛡️ |

---

## 📦 Key Features

### ✨ 1. Instant Project Creation & Shipping
```bash
swen add . --push now
```
- **No browser nonsense** — forget opening GitHub, creating an empty repo, and copying URLs
- **One command, everything done** — creates repo, configures everything, ships your code

### 🔍 2. Smart Cloning
```bash
swen clone project-name          # Global search by name
swen clone https://github.com... # Or use full URL for precision
```
- Search by name across your projects and public repos
- Instant downloads without manual setup

### ⏮️ 3. Time Travel with Intent
```bash
swen snapshot 1   # Go back 1 commit, keep code for editing
swen snapshot 5   # Go back 5 commits
```
- **Intuitive countdown** — no cryptic `git reset --soft HEAD~1`
- Keep your working changes while exploring history

### 🛡️ 4. Security by Default
- **Push Blacklist** — blocks accidental commits to critical system folders (`/etc`, Windows System32, etc.)
- **`.env` Leak Protection** — auto-blocks environment files (stops API key leaks from Gemini, AWS, Google Cloud, etc.)
- **`safe/` Vault** — isolated folder for private files, never pushed or exposed
- **Size Sanity Sensor** — warns before committing massive files/directories (50GB `node_modules`, etc.)

### 🎯 5. Smart Shutdown
Press `Ctrl+C` and choose:
- 📝 Discard drafts
- 💾 Save to private repo
- 🔄 Consolidate changes

---

## 💻 How to Use (Basic Flow)

### Step 1: Declare What Matters
Create a `pushme.sw` file at your project root:

```text
src/
main.lua
README.md
safe/
package.json
```

### Step 2: Track & Ship
```bash
swen add . --push
```
That's it! No `git add`, `git commit`, `git push` dance.

---

## ☕ A Word for Senior Devs

**Git is amazing for complex monoliths and large teams.**

But losing 2 minutes to browser clicks for a quick script at 2 a.m.? That's friction Swen removes.

**Swen isn't here to replace Git** — it's here to eliminate friction from:
- 🚀 Micro-tasks and quick prototypes
- 🧪 Automation scripts
- 🎯 Everyday workflows
- ⚡ Personal projects

**Less bureaucracy, more code.**

---

## 🛠️ Tech Stack

| Component | Technology |
|-----------|-----------|
| **Language** | Lua / LuaJIT |
| **Type** | High-performance CLI |
| **Storage** | Content-addressable (hash-based) |
| **Philosophy** | Opt-in tracking, zero friction |

---

## 📂 Project Architecture

```
swen-cli/
├── main.lua              # Entry point & command router
├── src/
│   ├── config.lua        # Parses & validates pushme.sw
│   ├── core.lua          # Hash engine & state management
│   ├── commands.lua      # CLI command implementations
│   └── utils.lua         # Utilities & helpers
├── tests/                # Test suite
├── pushme.sw             # Project's opt-in manifest
├── README.md             # This file
└── LICENSE               # MIT License
```

| File | Responsibility |
|------|----------------|
| `main.lua` | CLI entry point and command routing |
| `src/config.lua` | Reads and validates `pushme.sw` |
| `src/core.lua` | Hash calculation, processing, and `.swen/` state |
| `src/commands.lua` | Implementation of `add`, `clone`, `snapshot` commands |

---

## 📥 Installation

### Prerequisites
- Lua 5.1+ or LuaJIT

### From Source
```bash
git clone https://github.com/Idol2me/swen-cli.git
cd swen-cli
lua main.lua --help
```

### Via LuaRocks (Coming Soon)
```bash
luarocks install swen
```

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
- [ ] Publish to LuaRocks
- [ ] Web dashboard (optional)
- [ ] Multi-user collaboration

---

## 🤝 Contributing

We love contributions! Here's how to get started:

1. **Fork** this repository
2. **Create a branch** for your feature: `git checkout -b feature/amazing-feature`
3. **Make your changes** and test them
4. **Commit** with clear messages: `git commit -m 'Add amazing feature'`
5. **Push** to your fork: `git push origin feature/amazing-feature`
6. **Open a Pull Request** and describe your changes

### Issues & Discussions
- 🐛 Found a bug? [Open an issue](https://github.com/Idol2me/swen-cli/issues)
- 💡 Have an idea? [Start a discussion](https://github.com/Idol2me/swen-cli/discussions)

---

## 📄 License

This project is licensed under the **MIT License** — see the [`LICENSE`](./LICENSE) file for details.

---

## 💬 Support

- 📖 **Docs**: Check the [wiki](https://github.com/Idol2me/swen-cli/wiki)
- 💬 **Discord**: Join our community server
- 🐛 **Issues**: [Report bugs here](https://github.com/Idol2me/swen-cli/issues)

---

<div align="center">

**Made with ❤️ by [Idol2me](https://github.com/Idol2me)**

⭐ If you find Swen useful, please consider giving it a star!

</div>
