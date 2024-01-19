import numpy as np
import matplotlib.pyplot as plt

def f(x, y):
    return np.sin(5*x)**2 * np.cos(5*y) / 5

def gradient(x, y):
    return np.cos(5*x) * np.cos(5*y), - np.sin(5*x) * np.sin(5*y)

x = np.arange(-1, 1, 0.05)
y = np.arange(-1, 1, 0.05)

X, Y = np.meshgrid(x, y)
Z = f(X, Y)

alpha = 0.04
current = (0.7, 0.5, f(0.7, 0.4))

ax = plt.subplot(projection='3d', computed_zorder=False)

for _ in range(100):
    X_, Y_ = gradient(current[0], current[1])
    current = (current[0] - alpha * X_, current[1] - alpha * Y_, f(current[0], current[1]))

    ax.plot_surface(X, Y, Z, cmap='viridis') # viridis
    ax.scatter(current[0], current[1], current[2], color='magenta')
    plt.pause(0.001)
    ax.clear()
