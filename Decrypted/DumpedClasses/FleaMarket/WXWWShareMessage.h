//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXWWShareObject.h"

@class NSString;

@interface WXWWShareMessage : WXWWShareObject
{
    NSString *_title;
    NSString *_soureAppName;
}

@property(retain, nonatomic) NSString *soureAppName; // @synthesize soureAppName=_soureAppName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

