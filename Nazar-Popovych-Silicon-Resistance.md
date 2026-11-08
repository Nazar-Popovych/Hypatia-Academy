## Is an Intel i7 a Giant Silicon Resistor? 

### Given 

| Parameter | Value |
|---|---|
| Length ($L$) | 20 mm |
| Width ($W$) | 10 mm |
| Thickness ($t$) | 0.5 mm |
| Silicon resistivity ($\rho$) | 10 $\Omega \cdot cm$ |
| Applied voltage ($V$) | 1 V |

$$
R = \rho \frac{L}{A}
$$

$$
A = W·t
$$

$$
I = \frac{V}{R}
$$

### Questions 

#### №1 

- Length: 20 mm = **0.02 m**
- Width: 10 mm = **0.01 m** 
- Thickness: 0.5 mm = **0.0005 m = 5 · 10<sup>-4</sup> m**

- 10 Ω · cm = **0.1 Ω · m**

#### №2 

A = 0.01 · 5 · 10<sup>-4</sup> = **5 · 10<sup>-6</sup> m<sup>2</sup>**

$R = 0.1 \cdot \frac{0.02}{5·10^{-6}} =$ **400 Ω**

#### №3 

V = 1 V

$I = \frac{1}{400} = 2.5·10^{-3} A =$ **2.5 mA**

#### №4 

t = 0.25 mm = 2.5 · 10<sup>-4</sup> 

t<sub>new</sub> = 0.5 · t<sub>old</sub>

From 

$$
\boxed{R = \rho \frac{L}{Wt}}
$$ 

we can see that: 

- Resistance and thickness are inversely proportional.
- If thickness decreases, resistance increases.
- R<sub>new</sub> = 2 · R<sub>old</sub> = **800 Ω**.

or 

L<sub>new</sub> = 2 · L<sub>old</sub> 

From the previous formula of resistance we can infer: 

- Resistance and length are proportional.
- R<sub>new</sub> = 2 · R<sub>old</sub> = **800 Ω**.

#### №5 

- $\rho$<sub>new</sub> = 10<sup>-3</sup> · $\rho$<sub>new</sub> = **10<sup>-4</sup> Ω**.
- R<sub>new</sub> = 10<sup>-3</sup> · R<sub>old</sub> = **0.4 Ω**.
- I = \frac{1}{2} = **2.5 A**.

- Doping does not by itself change the silicon's physical dimension, such as length, width or thickness, but it does change its resistivity. In particular, as resistivity decreases and as resistance is proportional to it, resistance also decreases.

#### №6 

The calculations assumed that a processor is a solid block of silicon with uniform resistivity. However, an actual processor has lots of different materials for various sub-components inside it, including billions of very small transistors that all have their resistance, and has also very likely gone through doping, introducing impurities that may not appear uniformly. In addition, metal interconnections inside a processor make the current go through certain paths instead of a full solid block, changing the resistance.

Along with different conditions of use, such as temperature, that can change the physical properties of silicon, assuming that it has uniform resistivity is inaccurate for an actual integrated circuit. 

#### Challenge Question 

65 = \frac{1^{2}}{R} 

R = \frac{1}{65} ≈ **0.015 Ω** 

That is much lower than previously calculated resistance even after doping. 

One of the possible reasons is that the calculations of effective resistance using power and voltage do not take into account the physical properties of a processor, while the formula of the physical resistance of the silicon substrate assumes that current goes through the whole solid bulk, not metal interconnections and non-linear transistors.
