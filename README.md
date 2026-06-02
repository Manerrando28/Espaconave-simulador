# Espaconave Simulador 🚀
https://wokwi.com/projects/465685214019802113
Simulador de sensores (temperatura, umidade e luminosidade) usando Python, integrado ao Node-RED e Wokwi.
<img width="1817" height="869" alt="image" src="https://github.com/user-attachments/assets/01087bbd-ff82-4c21-ade3-3376fbc57585" />
<img width="1818" height="800" alt="image" src="https://github.com/user-attachments/assets/d2339eca-41d5-4568-8426-efc048e917b3" />
## Simulador em Python
O arquivo `simulador.py` gera valores aleatórios de temperatura, umidade e luminosidade, simulando sensores reais.
- Temperatura: entre 20 e 30 ºC
- Umidade: entre 40 e 60 %
- Luminosidade: entre 200 e 800
- ## Wokwi
O Wokwi foi usado para simular o hardware (Arduino + sensores).  
Ele permite testar o código sem precisar de componentes físicos.
## Node-RED
O Node-RED recebe os dados do simulador e exibe em gauges e charts.  
Também pode salvar os dados em CSV para análise posterior.
<img width="1347" height="899" alt="image" src="https://github.com/user-attachments/assets/409ba7ba-da26-4230-b578-705345cec296" />
<img width="1824" height="914" alt="image" src="https://github.com/user-attachments/assets/1e6540cb-314d-4483-93f7-882e07393895" />
## Como rodar
1. Clone este repositório:
   ```bash
   git clone https://github.com/seuusuario/espaconave-simulador.git
   pip install -r requirements.txt
python3 simulador.py
## Conexão com a Espaconave 🚀

Este projeto é parte do sistema de monitoramento da espaconave.  
- O **simulador em Python** gera dados de sensores (temperatura, umidade e luminosidade) para testes sem hardware físico.  
- O **Wokwi** simula o ambiente de hardware (Arduino + sensores), permitindo validar o código embarcado.  
- O **Node-RED** recebe os dados e exibe em tempo real, além de permitir salvar logs para análise.  

Na espaconave real, os sensores físicos substituirão o simulador, enviando dados diretamente para o Node-RED, que será responsável por monitorar e registrar as condições internas e externas da missão.
## Agradecimentos 🙏

Agradeço a todos que contribuíram para este projeto, seja com ideias, testes ou apoio.  
Um agradecimento especial à comunidade de desenvolvedores que compartilha conhecimento sobre **Python**, **Wokwi** e **Node-RED**, tornando possível a integração deste simulador com a espaconave.  


