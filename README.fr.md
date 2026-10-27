<p align="center">
  <a href="./README.md">🇬🇧 English</a> &nbsp;·&nbsp;
  <strong>🇫🇷 Français</strong> &nbsp;·&nbsp;
  <a href="./README.ja.md">🇯🇵 日本語</a>
</p>

<a id="top"></a>

<p align="center">
  <img src="https://raw.githubusercontent.com/Mechard-Organization/42_Paris/main_42_Paris/.assets/images/42_paris_banner_2023.png" alt="42 Paris 2023 — cursus, projets et outils de développement" width="100%">
</p>

<h1 align="center">42 Paris · Common Core, projets avancés & outils</h1>

<p align="center">
  <strong>Mon cursus 2023 à 42 Paris, organisé en un réseau de dépôts Git.</strong><br>
  Des fondations du <strong>Common Core</strong> aux projets <strong>post–Common Core</strong>, en passant par les outils de développement réutilisables : une archive technique pensée pour la navigation et la maintenance.
</p>

<p align="center">
  <a href="#overview">Vue d’ensemble</a> ·
  <a href="#structure">Structure</a> ·
  <a href="#projects">Projets</a> ·
  <a href="#git-workflow">Workflow Git</a> ·
  <a href="#documentation">Documentation</a>
</p>

---

<a id="overview"></a>
## ✨ Vue d’ensemble

