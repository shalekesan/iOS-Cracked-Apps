//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXWWShareMessage.h"

@class NSData;

@interface WXWWShareImageMessage : WXWWShareMessage
{
    NSData *_imageData;
}

@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

