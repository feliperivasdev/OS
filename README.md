# OS Labs

 # 1 Arduino LED Controller

Este código de Arduino permite controlar el encendido y apagado de luces RGB en una vivienda a través del monitor serial.

## 🛠️ Funcionalidad

El programa permite realizar las siguientes acciones:

- Encender y apagar el LED rojo 🔴
- Encender y apagar el LED verde 🟢
- Encender y apagar el LED azul 🔵
- Encender todas las luces ⚪
- Apagar todas las luces ⚫
- Hacer parpadear todas las luces ✨

Para controlar las luces, se utiliza el monitor serial del IDE de Arduino. Cada acción se activa presionando un número del `1` al `9` en el monitor serial.

## 📋 Requisitos

- Placa de Arduino
- 3 LEDs de colores (rojo, verde y azul)
- Resistencias para los LEDs (valor recomendado: 220 Ω)
- Cables de conexión

## 🔌 Conexiones

| Componente | Pin de Arduino |
|------------|----------------|
| LED rojo   | 13             |
| LED verde  | 12             |
| LED azul   | 11             |

## 🚀 Uso

1. Carga el código en tu placa de Arduino.
2. Abre el monitor serial en el IDE de Arduino.
3. Ingresa los siguientes números para realizar las acciones:

| Opción | Acción                         |
|--------|--------------------------------|
| 1      | Encender LED rojo 🔴           |
| 2      | Apagar LED rojo 🔴             |
| 3      | Encender LED verde 🟢          |
| 4      | Apagar LED verde 🟢            |
| 5      | Encender LED azul 🔵           |
| 6      | Apagar LED azul 🔵             |
| 7      | Encender todas las luces ⚪     |
| 8      | Apagar todas las luces ⚫       |
| 9      | Hacer parpadear todas las luces ✨ |
| 0      | Detener el parpadeo            |

¡Disfruta de la iluminación controlada por tu Arduino! 💡

