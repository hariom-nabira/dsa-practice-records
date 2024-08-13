class Solution:
    def canMeasureWater(self, a: int, b: int, target: int) -> bool:
        seen = set()
        q = deque([(0, 0)])
        seen.add((0, 0))
        
        while q:
            x, y = q.popleft()
            
            if x + y == target:
                return True
            
            next_options = [
                self.fillA(x, y, a, b),
                self.fillB(x, y, a, b),
                self.emptyA(x, y, a, b),
                self.emptyB(x, y, a, b),
                self.aTob(x, y, a, b),
                self.bToa(x, y, a, b)
            ]
            
            for temp in next_options:
                if temp not in seen:
                    q.append(temp)
                    seen.add(temp)
                    
        return False

    def fillA(self, x: int, y: int, a: int, b: int) -> tuple:
        return (a, y)

    def fillB(self, x: int, y: int, a: int, b: int) -> tuple:
        return (x, b)

    def emptyA(self, x: int, y: int, a: int, b: int) -> tuple:
        return (0, y)

    def emptyB(self, x: int, y: int, a: int, b: int) -> tuple:
        return (x, 0)

    def aTob(self, x: int, y: int, a: int, b: int) -> tuple:
        if b - y >= x:
            return (0, x + y)
        else:
            return (x - (b - y), b)

    def bToa(self, x: int, y: int, a: int, b: int) -> tuple:
        if a - x >= y:
            return (x + y, 0)
        else:
            return (a, y - (a - x))
// Title: Water and Jug Problem
