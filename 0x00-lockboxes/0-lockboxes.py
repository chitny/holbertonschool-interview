#!/usr/bin/python3
def canUnlockAll(boxes):
    '''
    Check if we can open the boxes.
    '''
    if (len(boxes) == 0):
        return False
    eachbox = list(range(len(boxes)))
    key = [False]*len(boxes)
    eachkeys = [0]
    key[0] = True

    for i in eachkeys:
        for tk in boxes[i]:
            if tk in eachbox:
                if tk not in eachkeys:
                    eachkeys.append(tk)
                    key[tk] = True

    if False in key:
        return False
    return True