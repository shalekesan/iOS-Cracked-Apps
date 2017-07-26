//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface CTTourSearchRequestClient : NSObject <NSCoding, NSCopying>
{
    NSString *_source;
    NSString *_trace;
    NSString *_device;
    NSString *_cip;
    NSString *_uid;
    NSString *_cid;
    NSArray *_variables;
}

@property(retain) NSArray *variables; // @synthesize variables=_variables;
@property(retain) NSString *cid; // @synthesize cid=_cid;
@property(retain) NSString *uid; // @synthesize uid=_uid;
@property(retain) NSString *cip; // @synthesize cip=_cip;
@property(retain) NSString *device; // @synthesize device=_device;
@property(retain) NSString *trace; // @synthesize trace=_trace;
@property(retain) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
