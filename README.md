# Arduino LED Controller

Este código de Arduino permite controlar el encendido y apagado de luces RGB a través del monitor serial.

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
- Placa de pruebas (breadboard) para una conexión más sencilla

## 🔌 Conexiones

| Componente | Pin de Arduino |
|------------|----------------|
| LED rojo   | 11             |
| LED verde  | 12             |
| LED azul   | 13             |



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

## 🖥️ Emulación en Tinkercad

Puedes emular este proyecto en Tinkercad para probar el código sin necesidad de hardware físico. Sigue estos pasos:

1. **Accede a Tinkercad:**
   - Ve a [Tinkercad](https://www.tinkercad.com) y crea una cuenta o inicia sesión.

2. **Crea un nuevo proyecto:**
   - Haz clic en "Circuits" (Circuitos) y luego en "Create new Circuit" (Crear nuevo circuito).

3. **Añade los componentes:**
   - Arrastra y coloca una placa de Arduino Uno en el área de trabajo.
   - Añade 3 LEDs (rojo, verde y azul) y conéctalos a los pines correspondientes (11, 12 y 13).
   - Añade resistencias de 220 Ω a cada LED.
   - Conecta los LEDs y resistencias de acuerdo a las conexiones descritas en la sección **🔌 Conexiones**.
   - Guiate de esta imagen para las conexiones
   - 
    ![Conexiones](https://github.com/user-attachments/assets/d575a196-3892-4015-98ac-ee232785bbfe)

4. **Carga el código:**
   - Haz clic en "Code" (Código) y selecciona "Blocks + Text" (Bloques + Texto) o "Text" (Texto).
   - Copia y pega el código proporcionado en el editor de código.

5. **Simula el circuito:**
   - Haz clic en "Start Simulation" (Iniciar simulación) para probar el funcionamiento del código y ver cómo se controlan los LEDs.

## 📦 Materiales Requeridos

- Arduino Uno
- 3 LEDs (rojo, verde, azul)
- 3 resistencias de 220 Ω
- Cables de conexión
- Placa de pruebas (breadboard) para una conexión más sencilla

Con estos pasos podrás emular y probar el controlador de LEDs RGB en Tinkercad antes de realizar el montaje físico. ¡Diviértete experimentando con tu proyecto de Arduino! 🚀
