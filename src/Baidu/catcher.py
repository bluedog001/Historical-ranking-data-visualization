from index import BaiduIndex

if __name__ == "__main__":
    """
    最多一次请求5个关键词
    """

    fr = open('data00.txt','w') #目标输出文件

    #很容易理解 想要的关键词 起始时间 终止时间
    baidu_index = BaiduIndex(['ig'], '2018-10-01', '2018-12-29')

    # 获取全部5个关键词的全部数据
    #print(baidu_index.result,file = fr,end = " ")

    # 获取1个关键词的全部数据
    print(baidu_index.result['ig']['all'],file = fr)
    #'all' 全部 'wise' 移动端 'pc' pc端
