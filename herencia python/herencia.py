# -*- coding: utf-8 -*-
"""
Created on Sun Dec 13 00:25:44 2020

@author: ACER
"""

class Alienígena:
    def __init__(self, edad, iq, p):
        # Atributos en común que tendrán todas las clases
        self.mortalidad = edad
        self.intelecto = iq
        self.planeta = p
    
    # Métodos en común que tendrán todas las clases
    def comunicar(self):
        pass
    crear(self, duración):
        pass

class Sayayin(Alienígena):
    def __init__(self, edad, iq, p, k):
        super().__init__(edad, iq, p)
        self.ki = k
        self.nivel_poder = self.intelecto*self.ki/self.mortalidad
    
    # Método único de clase derivada Sayayin
    def super_sayayin(self):
        pass

class homoSapiens(Alienígena):
    def __init__(self, edad, iq, p, e, c):
        super().__init__(edad, iq, p)
        self.ego = e
        self.creatividad = c
    
    # Métodos únicos de clase derivada homoSapiens
    def calcular(self):
        pass
    def guerra(self):
        pass

class Wookie(Alienígena):
    def __init__(self, edad, iq, p, fuerza):
        super().__init__(edad, iq, p)
        self.fuerza_bruta = fuerza
    
    # Método único de clase derivada Wookie
    def atacar(self, alien):
        #alien.mortalidad = alien.mortalidad - self.fuerza_bruta
        
        
        
    
    