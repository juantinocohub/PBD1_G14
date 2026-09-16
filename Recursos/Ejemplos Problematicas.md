
## 📌 Problemáticas Identificadas

### 🎯 Problemática 1: Inaccesibilidad y limitaciones energéticas en prótesis activas de extremidad superior

* **Contexto y Población Afectada:** Cerca de 12 600 personas con pérdida de extremidades superiores no pueden acceder a prótesis activas debido a sus costos prohibitivos, lo que limita severamente su reinserción funcional y laboral [1].
* **Limitación Técnica Crítica:** Los usuarios de prótesis activas enfrentan una baja usabilidad provocada por la dependencia de baterías comerciales pesadas, costosas y de baja autonomía. Estas requieren recargas frecuentes, agregan peso al muñón y generan incomodidad constante.
* **Propuesta de Solución (TENG & Biodiseño):**
  * **Generación de energía:** Sistema de autoalimentación secundaria para prótesis parciales de mano basado en un **nanogenerador triboeléctrico (TENG)**, que aprovecha los arcos de movimiento articular de los dedos (0° a 90°) mediante el deslizamiento entre capas de Teflón PFA y Nylon [2].
  * **Sensado e IoT:** Integración de un subsistema de sensado cinemático y dinámico para medir el ángulo de flexión y la fuerza aplicada en la articulación, correlacionando en tiempo real el movimiento biomecánico con la energía producida para transmitir telemetría a una plataforma IoT.
  * **Impacto:** Reducción del tamaño y costo de las baterías principales mediante el cumplimiento de parámetros cinemáticos, energéticos, ergonómicos y de biocompatibilidad dérmica.
---
###  Problemática 2: Dolor de dedo y no cicatrización por pinchazo para detectar glucosa de forma invasiva.
* **Descripción:** Las personas diagnosticadas con diabetes requieren un monitoreo constante de sus niveles de glucosa en sangre, el cual se realiza tradicionalmente mediante un método invasivo que implica pincharse los dedos varias veces al día para obtener muestras capilares.
* **Impacto:** Afecta directamente a los usuarios (pacientes diabéticos), generándoles dolor constante, incomodidad, desgaste o daño continuo en los tejidos cutáneos y riesgo de infecciones en las zonas de punción. Esto provoca un alto índice de desmotivación y el eventual abandono o irregularidad en el control diario de su salud.
* **Causa raíz:** La dependencia de métodos invasivos tradicionales que requieren perforación cutánea para la toma de muestras de sangre, en lugar de aprovechar tecnologías ópticas no invasivas para la medición contínua.
[3]
---
###  Problemática 3: Rehabilitación Adaptativa e Instrumentalizada para Pacientes con Temblores Parkinsonianos
* **Descripción:** Los pacientes diagnosticados con la Enfermedad de Parkinson en estadios 2 y 3 (según la escala de Hoehn y Yahr) experimentan temblores involuntarios de tipo cuasi-periódico con una frecuencia dominante de entre 4 y 6 Hz, manifestados principalmente en la articulación de la muñeca y en las extremidades distales de la mano. Los dispositivos de asistencia comerciales actuales suelen optar por la inmovilización rígida de la extremidad o por mecanismos pasivos pesados; sin embargo, bloquear mecánicamente la mano provoca fatiga por co-contracción muscular, dolor articular y la anulación del movimiento voluntario intencional del usuario. El desafío técnico de biodiseño consiste en desarrollar un dispositivo vestible (wearable) que aplique una amortiguación biomecánica activa o filtrado adaptativo capaz de atenuar exclusivamente la banda de frecuencia del temblor (4–6 Hz) sin limitar la movilidad voluntaria de baja frecuencia (0–1.5 Hz) necesaria para ejecutar las Actividades de la Vida Diaria (AVD).
* **Impacto:**
Usuarios (Pacientes): Pérdida progresiva de la autonomía física para llevar a cabo actividades fundamentales de motricidad fina (como comer, beber líquidos, escribir o manipular objetos cotidianos), lo que desencadena un alto impacto psicológico, frustración y aislamiento social.
Sistema de Salud y Cuidadores: Incremento en la carga de asistencia personalizada y dependencia de cuidadores o familiares para tareas básicas diarias.
Rendimiento Biomecánico: La falta de soluciones adaptativas genera fatiga muscular prematura por lucha motora, dolor en los tendones del antebrazo y aceleración del deterioro funcional de la articulación de la muñeca.
* **Causa raíz:** El origen neurobiológico del problema radica en la neurodegeneración progresiva de las neuronas dopaminérgicas en la substantia nigra del cerebro. La ausencia de dopamina interrumpe el bucle de control motor en los ganglios basales, provocando que el sistema nervioso central genere ráfagas de impulsos eléctricos involuntarios y oscilatorios que se propagan a través de la médula espinal hacia los músculos flexores y extensores del antebrazo a una frecuencia constante de 4 a 6 Hz.
[4]
--- 
###  Problemática 4: Pérdida de capacidad motoras por lesiones parciales en la médula espinal
* **Descripción:** Los pacientes con leciones medulares pueden recuperar su capacidad motora, sin embargo, la rehabilitacion es un proceso largo y adicionalmente, los equipos medicos para acelerarla resultan muy costosos.
* **Impacto:** Pacientes que requieran de una rehabilitacion eficaz y no dispongan de mucho persupuesto para equipos caros.
* **Causa raíz:** Multiples tipos de accidentes fisicos. En nuestro proyecto nos enfocaremos en lesiones en la region lumbar de la medula espinal
[5]
[6]


