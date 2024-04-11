# Makefile

# ターゲット名
TARGET ?= example

# コンパイラとコンパイルオプション
CXX = g++
CXXFLAGS = -Wall -std=c++17

# ソースファイル
SRCS = $(TARGET).cpp

# オブジェクトファイル
OBJS = $(SRCS:.cpp=.o)

# ビルドルール
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# 実行ルール
run: $(TARGET)
	./$(TARGET)

# クリーンアップ
clean:
	rm -f $(OBJS) $(TARGET)
