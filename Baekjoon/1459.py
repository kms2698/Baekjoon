x, y, w, s = map(int, input().split())
if 2 * w > s: # 대각선이 유리
    if x >= y:
        result = (x-y) * w + y * s
    else:
        result = (y-x) * w + x * s
else:
    result = (x+y) * w
print(result)
# 미해결