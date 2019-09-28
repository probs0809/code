import re
import requests
from bs4 import BeautifulSoup
response = requests.get('https://www.instagram.com/explore/tags/code/')
html = response.content
soup = BeautifulSoup(response.content, 'lxml')
print (soup.find("count"))
print (soup.title.text)
