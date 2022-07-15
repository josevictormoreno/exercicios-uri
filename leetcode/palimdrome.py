class Solution:
    def __init__(self):
        self.numero = 121

    def isPalindrome(self):
        aux = self.inverter(str(self.numero))
        if aux == str(self.numero):
            print(True)
        
        else:
            print(False)

    def inverter(self, txt):
        return txt[::-1]
        
s = Solution()
s.isPalindrome()