class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        m=[]
        Kelvin=Fahrenheit=0
        Kelvin = celsius + 273.15
        Fahrenheit = celsius * 1.80 + 32.00
        m.append(Kelvin)
        m.append(Fahrenheit)
        return m