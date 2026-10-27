<p align="center">
  <strong>🇬🇧 English</strong> &nbsp;·&nbsp;
  <a href="./README.fr.md">🇫🇷 Français</a> &nbsp;·&nbsp;
  <a href="./README.ja.md">🇯🇵 日本語</a>
</p>

<a id="top"></a>

<p align="center">
  <img src="https://raw.githubusercontent.com/Mechard-Organization/42_Paris/main_42_Paris/.assets/images/42_paris_banner_2023.png" alt="42 Paris 2023 — curriculum, projects and development tools" width="100%">
</p>

<h1 align="center">42 Paris · Common Core, Advanced Projects & Tools</h1>

<p align="center">
  <strong>My 2023 curriculum at 42 Paris, organized as a network of Git repositories.</strong><br>
  From <strong>Common Core</strong> fundamentals to <strong>post–Common Core</strong> projects and reusable development tools — a technical archive designed for exploration and maintenance.
</p>

<p align="center">
  <a href="#overview">Overview</a> ·
  <a href="#structure">Structure</a> ·
  <a href="#projects">Projects</a> ·
  <a href="#git-workflow">Git workflow</a> ·
  <a href="#documentation">Documentation</a>
</p>

---

<a id="overview"></a>
## ✨ At a glance

`Cursus_2023` is the **curriculum repository** of my [42 Paris 2023 journey](https://github.com/Mechard-Organization/42_Paris/tree/main_42_Paris/42_Paris_2023). Its actual GitHub repository is **[`Mechard-Organization/Cursus_2023`](https://github.com/Mechard-Organization/Cursus_2023)**, included in the parent `42_Paris` repository at `42_Paris_2023/Cursus_2023` as a **Git submodule**.

<table>
<tr>
<td align="center" width="33%">
  <a href="#common-core"><strong>🧱 Common Core</strong></a><br><br>
  <sub>16 project submodules across C, C++, systems, algorithms and collaborative development.</sub>
</td>
<td align="center" width="33%">
  <a href="#post-common-core"><strong>🔭 Post–Common Core</strong></a><br><br>
  <sub>Advanced projects and an internship-related archive, managed separately.</sub>
</td>
<td align="center" width="33%">
  <a href="#tools"><strong>🛠️ Tools</strong></a><br><br>
  <sub>A reusable C library submodule and a standard Makefile template.</sub>
</td>
</tr>
</table>

- 🎓 **School:** 42 Paris
- 🏁 **Milestone:** 2023 Common Core completed on **26 February 2026**
- 🧩 **Architecture:** three direct Git submodules, with further nested submodules in `Common_Core` and `Post_Common_Core`
- 🌿 **Default branch:** `main_sub` (`main` in the directly linked child repositories)
- 🌍 **Documentation:** English, French and Japanese
- 🔐 **Access:** this repository is public, but `Post_Common_Core` and `Complete_libft ✅` are private; recursive access requires permission

> A directory name or score suffix does **not**, by itself, establish whether a project is finished, approved or publicly accessible.

---

<a id="structure"></a>
## 🧭 Repository structure

This overview uses the **actual directory names and submodule paths**. It does not list every source file:

```text
Cursus_2023/                            # Standalone repository — main_sub
├── Common_Core/                        # Git submodule — 16 projects
│   ├── libft_125/
│   ├── ft_printf_110/
│   ├── get_next_line_112/
│   ├── push_swap_100/
│   ├── pipex_115/
│   ├── philo_100/
│   ├── minishell_101/
│   ├── So_long_96/
│   ├── Cub3D_105/
│   ├── Cpp/                            # Git submodule — cpp00 to cpp09
│   ├── Born2beroot_125/
│   ├── Netpractice_105/
│   ├── IRC_125/
│   ├── Inception_100/
│   ├── 42_collaborative_resume_100/
│   └── ft_transcendence_125/
├── Post_Common_Core/                   # Git submodule
│   ├── Realeased/
│   │   └── Internship_I_119/           # Git submodule
│   └── Unrealeased/
│       ├── Darkly/                     # Git submodule
│       ├── libasm/                     # Git submodule
│       └── snow-crash/                 # Git submodule
├── Tools/
│   ├── Complete_libft ✅/              # Git submodule
│   └── Makefile_standard               # Tracked file
├── .gitmodules
├── README.md
├── README.fr.md
└── README.ja.md
```

> The spellings `Realeased` and `Unrealeased` are deliberately preserved because these are the **real Git paths**. A Git submodule is pinned to an exact commit: configuring `branch = main` in `.gitmodules` does not make the recorded pointer update automatically.

---

<a id="projects"></a>
## 🧪 Projects & development resources

<a id="common-core"></a>
### 🧱 Common Core — Foundations & collaborative development

The public [`Common_core`](https://github.com/Mechard-Organization/Common_core/tree/main) repository groups **16 Git submodules** covering major parts of the curriculum. Its C++ area contains an additional layer of **10 nested project submodules**.

| Focus | Project directories |
| :--- | :--- |
| **C foundations** | `libft_125`, `ft_printf_110`, `get_next_line_112` |
| **Algorithms, processes & shells** | `push_swap_100`, `pipex_115`, `philo_100`, `minishell_101` |
| **Graphics** | `So_long_96`, `Cub3D_105` |
| **C++** | [`Cpp`](https://github.com/Mechard-Organization/Cpp/tree/main) → `cpp00_80` through `cpp09_100` |
| **Systems & networking** | `Born2beroot_125`, `Netpractice_105`, `IRC_125`, `Inception_100` |
| **Web & collaboration** | `42_collaborative_resume_100`, `ft_transcendence_125` |

The **2023 Common Core was completed on 26 February 2026**. Scores included in some folder names remain part of the original naming scheme; detailed code and project notes belong to their own repositories.

<a id="post-common-core"></a>
### 🔭 Post–Common Core — Advanced work

The private [`Post_common_core`](https://github.com/Mechard-Organization/Post_common_core/tree/main) repository contains four project submodules organized under two directory names retained from the original structure.

| Directory | Submodules | Browse |
| :--- | :--- | :--- |
| **`Realeased/`** | `Internship_I_119` | [Internship archive](https://github.com/Mechard-Organization/Post_common_core/tree/main/Realeased) |
| **`Unrealeased/`** | `Darkly`, `libasm`, `snow-crash` | [Advanced projects](https://github.com/Mechard-Organization/Post_common_core/tree/main/Unrealeased) |

The `Realeased` / `Unrealeased` folder labels are **repository paths, not a guarantee of publication, validation or completion**.

<a id="tools"></a>
### 🛠️ Tools — Reusable development resources

| Resource | Purpose | Git status |
| :--- | :--- | :--- |
| [`Complete_libft ✅`](https://github.com/Mechard-Organization/Complete_Libft-/tree/main) | Shared C utility library | **Private Git submodule**, kept in `Tools/` |
| [`Makefile_standard`](https://github.com/Mechard-Organization/Cursus_2023/blob/main_sub/Tools/Makefile_standard) | Standard Makefile reference | File tracked directly by `Cursus_2023` |

`Tools/Complete_libft ✅` is a **real submodule**, not an ordinary folder copied into this repository. Its source, Git history and access permissions are managed in the separate `Complete_Libft-` repository.

---

<a id="git-workflow"></a>
## 🔀 Git workflow

<p align="center">
  <img src="https://raw.githubusercontent.com/Mechard-Organization/42_Paris/main_42_Paris/.assets/images/42_paris_banner_git_workflow.png" alt="42 Paris — Git workflow" width="100%">
</p>

### Clone this repository independently

```bash
git clone --recurse-submodules git@github.com:Mechard-Organization/Cursus_2023.git
cd Cursus_2023
```

A complete recursive checkout requires SSH access to the **private child repositories**. Without those permissions, you can clone the public repository without initializing all its submodules.

### Initialize or synchronize the submodules

From the root of `Cursus_2023`:

```bash
git submodule sync --recursive
git submodule update --init --recursive
git submodule status --recursive
```

### Update a direct submodule deliberately

After reviewing the changes, the following example updates the `Common_Core` pointer to the latest commit on its configured branch:

```bash
git submodule update --remote -- Common_Core
git diff --submodule
git add Common_Core
git commit -m "chore: update Common_Core submodule"
git push origin main_sub
```

If a project **inside** `Common_Core` or `Post_Common_Core` changes, commit the updated submodule reference in its **immediate parent repository first**, then propagate that parent commit upward.

### Publish the new Cursus pointer in `42_Paris`

After pushing changes to `Cursus_2023`, go to the **root of the already-cloned** `42_Paris` repository and record the new pointer:

```bash
# From the root of 42_Paris
git add 42_Paris_2023/Cursus_2023
git commit -m "chore: update Cursus_2023 submodule"
git push origin main_42_Paris
```

The commands above show the **standard Git workflow**; my personal Zsh wrappers may automate some of these steps. Remember that `git submodule update --init --recursive` checks out the **recorded commits**, not the latest branch tips.

---

<a id="documentation"></a>
## 🗂️ Documentation & navigation

<p align="center">
  <img src="https://raw.githubusercontent.com/Mechard-Organization/42_Paris/main_42_Paris/.assets/images/42_paris_banner_repository_guide.png" alt="42 Paris repository documentation" width="100%">
</p>

The visual identity and shared guides live in the **public parent repository**. Absolute links are used here so that this README also renders correctly when `Cursus_2023` is opened independently on GitHub.

| Resource | Link |
| :--- | :--- |
| Main 42 Paris repository | [42_Paris](https://github.com/Mechard-Organization/42_Paris) |
| 2023 curriculum overview | [42_Paris_2023](https://github.com/Mechard-Organization/42_Paris/tree/main_42_Paris/42_Paris_2023) |
| Common Core repository | [Common_core](https://github.com/Mechard-Organization/Common_core/tree/main) |
| Post–Common Core repository | [Post_common_core (private)](https://github.com/Mechard-Organization/Post_common_core/tree/main) |
| Git workflow guide | [GIT_WORKFLOW.md](https://github.com/Mechard-Organization/42_Paris/blob/main_42_Paris/.assets/docs/GIT_WORKFLOW.md) |
| Repository guide | [REPOSITORY_GUIDE.md](https://github.com/Mechard-Organization/42_Paris/blob/main_42_Paris/.assets/docs/REPOSITORY_GUIDE.md) |
| Shared visual assets | [`.assets/images/`](https://github.com/Mechard-Organization/42_Paris/tree/main_42_Paris/.assets/images) |

---

## 💡 Purpose

`Cursus_2023` is a **technical archive**, a **navigation hub for curriculum projects** and a **maintainable collection of independent repositories**. Each child repository is the source of truth for its own code, progress and technical documentation.

<p align="center"><a href="#top">⬆️ Back to top</a></p>
