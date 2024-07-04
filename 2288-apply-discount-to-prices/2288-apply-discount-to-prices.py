class Solution:
    def discountPrices(self, sentence: str, discount: int) -> str:
        words = sentence.split()
        for i, word in enumerate(words):
            if word[0] == '$' and word[1:].isdigit():
                # o = float(word[1:])
                discounted_price = float(word[1:]) * (1-discount/100)
                words[i] = f"${discounted_price:.2f}"
        
        return " ".join(words)

