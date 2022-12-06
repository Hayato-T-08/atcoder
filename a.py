def test1(score, a=5):

    output1 = sum(score) / len(score)

    x = int(len(score) * (a/100))

    tmp = sorted(score)[x:-x]

    output2 = sum(tmp) / len(tmp)

    return output1, output2



score_Xuniv = [52, 47, 85, 46, 65, 90, 60, 77, 58, 60] # X大学の中間試験の得点​

score_Xuniv_processed = test1(score_Xuniv,a=10)

def test2(city_data):

      city_list = [('Tokyo', 1072),('Aichi', 986), ('Osaka', 1023)] # 数値は最低賃金​

      city_list.append(city_data)

      city_list_sorted = sorted(city_list, key=lambda x:x[1], reverse=True)

      return city_list_sorted[0], city_list_sorted[-1]

cities = test2(('Gunma', 895))

print(cities[0][0], cities[1][0], cities[0][1] - cities[1][1])
print(cities[0][1],cities[1][1])

3
tokyo -gunnma


