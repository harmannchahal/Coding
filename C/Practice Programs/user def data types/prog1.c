// ----------- QUESTION -----------                        | ----------- SAMPLE OUTPUT -----------
// Smart Irrigation Decision System                        |
//                                                         | Enter Field ID: 201
// Field contains:                                         | Enter Crop Name: Wheat
// - Field ID                                              | Enter Soil Moisture (%): 25
// - Crop Name                                             | Enter Temperature (°C): 38
// - Soil Moisture (%)                                     | Enter Water Level (liters): 300
// - Temperature (°C)                                      |
// - Water Level (liters)                                  | ----- Field Report -----
//                                                         |
// Tasks:                                                  | Field ID: 201
// 1. Define structure Field                               | Crop Name: Wheat
// 2. Read field details                                   | Soil Moisture: 25%
// 3. If moisture < 30 AND water ≥ 200 → Irrigation        | Temperature: 38 °C
// 4. If temp > 35 → High temperature stress               | Water Level: 300 liters
// 5. If water < 200 → Insufficient water                  |
// 6. If irrigation possible:                              | Status:
//    required_water = (30 - moisture) × 10                | Irrigation Required
// 7. Display details + decision                           | High temperature stress on crop
//                                                         | Required Water: 50 liters