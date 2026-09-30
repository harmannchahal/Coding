# import nltk
# nltk.download('punkt')
# nltk.download('stopwords')
# nltk.download('punkt_tab')

# print("NLTK is ready!")


from nltk.tokenize import word_tokenize
from nltk.probability import FreqDist
text = "Python is fun. Python is easy. I love Python."
words = word_tokenize(text.lower()) # Case-insensitive
print(words)
freq = FreqDist(words)
print(freq)
print("Top 3 Words:", freq.most_common(9))