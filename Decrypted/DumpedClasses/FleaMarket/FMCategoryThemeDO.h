//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface FMCategoryThemeDO : NSObject
{
    NSMutableArray *_themeList;
    NSMutableArray *_picList;
    NSString *_keyword;
    NSString *_catId;
    NSString *_index;
}

@property(retain, nonatomic) NSString *index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSMutableArray *picList; // @synthesize picList=_picList;
@property(retain, nonatomic) NSMutableArray *themeList; // @synthesize themeList=_themeList;
- (void).cxx_destruct;

@end

