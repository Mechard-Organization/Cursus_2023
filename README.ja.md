<p align="center">
  <a href="./README.md">🇬🇧 English</a> &nbsp;·&nbsp;
  <a href="./README.fr.md">🇫🇷 Français</a> &nbsp;·&nbsp;
  <strong>🇯🇵 日本語</strong>
</p>

<a id="top"></a>

<p align="center">
  <img src="https://raw.githubusercontent.com/Mechard-Organization/42_Paris/main_42_Paris/.assets/images/42_paris_banner_2023.png" alt="42 Paris 2023 — カリキュラム、プロジェクト、開発ツール" width="100%">
</p>

<h1 align="center">42 Paris · Common Core、発展的な課題、開発ツール</h1>

<p align="center">
  <strong>42 Parisでの2023年からのカリキュラムを、Gitリポジトリのネットワークとして整理しました。</strong><br>
  <strong>Common Core</strong>の基礎から、<strong>Post–Common Core</strong>のプロジェクト、再利用可能な開発ツールまでを、探しやすく管理しやすい技術アーカイブとしてまとめています。
</p>

<p align="center">
  <a href="#overview">概要</a> ·
  <a href="#structure">構成</a> ·
  <a href="#projects">プロジェクト</a> ·
  <a href="#git-workflow">Gitワークフロー</a> ·
  <a href="#documentation">ドキュメント</a>
</p>

---

<a id="overview"></a>
## ✨ 概要

