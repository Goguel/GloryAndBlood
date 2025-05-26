# Glory and Blood

Um simulador de combate entre guerreiros com lógica de decisão baseada em sorteio ponderado.

## Autores
  - Miguel Xavier
  - Luan Sampaio
    
## Dinâmica de combate:
- Em cada round:
  - Cada guerreiro **sorteia** sua ação: `Attack`, `Defense`, ou `Healing`
  - A **ordem de execução das ações é aleatória**
  - O combate continua até restar apenas **um vencedor**.

##  Compilação

Feita com o cmake.

### Usando CMake

```bash
mkdir build
cd build
cmake ..
make
./gloryAndBlood
```

## Saída esperada

```txt
Teseu entered Mount Olympus!
Perseu entered Mount Olympus!

--- Warriors in the Mount Olympus ---
---------------------------------------
Name: Teseu
Health: 80
Attack: 0.8
Defense: 0.4
Healing: 0.5
Max health: 100
-----------------------------
Name: Perseu
Health: 100
Attack: 0.3
Defense: 0.2
Healing: 0.1
Max health: 120
-----------------------------

-------- Round 1 --------
Acoes na ordem de execucao:
 - Perseu: Defense
 - Teseu: Attack
Teseu attacks Perseu for 64 damage.
Perseu is defending!
Damage reduced to 44.8 by defense.
Perseu now has 56 HP.

Status dos guerreiros:
 - Teseu: 80 HP
 - Perseu: 56 HP

-------- Round 2 --------
(...)
```
