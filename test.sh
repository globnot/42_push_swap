#!/bin/bash

G='\033[1;32m'
R='\033[0;31m'
Y='\033[1;33m'
B='\033[1;36m'
NC='\033[0m'

echo -e "${G}=======================================${NC}"
echo -e "${G}     PUSH_SWAP - TESTS${NC}"
echo -e "${G}=======================================${NC}"

# Test 1 : Petites tailles
echo -e "\n${B}TESTS SIMPLES${NC}"

echo -e "\n${Y}[1] Test 2 nombres${NC}"
./push_swap 2 1 | ./checker_linux 2 1

echo -e "\n${Y}[2] Test 3 nombres${NC}"
./push_swap 3 2 1 | ./checker_linux 3 2 1

echo -e "\n${Y}[3] Test 5 nombres${NC}"
./push_swap 5 4 3 2 1 | ./checker_linux 5 4 3 2 1

# Test 2 : Gestion erreurs
echo -e "\n${B}TESTS ERREURS${NC}"

echo -e "\n${Y}[4] Test doublons ${R}(doit afficher Error)${NC}"
./push_swap 42 42

echo -e "\n${Y}[5] Test non-numérique ${R}(doit afficher Error)${NC}"
./push_swap abc

echo -e "\n${Y}[6] Test overflow ${R}(doit afficher Error)${NC}"
./push_swap 2147483648

# Test 3 : 100 nombres
echo -e "\n${B}TESTS 100 NOMBRES${NC}"

echo -e "\n${Y}[7] Test 100 nombres${NC}"
ARG=$(shuf -i 1-5000 -n 100 | tr '\n' ' ')
OPS=$(./push_swap $ARG | wc -l)
RESULT=$(./push_swap $ARG | ./checker_linux $ARG)
echo "$OPS opérations - $RESULT"

echo -e "\n${Y}[8] Test 100 nombres (essai 2)${NC}"
ARG=$(shuf -i 1-5000 -n 100 | tr '\n' ' ')
OPS=$(./push_swap $ARG | wc -l)
RESULT=$(./push_swap $ARG | ./checker_linux $ARG)
echo "$OPS opérations - $RESULT"

echo -e "\n${Y}[9] Test 100 nombres (essai 3)${NC}"
ARG=$(shuf -i 1-5000 -n 100 | tr '\n' ' ')
OPS=$(./push_swap $ARG | wc -l)
RESULT=$(./push_swap $ARG | ./checker_linux $ARG)
echo "$OPS opérations - $RESULT"

# Test 4 : 500 nombres
echo -e "\n${B}TESTS 500 NOMBRES${NC}"

echo -e "\n${Y}[10] Test 500 nombres${NC}"
ARG=$(shuf -i 1-10000 -n 500 | tr '\n' ' ')
OPS=$(./push_swap $ARG | wc -l)
RESULT=$(./push_swap $ARG | ./checker_linux $ARG)
echo "$OPS opérations - $RESULT"

echo -e "\n${Y}[11] Test 500 nombres (essai 2)${NC}"
ARG=$(shuf -i 1-10000 -n 500 | tr '\n' ' ')
OPS=$(./push_swap $ARG | wc -l)
RESULT=$(./push_swap $ARG | ./checker_linux $ARG)
echo "$OPS opérations - $RESULT"

echo -e "\n${Y}[12] Test 500 nombres (essai 3)${NC}"
ARG=$(shuf -i 1-10000 -n 500 | tr '\n' ' ')
OPS=$(./push_swap $ARG | wc -l)
RESULT=$(./push_swap $ARG | ./checker_linux $ARG)
echo "$OPS opérations - $RESULT"

echo -e "\n${G}=======================================${NC}"
echo -e "${G}     TESTS TERMINÉS${NC}"
echo -e "${G}=======================================${NC}"