`Cursus_2023` est le **dépôt du cursus** de mon [parcours 2023 à 42 Paris](https://github.com/Mechard-Organization/42_Paris/tree/main_42_Paris/42_Paris_2023). Son dépôt GitHub est **[`Mechard-Organization/Cursus_2023`](https://github.com/Mechard-Organization/Cursus_2023)**. Il est intégré au dépôt parent `42_Paris` dans `42_Paris_2023/Cursus_2023` en tant que **sous-module Git**.

<table>
<tr>
<td align="center" width="33%">
  <a href="#common-core"><strong>🧱 Common Core</strong></a><br><br>
  <sub>16 sous-modules de projets en C, C++, systèmes, algorithmes et développement collaboratif.</sub>
</td>
<td align="center" width="33%">
  <a href="#post-common-core"><strong>🔭 Post–Common Core</strong></a><br><br>
  <sub>Projets avancés et archives liées au stage, gérés dans un dépôt indépendant.</sub>
</td>
<td align="center" width="33%">
  <a href="#tools"><strong>🛠️ Tools</strong></a><br><br>
  <sub>Une bibliothèque C réutilisable en sous-module et un modèle de Makefile.</sub>
</td>
</tr>
</table>

- 🎓 **École :** 42 Paris
- 🏁 **Étape importante :** Common Core 2023 terminé le **26 février 2026**
- 🧩 **Architecture :** trois sous-modules Git directs et d'autres sous-modules imbriqués dans `Common_Core` et `Post_Common_Core`
- 🌿 **Branche principale :** `main_sub` (`main` dans les dépôts enfants directement liés)
- 🌍 **Documentation :** français, anglais et japonais
- 🔐 **Accès :** ce dépôt est public, mais `Post_Common_Core` et `Complete_libft ✅` sont privés ; leur clonage nécessite une autorisation

> La présence d'un dossier ou d'un score dans son nom ne permet **pas**, à elle seule, d'affirmer qu'un projet est terminé, validé ou accessible publiquement.

---

<a id="structure"></a>
## 🧭 Structure du dépôt

Cette arborescence reprend les **noms réels des dossiers et les chemins des sous-modules**. Elle n'énumère pas tous les fichiers sources :

```text
Cursus_2023/                            # Dépôt indépendant — main_sub
├── Common_Core/                        # Sous-module Git — 16 projets
│   ├── libft_125/
│   ├── ft_printf_110/
│   ├── get_next_line_112/
│   ├── push_swap_100/
│   ├── pipex_115/
│   ├── philo_100/
│   ├── minishell_101/
│   ├── So_long_96/
│   ├── Cub3D_105/
│   ├── Cpp/                            # Sous-module Git — cpp00 à cpp09
│   ├── Born2beroot_125/
│   ├── Netpractice_105/
│   ├── IRC_125/
│   ├── Inception_100/
│   ├── 42_collaborative_resume_100/
│   └── ft_transcendence_125/
├── Post_Common_Core/                   # Sous-module Git
│   ├── Realeased/
│   │   └── Internship_I_119/           # Sous-module Git
│   └── Unrealeased/
│       ├── Darkly/                     # Sous-module Git
│       ├── libasm/                     # Sous-module Git
│       └── snow-crash/                 # Sous-module Git
├── Tools/
│   ├── Complete_libft ✅/              # Sous-module Git
│   └── Makefile_standard               # Fichier suivi directement
├── .gitmodules
├── README.md
├── README.fr.md
└── README.ja.md
```

> Les noms `Realeased` et `Unrealeased` sont volontairement conservés : ils correspondent aux **chemins Git réels**. Un sous-module pointe vers un commit précis ; déclarer `branch = main` dans `.gitmodules` ne met pas automatiquement cette référence à jour.

---

<a id="projects"></a>
## 🧪 Projets & ressources de développement

<a id="common-core"></a>
### 🧱 Common Core — Fondations & développement collaboratif

Le dépôt public [`Common_core`](https://github.com/Mechard-Organization/Common_core/tree/main) regroupe **16 sous-modules Git** couvrant les principaux domaines du cursus. La section C++ comporte un niveau supplémentaire de **10 sous-modules de projets**.

| Domaine | Dossiers des projets |
| :--- | :--- |
| **Fondations C** | `libft_125`, `ft_printf_110`, `get_next_line_112` |
| **Algorithmes, processus & shells** | `push_swap_100`, `pipex_115`, `philo_100`, `minishell_101` |
| **Graphisme** | `So_long_96`, `Cub3D_105` |
| **C++** | [`Cpp`](https://github.com/Mechard-Organization/Cpp/tree/main) → `cpp00_80` à `cpp09_100` |
| **Systèmes & réseau** | `Born2beroot_125`, `Netpractice_105`, `IRC_125`, `Inception_100` |
| **Web & collaboration** | `42_collaborative_resume_100`, `ft_transcendence_125` |

Le **Common Core 2023 a été terminé le 26 février 2026**. Les scores présents dans certains noms de dossiers appartiennent à la nomenclature d'origine ; le code et les notes spécifiques sont conservés dans leurs dépôts respectifs.

<a id="post-common-core"></a>
### 🔭 Post–Common Core — Travaux avancés

Le dépôt privé [`Post_common_core`](https://github.com/Mechard-Organization/Post_common_core/tree/main) contient quatre sous-modules de projets organisés dans deux dossiers dont les noms historiques ont été conservés.

| Dossier | Sous-modules | Accès |
| :--- | :--- | :--- |
| **`Realeased/`** | `Internship_I_119` | [Archives du stage](https://github.com/Mechard-Organization/Post_common_core/tree/main/Realeased) |
| **`Unrealeased/`** | `Darkly`, `libasm`, `snow-crash` | [Projets avancés](https://github.com/Mechard-Organization/Post_common_core/tree/main/Unrealeased) |

Les noms `Realeased` et `Unrealeased` sont des **chemins du dépôt** : ils ne constituent pas une garantie de publication, de validation ou d'achèvement des projets.

<a id="tools"></a>
### 🛠️ Tools — Ressources de développement réutilisables

| Ressource | Utilité | Statut Git |
| :--- | :--- | :--- |
| [`Complete_libft ✅`](https://github.com/Mechard-Organization/Complete_Libft-/tree/main) | Bibliothèque commune d'utilitaires C | **Sous-module Git privé**, conservé dans `Tools/` |
| [`Makefile_standard`](https://github.com/Mechard-Organization/Cursus_2023/blob/main_sub/Tools/Makefile_standard) | Référence de Makefile standard | Fichier suivi directement par `Cursus_2023` |

`Tools/Complete_libft ✅` est un **véritable sous-module**, pas un dossier copié dans ce dépôt. Son code, son historique Git et ses autorisations d'accès sont gérés par le dépôt indépendant `Complete_Libft-`.

---

<a id="git-workflow"></a>
## 🔀 Workflow Git

<p align="center">
  <img src="https://raw.githubusercontent.com/Mechard-Organization/42_Paris/main_42_Paris/.assets/images/42_paris_banner_git_workflow.png" alt="42 Paris — workflow Git" width="100%">
</p>

### Cloner uniquement ce dépôt

```bash
git clone --recurse-submodules git@github.com:Mechard-Organization/Cursus_2023.git
cd Cursus_2023
```

Un clonage récursif complet nécessite un accès SSH aux **dépôts enfants privés**. Sans ces permissions, le dépôt public peut être cloné sans initialiser tous ses sous-modules.

### Initialiser ou synchroniser les sous-modules

Depuis la racine de `Cursus_2023` :

```bash
git submodule sync --recursive
git submodule update --init --recursive
git submodule status --recursive
```

### Mettre à jour volontairement un sous-module direct

Après examen des changements, cet exemple fait évoluer la référence de `Common_Core` vers le dernier commit de la branche configurée :

```bash
git submodule update --remote -- Common_Core
git diff --submodule
git add Common_Core
git commit -m "chore: update Common_Core submodule"
git push origin main_sub
```

Si un projet **à l'intérieur** de `Common_Core` ou `Post_Common_Core` change, il faut d'abord enregistrer sa nouvelle référence dans son **dépôt parent immédiat**, puis remonter les commits vers les parents successifs.

### Reporter la nouvelle référence dans `42_Paris`

Après avoir poussé les modifications de `Cursus_2023`, retourne à la **racine de ton clone existant** de `42_Paris` pour enregistrer sa nouvelle référence :

```bash
# Depuis la racine de 42_Paris
git add 42_Paris_2023/Cursus_2023
git commit -m "chore: update Cursus_2023 submodule"
git push origin main_42_Paris
```

Les commandes ci-dessus décrivent le **fonctionnement standard de Git** ; mes wrappers Zsh personnels peuvent automatiser certaines étapes. À noter : `git submodule update --init --recursive` récupère les **commits enregistrés**, et non automatiquement la dernière version d'une branche.

---

<a id="documentation"></a>
## 🗂️ Documentation & navigation

<p align="center">
  <img src="https://raw.githubusercontent.com/Mechard-Organization/42_Paris/main_42_Paris/.assets/images/42_paris_banner_repository_guide.png" alt="Documentation du dépôt 42 Paris" width="100%">
</p>

La charte graphique et les guides partagés sont conservés dans le **dépôt parent public**. Les liens sont absolus afin que ce README s'affiche correctement même lorsque `Cursus_2023` est ouvert séparément sur GitHub.

| Ressource | Lien |
| :--- | :--- |
| Dépôt principal 42 Paris | [42_Paris](https://github.com/Mechard-Organization/42_Paris) |
| Présentation du parcours 2023 | [42_Paris_2023](https://github.com/Mechard-Organization/42_Paris/tree/main_42_Paris/42_Paris_2023) |
| Dépôt Common Core | [Common_core](https://github.com/Mechard-Organization/Common_core/tree/main) |
| Dépôt Post–Common Core | [Post_common_core (privé)](https://github.com/Mechard-Organization/Post_common_core/tree/main) |
| Guide du workflow Git | [GIT_WORKFLOW.md](https://github.com/Mechard-Organization/42_Paris/blob/main_42_Paris/.assets/docs/GIT_WORKFLOW.md) |
| Guide du dépôt | [REPOSITORY_GUIDE.md](https://github.com/Mechard-Organization/42_Paris/blob/main_42_Paris/.assets/docs/REPOSITORY_GUIDE.md) |
| Ressources visuelles | [`.assets/images/`](https://github.com/Mechard-Organization/42_Paris/tree/main_42_Paris/.assets/images) |

---

## 💡 Objectif

`Cursus_2023` est une **archive technique**, un **point d'entrée vers les projets du cursus** et un **ensemble de dépôts indépendants faciles à maintenir**. Chaque dépôt enfant reste la source de référence pour son code, sa progression et sa documentation technique.

<p align="center"><a href="#top">⬆️ Retour en haut</a></p>
