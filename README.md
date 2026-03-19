# Sistema-de-faturamento
Algoritmo em C para automatizar o registro de vendas, faturamento diário e classificação de produtos.

### 1. Estrutura de Dados
* **Arrays (Vetores):** Centralização dos dados de 8 produtos (IDs, nomes e preços) em vetores para facilitar o acesso via índices.
* **Controle de Fluxo:** Uso de laço `while (1)` para entrada contínua de dados até que o comando de encerramento (`0`) seja acionado.
* **Validação de Dados:** Implementação de filtros para impedir códigos inexistentes ou quantidades negativas, garantindo a integridade do cálculo final.
* **Mapeamento de Índice:** Lógica de `[código - 1]` para converter a entrada do usuário na posição correta do array (0-7).

### Tabela de Referência
| Código | Descrição     | Preço (R$) |
| :---:  | :---          | :---:      |
| 1      | Areia Fina    | 118,70     |
| 2      | Areia Média   | 95,80      |
| 3      | Areia Grossa  | 83,50      |
| 4      | Pedra 1       | 60,00      |
| 5      | Cimento       | 23,00      |
| 6      | Cal           | 15,00      |
| 7      | Tábua Bruta   | 3,80       |
| 8      | Tijolo Baiano | 1,70       |

### Critérios de Classificação
O faturamento individual de cada produto determina sua categoria:
* **Classe C:** Até R$ 5.001,00.
* **Classe B:** Entre R$ 5.001,01 e R$ 10.001,00.
* **Classe A:** Acima de R$ 10.001,00.

### Pra Rodar
```bash
gcc faturamento.c -o faturamento && ./faturamento