# Ecuacion cinematica de caida libre
# v = u + at
# s = ut + 0.5 * a * t^2


# v = velocidad final
# u = velocidad inicial
# G = aceleración (gravedad = 9.8 m/s^2)
# t = tiempo
# s = desplazamiento

u = 0  # Velocidad inicial en m/s
G = 9.8  # Aceleracion debida a la gravedad en m/s^2
t = 5  # Tiempo en segundos

v = u + G * t
s = u * t + 0.5 *  * t**2

print("La velocidad final (v):",v, "m/s")
print(" El desplazamiento (s):",s,"m")