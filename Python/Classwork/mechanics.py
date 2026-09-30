# #2/4
# import math
# A = (-3, 7)
# B = (10, -8)
# F = 6  

# dx = B[0] - A[0]
# dy = B[1] - A[1]
# mag = math.sqrt(dx**2 + dy**2)

# ux = dx / mag
# uy = dy / mag
# Fx = F * ux
# Fy = F * uy

# print("Unit vector =", round(ux, 3), "i +", round(uy, 3), "j")
# print("Fx =", round(Fx, 3), "kN")
# print("Fy =", round(Fy, 3), "kN")
# print(f"Vector F = {round(Fx,3)} i + {round(Fy,3)} j  kN")




# #2/5
# import math
# F = 100       
# alpha = math.radians(30)  # α in degrees
# beta = math.radians(20)   # β in degrees

# # x-y components
# Fx = -F * math.sin(beta)
# Fy = -F * math.cos(beta)

# # n-t components
# Fn = Fx * math.cos(alpha) + Fy * math.sin(alpha)
# Ft = -Fx * math.sin(alpha) + Fy * math.cos(alpha)

# # Output
# print("x-y Components:")
# print("Fx =", round(Fx, 3), "N")
# print("Fy =", round(Fy, 3), "N")

# print("\nn-t Components:")
# print("Fn =", round(Fn, 3), "N")
# print("Ft =", round(Ft, 3), "N")




# #2/9
# Fy = 320  # y-component in Newtons

# # Direction ratios 
# vertical = 12
# horizontal = 5
# hypotenuse = 13

# # Magnitude of force
# F = Fy * hypotenuse / vertical

# #x-component of force
# Fx = F * horizontal / hypotenuse

# print("Magnitude of Force (F):", F, "N")
# print("x-component of Force (Fx):", Fx, "N")



#2/11
# import math

# F1 = 3  # kN
# F1x = F1 * (3 / 5)
# F1y = -F1 * (4 / 5)

# F2 = 2  # kN
# angle = math.radians(30)
# F2x = F2 * math.cos(angle)
# F2y = F2 * math.sin(angle)

# Rx = F1x + F2x
# Ry = F1y + F2y

# # Magnitude of resultant
# R = math.sqrt(Rx**2 + Ry**2)

# # Direction (angle with +x-axis)
# theta = math.degrees(math.atan2(Ry, Rx))

# print("Resultant Force Components:")
# print("Rx =", round(Rx, 3), "kN")
# print("Ry =", round(Ry, 3), "kN")

# print("\nMagnitude of Resultant R =", round(R, 3), "kN")
# print("Angle θ with +x-axis =", round(theta, 3), "degrees")



#2/14
import math
F1 = 125  # N
F2 = 175  # N
theta1 = math.radians(15)
theta2 = math.radians(40)

F1x = F1 * math.sin(theta1)
F1y = F1 * math.cos(theta1)

F2x = -F2 * math.cos(theta2)
F2y = F2 * math.sin(theta2)

Rx = F1x + F2x
Ry = F1y + F2y

R = math.sqrt(Rx**2 + Ry**2)

theta_y = math.degrees(math.atan2(Rx, Ry))

print("Vector expression of Resultant R:")
print(f"R = ({Rx:.2f} i + {Ry:.2f} j) N")

print("\nMagnitude of R =", round(R, 2), "N")
print("Angle with +y-axis =", round(theta_y, 2), "degrees")
