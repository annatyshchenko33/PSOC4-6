import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import norm

# Параметри розподілу
mu = 0        # математичне очікування
sigma = 1     # стандартне відхилення

# Вісь X
x = np.linspace(mu - 4*sigma, mu + 4*sigma, 1000)
y = norm.pdf(x, mu, sigma)

# Побудова графіка
fig, ax = plt.subplots(figsize=(8, 5))

# Гаусовий розподіл (потовщена лінія)
ax.plot(x, y, color='blue', linewidth=2.5, label='Gaussian PDF')

# Заштрихована область між -σ і +σ
x_fill = np.linspace(mu - sigma, mu + sigma, 500)
y_fill = norm.pdf(x_fill, mu, sigma)
ax.fill_between(x_fill, y_fill, color='lightblue', alpha=0.6, label='±1σ')

# Оформлення осей
ax.axhline(0, color='black', linewidth=1.5)
ax.axvline(0, color='black', linewidth=1.5)

# Підписи та сітка
ax.set_title('Гаусів розподіл: $\mu=0$, $\sigma=1$', fontsize=14)
ax.set_xlabel('x', fontsize=12, fontweight='bold')
ax.set_ylabel('Ймовірність', fontsize=12, fontweight='bold')
ax.grid(True, linestyle='--', alpha=0.6)
ax.legend()

plt.show()
