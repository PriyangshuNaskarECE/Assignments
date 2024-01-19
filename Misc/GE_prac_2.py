import matplotlib.pyplot as plt

years = [1940,1950,1960,1970,1980,1990,2000,2010]
unemployment_rate = [8, 7.2, 6.9, 7, 6.5, 6.2, 5.5, 6.3]

plt.plot(years, unemployment_rate, marker='o', linestyle='-')

plt.title('Year vs Unemployment Rate')
plt.xlabel('Year')
plt.ylabel('Unemployment Rate')

plt.show()
