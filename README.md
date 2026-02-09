# push_swap

*This project has been created as part of the 42 curriculum by aborda.*

---

## Description

**Push_swap** est un projet d'algorithmique visant à trier des nombres en utilisant deux piles (stacks) et un ensemble limité d'opérations. Le défi consiste à créer l'algorithme de tri le plus efficace possible en minimisant le nombre d'opérations nécessaires.

### Objectifs

- Implémenter un algorithme de tri (pour deux stacks)
- Gérer différentes tailles d'ensembles (de 2 à 500 éléments)
- Respecter des contraintes de performance strictes (cf. sujet)

### Opérations disponibles

- `sa` / `sb` / `ss` : swap les deux premiers éléments d'une stack
- `pa` / `pb` : push un élément d'une stack vers l'autre
- `ra` / `rb` / `rr` : rotate - déplace le premier élément à la fin
- `rra` / `rrb` / `rrr` : reverse rotate - déplace le dernier élément au début

### Algorithme utilisé

Le programme utilise différentes stratégies selon la taille de l'ensemble :
- **2-3 éléments** : tri optimisé au cas par cas
- **4-5 éléments** : tri avec utilisation de stack_b
- **Plus de 5 éléments** : algorithme Radix Sort adapté aux stacks

---

## Instructions

### Prérequis

- `gcc`
- `make`

### Cloner le projet

Le projet utilise **libft** en tant que submodule Git. Pour cloner correctement :

```bash
git clone --recursive <url_du_repo>
```

Ou si le repo est déjà cloné sans les submodules :

```bash
git submodule update --init --recursive
```

### Compilation

```bash
make
```

Cette commande génère l'exécutable `push_swap`.

### Utilisation

```bash
./push_swap <liste de nombres>
```

**Exemples :**

```bash
# Tri de 5 nombres
./push_swap 5 4 3 2 1

# Tri avec un seul argument contenant plusieurs nombres
./push_swap "3 2 1"

# Vérification avec checker
./push_swap 5 4 3 2 1 | ./checker_linux 5 4 3 2 1
```

### Commandes Makefile

- `make` ou `make all` : compile le projet
- `make clean` : supprime les fichiers objets
- `make fclean` : supprime les fichiers objets et l'exécutable
- `make re` : recompile entièrement le projet

### Gestion d'erreurs

Le programme affiche `Error` sur stderr dans les cas suivants :
- Arguments non-numériques
- Dépassement des limites d'`int` (INT_MIN à INT_MAX)
- Présence de doublons

### Tests

Un script de test est fourni pour vérifier le bon fonctionnement :

```bash
./test.sh
```

Le script teste :
- Les petites tailles (2, 3, 5 éléments)
- La gestion des erreurs
- Les performances sur 100 et 500 nombres aléatoires

---

## Resources

### Documentation et références

- [Algorithme Radix Sort](https://en.wikipedia.org/wiki/Radix_sort)
- [Youtube "Polylog"- Radix, histoire](https://youtu.be/Y95a-8oNqps?si=aauO1BMH9nNn5gvN)
- [Youtube "Quantale"- Tri par base](https://youtu.be/ekS8KL64ojc?si=D6uJgwJLVrZqHWA5)
- [Youtube "udiprod"- Tri par base](https://www.youtube.com/watch?v=mVRHvZF8xtg)
- [Push_swap - Guide 42](https://42-cursus.gitbook.io/guide/rank-02/push_swap)
- [Style Bash](https://www.n0tes.fr/2016/12/12/Script-bash-colors-styles/)
- Sujet officiel du projet : `en.subject.pdf`
- Norme 42 : `fr.norme.pdf`

### Utilisation de l'IA

Dans le cadre de ce projet, l'intelligence artificielle (Claude) a été utilisée comme **outil d'assistance pédagogique** en complément du **PEERLEARNING** :

- **Compréhension de concepts** : clarification de notions algorithmiques (complexité, tri par base, structures de données)
- **Raisonnement** : aide à la réflexion sur l'approche à adopter et l'optimisation
- **Debugging** : assistance dans l'identification de bugs logiques

**Important** : L'IA n'a **jamais été utilisée pour générer du code**. L'ensemble du code a été écrit manuellement, avec l'IA servant uniquement de guide pédagogique pour comprendre les concepts et améliorer le raisonnement.

---

## Performances

### Benchmarks actuels

- **100 nombres** : ~1016 opérations (validation 80-95%)
- **500 nombres** : ~6716 opérations (validation 80-95%)

### Objectifs de performance 42

**Validation maximale (100%)** :
- 100 nombres : < 700 opérations
- 500 nombres : < 5500 opérations

**Validation minimale (80%)** :
- 100 nombres : < 1100 opérations
- 500 nombres : < 8500 opérations

---

## Auteur

**Antoine Borda (aborda)** - École 42 Paris