#### 📚 Referencias
1. H. Shahsavari *et al.*, «Upper limb amputation; Care needs for reintegration to life: An integrative review», *Int. J. Orthop. Trauma Nurs.*, vol. 38, p. 100773, ago. 2020, doi: [10.1016/j.ijotn.2020.100773](https://doi.org/10.1016/j.ijotn.2020.100773).
2. K. Dong *et al.*, «A Stretchable Yarn Embedded Triboelectric Nanogenerator as Electronic Skin for Biomechanical Energy Harvesting and Multifunctional Pressure Sensing», *Adv. Mater.*, vol. 30, n.º 43, 2018, doi: [10.1002/adma.201804944](https://doi.org/10.1002/adma.201804944).
3. M. A. Author et al., "Non-Invasive Blood Glucose Estimation Through Vascular Contraction Signal Analysis," IEEE Transactions on Biomedical Engineering, doi: 10.1109/TBME.10962123.(https://ieeexplore.ieee.org/document/10962123).
4. M. A. Author et al., "Real-Time Tremor Monitoring and Estimation Using Multisensor Fusion for Wearable Active Suppression Systems," IEEE Transactions on Neural Systems and Rehabilitation Engineering, doi: 10.1109/TNSRE.11298375.(https://ieeexplore.ieee.org/document/11298375)
5. F. Tamburella et al., "Neuromuscular Controller Embedded in a Powered Ankle Exoskeleton: Effects on Gait, Clinical Features and Subjective Perspective of Incomplete Spinal Cord Injured Subjects," in IEEE Transactions on Neural Systems and Rehabilitation Engineering, vol. 28, no. 5, pp. 1157-1167, May 2020, doi: 10.1109/TNSRE.2020.2984790.
6. K. Momeni, R. Pilkar, M. Ravi, A. Bheemreddy, E. Garbarini and G. F. Forrest, "Spinal Cord Transcutaneous Stimulation Enables Volitional Knee Extension in Motor-complete SCI," 2022 44th Annual International Conference of the IEEE Engineering in Medicine & Biology Society (EMBC), Glasgow, Scotland, United Kingdom, 2022, pp. 2373-2376, doi: 10.1109/EMBC48229.2022.9871966.