`Cursus_2023` は、[42 Parisの2023年からの活動](https://github.com/Mechard-Organization/42_Paris/tree/main_42_Paris/42_Paris_2023)における**カリキュラム用リポジトリ**です。GitHub上の実際のリポジトリは **[`Mechard-Organization/Cursus_2023`](https://github.com/Mechard-Organization/Cursus_2023)** で、親リポジトリ `42_Paris` の `42_Paris_2023/Cursus_2023` に**Gitサブモジュール**として組み込まれています。

<table>
<tr>
<td align="center" width="33%">
  <a href="#common-core"><strong>🧱 Common Core</strong></a><br><br>
  <sub>C、C++、システム、アルゴリズム、共同開発など、16個のプロジェクト用サブモジュール。</sub>
</td>
<td align="center" width="33%">
  <a href="#post-common-core"><strong>🔭 Post–Common Core</strong></a><br><br>
  <sub>発展的なプロジェクトとインターンシップ関連のアーカイブを、独立したリポジトリで管理。</sub>
</td>
<td align="center" width="33%">
  <a href="#tools"><strong>🛠️ Tools</strong></a><br><br>
  <sub>再利用可能なCライブラリのサブモジュールと標準Makefileのひな形。</sub>
</td>
</tr>
</table>

- 🎓 **学校：** 42 Paris
- 🏁 **節目：** 2023年のCommon Coreを**2026年2月26日**に修了
- 🧩 **Git構成：** 直接サブモジュールが3つあり、`Common_Core` と `Post_Common_Core` の内部にはさらにサブモジュールがあります
- 🌿 **デフォルトブランチ：** `main_sub`（直接リンクしている子リポジトリは `main`）
- 🌍 **ドキュメント：** 英語・フランス語・日本語
- 🔐 **アクセス：** このリポジトリは公開されていますが、`Post_Common_Core` と `Complete_libft ✅` は非公開のため、再帰的な取得には権限が必要です

> ディレクトリ名や名前に含まれるスコアだけで、そのプロジェクトが**完成・承認済み・公開済み**であるとは判断できません。

---

<a id="structure"></a>
## 🧭 リポジトリ構成

次のツリーは**実際のディレクトリ名とサブモジュールのパス**を使った概要です。すべてのソースファイルを列挙したものではありません。

```text
Cursus_2023/                            # 独立リポジトリ — main_sub
├── Common_Core/                        # Gitサブモジュール — 16プロジェクト
│   ├── libft_125/
│   ├── ft_printf_110/
│   ├── get_next_line_112/
│   ├── push_swap_100/
│   ├── pipex_115/
│   ├── philo_100/
│   ├── minishell_101/
│   ├── So_long_96/
│   ├── Cub3D_105/
│   ├── Cpp/                            # Gitサブモジュール — cpp00〜cpp09
│   ├── Born2beroot_125/
│   ├── Netpractice_105/
│   ├── IRC_125/
│   ├── Inception_100/
│   ├── 42_collaborative_resume_100/
│   └── ft_transcendence_125/
├── Post_Common_Core/                   # Gitサブモジュール
│   ├── Realeased/
│   │   └── Internship_I_119/           # Gitサブモジュール
│   └── Unrealeased/
│       ├── Darkly/                     # Gitサブモジュール
│       ├── libasm/                     # Gitサブモジュール
│       └── snow-crash/                 # Gitサブモジュール
├── Tools/
│   ├── Complete_libft ✅/              # Gitサブモジュール
│   └── Makefile_standard               # 通常の追跡ファイル
├── .gitmodules
├── README.md
├── README.fr.md
└── README.ja.md
```

> `Realeased` と `Unrealeased` は、**実際のGitパス**に合わせて意図的にそのまま表記しています。サブモジュールは特定のコミットを参照します。`.gitmodules` で `branch = main` を設定しても、親リポジトリに記録された参照は自動更新されません。

---

<a id="projects"></a>
## 🧪 プロジェクトと開発リソース

<a id="common-core"></a>
### 🧱 Common Core — 基礎と共同開発

公開リポジトリの [`Common_core`](https://github.com/Mechard-Organization/Common_core/tree/main) には、カリキュラムの主要分野を扱う**16個のGitサブモジュール**があります。C++の領域には、さらに**10個のプロジェクト用サブモジュール**がネストされています。

| 分野 | プロジェクトのディレクトリ |
| :--- | :--- |
| **C言語の基礎** | `libft_125`、`ft_printf_110`、`get_next_line_112` |
| **アルゴリズム・プロセス・シェル** | `push_swap_100`、`pipex_115`、`philo_100`、`minishell_101` |
| **グラフィックス** | `So_long_96`、`Cub3D_105` |
| **C++** | [`Cpp`](https://github.com/Mechard-Organization/Cpp/tree/main) → `cpp00_80`〜`cpp09_100` |
| **システム・ネットワーク** | `Born2beroot_125`、`Netpractice_105`、`IRC_125`、`Inception_100` |
| **Web・共同開発** | `42_collaborative_resume_100`、`ft_transcendence_125` |

**2023年のCommon Coreは2026年2月26日に修了しました。** 一部のフォルダ名に含まれるスコアは元の命名規則として残しています。コードやプロジェクト固有の情報は、それぞれのリポジトリを参照してください。

<a id="post-common-core"></a>
### 🔭 Post–Common Core — 発展的な取り組み

非公開リポジトリの [`Post_common_core`](https://github.com/Mechard-Organization/Post_common_core/tree/main) には、元の構成から引き継いだ2つのディレクトリの下に、4つのプロジェクト用サブモジュールが配置されています。

| ディレクトリ | サブモジュール | リンク |
| :--- | :--- | :--- |
| **`Realeased/`** | `Internship_I_119` | [インターンシップの記録](https://github.com/Mechard-Organization/Post_common_core/tree/main/Realeased) |
| **`Unrealeased/`** | `Darkly`、`libasm`、`snow-crash` | [発展的なプロジェクト](https://github.com/Mechard-Organization/Post_common_core/tree/main/Unrealeased) |

`Realeased` と `Unrealeased` は**リポジトリ内のディレクトリ名**です。実際の公開状況、評価結果、完成状況を保証するものではありません。

<a id="tools"></a>
### 🛠️ Tools — 再利用可能な開発リソース

| リソース | 用途 | Gitでの管理 |
| :--- | :--- | :--- |
| [`Complete_libft ✅`](https://github.com/Mechard-Organization/Complete_Libft-/tree/main) | 共通のC言語ユーティリティライブラリ | `Tools/` に置かれた**非公開Gitサブモジュール** |
| [`Makefile_standard`](https://github.com/Mechard-Organization/Cursus_2023/blob/main_sub/Tools/Makefile_standard) | 標準Makefileの参考ファイル | `Cursus_2023` で直接追跡するファイル |

`Tools/Complete_libft ✅` は、単にコピーされた普通のディレクトリではなく、**正式なGitサブモジュール**です。そのコード、Git履歴、アクセス権は独立した `Complete_Libft-` リポジトリで管理しています。

---

<a id="git-workflow"></a>
## 🔀 Gitワークフロー

<p align="center">
  <img src="https://raw.githubusercontent.com/Mechard-Organization/42_Paris/main_42_Paris/.assets/images/42_paris_banner_git_workflow.png" alt="42 Paris — Gitワークフロー" width="100%">
</p>

### このリポジトリだけをクローンする

```bash
git clone --recurse-submodules git@github.com:Mechard-Organization/Cursus_2023.git
cd Cursus_2023
```

すべてのサブモジュールを取得するには、**非公開の子リポジトリへのSSHアクセス権**が必要です。権限がない場合は、まず公開リポジトリのみをクローンし、一部のサブモジュールの初期化を省くことができます。

### サブモジュールを初期化・同期する

`Cursus_2023` のルートで実行します。

```bash
git submodule sync --recursive
git submodule update --init --recursive
git submodule status --recursive
```

### 直接サブモジュールの参照を意図的に更新する

変更内容を確認したうえで、次の例では `Common_Core` の参照を設定済みブランチの最新コミットへ進めます。

```bash
git submodule update --remote -- Common_Core
git diff --submodule
git add Common_Core
git commit -m "chore: update Common_Core submodule"
git push origin main_sub
```

`Common_Core` や `Post_Common_Core` の**内部にある**プロジェクトが変更された場合は、まずその**直近の親リポジトリ**でサブモジュール参照の更新をコミットし、上位の親リポジトリへ順に反映します。

### `42_Paris` 側のCursus参照を更新する

`Cursus_2023` の変更をpushした後は、**すでにクローン済みの** `42_Paris` のルートで新しい参照を記録します。

```bash
# 42_Parisのルートで実行
git add 42_Paris_2023/Cursus_2023
git commit -m "chore: update Cursus_2023 submodule"
git push origin main_42_Paris
```

上のコマンドは**標準的なGitの操作**です。個人用Zshラッパーでは、これらの手順の一部を自動化できます。なお、`git submodule update --init --recursive` が取得するのは**親に記録されたコミット**であり、ブランチの最新コミットとは限りません。

---

<a id="documentation"></a>
## 🗂️ ドキュメントとナビゲーション

<p align="center">
  <img src="https://raw.githubusercontent.com/Mechard-Organization/42_Paris/main_42_Paris/.assets/images/42_paris_banner_repository_guide.png" alt="42 Parisのリポジトリガイド" width="100%">
</p>

デザイン用素材と共通ガイドは**公開されている親リポジトリ**に保管しています。`Cursus_2023` をGitHub上で独立して開いても表示できるよう、ここでは絶対URLを使っています。

| リソース | リンク |
| :--- | :--- |
| 42 Parisの親リポジトリ | [42_Paris](https://github.com/Mechard-Organization/42_Paris) |
| 2023年の活動概要 | [42_Paris_2023](https://github.com/Mechard-Organization/42_Paris/tree/main_42_Paris/42_Paris_2023) |
| Common Coreリポジトリ | [Common_core](https://github.com/Mechard-Organization/Common_core/tree/main) |
| Post–Common Coreリポジトリ | [Post_common_core（非公開）](https://github.com/Mechard-Organization/Post_common_core/tree/main) |
| Gitワークフローガイド | [GIT_WORKFLOW.md](https://github.com/Mechard-Organization/42_Paris/blob/main_42_Paris/.assets/docs/GIT_WORKFLOW.md) |
| リポジトリガイド | [REPOSITORY_GUIDE.md](https://github.com/Mechard-Organization/42_Paris/blob/main_42_Paris/.assets/docs/REPOSITORY_GUIDE.md) |
| 共通画像・ビジュアル素材 | [`.assets/images/`](https://github.com/Mechard-Organization/42_Paris/tree/main_42_Paris/.assets/images) |

---

## 💡 このリポジトリの目的

`Cursus_2023` は、**技術アーカイブ**であり、**カリキュラムのプロジェクトを探すためのハブ**であり、**独立したリポジトリを保守しやすい形でまとめた場所**でもあります。個々のソースコード、進捗、技術文書については、それぞれの子リポジトリが基準となります。

<p align="center"><a href="#top">⬆️ トップへ戻る</a></p>
