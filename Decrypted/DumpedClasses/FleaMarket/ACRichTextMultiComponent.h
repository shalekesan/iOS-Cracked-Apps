//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface ACRichTextMultiComponent : NSObject
{
    NSMutableArray *_textComponents;
    NSString *_plainText;
}

@property(copy, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
@property(retain, nonatomic) NSMutableArray *textComponents; // @synthesize textComponents=_textComponents;
- (void).cxx_destruct;
- (id)initWithComponents:(id)arg1 plainText:(id)arg2;

@end

