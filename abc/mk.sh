#!/bin/bash

# 引数のチェック
if [ $# -ne 1 ]; then
    echo "引数に数字を指定してください。"
    exit 1
fi

# 数字を取得
number=$1

# ディレクトリを作成
dir_name="abc${number}"
mkdir "$dir_name"

# ファイルを作成
touch "${dir_name}/a.cpp"
touch "${dir_name}/b.cpp"
touch "${dir_name}/c.cpp"
touch "${dir_name}/d.cpp"
touch "${dir_name}/e.cpp"
touch "${dir_name}/f.cpp"

echo "ディレクトリ ${dir_name} とファイル a.cpp, b.cpp, c.cpp, d.cpp, e.cpp, f.cpp を作成しました。"
