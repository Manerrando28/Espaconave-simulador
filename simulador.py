import random
import time

while True:
    # Gera valores simulados
    temperatura = round(random.uniform(20, 30), 2)   # entre 20 e 30 °C
    umidade = round(random.uniform(40, 60), 2)       # entre 40 e 60 %
    luminosidade = random.randint(200, 800)          # valor do LDR

    # Formata igual ao Arduino
    linha = f"T={temperatura} U={umidade} L={luminosidade}"
    print(linha)

    time.sleep(1)  # espera 1 segundo antes de gerar o próximo
