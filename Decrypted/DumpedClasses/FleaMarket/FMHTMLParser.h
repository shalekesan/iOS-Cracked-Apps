//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FMHTMLParser : NSObject
{
    NSMutableDictionary *_defaultAttributes;
    CDUnknownBlockType _refreshTextAttachementBlock;
}

+ (id)colorFromHexString:(id)arg1;
+ (id)fontOrSystemFontForName:(id)arg1 size:(double)arg2;
+ (void)appendAtributeMap:(id)arg1 forString:(id)arg2 withContext:(id)arg3;
+ (id)attributedStringFromNode:(struct _xmlNode *)arg1 withContext:(id)arg2;
+ (void)parseHtmlText:(id)arg1 withDefaultAttributes:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
+ (id)parseHtmlText:(id)arg1 withDefaultAttributes:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType refreshTextAttachementBlock; // @synthesize refreshTextAttachementBlock=_refreshTextAttachementBlock;
@property(retain, nonatomic) NSMutableDictionary *defaultAttributes; // @synthesize defaultAttributes=_defaultAttributes;
- (void).cxx_destruct;
- (id)parseHtmlText:(id)arg1;
- (void)parseHtmlText:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;

@end

