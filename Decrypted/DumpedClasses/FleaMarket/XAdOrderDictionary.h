//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface XAdOrderDictionary : NSObject
{
    NSMutableArray *mOrderKeys;
    NSMutableDictionary *mDic;
}

- (void).cxx_destruct;
- (id)getDic;
- (id)description;
- (void)addKeyAtLast:(id)arg1 val:(id)arg2;
- (int)keysNum;
- (id)keyAtIndex:(int)arg1;
- (_Bool)isLastKey:(int)arg1;
- (int)maxIndex;
- (id)objectForKey:(id)arg1;
- (void)setVal:(id)arg1 forKey:(id)arg2;
- (id)initWithOrderKeys:(id)arg1 dic:(id)arg2;

@end

