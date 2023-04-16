# print('I said "Hello" to you.')
# print("Let's go")

# a=int(input("삼각형의 밑변 길이 : "))
# b=int(input("삼각형의 높이 : "))
# print(a*b/2)

# a=int(input("현재 시 : "))
# b=int(input("현재 분 : "))
# if a!=23 :
#     if b<40 :
#         print("20분 뒤에는 ",a,"시",b+20,"분 입니다.")
#     else :
#         print("20분 뒤에는 ",a+1,"시",b-40,"분 입니다.")
# else :
#     if b<40 :
#         print("20분 뒤에는 ",a,"시",b+20,"분 입니다.")
#     else :
#         print("20분 뒤에는 0시",b-40,"분 입니다.")

# a=int(input("숫자 입력 : "))
# if a<0 :
#     print(a*-1)
# else :
#     print(a)

# a=input("아이디를 입력하세요 : ")
# b=int(input("회원 레벨을 입력하세요 : "))
# if a=="admin" or b==1 :
#     print("관리자입니다.")
# else :
#     print("관리자가 아닙니다.")

# a=int(input("첫번째 수 : "))
# max=a
# b=int(input("첫번째 수 : "))
# if max<b :
#     max=b
# c=int(input("첫번째 수 : "))
# if max<c :
#     max=c
# print("가장 큰 수는", max, "입니다.")

# a=int(input("나이 입력 : "))
# if a<=7 :
#     print("어린이")
# elif a<=13 :
#     print("초등학생")
# elif a<=16 :
#     print("중학생")
# elif a<=19 :
#     print("고등학생")
# else :
#     print("성인")

# a=int(input("점수 입력 : "))
# if a>=90 :
#     print("A 등급입니다.")
# elif a>=80 :
#     print("B 등급입니다.")
# elif a>=70 :
#     print("C 등급입니다.")
# else :
#     print("F 등급입니다.")

# a=int(input("숫자 입력 : "))
# if a%3==0 and a%5==0 :
#     print("3과 5의 공배수")
# if a%3==0 and a%5!=0 :
#     print("3의 배수")
# if a%3!=0 :
#     print("3의 배수 아님")

# a=1
# while a<=20 :
#     if a%2==1 :
#         print(a, end=' ')
#     a+=1

# num=1
# sum=0
# while num<=10 :
#     sum+=num
#     print("num의 값 :", num, "=> 합계 :", sum)
#     num+=1

# a=int(input("숫자 입력 : "))
# num=1
# sum=1
# while num<=a :
#     sum*=num
#     num+=1
# print(a,"! = ",sum, sep='')

# import random
# b=0
# t=0
# a=random.randint(1,100)
# print("정답 : ", a)
# print("1부터 100 사이의 숫자를 맞히기")
# while a!=b :
#     b=int(input("숫자를 맞혀 보세요 : "))
#     if a>b :
#         print("낮음")
#     if a<b :
#         print("높음")
#     t+=1
# print("축하합니다. 시도횟수 = ",t)

# for i in range(10, 51) :
#     if i%3!=0 :
#         print(i,end=' ')

# print("주사위 게임을 시작합니다.\n","주사위를 던졌습니다.")
# while True :
#     a=int(input("나 : "))
#     b=int(input("당신 : "))
#     if a>b :
#         print("나의 승리")
#     if a<b :
#         print("당신의 승리")
#     if a==b :
#         print("무승부!")
#     c=input("계속하려면 y를 입력하세요! ")
#     if c!="y" :
#         break

# a=int(input("숫자 입력: "))
# while a!=0 :
#     print(a%10, end='')
#     a=a//10

# for i in range(1,10) :
#     print("2 *", i, "=", 2*i)

# for i in range(9,0,-1) :
#     print("2 *",i,"=",2*i)

# max=0
# for i in range(1,100) :
#     if i*(100-i)>max :
#         max=i*(100-i)
#         b=i
#         c=100-i
# print("최대가 되는 경우 :", b, "*", c,"=", max)

# a=int(input("정수를 입력하시오 : "))
# for i in range(1, a+1) :
#     if a%i==0 :
#         print(i, end=' ')

# a=int(input("입력할 숫자 개수: "))
# max=0
# for i in range(1, a+1) :
#     b=int(input("숫자 입력 :"))
#     if max<b :
#         c=i
#         max=b
# print("가장 큰 수는",c,"번째 수입니다.")

# t=0
# for i in range(1, 101) :
#     if i%4==0 :
#         print(i, end=' ')
#         t+=1
#     if t==7 :
#         print("")
#         t=0

# t=0
# a=int(input("숫자 입력: "))
# for i in range(1, a+1) :
#     if i%10==1 :
#         t+=1
# print("일의 자리가 1인 수는", t,"개")

# print("3 + 4 = ?")
# while True :
#     a=int(input("정답을 입력하시오: "))
#     if(a==7) :
#         print("참 잘했어요!")
#         break